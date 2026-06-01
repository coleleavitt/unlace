unsigned __int64 __fastcall sub_547940(__int64 a1, __int64 a2, int *a3, unsigned int a4)
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
  int *v15; // rsi
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
  int *v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // r15d
  _QWORD *v38; // rax
  __int64 v39; // rax
  void *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _BOOL8 v43; // rdi
  int v45; // edx
  unsigned __int64 v46; // r15
  const __m128i *i; // r15
  __m128i *v48; // rsi
  _DWORD *v49; // rdx
  __int64 v50; // rcx
  unsigned __int32 v51; // r13d
  __int64 v52; // rax
  bool v53; // bp
  __int64 v54; // r15
  void *v55; // rax
  __int64 v56; // rax
  _DWORD *v58; // [rsp+10h] [rbp-A8h]
  void *v59; // [rsp+10h] [rbp-A8h]
  int *v60; // [rsp+10h] [rbp-A8h]
  void *v61; // [rsp+10h] [rbp-A8h]
  void *v62; // [rsp+10h] [rbp-A8h]
  void *v63; // [rsp+10h] [rbp-A8h]
  int v64; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __m128 v66; // [rsp+28h] [rbp-90h]
  __int64 v67; // [rsp+40h] [rbp-78h] BYREF
  int v68; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v69; // [rsp+50h] [rbp-68h]
  const __m128i *v70; // [rsp+58h] [rbp-60h]
  int *v71; // [rsp+60h] [rbp-58h]
  __int64 v72; // [rsp+68h] [rbp-50h]
  unsigned __int64 v73; // [rsp+78h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 1824LL);
  v5 = v4[7];
  v6 = v5 + 80LL * v4[8];
  if ( v5 != v6 )
  {
    while ( a2 != *(_QWORD *)v5 )
    {
      v5 += 80;
      if ( v6 == v5 )
        return v73 - __readfsqword(0x28u);
    }
    if ( v5 )
    {
      sub_547590(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), a2, 0);
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
                      *(_DWORD *)(v11 + 8) = *(_DWORD *)(*(_QWORD *)a3 + 4LL * (v12 - a4));
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
          *(_DWORD *)(v11 + 24) = *(_DWORD *)(*(_QWORD *)a3 + 4LL * (v13 - a4));
          v9 = v8;
        }
        while ( (unsigned __int64)v8 < v4[19] );
      }
LABEL_17:
      v14 = a4;
      v15 = nullptr;
      ptr = nullptr;
      v66 = 0;
      if ( a4 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, a4, 8);
        memset((char *)ptr + 8 * v66.m128_u64[0], 0, 8 * (a4 - v66.m128_u64[0]));
        v66.m128_u64[0] = a4;
        v56 = 0;
        do
        {
          *(_QWORD *)((char *)ptr + v56) = *(_QWORD *)(*(_QWORD *)(v5 + 8) + v56);
          v56 += 8;
        }
        while ( v56 != 8LL * a4 );
        v15 = (int *)ptr;
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
              v25 = *(_DWORD *)(*(_QWORD *)a3 + 4LL * v18);
              if ( v25 )
                break;
            }
LABEL_23:
            v14 = v18 + a4 + 1;
            ++v18;
            if ( v14 >= v16 )
              goto LABEL_29;
          }
          v26 = v66.m128_u64[0];
          v27 = (void *)v25;
          if ( v25 < v66.m128_u64[0] )
            goto LABEL_27;
          v45 = v25 + 1;
          v46 = v45;
          if ( v45 < v66.m128_u64[0] )
            goto LABEL_58;
          if ( v66.m128_u64[0] >= v45 )
            goto LABEL_27;
          if ( &unk_23AF1D0 >= (_UNKNOWN *)v15 && &unk_23AF1D0 < (_UNKNOWN *)&v15[2 * v66.m128_u64[1]] )
            break;
          if ( v66.m128_u64[1] < v45 )
          {
            v62 = v27;
            ptr = (void *)qvector_reserve(&ptr, v15, v45, 8);
            v15 = (int *)ptr;
            v26 = v66.m128_u64[0];
            v27 = v62;
            if ( v66.m128_u64[0] >= v46 )
              goto LABEL_58;
          }
          do
          {
            *(_QWORD *)&v15[2 * v26++] = -1;
            v15 = (int *)ptr;
          }
          while ( v46 != v26 );
          v66.m128_u64[0] = v46;
