__int64 __fastcall sub_4EACC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        double a8,
        __m128 a9)
{
  char v14; // al
  __int64 v15; // rbp
  int v16; // r13d
  __int32 v17; // r15d
  int v18; // r14d
  bool v19; // zf
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  signed __int32 v22; // ecx
  __int64 v23; // rax
  void *v24; // rdi
  __int64 v25; // r13
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  char v28; // al
  void *v29; // rdi
  unsigned __int8 v30; // al
  unsigned int v31; // r13d
  __int64 v32; // rdx
  char v33; // al
  _QWORD *v34; // rax
  __int64 v35; // rdx
  signed __int32 v37; // ecx
  __int64 v38; // rax
  void *v39; // rdi
  int v40; // r8d
  __int64 v41; // rax
  __m128i v42; // xmm0
  void *v43; // rdi
  char v44; // al
  unsigned int v45; // esi
  signed __int32 v46; // ecx
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rbp
  void *v50; // r12
  void *v51; // rdi
  __m128i v52; // xmm0
  __m128i *v53; // rax
  void *v54; // rdi
  int v55; // ebp
  __int32 v56; // r15d
  int v57; // r13d
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r9
  _QWORD *v65; // rbp
  __int64 v66; // rsi
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r13
  __int64 v71; // rax
  __int64 v72; // rdx
  __m128i v73; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v74; // [rsp+10h] [rbp-98h] BYREF
  __m128i v75; // [rsp+20h] [rbp-88h] BYREF
  __int64 v76; // [rsp+38h] [rbp-70h]
  __int64 src; // [rsp+40h] [rbp-68h] BYREF
  __m128i src_8; // [rsp+48h] [rbp-60h] BYREF
  char v79; // [rsp+58h] [rbp-50h]
  unsigned __int64 v80; // [rsp+68h] [rbp-40h]

  v14 = *(_BYTE *)(a3 + 1);
  v80 = __readfsqword(0x28u);
  switch ( v14 )
  {
    case 3:
      v37 = 0x10000;
      v38 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL) - 1);
      if ( (unsigned int)v38 <= 7 )
      {
        v37 = dword_238A060[v38];
        if ( v37 != 0x10000 )
          v37 |= *(unsigned __int16 *)(a3 + 6);
      }
      v73.m128i_i32[0] = a6;
      sub_4E7970((__int64)&src, a1, a5, v37, a6, 0);
      v39 = *(void **)a2;
      v40 = v73.m128i_i32[0];
      v41 = src;
      v42 = _mm_loadu_si128(&src_8);
      src_8 = 0;
      src = 0;
      if ( v39 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v74.m128i_i32[0] = v40;
        v73.m128i_i64[0] = v41;
        v75 = v42;
        qfree(v39);
        v43 = (void *)src;
        v42 = _mm_load_si128(&v75);
        v40 = v74.m128i_i32[0];
        *(_QWORD *)a2 = v73.m128i_i64[0];
        v73.m128i_i64[0] = a2 + 8;
        v44 = v79;
        *(__m128i *)(a2 + 8) = v42;
        *(_BYTE *)(a2 + 24) = v44;
        if ( v43 )
        {
          src_8.m128i_i64[0] = 0;
          qfree(v43);
          v44 = *(_BYTE *)(a2 + 24);
          v40 = v74.m128i_i32[0];
        }
      }
      else
      {
        *(_QWORD *)a2 = v41;
        v73.m128i_i64[0] = a2 + 8;
        v44 = v79;
        *(__m128i *)(a2 + 8) = v42;
        *(_BYTE *)(a2 + 24) = v44;
      }
      if ( !v44 )
      {
        if ( !under_debugger )
          interr(2948);
        goto LABEL_90;
      }
      if ( (unsigned __int8)(v44 - 1) <= 1u )
        return 1;
      if ( (unsigned __int8)(v44 - 3) <= 6u )
        goto LABEL_62;
      v45 = *(_DWORD *)(a3 + 8);
      v46 = 0x10000;
      v47 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL) - 1);
      if ( (unsigned int)v47 <= 7 )
      {
        v48 = dword_238A060[v47];
        if ( v45 > 0xFFFF || v48 == 0x10000 )
          v46 = 0x10000;
        else
          v46 = v45 | v48;
      }
      sub_4E7970((__int64)&src, a1, a5, v46, v40, 0);
      if ( !v79 )
      {
        if ( !under_debugger )
          interr(2949);
        goto LABEL_90;
      }
      if ( (unsigned __int8)(v79 - 1) > 1u )
      {
        if ( (unsigned __int8)(v79 - 3) > 6u )
        {
          sub_4E2450(a2, (__int64)&src, a4, *(double *)v42.m128i_i64, 0.0, a9);
          v33 = *(_BYTE *)(a2 + 24);
          if ( (unsigned __int8)(v33 - 3) > 6u )
          {
            if ( src )
            {
              src_8.m128i_i64[0] = 0;
              qfree((void *)src);
              v33 = *(_BYTE *)(a2 + 24);
            }
            goto LABEL_26;
          }
        }
        if ( src )
        {
          src_8.m128i_i64[0] = 0;
          qfree((void *)src);
        }
LABEL_62:
        *(_BYTE *)(a2 + 24) = 4;
        v55 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        v56 = *(_DWORD *)(a4 + 8);
        v57 = *(unsigned __int16 *)(a4 + 12);
        v19 = *(_BYTE *)(a4 + 49) == 5;
        src = 0xFFFFFFFFLL;
        src_8.m128i_i32[0] = v56;
        src_8.m128i_i16[2] = v57;
        if ( v19 )
          v55 = *(_BYTE *)(a4 + 73) == 0;
        v20 = *(_QWORD *)a2;
        v58 = *(_QWORD *)(a2 + 16);
        src_8.m128i_i16[3] = v55;
        if ( (unsigned __int64)&src >= v20 && (unsigned __int64)&src < v20 + 16 * v58 )
        {
          if ( !v58 )
          {
            v71 = qvector_reserve(a2, v20, 1, 16);
            v72 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v71;
            v20 = v71 + 16 * v72;
          }
          *(_DWORD *)(v20 + 8) = v56;
          *(_QWORD *)v20 = 0xFFFFFFFFLL;
          *(_DWORD *)(v20 + 12) = v57 | (v55 << 16);
          goto LABEL_35;
        }
        if ( v58 )
          goto LABEL_34;
        goto LABEL_67;
      }
      v49 = src_8.m128i_i64[0];
      v50 = nullptr;
      if ( src_8.m128i_i64[0] )
      {
        v50 = (void *)qalloc_or_throw(16 * src_8.m128i_i64[0], (const char *)a1);
        memcpy(v50, (const void *)src, 16 * v49);
      }
      v51 = *(void **)a2;
      v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
      if ( *(_QWORD *)a2 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v74 = v52;
        qfree(v51);
        v52 = _mm_load_si128(&v74);
      }
      v53 = (__m128i *)v73.m128i_i64[0];
      v54 = (void *)src;
      *(_QWORD *)a2 = v50;
      *v53 = v52;
      *(_BYTE *)(a2 + 24) = v79;
      if ( v54 )
      {
        src_8.m128i_i64[0] = 0;
        qfree(v54);
      }
      break;
    case 4:
      v22 = 0x10000;
      v23 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL) - 1);
      if ( (unsigned int)v23 <= 7 )
      {
        v22 = dword_238A060[v23];
        if ( v22 != 0x10000 )
          v22 |= *(unsigned __int16 *)(a3 + 6);
      }
      sub_4E7970((__int64)&src, a1, a5, v22, a6, 0);
      v24 = *(void **)a2;
      v25 = src;
      src = 0;
      v26 = _mm_loadu_si128(&src_8);
      src_8 = 0;
      if ( v24 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v73 = v26;
        qfree(v24);
        v27 = _mm_load_si128(&v73);
        v28 = v79;
        *(_QWORD *)a2 = v25;
        v29 = (void *)src;
        *(_BYTE *)(a2 + 24) = v28;
        *(__m128i *)(a2 + 8) = v27;
        if ( v29 )
        {
          src_8.m128i_i64[0] = 0;
          qfree(v29);
          v28 = *(_BYTE *)(a2 + 24);
        }
      }
      else
      {
        v28 = v79;
        *(_QWORD *)a2 = v25;
        *(__m128i *)(a2 + 8) = v26;
        *(_BYTE *)(a2 + 24) = v28;
      }
      if ( !v28 )
      {
        if ( !under_debugger )
          interr(2910);
        goto LABEL_90;
      }
      if ( (unsigned __int8)(v28 - 1) > 1u )
      {
        if ( (unsigned __int8)(v28 - 3) > 6u )
        {
          v30 = v28 - 10;
          if ( v30 > 3u )
            return 1;
          v31 = *(_DWORD *)(a3 + 12);
          if ( !v31 )
            goto LABEL_27;
          v32 = *(_QWORD *)(a2 + 8);
          src = 0;
          src_8 = 0;
          if ( v32 )
          {
            v63 = qvector_reserve(&src, 0, v32, 8);
            v64 = *(_QWORD *)(a2 + 8);
            v65 = *(_QWORD **)a2;
            src = v63;
            v66 = v63;
            v67 = (__int64)&v65[2 * v64];
            if ( v65 != (_QWORD *)v67 )
            {
              v68 = src_8.m128i_i64[0];
              v69 = v31;
              while ( 1 )
              {
                v70 = v69 + *v65;
                v76 = v70;
                if ( src_8.m128i_i64[1] < (unsigned __int64)(v68 + 1) )
                {
                  v73.m128i_i64[0] = v67;
                  v74.m128i_i64[0] = v69;
                  src = qvector_reserve(&src, v66, v68 + 1, 8);
                  v66 = src;
                  v69 = v74.m128i_i64[0];
                  v68 = src_8.m128i_i64[0];
                  v67 = v73.m128i_i64[0];
                }
                *(_QWORD *)(v66 + 8 * v68) = v70;
                v65 += 2;
                v68 = ++src_8.m128i_i64[0];
                if ( (_QWORD *)v67 == v65 )
                  break;
                v66 = src;
              }
            }
          }
          sub_4E1940((__int64 *)a2, (__int64)&src, a4, 0.0, 0.0, a9);
          if ( src )
          {
            src_8.m128i_i64[0] = 0;
            qfree((void *)src);
          }
          v33 = *(_BYTE *)(a2 + 24);
LABEL_26:
          v30 = v33 - 10;
LABEL_27:
          if ( v30 <= 1u )
          {
            v34 = *(_QWORD **)a2;
            v35 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
            if ( *(_QWORD *)a2 != v35 )
            {
              if ( (((_BYTE)v35 - (_BYTE)v34) & 0x10) == 0
                || (*v34 = (unsigned int)*v34, v34 += 2, v34 != (_QWORD *)v35) )
              {
                do
                {
                  *v34 = (unsigned int)*v34;
                  v34[2] = (unsigned int)v34[2];
                  v34 += 4;
                }
                while ( v34 != (_QWORD *)v35 );
              }
            }
            sub_4DE040(a2);
          }
          return 1;
        }
        goto LABEL_62;
      }
      break;
    case 2:
      v15 = *(unsigned int *)(a3 + 12);
      *(_BYTE *)(a2 + 24) = 10;
      v16 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v17 = *(_DWORD *)(a4 + 8);
      v18 = *(unsigned __int16 *)(a4 + 12);
      v19 = *(_BYTE *)(a4 + 49) == 5;
      src = v15;
      src_8.m128i_i32[0] = v17;
      src_8.m128i_i16[2] = v18;
      if ( v19 )
        v16 = *(_BYTE *)(a4 + 73) == 0;
      v20 = *(_QWORD *)a2;
      src_8.m128i_i16[3] = v16;
      v21 = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int64)&src >= v20 && (unsigned __int64)&src < v20 + 16 * v21 )
      {
        if ( !v21 )
        {
          v61 = qvector_reserve(a2, v20, 1, 16);
          v62 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v61;
          v20 = v61 + 16 * v62;
        }
        *(_QWORD *)v20 = v15;
        *(_DWORD *)(v20 + 8) = v17;
        *(_DWORD *)(v20 + 12) = v18 | (v16 << 16);
        goto LABEL_35;
      }
      if ( v21 )
      {
LABEL_34:
        *(__m128i *)v20 = _mm_load_si128((const __m128i *)&src);
LABEL_35:
        ++*(_QWORD *)(a2 + 8);
        return 1;
      }
LABEL_67:
      v59 = qvector_reserve(a2, v20, 1, 16);
      v60 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v59;
      v20 = v59 + 16 * v60;
      goto LABEL_34;
    default:
      if ( !under_debugger )
        interr(2950);
LABEL_90:
      BUG();
  }
  return 1;
}

