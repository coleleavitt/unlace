__int64 __fastcall drawable_graph_t::create_spanning_tree(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rbx
  int *v8; // rax
  int v9; // esi
  __int64 v10; // rdi
  __int64 i; // rax
  int *v12; // rcx
  int v13; // edi
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rbx
  int *v16; // rax
  int v17; // esi
  __int64 v18; // rdi
  __int64 v19; // rax
  int *v20; // rcx
  int v21; // edi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v42; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 56);
  v42 = __readfsqword(0x28u);
  v3 = a2;
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + a2) = 0;
  if ( a2 < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD **)(v4 + 32);
  v7 = v6[4];
  if ( v7 )
  {
    if ( a2 < v7 )
    {
LABEL_4:
      v8 = (int *)(v6[3] + 4 * v3);
      v9 = *v8;
      if ( *v8 >= 0 && (unsigned __int64)v9 < v6[1] )
      {
        *v8 = -1;
        *(_DWORD *)(*v6 + 4LL * v9) = -1;
        v10 = v6[1];
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = (int *)(v6[3] + 4 * i);
            if ( v9 < *v12 )
              --*v12;
          }
          v13 = v10 - 1 - v9;
          if ( v13 > 0 )
            memmove((void *)(*v6 + 4LL * v9), (const void *)(*v6 + 4LL * (v9 + 1)), 4LL * (unsigned int)v13);
        }
        --**(_DWORD **)(a1 + 56);
      }
    }
  }
  else
  {
    v23 = v6[1];
    v41 = -1;
    if ( !v23 )
      goto LABEL_15;
    v24 = v6[3];
    v25 = v6[5];
    v26 = v6 + 3;
    if ( (unsigned __int64)&v41 < v24 || (unsigned __int64)&v41 >= v24 + 4 * v25 )
    {
      v35 = 0;
      if ( v25 >= v23 || (v38 = qvector_reserve(v26, v24, v23, 4), v35 = v6[4], v6[3] = v38, v24 = v38, v35 < v23) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v24 + 4 * v35++) = -1;
          if ( v35 == v23 )
            break;
          v24 = v6[3];
        }
      }
    }
    else
    {
      v27 = 0;
      if ( v25 >= v23 || (v40 = qvector_reserve(v26, v24, v23, 4), v6[3] = v40, v24 = v40, v27 = v6[4], v27 < v23) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v24 + 4 * v27++) = -1;
          if ( v27 == v23 )
            break;
          v24 = v6[3];
        }
      }
    }
    v6[4] = v23;
    do
    {
      v28 = *(int *)(*v6 + 4 * v7);
      if ( (_DWORD)v28 != -1 )
        *(_DWORD *)(v6[3] + 4 * v28) = v7;
      ++v7;
    }
    while ( v7 != v23 );
    if ( v3 < v6[4] )
      goto LABEL_4;
  }
  v4 = *(_QWORD *)(a1 + 56);
LABEL_15:
  v14 = *(_QWORD **)(v4 + 40);
  v15 = v14[4];
  if ( !v15 )
  {
    v29 = v14[1];
    v41 = -1;
    if ( !v29 )
      return 0;
    v30 = v14[3];
    v31 = v14[5];
    v32 = v14 + 3;
    if ( (unsigned __int64)&v41 < v30 || (unsigned __int64)&v41 >= v30 + 4 * v31 )
    {
      v36 = 0;
      if ( v31 >= v29 || (v37 = qvector_reserve(v32, v30, v29, 4), v36 = v14[4], v14[3] = v37, v30 = v37, v36 < v29) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v30 + 4 * v36++) = -1;
          if ( v36 == v29 )
            break;
          v30 = v14[3];
        }
      }
    }
    else
    {
      v33 = 0;
      if ( v31 >= v29 || (v39 = qvector_reserve(v32, v30, v29, 4), v14[3] = v39, v30 = v39, v33 = v14[4], v33 < v29) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v30 + 4 * v33++) = -1;
          if ( v33 == v29 )
            break;
          v30 = v14[3];
        }
      }
    }
    v14[4] = v29;
    do
    {
      v34 = *(int *)(*v14 + 4 * v15);
      if ( (_DWORD)v34 != -1 )
        *(_DWORD *)(v14[3] + 4 * v34) = v15;
      ++v15;
    }
    while ( v15 != v29 );
    v15 = v14[4];
  }
  if ( v3 < v15 )
  {
    v16 = (int *)(v14[3] + 4 * v3);
    v17 = *v16;
    if ( *v16 >= 0 && (unsigned __int64)v17 < v14[1] )
    {
      *v16 = -1;
      *(_DWORD *)(*v14 + 4LL * v17) = -1;
      v18 = v14[1];
      v19 = 0;
      if ( v18 )
      {
        do
        {
          v20 = (int *)(v14[3] + 4 * v19);
          if ( v17 < *v20 )
            --*v20;
          ++v19;
        }
        while ( v18 != v19 );
        v21 = v18 - 1 - v17;
        if ( v21 > 0 )
          memmove((void *)(*v14 + 4LL * v17), (const void *)(*v14 + 4LL * (v17 + 1)), 4LL * (unsigned int)v21);
      }
      --*(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL);
    }
  }
  return 0;
}
