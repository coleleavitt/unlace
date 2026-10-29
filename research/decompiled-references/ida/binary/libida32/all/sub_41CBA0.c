unsigned __int64 __fastcall sub_41CBA0(__int64 *a1, __int64 *a2, unsigned int *a3, int a4)
{
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  int *v13; // r10
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // r8
  int *v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  int *v21; // r10
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r15
  _QWORD *v25; // rax
  bool v26; // zf
  int *i; // r15
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rdx
  void **v33; // r13
  void **v34; // r14
  void *v35; // rdi
  void **v37; // r14
  _DWORD *v38; // r15
  void **v39; // rbx
  void *v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r10
  _QWORD *v45; // rsi
  __int64 v46; // rax
  char v49; // [rsp+13h] [rbp-C5h]
  int *v51; // [rsp+20h] [rbp-B8h]
  int *v52; // [rsp+20h] [rbp-B8h]
  int *v53; // [rsp+20h] [rbp-B8h]
  __int64 *v54; // [rsp+20h] [rbp-B8h]
  _DWORD *v55; // [rsp+20h] [rbp-B8h]
  __int64 v56; // [rsp+20h] [rbp-B8h]
  __int64 v57; // [rsp+20h] [rbp-B8h]
  __int64 v58; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v60; // [rsp+38h] [rbp-A0h]
  __int128 v61; // [rsp+48h] [rbp-90h]
  __int64 v62; // [rsp+58h] [rbp-80h]
  __int64 v63; // [rsp+60h] [rbp-78h]
  int v64; // [rsp+70h] [rbp-68h] BYREF
  __int64 v65; // [rsp+78h] [rbp-60h]
  int *v66; // [rsp+80h] [rbp-58h]
  int *v67; // [rsp+88h] [rbp-50h]
  __int64 v68; // [rsp+90h] [rbp-48h]
  unsigned __int64 v69; // [rsp+98h] [rbp-40h]

  v4 = (__int64)(a2 + 8);
  v5 = a2;
  v6 = (__int64)(a2 + 8);
  v7 = a2[9];
  v8 = *a3;
  v69 = __readfsqword(0x28u);
  v64 = 0;
  ptr = nullptr;
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v66 = &v64;
  v67 = &v64;
  v68 = 0;
  v60 = 0;
  v61 = 0;
  if ( !v7 )
  {
    sub_3C6650((__int64)&ptr, nullptr);
    goto LABEL_52;
  }
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      v10 = *(_QWORD *)(v7 + 24);
      if ( *(_DWORD *)(v7 + 32) < v8 )
        break;
      v6 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v10 );
