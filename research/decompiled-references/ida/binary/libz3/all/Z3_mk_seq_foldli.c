__int64 __fastcall Z3_mk_seq_foldli(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r15
  int v13[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v14; // [rsp+18h] [rbp-48h]
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]

  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v9 )
  {
    sub_298230(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      goto LABEL_16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1
    || !a3
    || (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 <= 1
    || !a4
    || (unsigned int)*(unsigned __int16 *)(a4 + 4) - 3 <= 1
    || !a5
    || (unsigned int)*(unsigned __int16 *)(a5 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v9 )
      return 0;
LABEL_16:
    v11 = 0;
LABEL_17:
    byte_1C7EBA0 = 1;
    return v11;
  }
  v14 = a3;
  v15 = a4;
  *(_QWORD *)v13 = a2;
  v10 = *(_QWORD *)(a1 + 232);
  v16 = a5;
  v11 = sub_15DCAD0(v10, (int)v13, 0);
  sub_251FD0(a1, v11);
  sub_24FE40(a1, v11);
  if ( v9 )
  {
    sub_2BB620(v11);
    goto LABEL_17;
  }
  return v11;
}

