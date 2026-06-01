char __fastcall sub_81CD90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // r9d
  __int64 v7; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // r11d
  __int64 i; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rsi
  _DWORD *v15; // rdx
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  int v19; // edx
  __int64 v20; // rsi
  unsigned __int64 *v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rbx
  bool v24; // sf
  bool v25; // of
  __int64 v26; // rax
  unsigned __int64 v27; // rcx

  v6 = a4;
  v7 = a3 & 1;
  v9 = HIDWORD(a4);
  v10 = (a3 - 1) / 2;
  v11 = HIDWORD(a4);
  if ( a2 >= v10 )
  {
    v21 = (unsigned __int64 *)(a1 + 8 * a2);
    if ( v7 )
      goto LABEL_15;
    v9 = (a3 - 2) / 2;
    if ( a2 != v9 )
      goto LABEL_15;
    v9 = a2;
    goto LABEL_17;
  }
  for ( i = a2; ; i = 2 * (i + 1) - !(v17 ^ v18 | v16) )
  {
    v13 = 16 * (i + 1);
    v14 = (_DWORD *)(a1 + v13 - 8);
    v15 = (_DWORD *)(a1 + v13);
    v18 = __OFSUB__(*v14, *v15);
    v16 = *v14 == *v15;
    v17 = *v14 - *v15 < 0;
    if ( *v14 == *v15 )
    {
      v19 = v15[1];
      v18 = __OFSUB__(v14[1], v19);
      v16 = v14[1] == v19;
      v17 = v14[1] - v19 < 0;
    }
    v9 = 2 * (i + 1) - !(v17 ^ v18 | v16);
    v20 = 8 * v9;
    v21 = (unsigned __int64 *)(a1 + 8 * v9);
    *(_QWORD *)(a1 + 8 * i) = *v21;
    if ( v10 <= v9 )
      break;
  }
  if ( !v7 && (a3 - 2) / 2 == v9 )
  {
LABEL_17:
    v26 = 2 * v9 + 2;
    v27 = *(_QWORD *)(a1 + 8 * v26 - 8);
    v9 = v26 - 1;
    v20 = 8 * v9;
    *v21 = v27;
    v21 = (unsigned __int64 *)(a1 + 8 * v9);
  }
  v22 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v23 = (_DWORD *)(a1 + 8 * v22);
      v25 = __OFSUB__(*v23, v6);
      v24 = *v23 - v6 < 0;
      if ( *v23 == v6 )
      {
        v25 = __OFSUB__(v23[1], v11);
        v24 = v23[1] - v11 < 0;
      }
      LOBYTE(v9) = v24 ^ v25;
      v21 = (unsigned __int64 *)(a1 + v20);
      if ( v24 == v25 )
        break;
      *v21 = *(_QWORD *)v23;
      v9 = v22;
      if ( a2 >= v22 )
      {
        *(_QWORD *)v23 = a4;
        return v9;
      }
      v22 = (v22 - 1) / 2;
      v20 = 8 * v9;
    }
  }
LABEL_15:
  *v21 = a4;
  return v9;
}

