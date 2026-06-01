__int64 __fastcall sub_E75730(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  unsigned __int8 v5; // dl
  __int16 v6; // ax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r12
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !a3 )
  {
    v13[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_E67160((unsigned int **)(a1 + 56), v13);
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v5 = 0;
    goto LABEL_9;
  }
  v4 = *(_WORD *)(a2 + 4);
  if ( v4 )
  {
    if ( v4 != 2 )
    {
      if ( v4 != 1 )
        goto LABEL_19;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_23:
    v8 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v5 = 1;
    v9 = v8;
    if ( v8 )
    {
      ++*(_DWORD *)(v8 + 8);
      v13[0] = v8;
      sub_E67160((unsigned int **)(a1 + 56), v13);
      if ( a2 != v9 )
      {
        v10 = *(_QWORD *)(a1 + 40);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 - 4);
          if ( v11 )
            *(_BYTE *)(v10 + 16LL * (unsigned int)(v11 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
LABEL_9:
    v6 = *(_WORD *)(a2 + 4);
    if ( !v6 )
    {
      if ( (*(_BYTE *)(a2 + 30) & 1) != 0 )
        goto LABEL_7;
      if ( !*(_DWORD *)(a2 + 24) )
      {
LABEL_28:
        v12 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(a2 + 8) += 2;
        v13[0] = a2;
        sub_E67160((unsigned int **)(a1 + 56), v13);
        sub_E65BA0(a2, v12);
        return 1;
      }
LABEL_12:
      sub_39B170(a1, a2, v5, 0, a3 - (a3 != 3));
      return 0;
    }
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
        goto LABEL_12;
LABEL_19:
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
LABEL_22:
    sub_E755C0(a1, a2);
    return 1;
  }
  if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
    goto LABEL_28;
LABEL_7:
  ++*(_DWORD *)(a2 + 8);
  v13[0] = a2;
  sub_E67160((unsigned int **)(a1 + 56), v13);
  return 1;
}

