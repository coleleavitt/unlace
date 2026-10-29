__int64 __fastcall sub_904C10(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v3; // ax
  __int64 v5; // r12
  unsigned __int8 v6; // dl
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !a3 )
  {
    v12[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_8F15F0(a1 + 7, v12);
    return 1;
  }
  v3 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v6 = 0;
    goto LABEL_8;
  }
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      if ( v3 != 1 )
      {
LABEL_11:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
LABEL_20:
      sub_904AA0(a1, a2);
      return 1;
    }
    goto LABEL_21;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_21:
    v8 = sub_1680FB0(a1[4], a2, 0);
    v9 = v8;
    if ( v8 )
    {
      ++*(_DWORD *)(v8 + 8);
      v12[0] = v8;
      sub_8F15F0(a1 + 7, v12);
      if ( a2 != v9 )
      {
        v10 = a1[5];
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 - 4);
          if ( v11 )
            *(_BYTE *)(v10 + 16LL * (unsigned int)(v11 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v3 = *(_WORD *)(a2 + 4);
    v6 = 1;
LABEL_8:
    if ( v3 != 1 )
    {
      if ( v3 != 2 )
      {
        if ( v3 )
          goto LABEL_11;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
      }
      sub_39B170((__int64)a1, a2, v6, 0, a3 - (a3 != 3));
      return 0;
    }
    goto LABEL_20;
  }
LABEL_6:
  v5 = a1[1];
  *(_DWORD *)(a2 + 8) += 2;
  v12[0] = a2;
  sub_8F15F0(a1 + 7, v12);
  sub_8E4DD0(a2, v5);
  return 1;
}

