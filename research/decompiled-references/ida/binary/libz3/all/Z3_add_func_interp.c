_QWORD *__fastcall Z3_add_func_interp(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+8h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29B800();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      v8 = nullptr;
LABEL_9:
      byte_1C7EBA0 = 1;
      return v8;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return nullptr;
    }
  }
  v7 = *(_QWORD *)(a2 + 24);
  v8 = (_QWORD *)sub_186B270(0x28u);
  sub_2518F0((__int64)v8, a1);
  v8[3] = v7;
  *v8 = &off_1C4CBC8;
  if ( v7 )
    ++*(_DWORD *)(v7 + 16);
  v8[4] = 0;
  v14 = sub_186B270(0x38u);
  sub_13478B0(v14, *(_QWORD *)(a1 + 232), *(unsigned int *)(a3 + 32));
  v8[4] = v14;
  sub_24FBE0(a1, (__int64)v8);
  sub_135F980(v7, a3, v8[4]);
  sub_1349280(v8[4], a4, v9, v10, v11, v12);
  if ( v6 )
  {
    sub_2BB620(v8);
    goto LABEL_9;
  }
  return v8;
}

