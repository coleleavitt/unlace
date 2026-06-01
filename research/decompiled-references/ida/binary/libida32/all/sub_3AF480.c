_BOOL8 __fastcall sub_3AF480(unsigned int a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // r13d
  __int64 i; // rbp
  _DWORD *v16; // r8
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rsi
  char *v21; // r14
  int v22; // eax
  int v23; // eax
  void *v24; // r8
  size_t v25; // rdx
  void *v26; // rdi
  __m128i si128; // xmm0
  unsigned int v28; // edx
  int v29; // eax
  _BOOL4 v30; // r12d
  char *v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rbp
  __int64 v34; // rbx
  void *v35; // rdi
  void *v37; // rax
  void *v38; // rax
  size_t n[2]; // [rsp+0h] [rbp-98h] BYREF
  int v40[2]; // [rsp+10h] [rbp-88h]
  int v41[2]; // [rsp+18h] [rbp-80h]
  unsigned int v42; // [rsp+24h] [rbp-74h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  int v44; // [rsp+30h] [rbp-68h]
  unsigned int v45; // [rsp+34h] [rbp-64h]
  __int64 v46; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v48; // [rsp+48h] [rbp-50h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v45 = a1;
  v42 = a2;
  v44 = a3;
  v49 = __readfsqword(0x28u);
  v48 = 0;
  ptr = nullptr;
  v6 = *(_QWORD *)(qword_2CA1698 + 1384);
  v7 = v6 + 80;
  v46 = v6;
  v8 = *(_QWORD *)(v6 + 88);
  v43 = v7;
  if ( !v8 )
    goto LABEL_47;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) < a1 )
        break;
      v7 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v10 )
        goto LABEL_6;
    }
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v11 );
LABEL_6:
  if ( v43 == v7 )
  {
LABEL_47:
    v28 = 0;
    *(_QWORD *)v41 = &ptr;
  }
  else
  {
    v12 = 0;
    *(_QWORD *)v41 = &ptr;
    do
    {
      if ( *(_DWORD *)(v7 + 32) >= v42 )
        break;
      v13 = *(_QWORD *)(v7 + 40);
      v14 = 0;
      for ( i = v13 + 8LL * *(_QWORD *)(v7 + 48); i != v13; v13 += 8 )
      {
        v16 = *(_DWORD **)v13;
        if ( a4 && !v16[10] )
        {
          do
          {
            v17 = *(_DWORD **)a4;
            v18 = *(_QWORD *)a4 + 4LL * *(_QWORD *)(a4 + 8);
            if ( *(_QWORD *)a4 == v18 )
              break;
            while ( v16[13] != *v17 )
            {
              if ( (_DWORD *)v18 == ++v17 )
                goto LABEL_19;
            }
            if ( (_DWORD *)v18 == v17 )
              break;
            v13 += 8;
            if ( i == v13 )
              goto LABEL_28;
            v16 = *(_DWORD **)v13;
          }
          while ( !*(_DWORD *)(*(_QWORD *)v13 + 40LL) );
        }
LABEL_19:
        v19 = (unsigned int)v16[14];
        if ( (v14 & (1 << v19)) == 0 )
        {
          v20 = (char *)ptr;
          v14 |= 1 << v19;
          if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v12 + 1) )
          {
            n[0] = (size_t)v16;
            ptr = (void *)qvector_reserve(*(_QWORD *)v41, ptr, v12 + 1, 56);
            v12 = v48;
            v20 = (char *)ptr;
            v16 = (_DWORD *)n[0];
          }
          v21 = &v20[56 * v12];
          *(_DWORD *)v21 = -1;
          *((_QWORD *)v21 + 4) = 4;
          *((_QWORD *)v21 + 1) = 0;
          v21[40] = 0;
          *(_QWORD *)(v21 + 44) = 0xFFFFFFFFLL;
          *((_OWORD *)v21 + 1) = 0;
          v22 = *(_DWORD *)(v7 + 32);
          *(_QWORD *)&v48 = v48 + 1;
          *(_DWORD *)v21 = v22;
          *((_DWORD *)v21 + 8) = v16[14];
          v23 = v16[18];
          v24 = nullptr;
          *((_DWORD *)v21 + 9) = v23;
          v25 = *(_QWORD *)(v7 + 72);
          if ( v25 )
          {
            n[0] = *(_QWORD *)(v7 + 72);
            v37 = (void *)qalloc_or_throw(n[0], v20, v25, v19, 0, a6);
            v38 = memcpy(v37, *(const void **)(v7 + 64), n[0]);
            v25 = n[0];
            v24 = v38;
          }
          v26 = *((void **)v21 + 1);
          si128 = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
          if ( v26 )
          {
            *((_QWORD *)v21 + 2) = 0;
            *(_QWORD *)v40 = v24;
            *(__m128i *)n = si128;
            qfree(v26);
            v24 = *(void **)v40;
            si128 = _mm_load_si128((const __m128i *)n);
          }
          *((_QWORD *)v21 + 1) = v24;
          *((__m128i *)v21 + 1) = si128;
          v12 = v48;
        }
      }
LABEL_28:
      v7 = std::_Rb_tree_increment();
    }
    while ( v43 != v7 );
    v28 = v12;
  }
  v29 = sub_3A98C0(*(unsigned int ***)v41, 0, v28, v44);
  v30 = v29;
  if ( v29 >= 0 )
    v30 = (_QWORD)v48 == v29;
  if ( !v45 && v42 == -1 && (v30 || (_BYTE)v44) && *(_QWORD *)(v46 + 112) )
  {
    if ( !under_debugger )
      interr(40177);
    BUG();
  }
  v31 = (char *)ptr;
  if ( ptr )
  {
    v32 = v48;
    if ( (_QWORD)v48 )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        v35 = *(void **)&v31[v33 + 8];
        if ( v35 )
        {
          *(_QWORD *)&v31[v33 + 16] = 0;
          qfree(v35);
          v31 = (char *)ptr;
        }
        ++v34;
        v33 += 56;
      }
      while ( v32 != v34 );
    }
    *(_QWORD *)&v48 = 0;
    qfree(v31);
  }
  return v30;
}

