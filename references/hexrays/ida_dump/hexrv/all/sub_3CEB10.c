__int64 __fastcall sub_3CEB10(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  unsigned int v10; // edx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 *v20; // rdx
  __int64 v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // rdi
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rbp
  unsigned __int64 *v38; // rdx
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbp
  unsigned int v44; // edx
  __int64 **v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rbp
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbp
  unsigned int v52; // edx
  unsigned __int64 *v53; // rcx
  unsigned __int64 v54; // rax
  unsigned int v55; // edx
  unsigned __int64 *v56; // rcx
  unsigned __int64 v57; // rax
  __int64 *v58; // rdx
  __int64 *v59; // rcx
  unsigned __int64 *v60; // rcx
  __m128i v61; // [rsp+8h] [rbp-90h] BYREF
  __int128 v62; // [rsp+18h] [rbp-80h]
  __int128 v63; // [rsp+30h] [rbp-68h] BYREF
  __int128 v64; // [rsp+40h] [rbp-58h]
  unsigned __int64 v65; // [rsp+58h] [rbp-40h]

  v7 = a1[253] == 0;
  v65 = __readfsqword(0x28u);
  if ( v7 && !a1[262] )
    return 0;
  switch ( a2 )
  {
    case 18:
      v44 = *(_DWORD *)a3;
      if ( v44 > 0x2F )
      {
        v45 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v45 + 1;
      }
      else
      {
        v45 = (__int64 **)(*(_QWORD *)(a3 + 16) + v44);
        *(_DWORD *)a3 = v44 + 8;
      }
      v46 = *v45;
      v62 = 0;
      v61.m128i_i64[1] = 0;
      v47 = v46[1];
      v61.m128i_i64[0] = *v46;
      v61.m128i_i64[1] = qvector_reserve(&v61.m128i_u64[1], 0, 1, 16);
      *(__m128i *)(v61.m128i_i64[1] + 16 * v62) = _mm_unpacklo_epi64(
                                                    _mm_loadl_epi64(&v61),
                                                    (__m128i)(unsigned __int64)v47);
      v63 = 0;
      v51 = v62 + 1;
      v64 = 0;
      *(_QWORD *)&v62 = v51;
      if ( v51 )
      {
        *((_QWORD *)&v63 + 1) = qalloc_or_throw(16 * v51);
        *((_QWORD *)&v64 + 1) = v51;
        memcpy(*((void **)&v63 + 1), (const void *)v61.m128i_i64[1], 16 * v51);
        *(_QWORD *)&v64 = v51;
      }
      sub_3CE9A0(a1, (__int64)&v63, 6, v48, v49, v50);
      if ( *((_QWORD *)&v63 + 1) )
      {
        *(_QWORD *)&v64 = 0;
        qfree(*((_QWORD *)&v63 + 1));
      }
      if ( v61.m128i_i64[1] )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61.m128i_i64[1]);
      }
      return 0;
    case 20:
      v34 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v60 = *(unsigned __int64 **)(a3 + 8);
        v38 = v60 + 1;
        *(_QWORD *)(a3 + 8) = v60 + 1;
        v37 = *v60;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        v37 = *(_QWORD *)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (unsigned __int64 *)(v36 + v35);
          *(_DWORD *)a3 = v34 + 16;
          goto LABEL_24;
        }
        v38 = *(unsigned __int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_24:
      v39 = *v38;
      v62 = 0;
      v61.m128i_i64[1] = 0;
      v61.m128i_i64[1] = qvector_reserve(&v61.m128i_u64[1], 0, 1, 16);
      *(__m128i *)(v61.m128i_i64[1] + 16 * v62) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v39);
      v63 = 0;
      v43 = v62 + 1;
      v64 = 0;
      *(_QWORD *)&v62 = v43;
      if ( v43 )
      {
        *((_QWORD *)&v63 + 1) = qalloc_or_throw(16 * v43);
        *((_QWORD *)&v64 + 1) = v43;
        memcpy(*((void **)&v63 + 1), (const void *)v61.m128i_i64[1], 16 * v43);
        *(_QWORD *)&v64 = v43;
      }
      sub_3CE9A0(a1, (__int64)&v63, 5, v40, v41, v42);
      if ( *((_QWORD *)&v63 + 1) )
      {
        *(_QWORD *)&v64 = 0;
        qfree(*((_QWORD *)&v63 + 1));
      }
      v33 = v61.m128i_i64[1];
      if ( v61.m128i_i64[1] )
        goto LABEL_20;
      return 0;
    case 30:
      v14 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v58 = *(__int64 **)(a3 + 8);
        v59 = v58 + 1;
        *(_QWORD *)(a3 + 8) = v58 + 1;
        v17 = *v58;
