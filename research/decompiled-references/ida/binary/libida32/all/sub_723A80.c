__int64 __fastcall sub_723A80(__int64 a1, unsigned __int16 *a2)
{
  _DWORD **v3; // rax
  _DWORD *v4; // r14
  int v5; // ebp
  unsigned __int16 *v6; // r13
  int i; // r15d
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  unsigned int **v12; // rdx
  int v13; // eax
  unsigned int *v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // rbp
  int v19; // r13d
  __int64 v20; // rdx
  unsigned int *v21; // rsi
  unsigned int *v22; // rbp
  int v23; // r13d
  __int64 v24; // rdx
  unsigned int *v25; // rsi
  _DWORD **v26; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]

  while ( 1 )
  {
    v28 = *(_QWORD *)(a1 + 2664);
    v3 = *(_DWORD ***)(v28 + 8);
    if ( !v3 && *(__int16 *)(a1 + 1634) > 0 )
      break;
    v4 = *v3;
    if ( !**v3 )
      return sub_7236A0((__int64)v4, v28 + 24, a2);
LABEL_3:
    v5 = *((__int16 *)v4 + 2);
    if ( v5 > 0 )
    {
      v6 = (unsigned __int16 *)v4 + 5;
      for ( i = 0; i != v5; ++i )
      {
        v8 = *v6;
        v9 = *(v4 - 2);
        if ( (unsigned int)v8 >= v9
          || *(unsigned __int16 *)((char *)v4 + v8 + *(unsigned __int16 *)((char *)v4 + v8 + 1) + 3)
           + *(unsigned __int16 *)((char *)v4 + v8 + 1)
           + 4
           + (unsigned int)v8 >= v9 )
        {
          goto LABEL_29;
        }
        v10 = sub_71D0C0(a2, (unsigned __int16 *)((char *)v4 + v8 + 1));
        if ( v10 <= 0 )
        {
          *(_DWORD *)(v28 + 24) = i;
          *(_WORD *)(v28 + 30) = 0;
          *(_BYTE *)(v28 + 28) = v10 == 0;
          if ( v10 )
            goto LABEL_10;
          return 1;
        }
        v6 += 3;
      }
      *(_WORD *)(v28 + 30) = 0;
      *(_DWORD *)(v28 + 24) = v5;
      *(_BYTE *)(v28 + 28) = 0;
      v11 = *(_QWORD *)(a1 + 2664);
      v12 = *(unsigned int ***)(v11 + 8);
      if ( v12 )
        goto LABEL_11;
LABEL_18:
      if ( *(__int16 *)(a1 + 1634) > 0 )
      {
        v18 = (unsigned int *)(a1 + 1640);
        v19 = 0;
        do
        {
          v20 = *v18;
          v21 = v18;
          ++v19;
          v18 += 8;
          sub_724B00(a1, v21, v20);
        }
        while ( v19 < *(__int16 *)(a1 + 1634) );
        v11 = *(_QWORD *)(a1 + 2664);
        v12 = *(unsigned int ***)(v11 + 8);
      }
      goto LABEL_11;
    }
    *(_DWORD *)(v28 + 24) = 0;
    *(_BYTE *)(v28 + 28) = 0;
    *(_WORD *)(v28 + 30) = 0;
LABEL_10:
    v11 = *(_QWORD *)(a1 + 2664);
    v12 = *(unsigned int ***)(v11 + 8);
    if ( !v12 )
      goto LABEL_18;
LABEL_11:
    v13 = *(_DWORD *)(v11 + 24);
    v14 = *v12;
    if ( v13 )
      v15 = *(unsigned int *)((char *)v14 + 6 * v13);
    else
      v15 = *v14;
    if ( !v15 )
LABEL_29:
      sub_722BF0();
    v16 = *(__int16 *)(a1 + 1634);
    if ( v16 > 0x1E )
      sub_722BC0(24, 0);
    v17 = a1 + 32 * v16 + 1640;
    ++*(_WORD *)(a1 + 1634);
    *(_QWORD *)(a1 + 2664) = v17;
    sub_724B00(a1, v17, v15);
  }
  v22 = (unsigned int *)(a1 + 1640);
  v23 = 0;
  do
  {
    v24 = *v22;
    v25 = v22;
    ++v23;
    v22 += 8;
    sub_724B00(a1, v25, v24);
  }
  while ( v23 < *(__int16 *)(a1 + 1634) );
  v28 = *(_QWORD *)(a1 + 2664);
  v26 = *(_DWORD ***)(v28 + 8);
  v4 = *v26;
  if ( **v26 )
    goto LABEL_3;
  return sub_7236A0((__int64)v4, v28 + 24, a2);
}

