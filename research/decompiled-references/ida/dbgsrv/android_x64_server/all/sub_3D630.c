/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D630
// Address: 0x000000000003D630

//----- (000000000003D630) ----------------------------------------------------
__int64 __fastcall sub_3D630(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  int v8; // edx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  __int64 *v13; // rdx
  __int64 v14; // rdx
  bool v15; // zf
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdx
  __int64 *v19; // rsi
  __int64 v20; // rsi
  _QWORD *v21; // rsi
  _QWORD *v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rcx
  bool v26; // sf

  if ( !*(_DWORD *)(a1 + 1224) )
  {
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v5 = a1;
  sub_A40E0();
  v6 = (_QWORD *)(a1 + 1040);
  v7 = *(_QWORD *)(a1 + 1040);
  if ( !v7 )
    goto LABEL_11;
  v8 = *(_DWORD *)(a1 + 172);
  v9 = (_QWORD *)(a1 + 1040);
  do
  {
    if ( *(_DWORD *)(v7 + 32) >= v8 )
      v9 = (_QWORD *)v7;
    v7 = *(_QWORD *)(v7 + 8LL * (*(_DWORD *)(v7 + 32) < v8));
  }
  while ( v7 );
  if ( v9 == v6
    || v8 < *((_DWORD *)v9 + 8)
    || !*((_BYTE *)v9 + 65)
    || *((int *)v9 + 12) > 0
    || *((int *)v9 + 11) > 0
    || v9 == v6 )
  {
LABEL_11:
    v9 = *(_QWORD **)(a1 + 1032);
    if ( v9 == v6 )
      goto LABEL_48;
    v10 = *(_QWORD **)(a1 + 1032);
    do
    {
      if ( *((int *)v10 + 12) <= 0 && *((int *)v10 + 11) <= 0 && *((_BYTE *)v10 + 65) && *((_BYTE *)v10 + 56) )
        break;
      v11 = (_QWORD *)v10[1];
      if ( v11 )
      {
        do
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        v12 = (_QWORD *)v10[2];
        if ( (_QWORD *)*v12 != v10 )
        {
          v13 = v10 + 2;
          do
          {
            v14 = *v13;
            v12 = *(_QWORD **)(v14 + 16);
            v15 = *v12 == v14;
            v13 = (__int64 *)(v14 + 16);
          }
          while ( !v15 );
        }
      }
      v10 = v12;
    }
    while ( v12 != v6 );
    if ( v9 == v6 )
      goto LABEL_48;
    v16 = *(_QWORD **)(v5 + 1032);
    do
    {
      if ( *((int *)v16 + 12) <= 0
        && *((int *)v16 + 11) <= 0
        && *((_BYTE *)v16 + 65)
        && (*((_DWORD *)v16 + 17) & 0xFF7F) == 0x57F )
      {
        break;
      }
      v17 = (_QWORD *)v16[1];
      if ( v17 )
      {
        do
        {
          v18 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        v18 = (_QWORD *)v16[2];
        if ( (_QWORD *)*v18 != v16 )
        {
          v19 = v16 + 2;
          do
          {
            v20 = *v19;
            v18 = *(_QWORD **)(v20 + 16);
            v15 = *v18 == v20;
            v19 = (__int64 *)(v20 + 16);
          }
          while ( !v15 );
        }
      }
      v16 = v18;
    }
    while ( v18 != v6 );
    if ( v9 == v6 )
      goto LABEL_48;
    while ( *((int *)v9 + 12) > 0 || *((int *)v9 + 11) > 0 || !*((_BYTE *)v9 + 65) )
    {
      v21 = (_QWORD *)v9[1];
      if ( v21 )
      {
        do
        {
          v22 = v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
      else
      {
        v22 = (_QWORD *)v9[2];
        if ( (_QWORD *)*v22 != v9 )
        {
          v23 = v9 + 2;
          do
          {
            v24 = *v23;
            v22 = *(_QWORD **)(v24 + 16);
            v15 = *v22 == v24;
            v23 = (__int64 *)(v24 + 16);
          }
          while ( !v15 );
        }
      }
      v9 = v22;
      if ( v22 == v6 )
        goto LABEL_48;
    }
  }
  if ( v9 != v6 )
  {
    *a2 = *((_DWORD *)v9 + 8);
    *a3 = *((_DWORD *)v9 + 17);
    *((_BYTE *)v9 + 65) = 0;
    v26 = --*(_DWORD *)(v5 + 1224) < 0;
    LOBYTE(v5) = 1;
    if ( v26 )
    {
      if ( !(_BYTE)under_debugger )
        interr(30186);
      BUG();
    }
    goto LABEL_49;
  }
LABEL_48:
  LODWORD(v5) = 0;
LABEL_49:
  sub_A40F0();
  return (unsigned int)v5;
}
// 158B40: using guessed type __int64 under_debugger;