LABEL_47:
        v20 = v59 + 1;
        *(_QWORD *)(a3 + 8) = v59 + 1;
        v19 = *v59;
        goto LABEL_48;
      }
      v15 = *(_QWORD *)(a3 + 16);
      v16 = v14 + 8;
      *(_DWORD *)a3 = v16;
      v17 = *(_QWORD *)(v15 + v14);
      if ( (unsigned int)v16 > 0x2F )
      {
        v59 = *(__int64 **)(a3 + 8);
        goto LABEL_47;
      }
      v18 = v14 + 16;
      *(_DWORD *)a3 = v18;
      v19 = *(_QWORD *)(v15 + v16);
      if ( (unsigned int)v18 <= 0x2F )
      {
        v20 = (__int64 *)(v18 + v15);
        *(_DWORD *)a3 = v14 + 24;
        goto LABEL_13;
      }
      v20 = *(__int64 **)(a3 + 8);
LABEL_48:
      *(_QWORD *)(a3 + 8) = v20 + 1;
LABEL_13:
      v21 = *v20;
      v61.m128i_i64[1] = 0;
      v62 = 0;
      v22 = v21 + v17;
      v61.m128i_i64[1] = qvector_reserve(&v61.m128i_u64[1], 0, 1, 16);
      v26 = v19 + v21;
      v27 = (_QWORD *)(16 * v62 + v61.m128i_i64[1]);
      *v27 = v17;
      v27[1] = v22;
      v28 = v61.m128i_i64[1];
      v29 = v62 + 1;
      v30 = v62 + 2;
      *(_QWORD *)&v62 = v62 + 1;
      if ( *((_QWORD *)&v62 + 1) < v30 )
      {
        v61.m128i_i64[1] = qvector_reserve(&v61.m128i_u64[1], v61.m128i_i64[1], v30, 16);
        v28 = v61.m128i_i64[1];
        v29 = v62;
      }
      v31 = (_QWORD *)(16 * v29 + v28);
      *v31 = v19;
      v31[1] = v26;
      v63 = 0;
      v32 = v62 + 1;
      v64 = 0;
      *(_QWORD *)&v62 = v32;
      if ( v32 )
      {
        *((_QWORD *)&v63 + 1) = qalloc_or_throw(16 * v32);
        *((_QWORD *)&v64 + 1) = v32;
        memcpy(*((void **)&v63 + 1), (const void *)v61.m128i_i64[1], 16 * v32);
        *(_QWORD *)&v64 = v32;
      }
      sub_3CE9A0(a1, (__int64)&v63, 6, v23, v24, v25);
      if ( *((_QWORD *)&v63 + 1) )
      {
        *(_QWORD *)&v64 = 0;
        qfree(*((_QWORD *)&v63 + 1));
      }
      v33 = v61.m128i_i64[1];
      if ( v61.m128i_i64[1] )
      {
LABEL_20:
        *(_QWORD *)&v62 = 0;
        qfree(v33);
      }
      return 0;
    case 32:
    case 39:
    case 41:
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v11 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      v12 = *v11;
      v64 = 0;
      v63 = v12;
      sub_3CE9A0(a1, (__int64)&v63, 4, (unsigned __int64)v11, a5, a6);
      v13 = *((_QWORD *)&v63 + 1);
      if ( *((_QWORD *)&v63 + 1) )
        goto LABEL_45;
      return 0;
    case 33:
      v55 = *(_DWORD *)a3;
      if ( v55 > 0x2F )
      {
        v56 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v56 + 1;
      }
      else
      {
        v56 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v55);
        *(_DWORD *)a3 = v55 + 8;
      }
      v57 = *v56;
      v64 = 0;
      v63 = v57;
      sub_3CE9A0(a1, (__int64)&v63, 2, (unsigned __int64)v56, a5, a6);
      v13 = *((_QWORD *)&v63 + 1);
      if ( *((_QWORD *)&v63 + 1) )
        goto LABEL_45;
      return 0;
    case 36:
      v52 = *(_DWORD *)a3;
      if ( v52 > 0x2F )
      {
        v53 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v53 + 1;
      }
      else
      {
        v53 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v52);
        *(_DWORD *)a3 = v52 + 8;
      }
      v54 = *v53;
      v64 = 0;
      v63 = v54;
      sub_3CE9A0(a1, (__int64)&v63, 3, (unsigned __int64)v53, a5, a6);
      v13 = *((_QWORD *)&v63 + 1);
      if ( *((_QWORD *)&v63 + 1) )
      {
LABEL_45:
        *(_QWORD *)&v64 = 0;
        qfree(v13);
      }
      return 0;
    default:
      return 0;
  }
}
