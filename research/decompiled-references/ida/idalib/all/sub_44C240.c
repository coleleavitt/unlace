unsigned __int64 __fastcall sub_44C240(_QWORD *a1, __int64 a2, char **a3, const void **a4, const void **a5)
{
  unsigned __int64 v5; // rax
  char *v6; // r12
  const void **v8; // r9
  __m128i v9; // xmm0
  char *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // rbp
  const __m128i *v14; // rsi
  __int8 v15; // dl
  char *v16; // r11
  char v17; // di
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // rax
  char *v19; // rax
  char *v20; // rdx
  _BYTE *v21; // rdi
  __int64 v22; // rax
  char *i; // rdx
  bool v25; // al
  char v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  const void **v30; // r9
  _QWORD *v31; // rdi
  int v32; // eax
  unsigned __int16 *v33; // r9
  _QWORD *v34; // rax
  __int64 (*v35)(); // rdx
  __int64 (__fastcall *v36)(unsigned __int16 *, void **); // rax
  __int64 v37; // rbp
  char *v38; // rbx
  __int8 v39; // r10
  __int64 v40; // r13
  const __m128i *v41; // rsi
  char *v42; // rdx
  __int8 v43; // cl
  char v44; // di
  __int64 (__fastcall *v45)(__int64, __int64, __int64); // rax
  char v46; // al
  char *v47; // rax
  size_t v48; // rbp
  char *v49; // rbx
  char *v50; // rdi
  __m128i v51; // xmm2
  char v52; // al
  __m128i v53; // [rsp+0h] [rbp-98h] BYREF
  const void **v54; // [rsp+10h] [rbp-88h]
  _QWORD *v55; // [rsp+18h] [rbp-80h]
  const void **v56; // [rsp+20h] [rbp-78h]
  const void **v57; // [rsp+28h] [rbp-70h]
  __int64 v58; // [rsp+30h] [rbp-68h]
  __int8 v59; // [rsp+3Fh] [rbp-59h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v61; // [rsp+48h] [rbp-50h]
  unsigned __int64 v62; // [rsp+58h] [rbp-40h]

  v55 = a1;
  v54 = a5;
  v62 = __readfsqword(0x28u);
  v5 = (unsigned __int64)a4[1];
  if ( !v5 )
    return v62 - __readfsqword(0x28u);
  v6 = a3[1];
  if ( !v6 )
  {
    v54 = a4;
    v48 = 40 * v5;
    v53 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    v49 = (char *)qalloc_or_throw(40 * v5);
    memcpy(v49, *v54, v48);
    v50 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      qfree(v50);
    }
    v51 = _mm_load_si128(&v53);
    *a3 = v49;
    *(__m128i *)(a3 + 1) = v51;
    return v62 - __readfsqword(0x28u);
  }
  ptr = nullptr;
  v8 = (const void **)a2;
  v9.m128i_i64[0] = 0;
  v61 = 0;
  if ( 2LL * (_QWORD)v6 )
  {
    v56 = a4;
    v53.m128i_i64[0] = a2;
    sub_44A340((__int64)&ptr, 2LL * (_QWORD)v6);
    v8 = (const void **)a2;
    a4 = v56;
  }
  v53.m128i_i8[0] = 0;
  v10 = nullptr;
  v11 = 40LL * (_QWORD)v6;
  v12 = 40LL * (_QWORD)v6;
  do
  {
    v13 = 40LL * (_QWORD)v10;
    v14 = (const __m128i *)&(*a3)[40 * (_QWORD)v10];
    v15 = v14->m128i_i8[1];
    if ( !v15 )
      goto LABEL_13;
    v16 = (char *)*a4 + v13;
    v17 = v16[1];
    if ( !v17 )
      goto LABEL_13;
    if ( v15 != 99 )
    {
      if ( v17 == 99 )
        goto LABEL_25;
      v18 = *((__int64 (__fastcall **)(__int64, __int64, __int64))*v8 + 1);
      if ( v18 == sub_449EC0 )
      {
        if ( v15 != v17 )
          goto LABEL_12;
        if ( v15 == 100 )
        {
          v25 = v14->m128i_i64[1] == *((_QWORD *)v16 + 1);
        }
        else
        {
          if ( v15 != 1 )
            goto LABEL_12;
          v25 = v14->m128i_i16[3] == *((_WORD *)v16 + 3);
        }
        if ( !v25 )
          goto LABEL_12;
        goto LABEL_13;
      }
LABEL_32:
      v58 = v11;
      v57 = a4;
      v56 = v8;
      v26 = v18((__int64)v8, (__int64)v14, (__int64)v16);
      v8 = v56;
      a4 = v57;
      v11 = v58;
      if ( !v26 )
      {
        v14 = (const __m128i *)&(*a3)[v13];
LABEL_12:
        v19 = (char *)ptr;
        v53.m128i_i8[0] = 1;
        *(__m128i *)((char *)ptr + 40 * (_QWORD)v10) = _mm_loadu_si128(v14);
        *(__m128i *)&v19[v13 + 16] = _mm_loadu_si128(v14 + 1);
        *(_DWORD *)&v19[v13 + 32] = v14[2].m128i_i32[0];
        v20 = (char *)*a4;
        *(__m128i *)&v19[v12] = _mm_loadu_si128((const __m128i *)((char *)*a4 + 40 * (_QWORD)v10));
        v9 = _mm_loadu_si128((const __m128i *)&v20[v13 + 16]);
        *(__m128i *)&v19[v12 + 16] = v9;
        *(_DWORD *)&v19[v12 + 32] = *(_DWORD *)&v20[v13 + 32];
        goto LABEL_13;
      }
      goto LABEL_13;
    }
    if ( v17 != 99 || v14[1].m128i_i64[0] != *((_QWORD *)v16 + 2) )
    {
LABEL_25:
      v14->m128i_i8[1] = 0;
      goto LABEL_13;
    }
    v18 = *((__int64 (__fastcall **)(__int64, __int64, __int64))*v8 + 1);
    if ( v18 != sub_449EC0 )
      goto LABEL_32;
LABEL_13:
    ++v10;
    v12 += 40;
  }
  while ( v6 != v10 );
  v56 = v8;
  if ( !v53.m128i_i8[0] )
    goto LABEL_15;
  v57 = (const void **)v11;
  v27 = sub_3BE900(v55, (unsigned __int64)v54, 4);
  v11 = (__int64)v57;
  v30 = v56;
  v58 = v27;
  if ( (~BYTE1(v27) & 6) != 0 )
    goto LABEL_15;
  v31 = v56 + 2;
  v56 = v57;
  v57 = v30;
  v32 = decode_insn(v31, v54, v28, v29, v11, v30, *(double *)v9.m128i_i64);
  v11 = (__int64)v56;
  if ( !v32 )
    goto LABEL_15;
  v33 = (unsigned __int16 *)v57;
  v34 = *v57;
  v35 = *((__int64 (**)())*v57 + 2);
  if ( v35 == sub_449F10 )
  {
LABEL_37:
    v36 = (__int64 (__fastcall *)(unsigned __int16 *, void **))v34[3];
    v57 = (const void **)v11;
    v56 = (const void **)v33;
    if ( (char *)v36 == (char *)j__check_spoiled_jpt )
    {
      check_spoiled_jpt(v33, &ptr);
      v33 = (unsigned __int16 *)v56;
      v11 = (__int64)v57;
    }
    else
    {
      v36(v33, &ptr);
      v11 = (__int64)v57;
      v33 = (unsigned __int16 *)v56;
    }
  }
  else
  {
    v57 = v56;
    v56 = (const void **)v33;
    v52 = ((__int64 (__fastcall *)(unsigned __int16 *, void **))v35)(v33, &ptr);
    v33 = (unsigned __int16 *)v56;
    v11 = (__int64)v57;
    if ( !v52 )
    {
      v34 = *v56;
      goto LABEL_37;
    }
  }
  v37 = v11;
  v38 = nullptr;
  v39 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v40 = 40LL * (_QWORD)v38;
      v41 = (const __m128i *)((char *)ptr + 40 * (_QWORD)v38);
      v42 = (char *)ptr + v37;
      v43 = v41->m128i_i8[1];
      if ( !v43 )
      {
        v42[1] = 0;
        goto LABEL_41;
      }
      v44 = v42[1];
      if ( v44 )
      {
        v45 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v33 + 8LL);
        if ( v45 == sub_449EC0 )
        {
          if ( v43 != v44 )
            goto LABEL_54;
          if ( v43 != 99 )
          {
            if ( v43 != 100 )
            {
              if ( v43 == 1 && v41->m128i_i16[3] == *((_WORD *)v42 + 3) )
                goto LABEL_57;
LABEL_54:
              v39 = v53.m128i_i8[0];
              goto LABEL_41;
            }
            if ( v41->m128i_i64[1] != *((_QWORD *)v42 + 1) )
              goto LABEL_54;
          }
        }
        else
        {
          v57 = (const void **)v11;
          v59 = v39;
          v56 = (const void **)v33;
          v46 = ((__int64 (__fastcall *)(unsigned __int16 *))v45)(v33);
          v33 = (unsigned __int16 *)v56;
          v11 = (__int64)v57;
          if ( !v46 )
            goto LABEL_54;
          v39 = v59;
          v41 = (const __m128i *)((char *)ptr + v40);
        }
