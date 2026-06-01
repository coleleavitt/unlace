__int64 __fastcall sub_3AF960(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  __int64 v3; // rax
  unsigned int *v4; // r8
  unsigned int v5; // r9d
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rsi
  size_t v12; // r11
  int v13; // r15d
  __int128 v14; // xmm0
  _DWORD *v15; // rbp
  int v16; // ecx
  int v17; // r10d
  int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rsi
  char *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 *v30; // rbx
  int v31; // r14d
  __int64 *i; // rbp
  char *v33; // r15
  unsigned int v34; // eax
  int v35; // eax
  void *v36; // r12
  size_t v37; // rdx
  void *v38; // rdi
  __m128i si128; // xmm0
  __int64 v40; // r12
  __int64 v41; // rcx
  char *v42; // rsi
  int v43; // r12d
  char *v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rbp
  __int64 v47; // rbx
  void *v48; // rdi
  __int64 v50; // rax
  char v51; // al
  size_t v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 range; // rax
  size_t n[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v57[2]; // [rsp+10h] [rbp-98h]
  int v58[2]; // [rsp+18h] [rbp-90h]
  int v59[2]; // [rsp+20h] [rbp-88h]
  int v60[2]; // [rsp+28h] [rbp-80h]
  int v61[2]; // [rsp+30h] [rbp-78h]
  int v62[2]; // [rsp+38h] [rbp-70h]
  int v63[2]; // [rsp+40h] [rbp-68h]
  unsigned int v64; // [rsp+48h] [rbp-60h]
  int v65; // [rsp+4Ch] [rbp-5Ch]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  int v67[4]; // [rsp+58h] [rbp-50h]
  void *v68; // [rsp+68h] [rbp-40h]

  *(_QWORD *)v60 = a2;
  v68 = (void *)__readfsqword(0x28u);
  *(_OWORD *)v67 = 0;
  ptr = nullptr;
  *(_QWORD *)v58 = &ptr;
  v2 = *(_QWORD *)(qword_2CA1698 + 1384);
  v3 = *(_QWORD *)qword_2C57988;
  n[0] = v2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v3 + 72))(qword_2C57988) )
  {
    v65 = 0;
    *(_QWORD *)v58 = &ptr;
  }
  else
  {
    v4 = *(unsigned int **)(v2 + 144);
    v65 = 0;
    *(_QWORD *)v63 = v2 + 128;
    *(_QWORD *)v58 = &ptr;
    if ( (unsigned int *)(v2 + 128) != v4 )
    {
      while ( 1 )
      {
        v5 = v4[8];
        if ( *(_QWORD *)(*(_QWORD *)v60 + 8LL)
          && (*(_QWORD *)v57 = v4,
              v64 = v5,
              range = rangeset_t_find_range(*(_QWORD *)v60, v5),
              v5 = v64,
              v4 = *(unsigned int **)v57,
              range) )
        {
          v6 = 272;
        }
        else
        {
          v6 = 0;
        }
        v7 = *((_QWORD *)v4 + 5);
        v8 = v7 + 8LL * *((_QWORD *)v4 + 6);
        if ( v7 != v8 )
          break;
LABEL_29:
        v4 = (unsigned int *)std::_Rb_tree_increment();
        if ( *(unsigned int **)v63 == v4 )
          goto LABEL_30;
      }
      v9 = *((_QWORD *)v4 + 5);
      v10 = 0;
      v11 = 1;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v9 + 68LL) & 0x40) != 0 )
          v10 |= 1 << *(_DWORD *)(*(_QWORD *)v9 + 56LL);
        v9 += 8;
      }
      while ( v8 != v9 );
      LOBYTE(v64) = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_DWORD **)v7;
        v16 = *(_DWORD *)(*(_QWORD *)v7 + 56LL);
        v17 = 1 << v16;
        if ( ((1 << v16) & v6) == 0 )
        {
          if ( v15[10] != 1
            || v15[9]
            || (*(_QWORD *)v62 = v4,
                v61[0] = 1 << v16,
                v50 = *(_QWORD *)qword_2C57988,
                *(_QWORD *)v59 = v12,
                v57[0] = v5,
                v51 = (*(__int64 (__fastcall **)(__int64, __int64, double))(v50 + 80))(
                        qword_2C57988,
                        v11,
                        *(double *)&v14),
                v5 = v57[0],
                v12 = *(_QWORD *)v59,
                v14 = 0,
                v17 = v61[0],
                v4 = *(unsigned int **)v62,
                v51) )
          {
            if ( (v13 & v17) == 0 )
              break;
          }
        }
