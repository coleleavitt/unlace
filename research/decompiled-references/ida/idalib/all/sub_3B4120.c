__int64 __fastcall sub_3B4120(__int64 a1, __int64 *a2)
{
  size_t v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void **v6; // r10
  __int64 v7; // rsi
  void **v8; // r9
  int v9; // r15d
  char *v10; // rbx
  char *v11; // r13
  char *v12; // rax
  int v13; // r14d
  _QWORD *v14; // r11
  int v15; // r8d
  __int128 v16; // xmm0
  __int64 v17; // r12
  int v18; // ebp
  int v19; // ebp
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  void *v23; // rax
  char *v24; // rsi
  char *v25; // rax
  void *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rbp
  char *v29; // rsi
  size_t v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // r13
  __int64 *v33; // rbx
  int v34; // r14d
  __int64 *i; // rbp
  char *v36; // r15
  int v37; // eax
  void *v38; // r12
  void *v39; // rdi
  __m128i si128; // xmm0
  __int64 v41; // r12
  void *v42; // rax
  int v43; // r12d
  char *v44; // rdx
  char *v45; // r13
  __int64 v46; // rbp
  char *v47; // rbx
  void *v48; // rdi
  __int64 v50; // rax
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 range; // rax
  char v55; // [rsp+0h] [rbp-B0h]
  int v56[2]; // [rsp+0h] [rbp-B0h]
  int v57[2]; // [rsp+0h] [rbp-B0h]
  size_t n[2]; // [rsp+8h] [rbp-A8h] BYREF
  int v59[2]; // [rsp+18h] [rbp-98h]
  int v60[2]; // [rsp+20h] [rbp-90h]
  int v61[2]; // [rsp+28h] [rbp-88h]
  __int64 *v62; // [rsp+30h] [rbp-80h]
  int v63[2]; // [rsp+38h] [rbp-78h]
  void *v64; // [rsp+40h] [rbp-70h]
  __int64 v65; // [rsp+48h] [rbp-68h]
  int v66; // [rsp+54h] [rbp-5Ch]
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  void *v68[2]; // [rsp+60h] [rbp-50h]
  unsigned __int64 v69; // [rsp+70h] [rbp-40h]

  v62 = a2;
  v69 = __readfsqword(0x28u);
  *(_OWORD *)v68 = 0;
  ptr = nullptr;
  *(_QWORD *)v60 = &ptr;
  v2 = *(_QWORD *)(qword_2CCB598 + 1576);
  v3 = *(_QWORD *)qword_2C819A8;
  n[0] = v2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v3 + 72))(qword_2C819A8) )
  {
    v66 = 0;
    *(_QWORD *)v60 = &ptr;
  }
  else
  {
    v6 = *(void ***)(v2 + 144);
    v7 = v2 + 128;
    v66 = 0;
    v65 = v2 + 128;
    *(_QWORD *)v60 = &ptr;
    if ( (void **)(v2 + 128) != v6 )
    {
      while ( 1 )
      {
        v8 = (void **)v6[4];
        if ( v62[1]
          && (v7 = (__int64)v6[4],
              *(_QWORD *)v59 = v6,
              *(_QWORD *)v57 = v8,
              range = rangeset_t_find_range(v62, v7),
              v8 = *(void ***)v57,
              v6 = *(void ***)v59,
              range) )
        {
          v9 = 272;
        }
        else
        {
          v9 = 0;
        }
        v10 = (char *)v6[5];
        v11 = &v10[8 * (_QWORD)v6[6]];
        if ( v10 != v11 )
          break;
LABEL_30:
        v6 = (void **)std::_Rb_tree_increment(v6, v7, v4, v5);
        if ( (void **)v65 == v6 )
          goto LABEL_31;
      }
      v12 = (char *)v6[5];
      v13 = 0;
      v7 = 1;
      do
      {
        v4 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(*(_QWORD *)v12 + 76LL) & 0x40) != 0 )
        {
          v4 = (unsigned int)(1 << *(_DWORD *)(v4 + 64));
          v13 |= v4;
        }
        v12 += 8;
      }
      while ( v11 != v12 );
      v55 = 0;
      v14 = nullptr;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(_QWORD *)v10;
        v5 = *(unsigned int *)(*(_QWORD *)v10 + 64LL);
        v18 = 1 << v5;
        if ( ((1 << v5) & v9) != 0 )
          goto LABEL_29;
        if ( *(_DWORD *)(v17 + 44) != 1
          || *(_DWORD *)(v17 + 40)
          || (v64 = v6,
              v63[0] = v15,
              v50 = *(_QWORD *)qword_2C819A8,
              *(_QWORD *)v61 = v14,
              *(_QWORD *)v59 = v8,
              v51 = (*(__int64 (__fastcall **)(__int64, __int64, double))(v50 + 80))(qword_2C819A8, v7, *(double *)&v16),
              v8 = *(void ***)v59,
              v14 = *(_QWORD **)v61,
              v16 = 0,
              v15 = v63[0],
              v6 = (void **)v64,
              v51) )
        {
          if ( (v15 & v18) == 0 )
          {
            v15 |= v18;
            v19 = v13 & v18;
            if ( v19 )
            {
              if ( *(_DWORD *)(v17 + 44) != 3
                || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1576) + 48LL) + 32LL * *(_QWORD *)(v17 + 56) + 8) == 1 )
              {
                *(_DWORD *)(v17 + 76) &= ~0x40u;
              }
              if ( v55 )
              {
                LOBYTE(v19) = 0;
                if ( v14 == (_QWORD *)(n[0] + 80) )
                  goto LABEL_26;
              }
              else
              {
                v14 = (_QWORD *)(n[0] + 80);
                v20 = *(_QWORD **)(n[0] + 88);
                *(_QWORD *)v61 = n[0] + 80;
                if ( !v20 )
                  goto LABEL_25;
                do
                {
                  while ( 1 )
                  {
                    v21 = v20[2];
                    v22 = v20[3];
                    if ( v20[4] < (unsigned __int64)v8 )
                      break;
                    v14 = v20;
                    v20 = (_QWORD *)v20[2];
                    if ( !v21 )
                      goto LABEL_23;
                  }
                  v20 = (_QWORD *)v20[3];
                }
                while ( v22 );
LABEL_23:
                if ( *(_QWORD **)v61 == v14 || (unsigned __int64)v8 < v14[4] )
                {
LABEL_25:
                  v55 = 1;
                  v14 = *(_QWORD **)v61;
                  LOBYTE(v19) = 0;
                  goto LABEL_26;
                }
              }
              v52 = v14[5];
              v53 = v52 + 8LL * v14[6];
              if ( v52 == v53 )
              {
LABEL_68:
                v55 = 1;
                LOBYTE(v19) = 0;
              }
              else
              {
                while ( (*(_BYTE *)(*(_QWORD *)v52 + 76LL) & 0x18) == 0
                     || *(_DWORD *)(v17 + 64) != *(_DWORD *)(*(_QWORD *)v52 + 64LL) )
                {
                  v52 += 8;
                  if ( v53 == v52 )
                    goto LABEL_68;
                }
                ++v66;
                LOBYTE(v19) = 9;
                v55 = 1;
              }
            }