LABEL_27:
          v28 = (__int64 *)&v15[2 * (_QWORD)v27];
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
            v64 = v23;
            v58 = v21;
            sub_5415B0(v20);
            *(_WORD *)(v20 + 70) = 0;
            *(_DWORD *)(v20 + 64) = v64;
            *(_QWORD *)v20 = (v29 << 9) | 0x13D;
            *(_OWORD *)(v20 + 8) = 0;
            v15 = (int *)ptr;
            *(_QWORD *)(v20 + 48) = -1;
            *(_QWORD *)(v20 + 56) = 0;
            *(_QWORD *)(v20 + 72) = 0;
            *(_QWORD *)(v20 + 24) = 0;
            *(_WORD *)(v20 + 68) = 112;
            *(_OWORD *)(v20 + 32) = 0;
            ++v58[16];
            v17 = *(_QWORD **)(v5 + 8);
            v16 = *(_QWORD *)(v5 + 16);
            goto LABEL_23;
          }
          *v28 = v24;
          v16 = *(_QWORD *)(v5 + 16);
          v14 = v18 + a4 + 1;
          ++v18;
          v17 = *(_QWORD **)(v5 + 8);
          v15 = (int *)ptr;
          if ( v14 >= v16 )
            goto LABEL_29;
        }
        if ( v66.m128_u64[1] >= v45
          || (v63 = v27,
              ptr = (void *)qvector_reserve(&ptr, v15, v45, 8),
              v15 = (int *)ptr,
              v26 = v66.m128_u64[0],
              v27 = v63,
              v66.m128_u64[0] < v46) )
        {
          do
          {
            *(_QWORD *)&v15[2 * v26++] = -1;
            v15 = (int *)ptr;
          }
          while ( v46 != v26 );
        }
LABEL_58:
        v66.m128_u64[0] = v46;
        goto LABEL_27;
      }
LABEL_29:
      *(_QWORD *)(v5 + 8) = v15;
      v30 = v5 + 40;
      v31 = _mm_loadh_ps((const double *)(v5 + 24));
      ptr = v17;
      v32 = v5 + 40;
      *(_QWORD *)(v5 + 16) = v66.m128_u64[0];
      v68 = 0;
      *(_QWORD *)(v5 + 24) = v66.m128_u64[1];
      v33 = *(_QWORD *)(v5 + 48);
      v69 = nullptr;
      v70 = (const __m128i *)&v68;
      v71 = &v68;
      v72 = 0;
      v66 = v31;
      if ( v33 )
      {
        do
        {
          while ( 1 )
          {
            v34 = *(_QWORD *)(v33 + 16);
            v35 = *(int **)(v33 + 24);
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
            if ( v36 < a4
              || (v15 = a3, v34 = v36 - a4, v35 = *(int **)a3, v37 = *(_DWORD *)(*(_QWORD *)a3 + 4 * v34), v37 == v36) )
            {
              v32 = std::_Rb_tree_increment(v32, v15, v35, v34);
            }
            else
            {
              if ( v37 )
              {
                v38 = v69;
                v15 = &v68;
                if ( !v69 )
                  goto LABEL_45;
                do
                {
                  while ( 1 )
                  {
                    v34 = v38[2];
                    v35 = (int *)v38[3];
                    if ( *((_DWORD *)v38 + 8) < v37 )
                      break;
                    v15 = (int *)v38;
                    v38 = (_QWORD *)v38[2];
                    if ( !v34 )
                      goto LABEL_43;
                  }
                  v38 = (_QWORD *)v38[3];
                }
                while ( v35 );
LABEL_43:
                if ( v15 == &v68 || v37 < v15[8] )
                {
LABEL_45:
                  v59 = *(void **)(v32 + 40);
                  v39 = operator new(0x30u);
                  v40 = v59;
                  *(_DWORD *)(v39 + 32) = v37;
                  v60 = (int *)v39;
                  *(_QWORD *)(v39 + 40) = v40;
                  v42 = sub_532840(&v67, (__int64)v15, v37, v41);
                  if ( v35 )
                  {
                    v43 = v42 || v35 == &v68 || v37 < v35[8];
                    v15 = v60;
                    std::_Rb_tree_insert_and_rebalance(v43, v60, v35, &v68);
                    ++v72;
                  }
                  else if ( v60 )
                  {
                    v15 = &dword_30;
                    operator delete(v60, 0x30u);
                  }
                }
              }
              v54 = std::_Rb_tree_increment(v32, v15, v35, v34);
              v55 = (void *)std::_Rb_tree_rebalance_for_erase(v32, v5 + 40);
              v15 = &dword_30;
              v32 = v54;
              operator delete(v55, 0x30u);
              --*(_QWORD *)(v5 + 72);
            }
          }
          while ( v30 != v32 );
          for ( i = v70; i != (const __m128i *)&v68; i = (const __m128i *)std::_Rb_tree_increment(i, v48, v49, v50) )
          {
            v51 = i[2].m128i_u32[0];
            v48 = (__m128i *)(v5 + 40);
            v52 = sub_532840((_QWORD *)(v5 + 32), v5 + 40, v51, v34);
            if ( v49 )
            {
              v53 = v30 == (_QWORD)v49 || v52 != 0;
              if ( !v53 )
                v53 = v51 < v49[8];
              v61 = v49;
              v48 = (__m128i *)operator new(0x30u);
              v48[2] = _mm_loadu_si128(i + 2);
              std::_Rb_tree_insert_and_rebalance(v53, v48, v61, v5 + 40);
              ++*(_QWORD *)(v5 + 72);
            }
          }
        }
      }
      sub_532AC0(v5, 0);
      sub_533530(v69);
      if ( ptr )
      {
        v66.m128_u64[0] = 0;
        qfree(ptr);
      }
    }
  }
  return v73 - __readfsqword(0x28u);
}