LABEL_28:
        v7 += 8;
        if ( v8 == v7 )
          goto LABEL_29;
      }
      v13 |= v17;
      v18 = v10 & v17;
      if ( v18 )
      {
        if ( v15[10] != 3
          || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 48LL) + 32LL * (unsigned int)v15[13] + 8) == 1 )
        {
          v15[17] &= ~0x40u;
        }
        if ( (_BYTE)v64 )
        {
          *(_QWORD *)v59 = n[0] + 80;
LABEL_19:
          if ( v12 == *(_QWORD *)v59
            || (v19 = *(_QWORD *)(v12 + 40), v20 = v19 + 8LL * *(_QWORD *)(v12 + 48), v19 == v20) )
          {
LABEL_24:
            LOBYTE(v64) = 1;
            v18 = 0;
          }
          else
          {
            while ( (*(_BYTE *)(*(_QWORD *)v19 + 68LL) & 0x18) == 0 || v15[14] != *(_DWORD *)(*(_QWORD *)v19 + 56LL) )
            {
              v19 += 8;
              if ( v20 == v19 )
                goto LABEL_24;
            }
            ++v65;
            v18 = 9;
            LOBYTE(v64) = 1;
          }
          goto LABEL_25;
        }
        v12 = n[0] + 80;
        v52 = *(_QWORD *)(n[0] + 88);
        *(_QWORD *)v59 = n[0] + 80;
        if ( v52 )
        {
          do
          {
            while ( 1 )
            {
              v53 = *(_QWORD *)(v52 + 16);
              v54 = *(_QWORD *)(v52 + 24);
              if ( *(_DWORD *)(v52 + 32) < v5 )
                break;
              v12 = v52;
              v52 = *(_QWORD *)(v52 + 16);
              if ( !v53 )
                goto LABEL_66;
            }
            v52 = *(_QWORD *)(v52 + 24);
          }
          while ( v54 );
LABEL_66:
          if ( *(_QWORD *)v59 == v12 || v5 >= *(_DWORD *)(v12 + 32) )
            goto LABEL_19;
        }
        LOBYTE(v64) = 1;
        v12 = *(_QWORD *)v59;
        v18 = 0;
      }
LABEL_25:
      v21 = *(_QWORD *)v67;
      v22 = (char *)ptr;
      if ( *(_QWORD *)&v67[2] < (unsigned __int64)(*(_QWORD *)v67 + 1LL) )
      {
        *(_QWORD *)v62 = v4;
        *(_QWORD *)v61 = v12;
        v59[0] = v5;
        v57[0] = v18;
        ptr = (void *)qvector_reserve(*(_QWORD *)v58, ptr, *(_QWORD *)v67 + 1LL, 56);
        v22 = (char *)ptr;
        v4 = *(unsigned int **)v62;
        v14 = 0;
        v21 = *(_QWORD *)v67;
        v12 = *(_QWORD *)v61;
        v5 = v59[0];
        LOBYTE(v18) = v57[0];
      }
      v23 = &v22[56 * v21];
      *(_DWORD *)v23 = -1;
      *((_QWORD *)v23 + 4) = 4;
      v11 = 0xFFFFFFFFLL;
      *((_QWORD *)v23 + 1) = 0;
      *(_QWORD *)(v23 + 44) = 0xFFFFFFFFLL;
      v23[40] = v18;
      *((_OWORD *)v23 + 1) = v14;
      ++*(_QWORD *)v67;
      *(_DWORD *)v23 = v5;
      *((_DWORD *)v23 + 8) = v15[14];
      *((_DWORD *)v23 + 9) = v15[18];
      goto LABEL_28;
    }
  }