LABEL_26:
            v23 = v68[0];
            v24 = (char *)ptr;
            if ( v68[1] < (char *)v68[0] + 1 )
            {
              v64 = v6;
              v63[0] = v15;
              *(_QWORD *)v61 = v14;
              *(_QWORD *)v59 = v8;
              ptr = (void *)qvector_reserve(*(_QWORD *)v60, ptr, (char *)v68[0] + 1, 56);
              v24 = (char *)ptr;
              v6 = (void **)v64;
              v16 = 0;
              v23 = v68[0];
              v15 = v63[0];
              v14 = *(_QWORD **)v61;
              v8 = *(void ***)v59;
            }
            v5 = 0xFFFFFFFFLL;
            v25 = &v24[56 * (_QWORD)v23];
            v7 = 4;
            *(_QWORD *)v25 = -1;
            *((_QWORD *)v25 + 4) = 4;
            *((_QWORD *)v25 + 1) = 0;
            *(_QWORD *)(v25 + 44) = 0xFFFFFFFFLL;
            v25[40] = v19;
            *((_OWORD *)v25 + 1) = v16;
            ++v68[0];
            *(_QWORD *)v25 = v8;
            *((_DWORD *)v25 + 8) = *(_DWORD *)(v17 + 64);
            v4 = *(unsigned int *)(v17 + 80);
            *((_DWORD *)v25 + 9) = v4;
          }
