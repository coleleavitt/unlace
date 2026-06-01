unsigned __int64 __fastcall sub_652EA0(__int64 *a1, unsigned int **a2, int a3, unsigned __int8 a4, char a5)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int *v10; // r12
  unsigned int v11; // r15d
  __int64 p_ptr; // rdi
  char *v13; // r12
  char v14; // al
  bool v15; // cc
  __int64 *v16; // r15
  const char *v17; // rsi
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // r14
  __m128i v23; // xmm1
  unsigned int v24; // ecx
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // r8
  char v32; // r14
  __int64 v33; // rax
  _BYTE *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  _BYTE *v37; // rsi
  char v38; // r8
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rsi
  bool v41; // zf
  void **v42; // rbx
  __int64 v43; // r14
  void *v44; // rdi
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r14
  void **v49; // rsi
  __int64 v50; // rax
  void *v51; // rax
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // r13
  _QWORD *v55; // rdi
  __int64 v56; // rdx
  void *v57; // rsi
  __int64 v58; // rcx
  __int64 v60; // rax
  char *v61; // [rsp+8h] [rbp-C8h]
  __int64 v62; // [rsp+18h] [rbp-B8h]
  unsigned int v63; // [rsp+18h] [rbp-B8h]
  char v65; // [rsp+2Ah] [rbp-A6h]
  unsigned int v67; // [rsp+2Ch] [rbp-A4h]
  char v68; // [rsp+2Ch] [rbp-A4h]
  unsigned int v69; // [rsp+2Ch] [rbp-A4h]
  unsigned int v70; // [rsp+30h] [rbp-A0h]
  _QWORD *v71; // [rsp+30h] [rbp-A0h]
  unsigned int v72; // [rsp+38h] [rbp-98h]
  unsigned __int64 v73; // [rsp+38h] [rbp-98h]
  void *v74; // [rsp+38h] [rbp-98h]
  void *v75; // [rsp+40h] [rbp-90h] BYREF
  __int128 v76; // [rsp+48h] [rbp-88h]
  void *v77; // [rsp+60h] [rbp-70h] BYREF
  __int128 v78; // [rsp+68h] [rbp-68h]
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v80; // [rsp+88h] [rbp-48h]
  unsigned __int64 v81; // [rsp+98h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  v77 = nullptr;
  v75 = nullptr;
  v76 = 0;
  v78 = 0;
  if ( a5 )
  {
    v8 = a1[264] + a1[251] + a1[238] + a1[225];
    if ( v8 )
    {
      v73 = a1[264] + a1[251] + a1[238] + a1[225];
      v51 = (void *)qvector_reserve(&v75, 0, v8, 4);
      v52 = *((_QWORD *)&v78 + 1);
      v75 = v51;
      if ( *((_QWORD *)&v78 + 1) < v73 )
      {
        v53 = qvector_reserve(&v77, 0, v73, 12);
        v54 = *((_QWORD *)&v78 + 1);
        v74 = (void *)v53;
        *((_QWORD *)&v78 + 1) = v52;
        v55 = v77;
        v56 = v78 - 1;
        if ( (__int64)v78 - 1 >= 0 )
        {
          v57 = (void *)v53;
          do
          {
            v58 = *v55;
            v53 += 12;
            v55 = (_QWORD *)((char *)v55 + 12);
            *(_QWORD *)(v53 - 12) = v58;
            *(_DWORD *)(v53 - 4) = *((_DWORD *)v55 - 1);
          }
          while ( v56-- != 0 );
          v74 = v57;
          v55 = v77;
        }
        qfree(v55);
        *((_QWORD *)&v78 + 1) = v54;
        v77 = v74;
      }
    }
  }
  v9 = (__int64)a2[1];
  v62 = (__int64)&(*a2)[2 * v9];
  if ( (unsigned int *)v62 != *a2 )
  {
    v10 = *a2;
    do
    {
      v11 = *v10;
      v67 = v10[1] - *v10;
      v70 = *v10 + a3;
      sub_652DF0((__int64)a1, (unsigned __int64 *)&v77, (__int64 *)&v75, *v10, v70, v67, 0, a4);
      sub_652DF0((__int64)a1, (unsigned __int64 *)&v77, (__int64 *)&v75, v11, v70, v67, 1, a4);
      v10 += 2;
    }
    while ( (unsigned int *)v62 != v10 );
  }
  p_ptr = (__int64)&ptr;
  v13 = (char *)v77;
  v61 = (char *)v77 + 12 * v78;
  if ( v77 != v61 )
  {
    do
    {
      if ( a4 )
      {
        v14 = v13[9];
        v15 = v14 <= 100;
        if ( v14 == 100 )
          goto LABEL_48;
      }
      else
      {
        v29 = sub_3B90A0(a1, *(_DWORD *)v13);
        v30 = *((unsigned int *)v13 + 1);
        p_ptr = v29;
        v31 = (unsigned __int8)v13[9] | 0x100u;
        LOBYTE(ptr) = v13[8];
        netnode_supset(v29, v30, &ptr, 1, v31);
        v14 = v13[9];
        v15 = v14 <= 100;
        if ( v14 == 100 )
        {
LABEL_48:
          v63 = 25;
          v16 = a1 + 213;
          goto LABEL_13;
        }
      }
      if ( v15 )
      {
        if ( v14 == 68 )
        {
          v63 = 27;
          v16 = a1 + 226;
        }
        else
        {
          if ( v14 != 88 )
            goto LABEL_111;
          v63 = 31;
          v16 = a1 + 252;
        }
      }
      else
      {
        if ( v14 != 120 )
        {
LABEL_111:
          if ( !under_debugger )
            interr(511);
          BUG();
        }
        v63 = 29;
        v16 = a1 + 239;
      }
LABEL_13:
      v17 = (const char *)*((unsigned int *)v13 + 1);
      v18 = (__int64)(v16 + 8);
      v71 = v16 + 8;
      v19 = *(_DWORD *)v13;
      v68 = v13[8];
      v20 = v16[9];
      v72 = *((_DWORD *)v13 + 1);
      if ( !v20 )
        goto LABEL_70;
      p_ptr = (unsigned int)v17;
      do
      {
        while ( 1 )
        {
          v9 = *(unsigned int *)(v20 + 32);
          if ( (unsigned int)v9 < v19 || v19 >= (unsigned int)v9 && *(_DWORD *)(v20 + 36) < (unsigned int)v17 )
            break;
          v18 = v20;
          v20 = *(_QWORD *)(v20 + 16);
          if ( !v20 )
            goto LABEL_20;
        }
        v20 = *(_QWORD *)(v20 + 24);
      }
      while ( v20 );
LABEL_20:
      v72 = *((_DWORD *)v13 + 1);
      if ( v71 == (_QWORD *)v18 )
      {
LABEL_70:
        v21 = must_journal(p_ptr, v17, v9);
        v18 = (__int64)(v16 + 8);
      }
      else
      {
        if ( __PAIR64__((unsigned int)v17, v19) == *(_QWORD *)(v18 + 32) )
        {
          if ( v68 == *(_BYTE *)(v18 + 40) )
            goto LABEL_41;
          v32 = must_journal((unsigned int)v17, v17, v9);
          if ( !v32 )
            goto LABEL_51;
          goto LABEL_53;
        }
        v21 = must_journal((unsigned int)v17, v17, v9);
      }
      if ( !v21 )
      {
        v22 = v16[3];
        ++v16[6];
        if ( v22 )
          goto LABEL_25;
        goto LABEL_65;
      }
      v32 = 0;
LABEL_53:
      ptr = nullptr;
      v80 = 0;
      sub_3FA160((__int64 *)&ptr, v19);
      sub_3FA160((__int64 *)&ptr, v72);
      v33 = v80;
      v34 = ptr;
      if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v80 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v80 + 1, 1);
        v34 = ptr;
        v33 = v80;
      }
      v34[v33] = v32;
      v35 = v80;
      v36 = v80 + 1;
      *(_QWORD *)&v80 = v80 + 1;
      if ( v32 )
      {
        v37 = ptr;
        v38 = *(_BYTE *)(v18 + 40);
        v39 = v35 + 2;
        if ( *((_QWORD *)&v80 + 1) < v39 )
        {
          v65 = *(_BYTE *)(v18 + 40);
          ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
          v36 = v80;
          v37 = ptr;
          v38 = v65;
        }
        v37[v36] = v38;
        v36 = v80 + 1;
        *(_QWORD *)&v80 = v80 + 1;
      }
      v40 = ptr;
      if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v36 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v36 + 1, 1);
        v36 = v80;
        v40 = ptr;
      }
      v40[v36] = v68;
      v17 = (const char *)ptr;
      *(_QWORD *)&v80 = v80 + 1;
      add_undo_record(v63, ptr, v80);
      p_ptr = (__int64)ptr;
      if ( ptr )
      {
        *(_QWORD *)&v80 = 0;
        qfree(ptr);
      }
      if ( v32 )
      {
LABEL_51:
        *(_BYTE *)(v18 + 40) = v68;
        goto LABEL_41;
      }
      v22 = v16[3];
      ++v16[6];
      if ( v22 )
      {
LABEL_25:
        v16[3] = *(_QWORD *)v22;
        goto LABEL_26;
      }
