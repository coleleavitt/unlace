__m128i *__fastcall sub_1D3B740(__m128i *a1, _QWORD *a2, const __m128i *a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  const __m128i *v6; // r15
  __m128i *v9; // rbx
  __int64 v10; // rax
  unsigned __int8 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int8 v15; // r12
  int v16; // eax
  __m128i v17; // xmm4
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // r12d
  int v23; // eax
  __m128i v24; // xmm2
  __m128i v25; // xmm0
  __int64 v26; // rdi
  void *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm6
  __int64 v33; // rcx
  __int64 v34; // rdx
  const __m128i *v35; // r13
  const __m128i *v36; // r12
  __int64 v37; // rdx
  const __m128i *v38; // rbx
  const __m128i *v39; // r13
  const __m128i *v40; // r12
  __int8 v41; // dl
  __int64 v42; // rcx
  __int8 v43; // dl
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  const __m128i *v47; // rdx
  __int64 v48; // rcx
  __int8 v49; // bp
  __int64 v50; // rax
  __m128i v51; // xmm3
  __int64 v52; // r12
  __int64 v53; // r9
  __int64 v54; // rax
  __m128i v55; // xmm6
  bool v56; // cc
  unsigned int v57; // [rsp+8h] [rbp-230h]
  const __m128i *v58; // [rsp+18h] [rbp-220h]
  __m128i si128; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-1E8h]
  __m128i v61; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-1C8h]
  __int8 v63; // [rsp+78h] [rbp-1C0h]
  __m128i v64; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v65; // [rsp+90h] [rbp-1A8h]
  __int8 v66; // [rsp+98h] [rbp-1A0h]
  void *v67[2]; // [rsp+A0h] [rbp-198h] BYREF
  _QWORD v68[16]; // [rsp+B0h] [rbp-188h] BYREF
  void *ptr[2]; // [rsp+130h] [rbp-108h] BYREF
  _QWORD v70[31]; // [rsp+140h] [rbp-F8h] BYREF

  v6 = a4;
  v9 = a1;
  if ( a3[1].m128i_i8[8]
    || a4[1].m128i_i8[8]
    || (v57 = a5,
        v10 = sub_F1D610((__int64)a3),
        a5 = v57,
        v11 = v10,
        v12 = v10 & 0xFFFFFFFFFFFFFFF0LL,
        (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0)
    || (v13 = sub_F1D610((__int64)v6), (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0)
    && (a5 = v57,
        (*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v12 + 8) | v11) & 7) == (*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v13) & 7)) )
  {
    switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
    {
      case 0:
      case 9:
        if ( (v6->m128i_i32[0] & 0x7FFFFFFF) != 9 )
          goto LABEL_9;
        v33 = a3->m128i_u32[1];
        v34 = v6->m128i_u32[1];
        if ( !(_BYTE)a5 && (_DWORD)v33 != (_DWORD)v34 )
          goto LABEL_9;
        v35 = (const __m128i *)a3->m128i_i64[1];
        v36 = (const __m128i *)v6->m128i_i64[1];
        v37 = 3 * v34;
        ptr[1] = (void *)0x800000000LL;
        ptr[0] = v70;
        v58 = (const __m128i *)((char *)v35 + 24 * v33);
        if ( v35 != v58 )
        {
          v38 = v35;
          v39 = v36;
          v40 = (const __m128i *)((char *)v36 + 8 * v37);
          while ( 1 )
          {
            if ( v40 == v39 )
            {
              sub_1CB6790((__int64)ptr, v38);
            }
            else
            {
              v41 = v6[1].m128i_i8[8];
              v64 = _mm_loadu_si128(v39);
              v42 = v39[1].m128i_i64[0];
              v66 = v41;
              v43 = a3[1].m128i_i8[8];
              v65 = v42;
              v61 = _mm_loadu_si128(v38);
              v44 = v38[1].m128i_i64[0];
              v63 = v43;
              v62 = v44;
              sub_1D3C010(v67, a2, &v61, &v64, 0);
              si128 = _mm_load_si128((const __m128i *)v67);
              v60 = v68[0];
              if ( ((__int64)v67[0] & 0x7FFFFFFF) == 0
                && ((v38->m128i_i32[0] & 0x7FFFFFFF) != 0 || (v39->m128i_i32[0] & 0x7FFFFFFF) != 0) )
              {
                v9 = a1;
                a1[1].m128i_i8[8] = 0;
                a1->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
                a1->m128i_i64[1] = 0;
                goto LABEL_81;
              }
              v39 = (const __m128i *)((char *)v39 + 24);
              sub_1CB6790((__int64)ptr, &si128);
            }
            v38 = (const __m128i *)((char *)v38 + 24);
            if ( v58 == v38 )
            {
              v9 = a1;
              v47 = (const __m128i *)ptr[0];
              v48 = LODWORD(ptr[1]);
              goto LABEL_78;
            }
          }
        }
        v48 = 0;
        v47 = (const __m128i *)v70;
LABEL_78:
        v49 = a3[1].m128i_i8[8];
        if ( v49 )
          v49 = v6[1].m128i_i8[8];
        sub_F1EDF0((__int64)v67, a2, v47, v48, a5, a6);
        v50 = v68[0];
        v9[1].m128i_i8[8] = v49;
        v51 = _mm_load_si128((const __m128i *)v67);
        v9[1].m128i_i64[0] = v50;
        *v9 = v51;
LABEL_81:
        v27 = ptr[0];
        if ( ptr[0] != v70 )
          goto LABEL_59;
        break;
      case 1:
        v15 = a3[1].m128i_i8[8];
        if ( (v6->m128i_i32[0] & 0x7FFFFFFF) != 1
          || (v28 = v6->m128i_i64[1],
              v29 = a3->m128i_i64[1],
              (*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
             | ((unsigned __int8)v29 | (unsigned __int8)*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v28 | (unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL]) & 7)) )
        {
          if ( v6[1].m128i_i8[8] == v15 )
            goto LABEL_9;
          if ( !v15 )
            v6 = a3;
          goto LABEL_51;
        }
        if ( !v15 )
          v15 = v6[1].m128i_i8[8];
        v30 = sub_ABBE20(a2, v29, v28, 0);
        sub_F1D250((__int64)ptr, v30, 0, 0);
        v31 = v70[0];
        a1[1].m128i_i8[8] = v15;
        v32 = _mm_load_si128((const __m128i *)ptr);
        a1[1].m128i_i64[0] = v31;
        *a1 = v32;
        break;
      case 2:
        v16 = v6->m128i_i32[0] & 0x7FFFFFFF;
        if ( v16 == 8 )
          goto LABEL_20;
        if ( v16 != 4 )
        {
          if ( v16 != 2 || !sub_1D38370(a3[1].m128i_i64[0], v6[1].m128i_i64[0]) )
            goto LABEL_9;
          goto LABEL_20;
        }
        if ( !v6[1].m128i_i8[8] )
          goto LABEL_51;
        v52 = a3->m128i_i64[1];
        sub_1CB2F30((__int64)v67, (__int64)v6);
        sub_F1F190((__int64)ptr, a2, (void ***)v67, v52, 0, v53);
        v54 = v70[0];
        a1[1].m128i_i8[8] = 0;
        v55 = _mm_load_si128((const __m128i *)ptr);
        v56 = LODWORD(v67[1]) <= 0x40;
        a1[1].m128i_i64[0] = v54;
        *a1 = v55;
        if ( !v56 && v67[0] )
          operator delete[](v67[0]);
        break;
      case 3:
        v18 = v6->m128i_i32[0] & 0x7FFFFFFF;
        switch ( v18 )
        {
          case 8:
            v45 = sub_ABBE20(a2, a3->m128i_i64[1], *(_QWORD *)(v6->m128i_i64[1] + 8), 0);
            sub_F1D250((__int64)ptr, v45, 1, 0);
            *a1 = _mm_load_si128((const __m128i *)ptr);
            v46 = v70[0];
            a1[1].m128i_i8[8] = 0;
            a1[1].m128i_i64[0] = v46;
            break;
          case 4:
            goto LABEL_51;
          case 3:
            v19 = sub_ABBE20(a2, a3->m128i_i64[1], v6->m128i_i64[1], 0);
            sub_F1D250((__int64)ptr, v19, 1, 0);
            *a1 = _mm_load_si128((const __m128i *)ptr);
            v20 = v70[0];
            a1[1].m128i_i8[8] = 0;
            a1[1].m128i_i64[0] = v20;
            break;
          default:
            goto LABEL_9;
        }
        break;
      case 4:
        v21 = v6->m128i_i32[0] & 0x7FFFFFFF;
        if ( v21 != 2 && v21 != 8 )
        {
          if ( v21 != 4 )
            goto LABEL_9;
          sub_1CB2F30((__int64)ptr, (__int64)v6);
          sub_1CB2F30((__int64)v67, (__int64)a3);
          v22 = sub_98E2D0((__int64 *)v67, (__int64 *)ptr);
          if ( LODWORD(v67[1]) > 0x40 && v67[0] )
            operator delete[](v67[0]);
          if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
            operator delete[](ptr[0]);
          if ( v22 )
            goto LABEL_9;
        }
        if ( !a3[1].m128i_i8[8] )
          v6 = a3;
LABEL_51:
        *a1 = _mm_loadu_si128(v6);
        a1[1] = _mm_loadu_si128(v6 + 1);
        break;
      case 5:
        v23 = v6->m128i_i32[0] & 0x7FFFFFFF;
        if ( v23 != 8 && (v23 != 5 || !sub_F1DBF0((__int64)a3, (__int64)v6)) )
          goto LABEL_9;
LABEL_20:
        v17 = _mm_loadu_si128(a3 + 1);
        *a1 = _mm_loadu_si128(a3);
        a1[1] = v17;
        break;
      case 6:
        if ( (v6->m128i_i32[0] & 0x7FFFFFFF) != 6 )
          goto LABEL_9;
        sub_F22A90(ptr, v6->m128i_i64[1]);
        sub_F22A90(v67, a3->m128i_i64[1]);
        if ( !sub_AB7BF0(a2, (__int64 *)v67, (__int64 *)ptr, 0) )
          goto LABEL_9;
        v25 = _mm_loadu_si128(a3 + 1);
        *a1 = _mm_loadu_si128(a3);
        a1[1] = v25;
        break;
      case 7:
        if ( (v6->m128i_i32[0] & 0x7FFFFFFF) != 7 )
          goto LABEL_9;
        sub_F22A90(ptr, v6->m128i_i64[1]);
        sub_F22A90(v67, a3->m128i_i64[1]);
        if ( !sub_AB7BF0(a2, (__int64 *)v67, (__int64 *)ptr, 0) )
          goto LABEL_9;
        v24 = _mm_loadu_si128(a3 + 1);
        *a1 = _mm_loadu_si128(a3);
        a1[1] = v24;
        break;
      case 8:
        if ( (v6->m128i_i32[0] & 0x7FFFFFFF) == 8 )
        {
          v26 = a3->m128i_i64[1];
          v67[0] = v68;
          ptr[0] = v70;
          v67[1] = (void *)0x2000000000LL;
          ptr[1] = (void *)0x2000000000LL;
          sub_F1A490(v26, (__int64)v67, (__int64)a2, 1, 0);
          sub_F1A490(v6->m128i_i64[1], (__int64)ptr, (__int64)a2, 1, 0);
          if ( (unsigned __int8)sub_2222ED0(v67, ptr) )
          {
            if ( !a3[1].m128i_i8[8] )
              v6 = a3;
            *v9 = _mm_loadu_si128(v6);
            v9[1] = _mm_loadu_si128(v6 + 1);
          }
          else
          {
            v9[1].m128i_i8[8] = 0;
            v9->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
            v9->m128i_i64[1] = 0;
          }
          if ( ptr[0] != v70 )
            free(ptr[0]);
          v27 = v67[0];
          if ( v67[0] != v68 )
LABEL_59:
            free(v27);
        }
        else
        {
          sub_1D3C010(a1, a2, v6, a3, 0);
        }
        break;
    }
  }
  else
  {
LABEL_9:
    a1->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    a1[1].m128i_i8[8] = 0;
    a1->m128i_i64[1] = 0;
  }
  return v9;
}
