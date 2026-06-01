_QWORD *__fastcall Z3_func_interp_get_entry(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  char v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29B960(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
LABEL_15:
      v6 = nullptr;
      goto LABEL_16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return nullptr;
    }
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL);
  if ( !v5 || (unsigned int)v3 >= *(_DWORD *)(v5 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v4 )
      return nullptr;
    sub_2BB620(0);
    goto LABEL_15;
  }
  v8 = sub_186B270(0x30u);
  v9 = *(_QWORD *)(a2 + 24);
  v6 = (_QWORD *)v8;
  sub_2518F0(v8, a1);
  v6[3] = v9;
  *v6 = &off_1C4CBE8;
  if ( v9 )
    ++*(_DWORD *)(v9 + 16);
  v10 = *(_QWORD *)(a2 + 32);
  v6[5] = 0;
  v6[4] = v10;
  v6[5] = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v3);
  sub_24FBE0(a1, (__int64)v6);
  if ( v4 )
  {
    sub_2BB620(v6);
LABEL_16:
    byte_1C7EBA0 = 1;
  }
  return v6;
}

