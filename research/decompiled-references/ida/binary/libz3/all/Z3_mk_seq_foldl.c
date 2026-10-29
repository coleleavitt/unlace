__int64 __fastcall Z3_mk_seq_foldl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  __int64 v7; // r14
  int v9[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v10; // [rsp+18h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_2981E0(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      goto LABEL_14;
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
    || (unsigned int)*(unsigned __int16 *)(a4 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v6 )
      return 0;
LABEL_14:
    v7 = 0;
LABEL_15:
    byte_1C7EBA0 = 1;
    return v7;
  }
  v10 = a3;
  v11 = a4;
  *(_QWORD *)v9 = a2;
  v7 = sub_15DCAD0(*(_QWORD *)(a1 + 232), (int)v9, 0);
  sub_251FD0(a1, v7);
  sub_24FE40(a1, v7);
  if ( v6 )
  {
    sub_2BB620(v7);
    goto LABEL_15;
  }
  return v7;
}