LABEL_29:
          v10 += 8;
          if ( v11 == v10 )
            goto LABEL_30;
        }
        else
        {
          v10 += 8;
          if ( v11 == v10 )
            goto LABEL_30;
        }
      }
    }
  }
LABEL_31:
  v26 = v68[0];
  v27 = v62[1];
  v28 = *v62;
  v64 = v68[0];
  LODWORD(v65) = v68[0];
  *(_QWORD *)v59 = v28;
  if ( 16 * v27 )
  {
    *(_QWORD *)v61 = n[0] + 80;
    *(_QWORD *)v63 = n[0] + 72;
    do
    {
      v29 = **(char ***)v59;
      v32 = sub_3A98A0(*(__int64 *)v63, **(_QWORD **)v59, 0xFFFFFFFFFFFFFFFFLL);
      if ( *(_QWORD **)v61 != v32 )
      {
        do
        {
          *(_QWORD *)v56 = v32[4];
          if ( *(_QWORD *)v56 >= *(_QWORD *)(*(_QWORD *)v59 + 8LL) )
            break;
          v33 = (__int64 *)v32[5];
          v34 = 0;
          for ( i = &v33[v32[6]]; i != v33; ++v33 )
          {
            v41 = *v33;
            v31 = *(unsigned int *)(*v33 + 64);
            if ( ((1 << v31) & v34) == 0 )
            {
              v29 = (char *)ptr;
              v34 |= 1 << v31;
              if ( v68[1] < (char *)v26 + 1 )
              {
                ptr = (void *)qvector_reserve(*(_QWORD *)v60, ptr, (char *)v26 + 1, 56);
                v26 = v68[0];
                v29 = (char *)ptr;
              }
              v36 = &v29[56 * (_QWORD)v26];
              *(_QWORD *)v36 = -1;
              *((_QWORD *)v36 + 4) = 4;
              *((_QWORD *)v36 + 1) = 0;
              *(_QWORD *)(v36 + 44) = 0xFFFFFFFFLL;
              v36[40] = 0;
              *((_OWORD *)v36 + 1) = 0;
              ++v68[0];
              *(_QWORD *)v36 = *(_QWORD *)v56;
              *((_DWORD *)v36 + 8) = *(_DWORD *)(v41 + 64);
              v37 = *(_DWORD *)(v41 + 80);
              v38 = nullptr;
              *((_DWORD *)v36 + 9) = v37;
              v30 = v32[9];
              if ( v30 )
              {
                n[0] = v32[9];
                v42 = (void *)qalloc_or_throw(n[0]);
                v29 = (char *)v32[8];
                v38 = v42;
                memcpy(v42, v29, n[0]);
                v30 = n[0];
              }
              v39 = *((void **)v36 + 1);
              si128 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
              if ( v39 )
              {
                *((_QWORD *)v36 + 2) = 0;
                *(__m128i *)n = si128;
                qfree(v39);
                si128 = _mm_load_si128((const __m128i *)n);
              }
              *((_QWORD *)v36 + 1) = v38;
              *((__m128i *)v36 + 1) = si128;
              v26 = v68[0];
            }
          }
          v32 = (_QWORD *)std::_Rb_tree_increment(v32, v29, v30, v31);
        }
        while ( *(_QWORD **)v61 != v32 );
        v28 = *v62;
        v27 = v62[1];
      }
      *(_QWORD *)v59 += 16LL;
    }
    while ( *(_QWORD *)v59 != v28 + 16 * v27 );
  }
  else
  {
    LODWORD(v26) = (_DWORD)v64;
  }
  v43 = sub_3ADFA0(*(_QWORD **)v60, v65, (int)v26 - (int)v64, 0);
  if ( v43 >= 0 )
    v43 = (void *)(v43 + v66) == v68[0];
  v44 = (char *)ptr;
  if ( ptr )
  {
    v45 = (char *)v68[0];
    if ( v68[0] )
    {
      v46 = 0;
      v47 = nullptr;
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
    v68[0] = nullptr;
    qfree(v44);
  }
  return (unsigned int)v43;
}
