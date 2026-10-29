__int64 __fastcall sub_16BB1E0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 *v3; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int *v9; // rax
  bool v10; // zf
  unsigned int v12; // esi
  __int64 v13; // r11
  unsigned int *v14; // rdi
  unsigned int v15; // esi
  __int64 v16; // r11
  unsigned int *v17; // rdi
  __int64 v18; // rbx
  unsigned int *v19; // r13
  __int64 v20; // rbx
  unsigned int *v21; // r13
  __int64 v22; // rbp
  unsigned int *v23; // r14
  __int64 v24; // rbp
  unsigned int *v25; // r14
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  int v34; // eax
  __int64 *v35; // r10
  int v36; // eax
  unsigned int v37; // [rsp+Ch] [rbp-2Ch]

  v3 = a1;
  v4 = a2;
  v5 = 4LL * a2;
  v6 = *a1;
  v7 = *a1 + v5;
  if ( *(char *)(v7 + 3) < 0 )
  {
    v15 = *(_DWORD *)v7 & 0x7FFFFFFF;
    v4 = v15;
    v16 = 4LL * v15;
    v17 = (unsigned int *)(v6 + v16);
    if ( *(char *)(v6 + v16 + 3) < 0 )
    {
      v15 = *v17 & 0x7FFFFFFF;
      v4 = v15;
      v18 = 4LL * v15;
      v19 = (unsigned int *)(v6 + v18);
      if ( *(char *)(v6 + v18 + 3) < 0 )
      {
        v15 = *v19 & 0x7FFFFFFF;
        v4 = v15;
        v24 = 4LL * v15;
        v25 = (unsigned int *)(v6 + v24);
        if ( *(char *)(v6 + v24 + 3) < 0 )
        {
          v15 = *v25 & 0x7FFFFFFF;
          v28 = v15;
          v29 = v6 + 4LL * v15;
          if ( *(char *)(v29 + 3) < 0 )
          {
            v4 = *(_DWORD *)v29 & 0x7FFFFFFF;
            v32 = (unsigned int)v4;
            v33 = v6 + 4LL * (unsigned int)v4;
            if ( *(char *)(v33 + 3) < 0 )
            {
              v37 = a3;
              v36 = sub_16B5920(v3, *(_DWORD *)v33 & 0x7FFFFFFF);
              a3 = v37;
              v6 = *v3;
              v4 = v36 & 0x7FFFFFFF;
              *(_DWORD *)(*v3 + 4 * v32) = v4 | *(_DWORD *)(*v3 + 4 * v32) & 0x80000000;
            }
            v25 = (unsigned int *)(v6 + v24);
            v19 = (unsigned int *)(v6 + v18);
            v15 = v4 & 0x7FFFFFFF;
            v17 = (unsigned int *)(v6 + v16);
            *(_DWORD *)(v6 + 4 * v28) = v4 & 0x7FFFFFFF | *(_DWORD *)(v6 + 4 * v28) & 0x80000000;
            v7 = v6 + v5;
          }
          else
          {
            v4 = v15;
          }
          *v25 = v15 | *v25 & 0x80000000;
        }
        *v19 = v15 | *v19 & 0x80000000;
      }
      *v17 = v15 | *v17 & 0x80000000;
    }
    *(_DWORD *)v7 = *(_DWORD *)v7 & 0x80000000 | v15;
  }
  v8 = 4LL * a3;
  v9 = (unsigned int *)(v6 + v8);
  if ( *(char *)(v6 + v8 + 3) < 0 )
  {
    v12 = *v9 & 0x7FFFFFFF;
    a3 = v12;
    v13 = 4LL * v12;
    v14 = (unsigned int *)(v6 + v13);
    if ( *(char *)(v6 + v13 + 3) < 0 )
    {
      v12 = *v14 & 0x7FFFFFFF;
      a3 = v12;
      v20 = 4LL * v12;
      v21 = (unsigned int *)(v6 + v20);
      if ( *(char *)(v6 + v20 + 3) < 0 )
      {
        v12 = *v21 & 0x7FFFFFFF;
        a3 = v12;
        v22 = 4LL * v12;
        v23 = (unsigned int *)(v6 + v22);
        if ( *(char *)(v6 + v22 + 3) < 0 )
        {
          v12 = *v23 & 0x7FFFFFFF;
          v26 = v12;
          v27 = v6 + 4LL * v12;
          if ( *(char *)(v27 + 3) < 0 )
          {
            a3 = *(_DWORD *)v27 & 0x7FFFFFFF;
            v30 = a3;
            v31 = v6 + 4LL * a3;
            if ( *(char *)(v31 + 3) < 0 )
            {
              v34 = sub_16B5920(v3, *(_DWORD *)v31 & 0x7FFFFFFF);
              v6 = *v35;
              a3 = v34 & 0x7FFFFFFF;
              *(_DWORD *)(*v35 + 4 * v30) = v34 & 0x7FFFFFFF | *(_DWORD *)(*v35 + 4 * v30) & 0x80000000;
            }
            v23 = (unsigned int *)(v6 + v22);
            v21 = (unsigned int *)(v6 + v20);
            v12 = a3 & 0x7FFFFFFF;
            v14 = (unsigned int *)(v6 + v13);
            *(_DWORD *)(v6 + 4 * v26) = a3 & 0x7FFFFFFF | *(_DWORD *)(v6 + 4 * v26) & 0x80000000;
            v9 = (unsigned int *)(v6 + v8);
          }
          else
          {
            a3 = *v23 & 0x7FFFFFFF;
          }
          *v23 = v12 | *v23 & 0x80000000;
        }
        *v21 = v12 | *v21 & 0x80000000;
      }
      *v14 = v12 | *v14 & 0x80000000;
    }
    *v9 = *v9 & 0x80000000 | v12;
  }
  v10 = a3 == (_DWORD)v4;
  if ( a3 > (unsigned int)v4 )
    return 0;
  while ( !v10 )
  {
    LODWORD(v4) = *(_DWORD *)(v6 + 4 * v4) & 0x7FFFFFFF;
    v10 = (_DWORD)v4 == a3;
    if ( (unsigned int)v4 < a3 )
      return 0;
  }
  return 1;
}
