signed __int64 __fastcall sub_19F65E0(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int64 result; // rax
  __int64 v8; // r12
  unsigned __int8 v9; // dl
  unsigned __int32 v10; // r10d
  unsigned __int32 v11; // ebp
  __m128i *v12; // rax
  unsigned __int32 v13; // r8d
  unsigned __int8 v14; // r14
  unsigned __int32 v15; // r9d
  unsigned __int32 v16; // r11d
  unsigned __int32 v17; // edi
  unsigned __int32 v18; // r15d
  unsigned __int8 v19; // cl
  bool v20; // zf
  unsigned __int32 v21; // r13d
  unsigned __int32 v22; // r14d
  __int8 v23; // cl
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int32 v28; // r10d
  __int64 v29; // rcx
  __m128i *v30; // rax
  unsigned __int8 v31; // dl
  __int64 v32; // r8
  unsigned __int32 v33; // edi
  unsigned __int64 i; // rbp
  unsigned __int8 v35; // r9
  unsigned __int32 v36; // r13d
  unsigned int v37; // r14d
  unsigned int v38; // r11d
  unsigned __int32 v39; // r13d
  unsigned int v40; // r11d
  unsigned int v41; // r14d
  __int32 v42; // r8d
  __int32 v43; // edi
  __int32 v44; // ecx
  __int32 v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int32 v48; // eax
  __int32 v49; // r8d
  __int32 v50; // edi
  __int8 v51; // cl
  __int32 v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int8 v55; // cl
  bool v56; // zf
  unsigned __int32 v57; // r13d
  unsigned __int32 v58; // edx
  _QWORD *m128i_i64; // r12
  __int64 v60; // rbp
  __int64 v61; // r13
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // r9
  __int64 v68; // r10
  __int8 v69; // dl
  __int64 v70; // rcx
  __int64 v71; // rax
  __int32 v72; // edi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int128 v75; // [rsp-28h] [rbp-98h]
  __int128 v76; // [rsp-18h] [rbp-88h]
  unsigned __int32 v77; // [rsp+0h] [rbp-70h]
  __m128i *v78; // [rsp+8h] [rbp-68h]
  unsigned __int32 v79; // [rsp+10h] [rbp-60h]
  unsigned __int32 v80; // [rsp+10h] [rbp-60h]
  unsigned __int32 v81; // [rsp+14h] [rbp-5Ch]
  unsigned __int32 v82; // [rsp+14h] [rbp-5Ch]

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 512 )
    return result;
  if ( !a3 )
  {
    m128i_i64 = a2->m128i_i64;
    goto LABEL_63;
  }
  v8 = a3;
  v78 = a1 + 2;
  do
  {
    v9 = a1[2].m128i_u8[8];
    --v8;
    v10 = a1[2].m128i_u32[0];
    v11 = a1[2].m128i_u32[1];
    v12 = &a1[2 * (result >> 6)];
    v13 = a1[2].m128i_u32[3];
    v77 = a1[3].m128i_u32[0];
    v14 = v12->m128i_u8[8];
    v15 = v12->m128i_i32[0];
    v16 = v12->m128i_u32[1];
    v17 = v12->m128i_u32[3];
    v18 = v12[1].m128i_u32[0];
    if ( v9 < v14
      || v9 == v14
      && (v13 < v17 || v13 == v17 && (v10 < v15 || v10 == v15 && (v11 < v16 || v11 == v16 && a1[3].m128i_i32[0] < v18))) )
    {
      v19 = a2[-2].m128i_u8[8];
      v20 = v14 == v19;
      if ( v14 < v19 )
        goto LABEL_16;
      v21 = a2[-1].m128i_u32[0];
      v79 = a2[-2].m128i_u32[0];
      v81 = a2[-2].m128i_u32[1];
      v22 = a2[-2].m128i_u32[3];
      if ( v20 && (v22 > v17 || v22 == v17 && (v79 > v15 || v79 == v15 && (v16 < v81 || v16 == v81 && v18 < v21))) )
        goto LABEL_16;
      if ( v9 >= v19
        && (v9 != v19
         || v13 >= v22 && (v13 != v22 || v10 >= v79 && (v10 != v79 || v11 >= v81 && (v11 != v81 || v77 >= v21)))) )
      {
        goto LABEL_72;
      }
      v48 = a1[1].m128i_i32[0];
      v49 = a1->m128i_i32[0];
      v50 = a1->m128i_i32[1];
      v51 = a1->m128i_i8[8];
      v52 = a1->m128i_i32[3];
      *a1 = _mm_loadu_si128(a2 - 2);
LABEL_40:
      a1[1].m128i_i32[0] = a2[-1].m128i_i32[0];
      a2[-2].m128i_i32[3] = v52;
      v53 = a2[-1].m128i_i64[1];
      a2[-1].m128i_i32[0] = v48;
      v54 = a1[1].m128i_i64[1];
      a2[-2].m128i_i32[0] = v49;
      a2[-2].m128i_i32[1] = v50;
      a2[-2].m128i_i8[8] = v51;
      a1[1].m128i_i64[1] = v53;
      a2[-1].m128i_i64[1] = v54;
      goto LABEL_17;
    }
    v55 = a2[-2].m128i_u8[8];
    v56 = v9 == v55;
    if ( v9 < v55 )
      goto LABEL_72;
    v57 = a2[-1].m128i_u32[0];
    v80 = a2[-2].m128i_u32[0];
    v82 = a2[-2].m128i_u32[1];
    v58 = a2[-2].m128i_u32[3];
    if ( !v56 )
    {
      if ( v14 < v55 )
        goto LABEL_59;
      if ( v14 != v55 )
        goto LABEL_16;
      goto LABEL_52;
    }
    if ( v13 < v58 || v13 == v58 && (v10 < v80 || v10 == v80 && (v11 < v82 || v11 == v82 && v77 < v57)) )
    {
LABEL_72:
      v69 = a1->m128i_i8[8];
      v70 = a1->m128i_i64[0];
      v71 = *(__int64 *)((char *)&a1->m128i_i64[1] + 4);
      *a1 = _mm_loadu_si128(a1 + 2);
      v72 = a1[3].m128i_i32[0];
      a1[2].m128i_i8[8] = v69;
      *(__int64 *)((char *)&a1[2].m128i_i64[1] + 4) = v71;
      v73 = a1[3].m128i_i64[1];
      v74 = a1[1].m128i_i64[1];
      a1[1].m128i_i32[0] = v72;
      a1[2].m128i_i64[0] = v70;
      a1[1].m128i_i64[1] = v73;
      a1[3].m128i_i64[1] = v74;
      goto LABEL_17;
    }
    if ( v14 < v55 )
    {
LABEL_59:
      v49 = a1->m128i_i32[0];
      v50 = a1->m128i_i32[1];
      v51 = a1->m128i_i8[8];
      v52 = a1->m128i_i32[3];
      v48 = a1[1].m128i_i32[0];
      *a1 = _mm_loadu_si128(a2 - 2);
      goto LABEL_40;
    }
LABEL_52:
    if ( v58 > v17 || v58 == v17 && (v80 > v15 || v80 == v15 && (v82 > v16 || v82 == v16 && v57 > v18)) )
      goto LABEL_59;
LABEL_16:
    v23 = a1->m128i_i8[8];
    v24 = a1->m128i_i64[0];
    v25 = *(__int64 *)((char *)&a1->m128i_i64[1] + 4);
    *a1 = _mm_loadu_si128(v12);
    a1[1].m128i_i32[0] = v12[1].m128i_i32[0];
    v12->m128i_i8[8] = v23;
    v26 = v12[1].m128i_i64[1];
    *(__int64 *)((char *)&v12->m128i_i64[1] + 4) = v25;
    v27 = a1[1].m128i_i64[1];
    v12->m128i_i64[0] = v24;
    a1[1].m128i_i64[1] = v26;
    v12[1].m128i_i64[1] = v27;
LABEL_17:
    v28 = a1[1].m128i_u32[0];
    v29 = a1->m128i_u32[3];
    v30 = a2;
    v31 = a1->m128i_u8[8];
    v32 = a1->m128i_u32[1];
    v33 = a1->m128i_i32[0];
    for ( i = (unsigned __int64)v78; ; i += 32LL )
    {
      v35 = *(_BYTE *)(i + 8);
      if ( v31 <= v35 )
      {
        v36 = *(_DWORD *)i;
        v37 = *(_DWORD *)(i + 4);
        v38 = *(_DWORD *)(i + 12);
        if ( v31 != v35
          || (unsigned int)v29 <= v38
          && ((_DWORD)v29 != v38
           || v33 <= v36
           && (v33 != v36 || (unsigned int)v32 <= v37 && ((_DWORD)v32 != v37 || v28 <= *(_DWORD *)(i + 16)))) )
        {
          break;
        }
      }
LABEL_37:
      ;
    }
    do
    {
      do
        v30 -= 2;
      while ( v31 < (unsigned int)v30->m128i_i8[8] );
      v39 = v30->m128i_i32[0];
      v40 = v30->m128i_u32[1];
      v41 = v30->m128i_u32[3];
    }
    while ( v31 == v30->m128i_i8[8]
         && (v41 > (unsigned int)v29
          || v41 == (_DWORD)v29
          && (v33 < v39 || v33 == v39 && ((unsigned int)v32 < v40 || (_DWORD)v32 == v40 && v30[1].m128i_i32[0] > v28))) );
    if ( i < (unsigned __int64)v30 )
    {
      v42 = *(_DWORD *)i;
      v43 = *(_DWORD *)(i + 4);
      v44 = *(_DWORD *)(i + 12);
      v45 = *(_DWORD *)(i + 16);
      *(__m128i *)i = _mm_loadu_si128(v30);
      *(_DWORD *)(i + 16) = v30[1].m128i_i32[0];
      v30->m128i_i32[3] = v44;
      v46 = v30[1].m128i_i64[1];
      v30[1].m128i_i32[0] = v45;
      v47 = *(_QWORD *)(i + 24);
      v30->m128i_i32[0] = v42;
      v30->m128i_i32[1] = v43;
      v30->m128i_i8[8] = v35;
      *(_QWORD *)(i + 24) = v46;
      v30[1].m128i_i64[1] = v47;
      v28 = a1[1].m128i_u32[0];
      v29 = a1->m128i_u32[3];
      v31 = a1->m128i_u8[8];
      v32 = a1->m128i_u32[1];
      v33 = a1->m128i_i32[0];
      goto LABEL_37;
    }
    sub_19F65E0(i, a2, v8, v29, v32);
    result = i - (_QWORD)a1;
    if ( (__int64)(i - (_QWORD)a1) <= 512 )
      return result;
    a2 = (__m128i *)i;
  }
  while ( v8 );
  m128i_i64 = (_QWORD *)i;