LABEL_30:
  v24 = *(_QWORD *)v67;
  v25 = *(_QWORD *)(*(_QWORD *)v60 + 8LL);
  v26 = **(_QWORD **)v60;
  *(_QWORD *)v62 = *(_QWORD *)v67;
  v63[0] = v67[0];
  *(_QWORD *)v57 = v26;
  if ( 8 * v25 )
  {
    *(_QWORD *)v59 = n[0] + 80;
    *(_QWORD *)v61 = n[0] + 72;
    do
    {
      v29 = sub_3A5200(*(__int64 *)v61, **(_DWORD **)v57, 0xFFFFFFFF);
      if ( *(_QWORD *)v59 != v29 )
      {
        do
        {
          v64 = *(_DWORD *)(v29 + 32);
          if ( v64 >= *(_DWORD *)(*(_QWORD *)v57 + 4LL) )
            break;
          v30 = *(__int64 **)(v29 + 40);
          v31 = 0;
          for ( i = &v30[*(_QWORD *)(v29 + 48)]; i != v30; ++v30 )
          {
            v40 = *v30;
            v41 = *(unsigned int *)(*v30 + 56);
            if ( ((1 << v41) & v31) == 0 )
            {
              v42 = (char *)ptr;
              v31 |= 1 << v41;
              if ( *(_QWORD *)&v67[2] < (unsigned __int64)(v24 + 1) )
              {
                ptr = (void *)qvector_reserve(*(_QWORD *)v58, ptr, v24 + 1, 56);
                v24 = *(_QWORD *)v67;
                v42 = (char *)ptr;
              }
              v33 = &v42[56 * v24];
              *(_DWORD *)v33 = -1;
              *((_QWORD *)v33 + 4) = 4;
              *((_QWORD *)v33 + 1) = 0;
              *(_QWORD *)(v33 + 44) = 0xFFFFFFFFLL;
              v34 = v64;
              v33[40] = 0;
              *((_OWORD *)v33 + 1) = 0;
              ++*(_QWORD *)v67;
              *(_DWORD *)v33 = v34;
              *((_DWORD *)v33 + 8) = *(_DWORD *)(v40 + 56);
              v35 = *(_DWORD *)(v40 + 72);
              v36 = nullptr;
              *((_DWORD *)v33 + 9) = v35;
              v37 = *(_QWORD *)(v29 + 72);
              if ( v37 )
              {
                n[0] = *(_QWORD *)(v29 + 72);
                v36 = (void *)qalloc_or_throw(n[0], v42, v37, v41, v27, v28);
                memcpy(v36, *(const void **)(v29 + 64), n[0]);
                v37 = n[0];
              }
              v38 = *((void **)v33 + 1);
              si128 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
              if ( v38 )
              {
                *((_QWORD *)v33 + 2) = 0;
                *(__m128i *)n = si128;
                qfree(v38);
                si128 = _mm_load_si128((const __m128i *)n);
              }
              *((_QWORD *)v33 + 1) = v36;
              *((__m128i *)v33 + 1) = si128;
              v24 = *(_QWORD *)v67;
            }
          }
          v29 = std::_Rb_tree_increment();
        }
        while ( *(_QWORD *)v59 != v29 );
        v26 = **(_QWORD **)v60;
        v25 = *(_QWORD *)(*(_QWORD *)v60 + 8LL);
      }
      *(_QWORD *)v57 += 8LL;
    }
    while ( *(_QWORD *)v57 != v26 + 8 * v25 );
  }
  else
  {
    LODWORD(v24) = v62[0];
  }
  v43 = sub_3A98C0(*(unsigned int ***)v58, v63[0], (int)v24 - v62[0], 0);
  if ( v43 >= 0 )
    v43 = v43 + v65 == *(_QWORD *)v67;
  v44 = (char *)ptr;
  if ( ptr )
  {
    v45 = *(_QWORD *)v67;
    if ( *(_QWORD *)v67 )
    {
      v46 = 0;
      v47 = 0;
      do
      {
        v48 = *(void **)&v44[v46 + 8];
        if ( v48 )
        {
          *(_QWORD *)&v44[v46 + 16] = 0;
          qfree(v48);
          v44 = (char *)ptr;
        }
        ++v47;
        v46 += 56;
      }
      while ( v45 != v47 );
    }
    *(_QWORD *)v67 = 0;
    qfree(v44);
  }
  return (unsigned int)v43;
}

