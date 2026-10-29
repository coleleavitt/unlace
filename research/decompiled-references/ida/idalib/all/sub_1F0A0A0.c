__int64 __fastcall sub_1F0A0A0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rax
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  __int64 i; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 j; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  _DWORD *v30; // r8
  _DWORD *v31; // rax
  _DWORD *v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // r9
  _DWORD *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rsi
  __int64 v39; // r14
  void *v40; // rdi
  __int64 v41; // r14
  char *v42; // rbp
  char *v43; // r12
  char *v44; // rdi
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  v2 = sub_A86E90(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL));
  v47 = v2;
  v3 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3);
  v5 = *(unsigned int *)(v2 + 8);
  if ( (unsigned int)v4 != v5 )
  {
    v6 = 136LL * (unsigned int)v4;
    if ( (unsigned int)v4 < v5 )
    {
      v7 = *(_QWORD *)v2;
      v41 = *(_QWORD *)v2 + 136 * v5;
      v45 = *(_QWORD *)v2 + v6;
      if ( v41 == v45 )
        goto LABEL_8;
      do
      {
        while ( 1 )
        {
          v41 -= 136;
          v42 = *(char **)(v41 + 8);
          v43 = &v42[56 * *(unsigned int *)(v41 + 16)];
          if ( v42 != v43 )
          {
            do
            {
              while ( 1 )
              {
                v43 -= 56;
                v44 = *((char **)v43 + 2);
                if ( v44 == v43 + 32 )
                  break;
                free(v44);
                if ( v42 == v43 )
                  goto LABEL_50;
              }
            }
            while ( v42 != v43 );
LABEL_50:
            v42 = *(char **)(v41 + 8);
          }
          if ( v42 == (char *)(v41 + 24) )
            break;
          free(v42);
          if ( v45 == v41 )
            goto LABEL_7;
        }
      }
      while ( v45 != v41 );
    }
    else
    {
      if ( (unsigned int)v4 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
      {
        sub_EC16A0(v2, (unsigned int)v4);
        v5 = *(unsigned int *)(v2 + 8);
      }
      v7 = *(_QWORD *)v2;
      v8 = (_DWORD *)(*(_QWORD *)v2 + 136 * v5);
      v45 = *(_QWORD *)v2 + v6;
      if ( v8 == (_DWORD *)v45 )
        goto LABEL_8;
      do
      {
        memset(v8, 0, 0x88u);
        v9 = v8 + 6;
        v8[5] = 2;
        v8 += 34;
        *((_QWORD *)v8 - 16) = v9;
      }
      while ( (_DWORD *)v45 != v8 );
    }
LABEL_7:
    v7 = *(_QWORD *)v47;
    v45 = *(_QWORD *)v47 + v6;
LABEL_8:
    *(_DWORD *)(v47 + 8) = v4;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)v2;
  v45 = *(_QWORD *)v2 + 136LL * (unsigned int)v4;
LABEL_9:
  for ( i = v7; v45 != i; i += 136 )
  {
    v11 = *(unsigned int *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = v11 + 1;
    *(_DWORD *)i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11);
    v12 = *(unsigned int *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = v12 + 1;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v12);
    v14 = *(unsigned int *)(i + 16);
    if ( (unsigned int)v13 == v14 )
    {
      v16 = *(_QWORD *)(i + 8);
      v18 = v16 + 56LL * (unsigned int)v13;
      goto LABEL_18;
    }
    v15 = 56LL * (unsigned int)v13;
    if ( (unsigned int)v13 < v14 )
    {
      v16 = *(_QWORD *)(i + 8);
      v39 = v16 + 56 * v14;
      v18 = v16 + v15;
      if ( v39 == v16 + v15 )
        goto LABEL_17;
      do
      {
        while ( 1 )
        {
          v39 -= 56;
          v40 = *(void **)(v39 + 16);
          if ( v40 == (void *)(v39 + 32) )
            break;
          v46 = v15;
          free(v40);
          v15 = v46;
          if ( v18 == v39 )
            goto LABEL_16;
        }
      }
      while ( v18 != v39 );
    }
    else
    {
      if ( (unsigned int)v13 > (unsigned __int64)*(unsigned int *)(i + 20) )
      {
        sub_EC11D0(i + 8, (unsigned int)v13);
        v14 = *(unsigned int *)(i + 16);
        v15 = 56LL * (unsigned int)v13;
      }
      v16 = *(_QWORD *)(i + 8);
      v17 = v16 + 56 * v14;
      v18 = v16 + v15;
      if ( v17 == v16 + v15 )
        goto LABEL_17;
      do
      {
        v19 = v17 + 32;
        *(_QWORD *)(v17 + 48) = 0;
        v17 += 56;
        *(_OWORD *)(v17 - 56) = 0;
        *(_OWORD *)(v17 - 24) = 0;
        *(_QWORD *)(v17 - 40) = v19;
        *(_DWORD *)(v17 - 32) = 0;
        *(_DWORD *)(v17 - 28) = 1;
      }
      while ( v18 != v17 );
    }
LABEL_16:
    v16 = *(_QWORD *)(i + 8);
    v18 = v16 + v15;
LABEL_17:
    *(_DWORD *)(i + 16) = v13;
LABEL_18:
    for ( j = v16; v18 != j; j += 56 )
    {
      v21 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v21 + 1;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v21);
      *(_QWORD *)j = 0;
      *(_DWORD *)(j + 8) = v22;
      v23 = *(unsigned int *)(a1 + 24);
      v24 = *(_QWORD *)(a1 + 32);
      v25 = (unsigned int)(v23 + 1);
      v26 = *(_QWORD *)(v24 + 8 * v23) == 0;
      *(_DWORD *)(a1 + 24) = v25;
      if ( !v26 )
      {
        *(_QWORD *)j = sub_1F68F80(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        v25 = *(unsigned int *)(a1 + 24);
        v24 = *(_QWORD *)(a1 + 32);
      }
      v27 = *(_QWORD *)(v24 + 8 * v25);
      *(_DWORD *)(a1 + 24) = v25 + 1;
      v28 = *(unsigned int *)(j + 24);
      if ( (unsigned int)v27 == v28 )
      {
        v30 = *(_DWORD **)(j + 16);
        v32 = &v30[6 * (unsigned int)v27];
      }
      else
      {
        v29 = 6LL * (unsigned int)v27;
        if ( (unsigned int)v27 < v28 )
        {
          v30 = *(_DWORD **)(j + 16);
          *(_DWORD *)(j + 24) = v27;
          v32 = &v30[v29];
        }
        else
        {
          if ( (unsigned int)v27 > (unsigned __int64)*(unsigned int *)(j + 28) )
          {
            sub_2237220(j + 16, j + 32, (unsigned int)v27, 24);
            v28 = *(unsigned int *)(j + 24);
          }
          v30 = *(_DWORD **)(j + 16);
          v31 = &v30[6 * v28];
          v32 = &v30[v29];
          if ( v31 != &v30[v29] )
          {
            do
            {
              *v31 = 0;
              v31 += 6;
              *((_QWORD *)v31 - 2) = 0;
              *((_QWORD *)v31 - 1) = 0;
            }
            while ( v32 != v31 );
            v30 = *(_DWORD **)(j + 16);
            v32 = &v30[v29];
          }
          *(_DWORD *)(j + 24) = v27;
        }
      }
      if ( v30 != v32 )
      {
        v33 = *(_DWORD *)(a1 + 24);
        v34 = *(_QWORD *)(a1 + 32);
        v35 = v30;
        v36 = v33;
        do
        {
          v37 = v36;
          v35 += 6;
          ++v36;
          *(v35 - 6) = *(_QWORD *)(v34 + 8 * v37);
        }
        while ( v32 != v35 );
        *(_DWORD *)(a1 + 24) = v33 - 1431655765 * ((unsigned __int64)((char *)(v32 - 6) - (char *)v30) >> 3) + 1;
      }
    }
  }
  return v47;
}
