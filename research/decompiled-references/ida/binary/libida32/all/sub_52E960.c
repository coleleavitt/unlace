unsigned __int64 __fastcall sub_52E960(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rdi
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rbp
  _DWORD *v21; // rdx
  __int16 v22; // ax
  int v23; // ecx
  __int64 v24; // rbp
  int v25; // edx
  unsigned __int64 v26; // rax
  void *v27; // r9
  __int64 *v28; // rax
  __int64 v29; // r15
  __int64 v30; // r12
  __m128 v31; // xmm0
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // r15d
  _QWORD *v38; // rax
  int *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  void *v43; // rdx
  __int64 v44; // rdx
  int v46; // edx
  unsigned __int64 v47; // r15
  const __m128i *i; // r15
  __int64 v49; // rdx
  __int64 v50; // r15
  void *v51; // rax
  __int64 v52; // rax
  _DWORD *v54; // [rsp+10h] [rbp-A8h]
  void *v55; // [rsp+10h] [rbp-A8h]
  void *v56; // [rsp+10h] [rbp-A8h]
  void *v57; // [rsp+10h] [rbp-A8h]
  void *v58; // [rsp+10h] [rbp-A8h]
  int v59; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __m128 v61; // [rsp+28h] [rbp-90h]
  __int64 v62; // [rsp+40h] [rbp-78h] BYREF
  int v63; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v64; // [rsp+50h] [rbp-68h]
  const __m128i *v65; // [rsp+58h] [rbp-60h]
  int *v66; // [rsp+60h] [rbp-58h]
  __int64 v67; // [rsp+68h] [rbp-50h]
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 1632LL);
  v5 = v4[7];
  v6 = v5 + 80LL * v4[8];
  if ( v5 != v6 )
  {
    while ( a2 != *(_QWORD *)v5 )
    {
      v5 += 80;
      if ( v6 == v5 )
        return v68 - __readfsqword(0x28u);
    }
    if ( v5 )
    {
      sub_52E5A0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), a2, 0);
      v8 = 1;
      v9 = 1;
      if ( v4[19] > 1u )
      {
        do
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v4[18] + 8 * v9);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 32);
              if ( v11 )
              {
                if ( *(_QWORD *)v11 == a2 )
                {
                  if ( (*(_BYTE *)(v10 + 68) & 8) != 0 )
                  {
                    v12 = *(_DWORD *)(v11 + 8);
                    if ( v12 >= a4 )
                      *(_DWORD *)(v11 + 8) = *(_DWORD *)(*a3 + 4LL * (v12 - a4));
                  }
                  v13 = *(_DWORD *)(v11 + 24);
                  if ( v13 >= a4 )
                    break;
                }
              }
            }
            v9 = ++v8;
            if ( (unsigned __int64)v8 >= v4[19] )
              goto LABEL_17;
          }
          ++v8;
          *(_DWORD *)(v11 + 24) = *(_DWORD *)(*a3 + 4LL * (v13 - a4));
          v9 = v8;
        }
        while ( (unsigned __int64)v8 < v4[19] );
      }
LABEL_17:
      v14 = a4;
      v15 = nullptr;
      ptr = nullptr;
      v61 = 0;
      if ( a4 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, a4, 8);
        memset((char *)ptr + 8 * v61.m128_u64[0], 0, 8 * (a4 - v61.m128_u64[0]));
        v61.m128_u64[0] = a4;
        v52 = 0;
        do
        {
          *(_QWORD *)((char *)ptr + v52) = *(_QWORD *)(*(_QWORD *)(v5 + 8) + v52);
          v52 += 8;
        }
        while ( v52 != 8LL * a4 );
        v15 = ptr;
      }
      v16 = *(_QWORD *)(v5 + 16);
      v17 = *(_QWORD **)(v5 + 8);
      if ( a4 < v16 )
      {
        v18 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = v17[v14];
            if ( v24 != -1 )
            {
              v25 = *(_DWORD *)(*a3 + 4LL * v18);
              if ( v25 )
                break;
            }
LABEL_23:
            v14 = v18 + a4 + 1;
            ++v18;
            if ( v14 >= v16 )
              goto LABEL_29;
          }
          v26 = v61.m128_u64[0];
          v27 = (void *)v25;
          if ( v25 < v61.m128_u64[0] )
            goto LABEL_27;
          v46 = v25 + 1;
          v47 = v46;
          if ( v46 < v61.m128_u64[0] )
            goto LABEL_56;
          if ( v61.m128_u64[0] >= v46 )
            goto LABEL_27;
          if ( &unk_238B070 >= (_UNKNOWN *)v15 && &unk_238B070 < (_UNKNOWN *)&v15[v61.m128_u64[1]] )
            break;
          if ( v61.m128_u64[1] < v46 )
          {
            v57 = v27;
            ptr = (void *)qvector_reserve(&ptr, v15, v46, 8);
            v15 = ptr;
            v26 = v61.m128_u64[0];
            v27 = v57;
            if ( v61.m128_u64[0] >= v47 )
              goto LABEL_56;
          }
          do
          {
            v15[v26++] = -1;
            v15 = ptr;
          }
          while ( v47 != v26 );
          v61.m128_u64[0] = v47;
