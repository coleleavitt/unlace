void __fastcall sub_FA2200(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int *v6; // r13
  unsigned int *v7; // r12
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int *v15; // rbp
  unsigned int *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 j; // rax
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 i; // rbp
  unsigned int *v30; // r13
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // r12
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned int v36; // edi
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax

  v4 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 <= 256 )
    return;
  v6 = a2;
  if ( !a3 )
  {
LABEL_31:
    v28 = v4 >> 4;
    for ( i = ((v4 >> 4) - 2) >> 1; ; --i )
    {
      sub_FA1FB0(a1, i, v28, *(_QWORD *)(a1 + 16 * i), *(_QWORD *)(a1 + 16 * i + 8));
      if ( !i )
        break;
    }
    v30 = v6 - 4;
    do
    {
      v31 = *(_QWORD *)v30;
      v32 = *((_QWORD *)v30 + 1);
      v33 = (__int64)v30 - a1;
      v30 -= 4;
      v30[4] = *(_DWORD *)a1;
      *((_QWORD *)v30 + 3) = *(_QWORD *)(a1 + 8);
      sub_FA1FB0(a1, 0, v33 >> 4, v31, v32);
    }
    while ( v33 > 16 );
    return;
  }
  v7 = (unsigned int *)(a1 + 16);
  while ( 2 )
  {
    --a3;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = a1 + 16 * ((__int64)((((__int64)a2 - a1) >> 4) + (((unsigned __int64)a2 - a1) >> 63)) >> 1);
    v10 = *(_DWORD *)v9;
    if ( v8 >= *(_DWORD *)v9 && (v8 != v10 || *(_QWORD *)(a1 + 24) >= *(_QWORD *)(v9 + 8)) )
    {
      v11 = *(a2 - 4);
      if ( v8 < v11 )
      {
        v12 = *(_QWORD *)(a1 + 24);
LABEL_9:
        v13 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v8;
        *(_DWORD *)(a1 + 16) = v13;
        v14 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v12;
        *(_QWORD *)(a1 + 24) = v14;
        goto LABEL_10;
      }
      if ( v8 == v11 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        v34 = *((_QWORD *)a2 - 1);
        if ( v12 < v34 )
          goto LABEL_9;
        if ( v10 < v11 )
          goto LABEL_49;
        v35 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        if ( v10 < v11 )
        {
          v34 = *((_QWORD *)a2 - 1);
          goto LABEL_49;
        }
        v35 = *(_QWORD *)(v9 + 8);
        if ( v10 != v11 )
          goto LABEL_43;
        v34 = *((_QWORD *)a2 - 1);
      }
      if ( v34 <= v35 )
      {
LABEL_43:
        v36 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v10;
        v37 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)v9 = v36;
        *(_QWORD *)(a1 + 8) = v35;
        v8 = *(_DWORD *)a1;
        *(_QWORD *)(v9 + 8) = v37;
        goto LABEL_10;
      }
LABEL_49:
      v41 = *(_DWORD *)a1;
      *(_DWORD *)a1 = v11;
      *(a2 - 4) = v41;
      v42 = *(_QWORD *)(a1 + 8);
      v8 = *(_DWORD *)a1;
      *(_QWORD *)(a1 + 8) = v34;
      *((_QWORD *)a2 - 1) = v42;
      goto LABEL_10;
    }
    v21 = *(a2 - 4);
    if ( v10 < v21 )
    {
      v22 = *(_QWORD *)(v9 + 8);
LABEL_25:
      v23 = *(_DWORD *)a1;
      *(_DWORD *)a1 = v10;
      *(_DWORD *)v9 = v23;
      v24 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v22;
      *(_QWORD *)(v9 + 8) = v24;
      v8 = *(_DWORD *)a1;
      goto LABEL_10;
    }
    if ( v10 == v21 )
    {
      v22 = *(_QWORD *)(v9 + 8);
      if ( v22 < *((_QWORD *)a2 - 1) )
        goto LABEL_25;
    }
    if ( v8 >= v21 )
    {
      v38 = *(_QWORD *)(a1 + 24);
      if ( v8 != v21 || (v25 = *((_QWORD *)a2 - 1), v25 <= v38) )
      {
        v39 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v8;
        *(_DWORD *)(a1 + 16) = v39;
        v40 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v38;
        *(_QWORD *)(a1 + 24) = v40;
        goto LABEL_10;
      }
    }
    else
    {
      v25 = *((_QWORD *)a2 - 1);
    }
    v26 = *(_DWORD *)a1;
    *(_DWORD *)a1 = v21;
    *(a2 - 4) = v26;
    v27 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v25;
    *((_QWORD *)a2 - 1) = v27;
    v8 = *(_DWORD *)a1;
LABEL_10:
    v15 = v7;
    v16 = a2;
    while ( 1 )
    {
      v18 = *v15;
      v6 = v15;
      if ( v8 <= (unsigned int)v18 && (v8 != (_DWORD)v18 || *((_QWORD *)v15 + 1) >= *(_QWORD *)(a1 + 8)) )
        break;
LABEL_15:
      v15 += 4;
    }
    for ( j = (unsigned __int64)(v16 - 4); ; j -= 16LL )
    {
      v20 = *(_DWORD *)j;
      v16 = (unsigned int *)j;
      if ( v8 >= *(_DWORD *)j && (v8 != v20 || *(_QWORD *)(a1 + 8) >= *(_QWORD *)(j + 8)) )
        break;
    }
    if ( (unsigned __int64)v15 < j )
    {
      *v15 = v20;
      v17 = *((_QWORD *)v15 + 1);
      *(_DWORD *)j = v18;
      *((_QWORD *)v15 + 1) = *(_QWORD *)(j + 8);
      *(_QWORD *)(j + 8) = v17;
      v8 = *(_DWORD *)a1;
      goto LABEL_15;
    }
    sub_FA2200(v15, a2, a3, v18, j);
    v4 = (__int64)v15 - a1;
    if ( (__int64)v15 - a1 > 256 )
    {
      a2 = v15;
      if ( !a3 )
        goto LABEL_31;
      continue;
    }
    break;
  }
}

