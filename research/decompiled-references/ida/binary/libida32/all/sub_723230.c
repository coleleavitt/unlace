__int64 __fastcall sub_723230(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 *v3; // r13
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int **v14; // rdx
  int v15; // eax
  unsigned int *v16; // rdx
  unsigned int *v17; // r12
  unsigned int *v18; // rbp
  int v19; // r15d
  __int64 v20; // rdx
  unsigned int *v21; // rsi
  __int64 *v22; // rcx
  int v23; // ebp
  __int64 v24; // rdx
  unsigned int *v25; // rsi
  unsigned int *v26; // rbp
  int v27; // r12d
  __int64 v28; // rdx
  unsigned int *v29; // rsi
  _DWORD **v31; // rax
  __int64 v32; // rax
  int v33; // r14d
  __int64 v34; // rbp
  __int64 v35; // r12
  unsigned __int64 v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // rsi
  unsigned __int16 *v39; // rsi
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // edx
  unsigned __int16 *v44; // rsi
  __int64 v45; // rcx
  int v46; // eax
  unsigned __int16 *v47; // rbp
  int v48; // r12d
  __int64 v49; // rdx

  v3 = a2;
  if ( !a3 || *(__int16 *)(a1 + 1634) <= 1 )
    goto LABEL_3;
  v31 = *(_DWORD ***)(*(_QWORD *)(a1 + 2664) + 8LL);
  if ( !v31 )
  {
    v47 = (unsigned __int16 *)(a1 + 1640);
    v48 = 0;
    do
    {
      v49 = *(unsigned int *)v47;
      a2 = v47;
      ++v48;
      v47 += 16;
      sub_724B00(a1, a2, v49);
    }
    while ( v48 < *(__int16 *)(a1 + 1634) );
    v31 = *(_DWORD ***)(*(_QWORD *)(a1 + 2664) + 8LL);
  }
  if ( **v31 )
    goto LABEL_3;
  v32 = sub_724A00(a1, a2);
  v33 = *(_DWORD *)(v32 + 24);
  v34 = v32;
  v35 = **(_QWORD **)(v32 + 8);
  if ( *(__int16 *)(v35 + 4) == v33 )
    goto LABEL_3;
  v36 = v33;
  v37 = *(_DWORD *)(v35 - 8);
  v38 = *(unsigned __int16 *)(v35 + 6 + 6LL * v33 + 4);
  if ( (unsigned int)v38 >= v37
    || (v39 = (unsigned __int16 *)(v35 + v38), v40 = *v39, (int)v39 + (int)v40 + 3 - (int)v35 >= v37)
    || (unsigned int)v39 + *(unsigned __int16 *)((char *)v39 + v40 + 2) + *v39 + 4 - 1 - (unsigned int)v35 >= v37 )
  {
LABEL_54:
    sub_722BF0();
  }
  v41 = sub_71D0C0(v3, v39);
  if ( !v41 )
    goto LABEL_43;
  if ( v41 >= 0 || !v33 )
  {
LABEL_3:
    v5 = *(unsigned int *)(a1 + 36);
    *(_WORD *)(a1 + 1634) = 1;
    *(_QWORD *)(a1 + 2664) = a1 + 1640;
    sub_724B00(a1, a1 + 1640, v5);
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 2664);
      v10 = *(__int64 **)(v9 + 8);
      v11 = v9;
      if ( v10 )
      {
        v12 = *v10;
        if ( !*(_DWORD *)*v10 )
          return sub_721A00(v12, v9 + 24, (__int64)v3, 0, 0, *(__int16 *)(v12 + 4));
      }
      else
      {
        if ( *(__int16 *)(a1 + 1634) <= 0 )
        {
          v12 = 0x10102464C457FLL;
          if ( !MEMORY[0x10102464C457F] )
            return sub_721A00(v12, v9 + 24, (__int64)v3, 0, 0, *(__int16 *)(v12 + 4));
LABEL_48:
          v11 = v9;
          v12 = **(_QWORD **)(v9 + 8);
          goto LABEL_10;
        }
        v17 = (unsigned int *)(a1 + 1640);
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
        v9 = *(_QWORD *)(a1 + 2664);
        v22 = *(__int64 **)(v9 + 8);
        v11 = v9;
        v12 = *v22;
        if ( !*(_DWORD *)*v22 )
          return sub_721A00(v12, v9 + 24, (__int64)v3, 0, 0, *(__int16 *)(v12 + 4));
        if ( !v22 )
        {
          if ( *(__int16 *)(a1 + 1634) <= 0 )
            goto LABEL_48;
          v23 = 0;
          do
          {
            v24 = *v17;
            v25 = v17;
            ++v23;
            v17 += 8;
            sub_724B00(a1, v25, v24);
          }
          while ( v23 < *(__int16 *)(a1 + 1634) );
          v11 = *(_QWORD *)(a1 + 2664);
          v12 = **(_QWORD **)(v11 + 8);
        }
      }
LABEL_10:
      if ( (unsigned __int8)sub_721790(v12, v11 + 24, v3, *(_DWORD *)(v11 + 24) - 1) )
        return 1;
      v13 = *(_QWORD *)(a1 + 2664);
      v14 = *(unsigned int ***)(v13 + 8);
      if ( !v14 && *(__int16 *)(a1 + 1634) > 0 )
      {
        v26 = (unsigned int *)(a1 + 1640);
        v27 = 0;
        do
        {
          v28 = *v26;
          v29 = v26;
          ++v27;
          v26 += 8;
          sub_724B00(a1, v29, v28);
        }
        while ( v27 < *(__int16 *)(a1 + 1634) );
        v13 = *(_QWORD *)(a1 + 2664);
        v14 = *(unsigned int ***)(v13 + 8);
      }
      v15 = *(_DWORD *)(v13 + 24);
      v16 = *v14;
      if ( v15 )
        v6 = *(unsigned int *)((char *)v16 + 6 * v15);
      else
        v6 = *v16;
      if ( !v6 )
        goto LABEL_54;
      v7 = *(__int16 *)(a1 + 1634);
      if ( v7 > 0x1E )
        sub_722BC0(24, 0);
      v8 = a1 + 32 * v7 + 1640;
      ++*(_WORD *)(a1 + 1634);
      *(_QWORD *)(a1 + 2664) = v8;
      sub_724B00(a1, v8, v6);
    }
  }
  v36 = --v33;
  v42 = *(unsigned __int16 *)(v35 + 6 + 6LL * v33 + 4);
  v43 = *(_DWORD *)(v35 - 8);
  if ( (unsigned int)v42 >= v43 )
    goto LABEL_54;
  v44 = (unsigned __int16 *)(v35 + v42);
  v45 = *(unsigned __int16 *)(v35 + v42);
  if ( (int)v44 + (int)v45 + 3 - (int)v35 >= v43
    || (unsigned int)v44 + *(unsigned __int16 *)((char *)v44 + v45 + 2) + (_DWORD)v45 + 4 - 1 - (unsigned int)v35 >= v43 )
  {
    goto LABEL_54;
  }
  v46 = sub_71D0C0(v3, v44);
  if ( v46 )
  {
    if ( v46 > 0 )
      return sub_723080(a1, v3);
    goto LABEL_3;
  }
LABEL_43:
  sub_724BA0(a1, (unsigned int)(__int16)(*(_WORD *)(a1 + 1634) - 1));
  if ( v36 >= *(__int16 *)(**(_QWORD **)(v34 + 8) + 4LL) || v33 < 0 )
    sub_723060(a1);
  *(_DWORD *)(v34 + 24) = v33;
  *(_BYTE *)(v34 + 28) = 1;
  *(_WORD *)(v34 + 30) = 0;
  return 1;
}

