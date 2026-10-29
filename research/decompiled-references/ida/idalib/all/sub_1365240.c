void __fastcall sub_1365240(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int *v6; // r13
  unsigned int *v7; // r12
  __int64 v8; // rcx
  unsigned int *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // edi
  unsigned int *v25; // rbp
  unsigned int *v26; // r9
  unsigned int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rdi
  unsigned int v30; // edx
  __int64 v31; // r8
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int *j; // rax
  __int64 v36; // r12
  __int64 i; // rbp
  unsigned __int64 *v38; // r13
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // r8d
  unsigned int v46; // r10d
  unsigned int v47; // edx
  unsigned int v48; // edi
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  unsigned int v52; // edi

  v4 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 <= 256 )
    return;
  v6 = a2;
  if ( !a3 )
  {
LABEL_54:
    v36 = v4 >> 4;
    for ( i = ((v4 >> 4) - 2) >> 1; ; --i )
    {
      sub_1364C00(a1, i, v36, *(_QWORD *)(a1 + 16 * i), *(_QWORD *)(a1 + 16 * i + 8));
      if ( !i )
        break;
    }
    v38 = (unsigned __int64 *)(v6 - 4);
    do
    {
      v39 = *v38;
      v40 = v38[1];
      v41 = (__int64)v38 - a1;
      v38 -= 2;
      v38[2] = *(_QWORD *)a1;
      v38[3] = *(_QWORD *)(a1 + 8);
      sub_1364C00(a1, 0, v41 >> 4, v39, v40);
    }
    while ( v41 > 16 );
    return;
  }
  v7 = (unsigned int *)(a1 + 16);
  while ( 2 )
  {
    v8 = *(unsigned int *)(a1 + 16);
    --a3;
    v9 = (unsigned int *)(a1 + 16 * ((__int64)((((__int64)a2 - a1) >> 4) + (((unsigned __int64)a2 - a1) >> 63)) >> 1));
    v10 = *v9;
    if ( (unsigned int)v8 >= *v9 )
    {
      if ( (_DWORD)v8 == v10 )
      {
        v11 = *(_DWORD *)(a1 + 20);
        v12 = v9[1];
        if ( v11 < v12 )
          goto LABEL_7;
      }
      else
      {
        if ( (unsigned int)v8 > v10 )
          goto LABEL_21;
        v11 = *(_DWORD *)(a1 + 20);
        v12 = v9[1];
      }
      if ( v11 <= v12 )
      {
        v52 = v9[2];
        if ( *(_DWORD *)(a1 + 24) < v52 || *(_DWORD *)(a1 + 24) == v52 && *(_DWORD *)(a1 + 28) < v9[3] )
          goto LABEL_7;
      }
LABEL_21:
      v21 = *(a2 - 4);
      if ( (unsigned int)v8 < v21 )
        goto LABEL_61;
      if ( (_DWORD)v8 == v21 )
      {
        v45 = *(_DWORD *)(a1 + 20);
        v8 = *(a2 - 3);
        if ( v45 < (unsigned int)v8 )
          goto LABEL_61;
      }
      else
      {
        if ( (unsigned int)v8 > v21 )
        {
          if ( v10 < v21 )
            goto LABEL_17;
          if ( v10 == v21 )
          {
            LODWORD(v8) = *(a2 - 3);
            v47 = v9[1];
            if ( (unsigned int)v8 > v47 )
              goto LABEL_17;
          }
          else
          {
            if ( v10 > v21 )
              goto LABEL_27;
            v47 = v9[1];
            LODWORD(v8) = *(a2 - 3);
          }
          goto LABEL_69;
        }
        v45 = *(_DWORD *)(a1 + 20);
        v8 = *(a2 - 3);
      }
      if ( v45 <= (unsigned int)v8 )
      {
        v46 = *(a2 - 2);
        if ( *(_DWORD *)(a1 + 24) < v46 || *(_DWORD *)(a1 + 24) == v46 && *(_DWORD *)(a1 + 28) < *(a2 - 1) )
          goto LABEL_61;
      }
      if ( v10 < v21 )
        goto LABEL_17;
      v47 = v9[1];
      if ( (unsigned int)v8 > v47 )
        goto LABEL_17;
LABEL_69:
      if ( (unsigned int)v8 >= v47 )
      {
        v48 = *(a2 - 2);
        if ( v9[2] < v48 || v9[2] == v48 && v9[3] < *(a2 - 1) )
          goto LABEL_17;
      }
      goto LABEL_27;
    }
LABEL_7:
    v13 = *(a2 - 4);
    if ( v10 < v13 )
      goto LABEL_27;
    if ( v10 == v13 )
    {
      v49 = v9[1];
      v50 = *(a2 - 3);
      if ( v49 >= v50 )
        goto LABEL_75;
LABEL_27:
      v22 = *(_QWORD *)a1;
      *(_QWORD *)a1 = *(_QWORD *)v9;
      v8 = *((_QWORD *)v9 + 1);
      *(_QWORD *)v9 = v22;
      v23 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v8;
      *((_QWORD *)v9 + 1) = v23;
      goto LABEL_28;
    }
    if ( v10 > v13 )
      goto LABEL_10;
    v49 = v9[1];
    v50 = *(a2 - 3);
LABEL_75:
    if ( v50 >= v49 )
    {
      v51 = *(a2 - 2);
      if ( v9[2] < v51 || v9[2] == v51 && v9[3] < *(a2 - 1) )
        goto LABEL_27;
    }
LABEL_10:
    if ( (unsigned int)v8 >= v13 )
    {
      if ( (_DWORD)v8 != v13 )
      {
        if ( (unsigned int)v8 > v13 )
          goto LABEL_61;
        v14 = *(_DWORD *)(a1 + 20);
        v15 = *(a2 - 3);
        goto LABEL_13;
      }
      v14 = *(_DWORD *)(a1 + 20);
      v15 = *(a2 - 3);
      if ( v14 >= v15 )
      {
LABEL_13:
        if ( v15 >= v14 )
        {
          v16 = *(a2 - 2);
          if ( *(_DWORD *)(a1 + 24) < v16 || *(_DWORD *)(a1 + 24) == v16 && *(_DWORD *)(a1 + 28) < *(a2 - 1) )
            goto LABEL_17;
        }
LABEL_61:
        v42 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
        v43 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v42;
        v44 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v43;
        *(_QWORD *)(a1 + 8) = v44;
        goto LABEL_28;
      }
    }
LABEL_17:
    v17 = *(_DWORD *)a1;
    v18 = *(_DWORD *)(a1 + 4);
    *(_QWORD *)a1 = *((_QWORD *)a2 - 2);
    v8 = *((_QWORD *)a2 - 1);
    *(a2 - 4) = v17;
    *(a2 - 3) = v18;
    v19 = *(_DWORD *)(a1 + 8);
    v20 = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a1 + 8) = v8;
    *(a2 - 2) = v19;
    *(a2 - 1) = v20;