LABEL_27:
          v28 = &v15[(_QWORD)v27];
          v29 = *v28;
          if ( *v28 != -1 )
          {
            v19 = v4[18];
            v20 = *(_QWORD *)(v19 + 8 * v24);
            v21 = *(_DWORD **)(v19 + 8 * v29);
            v22 = *(_WORD *)(v20 + 68);
            v23 = *(_DWORD *)(v20 + 64);
            if ( (v22 & 8) != 0 )
            {
              *(_WORD *)(v20 + 68) = v22 & 0xFFF7;
              *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8LL) = 0;
            }
            v59 = v23;
            v54 = v21;
            sub_528890(v20);
            *(_WORD *)(v20 + 70) = 0;
            *(_DWORD *)(v20 + 64) = v59;
            *(_QWORD *)v20 = (v29 << 9) | 0x13D;
            *(_OWORD *)(v20 + 8) = 0;
            v15 = ptr;
            *(_QWORD *)(v20 + 48) = -1;
            *(_QWORD *)(v20 + 56) = 0;
            *(_QWORD *)(v20 + 72) = 0;
            *(_QWORD *)(v20 + 24) = 0;
            *(_WORD *)(v20 + 68) = 112;
            *(_OWORD *)(v20 + 32) = 0;
            ++v54[16];
            v17 = *(_QWORD **)(v5 + 8);
            v16 = *(_QWORD *)(v5 + 16);
            goto LABEL_23;
          }
          *v28 = v24;
          v16 = *(_QWORD *)(v5 + 16);
          v14 = v18 + a4 + 1;
          ++v18;
          v17 = *(_QWORD **)(v5 + 8);
          v15 = ptr;
          if ( v14 >= v16 )
            goto LABEL_29;
        }
        if ( v61.m128_u64[1] >= v46
          || (v58 = v27,
              ptr = (void *)qvector_reserve(&ptr, v15, v46, 8),
              v15 = ptr,
              v26 = v61.m128_u64[0],
              v27 = v58,
              v61.m128_u64[0] < v47) )
        {
          do
          {
            v15[v26++] = -1;
            v15 = ptr;
          }
          while ( v47 != v26 );
        }
LABEL_56:
        v61.m128_u64[0] = v47;
        goto LABEL_27;
      }
LABEL_29:
      *(_QWORD *)(v5 + 8) = v15;
      v30 = v5 + 40;
      v31 = _mm_loadh_ps((const double *)(v5 + 24));
      ptr = v17;
      v32 = v5 + 40;
      *(_QWORD *)(v5 + 16) = v61.m128_u64[0];
      v63 = 0;
      *(_QWORD *)(v5 + 24) = v61.m128_u64[1];
      v33 = *(_QWORD *)(v5 + 48);
      v64 = nullptr;
      v65 = (const __m128i *)&v63;
      v66 = &v63;
      v67 = 0;
      v61 = v31;
      if ( v33 )
      {
        do
        {
          while ( 1 )
          {
            v34 = *(_QWORD *)(v33 + 16);
            v35 = *(_QWORD *)(v33 + 24);
            if ( *(_DWORD *)(v33 + 32) < a4 )
              break;
            v32 = v33;
            v33 = *(_QWORD *)(v33 + 16);
            if ( !v34 )
              goto LABEL_34;
          }
          v33 = *(_QWORD *)(v33 + 24);
        }
        while ( v35 );
LABEL_34:
        if ( v30 != v32 )
        {
          do
          {
            v36 = *(_DWORD *)(v32 + 32);
            if ( v36 < a4 || (v37 = *(_DWORD *)(*a3 + 4LL * (v36 - a4)), v37 == v36) )
            {
              v32 = std::_Rb_tree_increment();
            }
            else
            {
              if ( v37 )
              {
                v38 = v64;
                v39 = &v63;
                if ( !v64 )
                  goto LABEL_45;
                do
                {
                  while ( 1 )
                  {
                    v40 = v38[2];
                    v41 = v38[3];
                    if ( *((_DWORD *)v38 + 8) < v37 )
                      break;
                    v39 = (int *)v38;
                    v38 = (_QWORD *)v38[2];
                    if ( !v40 )
                      goto LABEL_43;
                  }
                  v38 = (_QWORD *)v38[3];
                }
                while ( v41 );
LABEL_43:
                if ( v39 == &v63 || v37 < v39[8] )
                {
LABEL_45:
                  v55 = *(void **)(v32 + 40);
                  v42 = operator new(0x30u);
                  v43 = v55;
                  *(_DWORD *)(v42 + 32) = v37;
                  v56 = (void *)v42;
                  *(_QWORD *)(v42 + 40) = v43;
                  sub_51A080(&v62, (__int64)v39, v37);
                  if ( v44 )
                  {
                    std::_Rb_tree_insert_and_rebalance();
                    ++v67;
                  }
                  else if ( v56 )
                  {
                    operator delete(v56, 0x30u);
                  }
                }
              }
              v50 = std::_Rb_tree_increment();
              v51 = (void *)std::_Rb_tree_rebalance_for_erase();
              v32 = v50;
              operator delete(v51, 0x30u);
              --*(_QWORD *)(v5 + 72);
            }
          }
          while ( v30 != v32 );
          for ( i = v65; i != (const __m128i *)&v63; i = (const __m128i *)std::_Rb_tree_increment() )
          {
            sub_51A080((_QWORD *)(v5 + 32), v5 + 40, i[2].m128i_u32[0]);
            if ( v49 )
            {
              *(__m128i *)(operator new(0x30u) + 32) = _mm_loadu_si128(i + 2);
              std::_Rb_tree_insert_and_rebalance();
              ++*(_QWORD *)(v5 + 72);
            }
          }
        }
      }
      sub_51A300(v5, 0);
      sub_51ADF0(v64);
      if ( ptr )
      {
        v61.m128_u64[0] = 0;
        qfree(ptr);
      }
    }
  }
  return v68 - __readfsqword(0x28u);
}