LABEL_63:
  v60 = result >> 5;
  v61 = ((result >> 5) - 2) >> 1;
  sub_19F6080((__int64)a1, v61, result >> 5, a4, a5, a6, *(_OWORD *)&a1[2 * v61], *(_OWORD *)&a1[2 * v61 + 1]);
  do
  {
    --v61;
    sub_19F6080((__int64)a1, v61, v60, 32 * v61, v62, v63, *(_OWORD *)&a1[2 * v61], *(_OWORD *)&a1[2 * v61 + 1]);
  }
  while ( v61 );
  do
  {
    m128i_i64 -= 4;
    v65 = *m128i_i64;
    v66 = m128i_i64[1];
    v67 = m128i_i64[2];
    *(__m128i *)m128i_i64 = _mm_loadu_si128(a1);
    v68 = m128i_i64[3];
    *((_DWORD *)m128i_i64 + 4) = a1[1].m128i_i32[0];
    m128i_i64[3] = a1[1].m128i_i64[1];
    *((_QWORD *)&v76 + 1) = v68;
    *(_QWORD *)&v76 = v67;
    *((_QWORD *)&v75 + 1) = v66;
    *(_QWORD *)&v75 = v65;
    result = (signed __int64)sub_19F6080((__int64)a1, 0, ((char *)m128i_i64 - (char *)a1) >> 5, v64, v62, v67, v75, v76);
  }
  while ( (char *)m128i_i64 - (char *)a1 > 32 );
  return result;
}