LABEL_28:
    v24 = *(_DWORD *)a1;
    v25 = v7;
    v26 = a2;
    while ( 1 )
    {
      v31 = *v25;
      v6 = v25;
      if ( (unsigned int)v31 < v24 )
        goto LABEL_37;
      if ( (_DWORD)v31 == v24 )
      {
        v32 = v25[1];
        v33 = *(_DWORD *)(a1 + 4);
        if ( v32 < v33 )
          goto LABEL_37;
      }
      else
      {
        if ( (unsigned int)v31 > v24 )
          break;
        v32 = v25[1];
        v33 = *(_DWORD *)(a1 + 4);
      }
      if ( v32 > v33 )
        break;
      v34 = *(_DWORD *)(a1 + 8);
      if ( v25[2] >= v34 && (v25[2] != v34 || v25[3] >= *(_DWORD *)(a1 + 12)) )
        break;
LABEL_37:
      v25 += 4;
    }
    for ( j = v26 - 4; ; j -= 4 )
    {
      v26 = j;
      if ( *j <= v24 )
      {
        if ( *j == v24 )
        {
          v8 = *(unsigned int *)(a1 + 4);
          v27 = j[1];
          if ( (unsigned int)v8 < v27 )
            continue;
        }
        else
        {
          if ( *j < v24 )
            break;
          v8 = *(unsigned int *)(a1 + 4);
          v27 = j[1];
        }
        if ( (unsigned int)v8 > v27 )
          break;
        v8 = j[2];
        if ( *(_DWORD *)(a1 + 8) >= (unsigned int)v8 )
        {
          if ( *(_DWORD *)(a1 + 8) != (_DWORD)v8 )
            break;
          v8 = j[3];
          if ( *(_DWORD *)(a1 + 12) >= (unsigned int)v8 )
            break;
        }
      }
    }
    if ( v25 < j )
    {
      v28 = v25[1];
      *(_QWORD *)v25 = *(_QWORD *)j;
      v29 = *((_QWORD *)j + 1);
      *j = v31;
      j[1] = v28;
      v8 = v25[2];
      v30 = v25[3];
      *((_QWORD *)v25 + 1) = v29;
      j[2] = v8;
      j[3] = v30;
      v24 = *(_DWORD *)a1;
      goto LABEL_37;
    }
    sub_1365240(v25, a2, a3, v8, v31, j);
    v4 = (__int64)v25 - a1;
    if ( (__int64)v25 - a1 > 256 )
    {
      a2 = v25;
      if ( !a3 )
        goto LABEL_54;
      continue;
    }
    break;
  }
}