LABEL_57:
        v47 = *a3;
        *(__m128i *)&v47[40 * (_QWORD)v38] = _mm_loadu_si128(v41);
        *(__m128i *)&v47[v40 + 16] = _mm_loadu_si128(v41 + 1);
        *(_DWORD *)&v47[v40 + 32] = v41[2].m128i_i32[0];
        v41->m128i_i8[1] = 0;
        *((_BYTE *)ptr + v37 + 1) = 0;
LABEL_41:
        ++v38;
        v37 += 40;
        if ( v38 == v6 )
          goto LABEL_45;
        continue;
      }
      break;
    }
    ++v38;
    v41->m128i_i8[1] = 0;
    v37 += 40;
    if ( v38 != v6 )
      continue;
    break;
  }
LABEL_45:
  if ( v39 && (v58 & 0x10001000) == 0 && (v58 & 0x10000) != 0 )
  {
    v53.m128i_i64[0] = v11;
    sub_3C2650(v55, (unsigned __int64)v54);
    v11 = v53.m128i_i64[0];
  }
LABEL_15:
  v21 = ptr;
  v22 = 0;
  for ( i = nullptr; i != v6; ++i )
  {
    if ( v21[v22 + 1] && v21[v11 + 1 + v22] )
    {
      (*a3)[v22 + 1] = 0;
      v21 = ptr;
    }
    v22 += 40;
  }
  if ( v21 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v21);
  }
  return v62 - __readfsqword(0x28u);
}
