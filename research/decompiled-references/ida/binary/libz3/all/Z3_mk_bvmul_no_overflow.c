__int64 __fastcall Z3_mk_bvmul_no_overflow(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdi
  int v12[2]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v13; // [rsp+18h] [rbp-38h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_296FE0(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a4 )
  {
    if ( a2
      && (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1
      && a3
      && (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 > 1 )
    {
      v13 = a3;
      v10 = *(_QWORD *)(a1 + 232);
      *(_QWORD *)v12 = a2;
      v9 = sub_15DCAD0(v10, (int)v12, 0);
      sub_251FD0(a1, v9);
      sub_24FE40(a1, v9);
      if ( !v7 )
        return v9;
      goto LABEL_9;
    }
LABEL_17:
    sub_24EA30(a1, 3u, "ast is not an expression");
    v9 = 0;
    if ( !v7 )
      return v9;
    goto LABEL_10;
  }
  if ( !a2
    || (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1
    || !a3
    || (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 <= 1 )
  {
    goto LABEL_17;
  }
  v13 = a3;
  v8 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)v12 = a2;
  v9 = sub_15DCAD0(v8, (int)v12, 0);
  sub_251FD0(a1, v9);
  sub_24FE40(a1, v9);
  if ( v7 )
  {
LABEL_9:
    sub_2BB620(v9);
LABEL_10:
    byte_1C7EBA0 = 1;
  }
  return v9;
}

