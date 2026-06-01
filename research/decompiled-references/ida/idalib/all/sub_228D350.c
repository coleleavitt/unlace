__int64 __fastcall sub_228D350(__int64 a1, size_t *a2, char a3, _QWORD *a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9; // eax
  int v10; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = sub_228D080(a2, &v10, 2, 1, a3, 0x1B6u);
  if ( v5 || a4 && (v5 = sub_2288180(a2, &v10, a4)) != 0 )
  {
    sub_2220500(v11, v5, v6);
    v7 = v11[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v7;
    return a1;
  }
  else
  {
    v9 = v10;
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = v9;
    return a1;
  }
}
