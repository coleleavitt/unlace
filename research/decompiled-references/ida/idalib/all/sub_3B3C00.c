_BOOL8 __fastcall sub_3B3C00(char *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  char *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r14
  size_t *v12; // rbx
  int v13; // r13d
  size_t *i; // rbp
  size_t v15; // r8
  _QWORD *v16; // rax
  char *v17; // r14
  __int64 v18; // rax
  size_t v19; // r8
  void *v20; // rdi
  __m128i si128; // xmm0
  unsigned int v22; // edx
  int v23; // eax
  _BOOL4 v24; // r12d
  char *v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // rbx
  void *v29; // rdi
  void *v31; // rax
  void *v32; // rax
  size_t nb; // [rsp+0h] [rbp-A0h]
  size_t na; // [rsp+0h] [rbp-A0h]
  size_t n; // [rsp+0h] [rbp-A0h]
  int v36[4]; // [rsp+8h] [rbp-98h] BYREF
  int v37[2]; // [rsp+18h] [rbp-88h]
  unsigned __int64 v38; // [rsp+20h] [rbp-80h]
  _QWORD *v39; // [rsp+28h] [rbp-78h]
  int v40; // [rsp+34h] [rbp-6Ch]
  char *v41; // [rsp+38h] [rbp-68h]
  __int64 v42; // [rsp+40h] [rbp-60h]
  void *ptr; // [rsp+48h] [rbp-58h] BYREF
  __int128 v44; // [rsp+50h] [rbp-50h]
  unsigned __int64 v45; // [rsp+60h] [rbp-40h]

  v41 = a1;
  v38 = a2;
  v40 = a3;
  v45 = __readfsqword(0x28u);
  v44 = 0;
  ptr = nullptr;
  v4 = *(_QWORD *)(qword_2CCB598 + 1576);
  v5 = (_QWORD *)(v4 + 80);
  v42 = v4;
  v6 = *(_QWORD **)(v4 + 88);
  v39 = v5;
  if ( !v6 )
    goto LABEL_47;
  v8 = a1;
  do
  {
    while ( 1 )
    {
      v9 = v6[2];
      v10 = v6[3];
      if ( v6[4] < (unsigned __int64)a1 )
        break;
      v5 = v6;
      v6 = (_QWORD *)v6[2];
      if ( !v9 )
        goto LABEL_6;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( v10 );
LABEL_6:
  if ( v39 == v5 )
  {
LABEL_47:
    v22 = 0;
    *(_QWORD *)v37 = &ptr;
  }
  else
  {
    v11 = 0;
    *(_QWORD *)v37 = &ptr;
    do
    {
      if ( v5[4] >= v38 )
        break;
      v12 = (size_t *)v5[5];
      v13 = 0;
      for ( i = &v12[v5[6]]; i != v12; ++v12 )
      {
        v15 = *v12;
        if ( a4 && !*(_DWORD *)(v15 + 44) )
        {
          do
          {
            v16 = *(_QWORD **)a4;
            v9 = *(_QWORD *)(v15 + 56);
            v10 = *(_QWORD *)a4 + 8LL * *(_QWORD *)(a4 + 8);
            if ( *(_QWORD *)a4 == v10 )
              break;
            while ( v9 != *v16 )
            {
              if ( (_QWORD *)v10 == ++v16 )
                goto LABEL_19;
            }
            if ( (_QWORD *)v10 == v16 )
              break;
            if ( i == ++v12 )
              goto LABEL_28;
            v15 = *v12;
          }
          while ( !*(_DWORD *)(*v12 + 44) );
        }
LABEL_19:
        v9 = *(unsigned int *)(v15 + 64);
        if ( (v13 & (1 << v9)) == 0 )
        {
          v8 = (char *)ptr;
          v13 |= 1 << v9;
          if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v11 + 1) )
          {
            n = v15;
            ptr = (void *)qvector_reserve(*(_QWORD *)v37, ptr, v11 + 1, 56);
            v11 = v44;
            v8 = (char *)ptr;
            v15 = n;
          }
          v17 = &v8[56 * v11];
          *(_QWORD *)v17 = -1;
          *((_QWORD *)v17 + 4) = 4;
          *((_QWORD *)v17 + 1) = 0;
          v17[40] = 0;
          *(_QWORD *)(v17 + 44) = 0xFFFFFFFFLL;
          *((_OWORD *)v17 + 1) = 0;
          v18 = v5[4];
          *(_QWORD *)&v44 = v44 + 1;
          *(_QWORD *)v17 = v18;
          *((_DWORD *)v17 + 8) = *(_DWORD *)(v15 + 64);
          LODWORD(v18) = *(_DWORD *)(v15 + 80);
          v19 = 0;
          *((_DWORD *)v17 + 9) = v18;
          v10 = v5[9];
          if ( v10 )
          {
            na = v5[9];
            v31 = (void *)qalloc_or_throw(na);
            v8 = (char *)v5[8];
            v32 = memcpy(v31, v8, na);
            v10 = na;
            v19 = (size_t)v32;
          }
          v20 = *((void **)v17 + 1);
          si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
          if ( v20 )
          {
            *((_QWORD *)v17 + 2) = 0;
            nb = v19;
            *(__m128i *)v36 = si128;
            qfree(v20);
            si128 = _mm_load_si128((const __m128i *)v36);
            v19 = nb;
          }
          *((_QWORD *)v17 + 1) = v19;
          *((__m128i *)v17 + 1) = si128;
          v11 = v44;
        }
      }
LABEL_28:
      v5 = (_QWORD *)std::_Rb_tree_increment(v5, v8, v10, v9);
    }
    while ( v39 != v5 );
    v22 = v11;
  }
  v23 = sub_3ADFA0(*(_QWORD **)v37, 0, v22, v40);
  v24 = v23;
  if ( v23 >= 0 )
    v24 = (_QWORD)v44 == v23;
  if ( !v41 && v38 == -1 && (v24 || (_BYTE)v40) && *(_QWORD *)(v42 + 112) )
  {
    if ( !under_debugger )
      interr(40177);
    BUG();
  }
  v25 = (char *)ptr;
  if ( ptr )
  {
    v26 = v44;
    if ( (_QWORD)v44 )
    {
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = *(void **)&v25[v27 + 8];
        if ( v29 )
        {
          *(_QWORD *)&v25[v27 + 16] = 0;
          qfree(v29);
          v25 = (char *)ptr;
        }
        ++v28;
        v27 += 56;
      }
      while ( v26 != v28 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v25);
  }
  return v24;
}