LABEL_65:
      v22 = v16[4];
      if ( v22 == v16[5] )
      {
        p_ptr = 4194288;
        v47 = qalloc_or_throw(4194288, v17);
        v16[4] = v47;
        v48 = v47;
        v49 = (void **)*v16;
        v16[5] = v47 + 4194288;
        v50 = v16[1];
        v9 = v50 + 1;
        if ( v16[2] < (unsigned __int64)(v50 + 1) )
        {
          p_ptr = (__int64)v16;
          v60 = qvector_reserve(v16, v49, v9, 8);
          *v16 = v60;
          v49 = (void **)v60;
          v50 = v16[1];
        }
        v49[v50] = (void *)v48;
        v22 = v16[4];
        ++v16[1];
      }
      v16[4] = v22 + 48;
LABEL_26:
      v23 = _mm_cvtsi32_si128(v72);
      *(_BYTE *)(v22 + 40) = v68;
      *(_QWORD *)(v22 + 32) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), v23).m128i_u64[0];
      if ( (_QWORD *)v18 == v71 )
      {
        if ( !v16[12]
          || (v9 = v16[11], v18 = 0, v46 = *(_DWORD *)(v9 + 32), v46 >= v19)
          && (v19 < v46 || *(_DWORD *)(v9 + 36) >= (unsigned int)_mm_cvtsi128_si32(v23)) )
        {
LABEL_35:
          p_ptr = (__int64)v16;
          v18 = sub_6511B0((__int64)v16, v19, v72);
        }
      }
      else
      {
        v24 = *(_DWORD *)(v18 + 32);
        if ( v19 >= v24 )
        {
          if ( v24 < v19 )
          {
            if ( v18 == v16[11] )
            {
              v9 = v18;
              p_ptr = 0;
              if ( !v18 )
                goto LABEL_73;
              goto LABEL_40;
            }
LABEL_32:
            p_ptr = v18;
            v69 = *(_DWORD *)(v18 + 32);
            v26 = std::_Rb_tree_increment();
            v24 = v69;
            v9 = v26;
            v27 = *(_DWORD *)(v26 + 32);
            if ( v19 >= v27 && (v27 < v19 || v72 >= *(_DWORD *)(v9 + 36)) )
              goto LABEL_35;
            if ( !*(_QWORD *)(v18 + 24) )
              goto LABEL_95;
            v18 = v9;
            goto LABEL_36;
          }
          v25 = *(_DWORD *)(v18 + 36);
          if ( v72 >= v25 )
          {
            p_ptr = v72;
            if ( v25 >= v72 )
              goto LABEL_73;
            if ( v18 == v16[11] )
            {
LABEL_95:
              v9 = v18;
              if ( !v18 )
              {
LABEL_73:
                if ( v22 )
                {
                  *(_QWORD *)v22 = v16[3];
                  v41 = v16[6]-- == 1;
                  v16[3] = v22;
                  if ( v41 )
                  {
                    v42 = (void **)*v16;
                    p_ptr = *v16 + 8 * v16[1];
                    if ( *v16 != p_ptr )
                    {
                      v43 = *v16 + 8 * v16[1];
                      do
                      {
                        v44 = *v42++;
                        qfree(v44);
                      }
                      while ( (void **)v43 != v42 );
                      p_ptr = *v16;
                    }
                    if ( p_ptr )
                    {
                      v16[1] = 0;
                      qfree((void *)p_ptr);
                      *v16 = 0;
                      v16[2] = 0;
                    }
                    v16[5] = 0;
                    *(_OWORD *)(v16 + 3) = 0;
                  }
                }
                goto LABEL_41;
              }
LABEL_96:
              p_ptr = v24 >= v19 && v72 < *(_DWORD *)(v9 + 36);
              goto LABEL_40;
            }
            goto LABEL_32;
          }
        }
        v9 = v18;
        if ( v18 != v16[10] )
        {
          p_ptr = v18;
          v9 = std::_Rb_tree_decrement();
          v45 = *(_DWORD *)(v9 + 32);
          if ( v45 >= v19 && (v19 < v45 || *(_DWORD *)(v9 + 36) >= v72) )
            goto LABEL_35;
          if ( *(_QWORD *)(v9 + 24) )
            v9 = v18;
          else
            v18 = 0;
        }
      }
LABEL_36:
      if ( !v9 )
        goto LABEL_73;
      if ( v71 == (_QWORD *)v9 || v18 )
      {
        p_ptr = 1;
      }
      else
      {
        v24 = *(_DWORD *)(v9 + 32);
        p_ptr = 1;
        if ( v19 >= v24 )
          goto LABEL_96;
      }
LABEL_40:
      std::_Rb_tree_insert_and_rebalance();
      ++v16[12];
LABEL_41:
      v13 += 12;
    }
    while ( v61 != v13 );
  }
  sub_6518A0(a1, (unsigned int **)&v75);
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  return v81 - __readfsqword(0x28u);
}