LABEL_6:
  if ( v4 == v6 )
    goto LABEL_51;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v6 + 32);
    if ( v11 >= a3[1] )
      break;
    v12 = *(_DWORD *)(v6 + 36);
    if ( v11 >= *a3 )
      v11 += a4;
    if ( (unsigned int)sub_41A0E0(a1, v11) == 7 )
    {
      v6 = std::_Rb_tree_increment();
      if ( v4 == v6 )
        break;
    }
    else
    {
      v13 = &v64;
      v49 = *(_BYTE *)(v6 + 40);
      v14 = v65;
      if ( v65 )
      {
        do
        {
          while ( 1 )
          {
            v15 = *(_DWORD *)(v14 + 32);
            if ( v15 < v11 || v11 >= v15 && *(_DWORD *)(v14 + 36) < v12 )
              break;
            v13 = (int *)v14;
            v14 = *(_QWORD *)(v14 + 16);
            if ( !v14 )
              goto LABEL_18;
          }
          v14 = *(_QWORD *)(v14 + 24);
        }
        while ( v14 );
LABEL_18:
        if ( v13 != &v64 )
        {
          v16 = v13[8];
          if ( v11 >= v16 && (v16 < v11 || v12 >= v13[9]) )
            goto LABEL_25;
        }
      }
      v17 = (__int64)v13;
      v18 = (int *)v61;
      ++v63;
      if ( (_QWORD)v61 )
      {
        *(_BYTE *)(v61 + 40) = 0;
        v19 = *(_QWORD *)v18;
        v51 = v18;
        *((_QWORD *)v18 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v12)).m128i_u64[0];
        *(_QWORD *)&v61 = v19;
        v20 = sub_417950(&ptr, v17, v11, v12);
        v21 = v51;
        v22 = (_DWORD *)v20;
        if ( !v23 )
          goto LABEL_41;
      }
      else
      {
        v30 = *((_QWORD *)&v61 + 1);
        if ( *((_QWORD *)&v61 + 1) == v62 )
        {
          v56 = v17;
          *((_QWORD *)&v61 + 1) = qalloc_or_throw(4194288, (const char *)v11);
          v44 = *((_QWORD *)&v61 + 1);
          v45 = ptr;
          v62 = *((_QWORD *)&v61 + 1) + 4194288LL;
          v46 = v60;
          v17 = v56;
          if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
          {
            v58 = v56;
            v57 = *((_QWORD *)&v61 + 1);
            ptr = (void *)qvector_reserve(&ptr, ptr, v60 + 1, 8);
            v45 = ptr;
            v17 = v58;
            v46 = v60;
            v44 = v57;
          }
          v45[v46] = v44;
          v30 = *((_QWORD *)&v61 + 1);
          *(_QWORD *)&v60 = v60 + 1;
        }
        *(_BYTE *)(v30 + 40) = 0;
        *((_QWORD *)&v61 + 1) = v30 + 48;
        *(_QWORD *)(v30 + 32) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v12)).m128i_u64[0];
        v53 = (int *)v30;
        v31 = sub_417950(&ptr, v17, v11, v12);
        v21 = v53;
        v22 = (_DWORD *)v31;
        if ( !v32 )
        {
          if ( v53 )
          {
LABEL_41:
            *(_QWORD *)v21 = v61;
            v26 = v63-- == 1;
            *(_QWORD *)&v61 = v21;
            if ( v26 )
            {
              v37 = (void **)((char *)ptr + 8 * v60);
              if ( ptr != v37 )
              {
                v54 = v5;
                v38 = v22;
                v39 = (void **)ptr;
                do
                {
                  v40 = *v39++;
                  qfree(v40);
                }
                while ( v37 != v39 );
                v5 = v54;
                v37 = (void **)ptr;
                v22 = v38;
              }
              if ( v37 )
              {
                v55 = v22;
                *(_QWORD *)&v60 = 0;
                qfree(v37);
                v22 = v55;
                ptr = nullptr;
                *((_QWORD *)&v60 + 1) = 0;
              }
              v62 = 0;
              v61 = 0;
            }
          }
          v13 = v22;
          goto LABEL_25;
        }
      }
      v52 = v21;
      std::_Rb_tree_insert_and_rebalance();
      v13 = v52;
      ++v68;
LABEL_25:
      *((_BYTE *)v13 + 40) = v49;
      v24 = std::_Rb_tree_increment();
      v25 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
      *v25 = v5[3];
      v26 = v5[6]-- == 1;
      v5[3] = (__int64)v25;
      if ( v26 )
      {
        v33 = (void **)(*v5 + 8 * v5[1]);
        if ( (void **)*v5 != v33 )
        {
          v34 = (void **)*v5;
          do
          {
            v35 = *v34++;
            qfree(v35);
          }
          while ( v33 != v34 );
          v33 = (void **)*v5;
        }
        if ( v33 )
        {
          v5[1] = 0;
          qfree(v33);
          *v5 = 0;
          v5[2] = 0;
        }
        v5[5] = 0;
        *(_OWORD *)(v5 + 3) = 0;
      }
      v6 = v24;
      --v5[12];
      if ( v4 == v24 )
        break;
    }
  }
  for ( i = v66; i != &v64; i = (int *)std::_Rb_tree_increment() )
  {
    sub_417950(v5, v4, i[8], i[9]);
    if ( v28 )
    {
      v29 = v5[3];
      ++v5[6];
      if ( v29 )
      {
        v5[3] = *(_QWORD *)v29;
      }
      else
      {
        v29 = v5[4];
        if ( v29 == v5[5] )
        {
          v41 = qalloc_or_throw(4194288, (const char *)v29);
          v42 = *v5;
          v5[4] = v41;
          v5[5] = v41 + 4194288;
          v43 = v5[1];
          if ( v5[2] < (unsigned __int64)(v43 + 1) )
          {
            v42 = qvector_reserve(v5, v42, v43 + 1, 8);
            *v5 = v42;
            v43 = v5[1];
          }
          *(_QWORD *)(v42 + 8 * v43) = v41;
          v29 = v5[4];
          ++v5[1];
        }
        v5[4] = v29 + 48;
      }
      *(_QWORD *)(v29 + 32) = *((_QWORD *)i + 4);
      *(_DWORD *)(v29 + 40) = i[10];
      std::_Rb_tree_insert_and_rebalance();
      ++v5[12];
    }
  }
  v7 = v65;
LABEL_51:
  sub_3C6650((__int64)&ptr, (_QWORD *)v7);
LABEL_52:
  if ( ptr )
  {
    *(_QWORD *)&v60 = 0;
    qfree(ptr);
  }
  return v69 - __readfsqword(0x28u);
}

