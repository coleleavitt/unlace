unsigned __int64 __fastcall sub_48CD60(__int64 *a1, __int64 a2)
{
  const char *v2; // rsi
  char v3; // bl
  int v4; // eax
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  size_t v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  size_t v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  char *v19; // r9
  size_t v20; // rax
  __int64 v21; // r15
  const char *v22; // r9
  size_t v23; // r8
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  size_t v26; // rbx
  __int64 v27; // r13
  __int64 v28; // r12
  const char *v29; // r15
  size_t v30; // rax
  __int64 v31; // rbx
  size_t v32; // r9
  unsigned __int64 v33; // r11
  __int64 v34; // rsi
  __int64 v35; // rax
  const char *v36; // r13
  size_t v37; // rax
  __int64 v38; // rbx
  size_t v39; // r12
  unsigned __int64 v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // r14
  unsigned __int64 v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-A0h]
  const char *v54; // [rsp+8h] [rbp-98h]
  __int64 v55; // [rsp+10h] [rbp-90h]
  __int64 *v56; // [rsp+18h] [rbp-88h]
  void *v57; // [rsp+20h] [rbp-80h]
  __int64 v58; // [rsp+28h] [rbp-78h]
  size_t v59; // [rsp+30h] [rbp-70h]
  __int64 v60; // [rsp+38h] [rbp-68h] BYREF
  __m128i v61; // [rsp+40h] [rbp-60h] BYREF
  _BYTE src[5]; // [rsp+5Bh] [rbp-45h] BYREF
  _QWORD v63[8]; // [rsp+60h] [rbp-40h] BYREF

  v55 = a2;
  v63[0] = __readfsqword(0x28u);
  v56 = &v60;
  v60 = 0;
  v61 = 0;
  v60 = qvector_reserve(&v60, 0, 4096, 1);
  v2 = (const char *)v60;
  v3 = *((_BYTE *)a1 + 112) | 2;
  if ( v61.m128i_i64[1] < (unsigned __int64)(v61.m128i_i64[0] + 1) )
  {
    v60 = qvector_reserve(v56, v60, v61.m128i_i64[0] + 1, 1);
    v2 = (const char *)v60;
    *(_BYTE *)(v60 + v61.m128i_i64[0]) = v3;
    v4 = *((_DWORD *)a1 + 28);
    ++v61.m128i_i64[0];
    if ( (v4 & 0x10) == 0 )
    {
LABEL_3:
      if ( (v4 & 0x40) == 0 )
        goto LABEL_4;
      goto LABEL_28;
    }
  }
  else
  {
    *(_BYTE *)(v60 + v61.m128i_i64[0]) = v3;
    v4 = *((_DWORD *)a1 + 28);
    ++v61.m128i_i64[0];
    if ( (v4 & 0x10) == 0 )
      goto LABEL_3;
  }
  LODWORD(v53) = v4 & 0x30;
  v2 = (const char *)v63;
  v54 = (const char *)v63;
  v9 = pack_dd(src, v63, *((unsigned int *)a1 + 2)) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v45 = v61.m128i_i64[0];
    v46 = v61.m128i_i64[0] + v9;
    if ( __CFADD__(v61.m128i_i64[0], v9) )
    {
      if ( v61.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( v61.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          v61.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_63;
      }
      v46 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v47 = v60;
    v48 = v61.m128i_i64[0];
    if ( v61.m128i_i64[1] < v46 )
    {
      v60 = qvector_reserve(v56, v60, v46, 1);
      v47 = v60;
      v48 = v61.m128i_i64[0];
    }
    memset((void *)(v47 + v48), 0, v46 - v48);
    v61.m128i_i64[0] = v46;
LABEL_63:
    v2 = src;
    memcpy((void *)(v45 + v60), src, v10);
  }
  v11 = *a1;
  v12 = *a1 + 40 * a1[1];
  if ( v12 != *a1 )
  {
    while ( 1 )
    {
      v2 = v54;
      v13 = pack_dd(src, v54, *(unsigned __int8 *)(v11 + 32) | (unsigned int)(2 * *(_DWORD *)(v11 + 24))) - (_QWORD)src;
      v14 = v13;
      if ( v13 )
        break;
LABEL_18:
      if ( (_DWORD)v53 == 48 )
      {
        v19 = (char *)&s1;
        if ( *(_QWORD *)(v11 + 8) )
          v19 = *(char **)v11;
        if ( !v19 )
        {
          v21 = v61.m128i_i64[0];
          v23 = 1;
          v22 = (const char *)&unk_5C2F25;
          v24 = v61.m128i_i64[0] + 1;
          if ( v61.m128i_i64[0] != -1 )
            goto LABEL_56;
          v21 = -1;
          v22 = (const char *)&unk_5C2F25;
LABEL_25:
          v61.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_26;
        }
        v57 = v19;
        v20 = strlen(v19);
        v21 = v61.m128i_i64[0];
        v22 = (const char *)v57;
        v23 = v20 + 1;
        v24 = v20 + 1 + v61.m128i_i64[0];
        if ( !__CFADD__(v20 + 1, v61.m128i_i64[0]) )
          goto LABEL_56;
        if ( v61.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
        {
          v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_56:
          v43 = v60;
          v44 = v21;
          if ( v61.m128i_i64[1] < v24 )
          {
            v59 = v23;
            v58 = (__int64)v22;
            v57 = (void *)v24;
            v60 = qvector_reserve(v56, v60, v24, 1);
            v43 = v60;
            v23 = v59;
            v44 = v61.m128i_i64[0];
            v22 = (const char *)v58;
            v24 = (unsigned __int64)v57;
          }
          v59 = v23;
          v58 = (__int64)v22;
          v57 = (void *)v24;
          memset((void *)(v43 + v44), 0, v24 - v44);
          v22 = (const char *)v58;
          v23 = v59;
          v61.m128i_i64[0] = (__int64)v57;
          goto LABEL_26;
        }
        if ( v61.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_25;
LABEL_26:
        v2 = v22;
        v11 += 40;
        memcpy((void *)(v21 + v60), v22, v23);
        if ( v12 == v11 )
          goto LABEL_27;
      }
      else
      {
        v11 += 40;
        if ( v12 == v11 )
          goto LABEL_27;
      }
    }
    v15 = v61.m128i_i64[0];
    v16 = v61.m128i_i64[0] + v13;
    if ( __CFADD__(v61.m128i_i64[0], v13) )
    {
      if ( v61.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( v61.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          v61.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_17;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = v60;
    v18 = v61.m128i_i64[0];
    if ( v61.m128i_i64[1] < v16 )
    {
      v58 = v61.m128i_i64[0];
      v57 = (void *)v16;
      v60 = qvector_reserve(v56, v60, v16, 1);
      v17 = v60;
      v15 = v58;
      v18 = v61.m128i_i64[0];
      v16 = (unsigned __int64)v57;
    }
    v58 = v15;
    v57 = (void *)v16;
    memset((void *)(v17 + v18), 0, v16 - v18);
    v15 = v58;
    v61.m128i_i64[0] = (__int64)v57;
LABEL_17:
    v2 = src;
    memcpy((void *)(v15 + v60), src, v14);
    goto LABEL_18;
  }
LABEL_27:
  if ( (a1[14] & 0x40) == 0 )
    goto LABEL_4;
LABEL_28:
  v25 = pack_dd(src, v63, *((unsigned int *)a1 + 8)) - (_QWORD)src;
  v26 = v25;
  if ( !v25 )
    goto LABEL_29;
  v49 = v61.m128i_i64[0];
  v50 = v61.m128i_i64[0] + v25;
  if ( __CFADD__(v61.m128i_i64[0], v25) )
  {
    if ( v61.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
    {
      if ( v61.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
        v61.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_68;
    }
    v50 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v51 = v60;
  v52 = v61.m128i_i64[0];
  if ( v61.m128i_i64[1] < v50 )
  {
    v60 = qvector_reserve(v56, v60, v50, 1);
    v51 = v60;
    v52 = v61.m128i_i64[0];
  }
  memset((void *)(v51 + v52), 0, v50 - v52);
  v61.m128i_i64[0] = v50;
LABEL_68:
  memcpy((void *)(v49 + v60), src, v26);
LABEL_29:
  v27 = a1[3];
  v28 = v27 + 24 * a1[4];
  if ( v28 != v27 )
  {
    while ( 1 )
    {
      v29 = &s1;
      if ( *(_QWORD *)(v27 + 8) )
        v29 = *(const char **)v27;
      if ( !v29 )
        break;
      v30 = strlen(v29);
      v31 = v61.m128i_i64[0];
      v32 = v30 + 1;
      v33 = v30 + 1 + v61.m128i_i64[0];
      if ( !__CFADD__(v30 + 1, v61.m128i_i64[0]) )
        goto LABEL_39;
      if ( v61.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
      {
        v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_39:
        v34 = v60;
        v35 = v31;
        if ( v61.m128i_i64[1] < v33 )
        {
          v54 = (const char *)v32;
          v53 = v33;
          v60 = qvector_reserve(v56, v60, v33, 1);
          v34 = v60;
          v32 = (size_t)v54;
          v35 = v61.m128i_i64[0];
          v33 = v53;
        }
        v54 = (const char *)v32;
        v53 = v33;
        memset((void *)(v34 + v35), 0, v33 - v35);
        v32 = (size_t)v54;
        v61.m128i_i64[0] = v53;
        goto LABEL_34;
      }
      if ( v61.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_33;
LABEL_34:
      v27 += 24;
      memcpy((void *)(v60 + v31), v29, v32);
      if ( v28 == v27 )
        goto LABEL_44;
    }
    v31 = v61.m128i_i64[0];
    v32 = 1;
    v29 = (const char *)&unk_5C2F25;
    v33 = v61.m128i_i64[0] + 1;
    if ( v61.m128i_i64[0] != -1 )
      goto LABEL_39;
    v31 = -1;
    v29 = (const char *)&unk_5C2F25;
LABEL_33:
    v61.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_34;
  }
LABEL_44:
  v36 = &s1;
  if ( a1[7] )
    v36 = (const char *)a1[6];
  if ( !v36 )
  {
    v38 = v61.m128i_i64[0];
    v39 = 1;
    v36 = (const char *)&unk_5C2F25;
    v40 = v61.m128i_i64[0] + 1;
    if ( v61.m128i_i64[0] != -1 )
      goto LABEL_48;
    v38 = -1;
    v36 = (const char *)&unk_5C2F25;
LABEL_72:
    v61.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_51;
  }
  v37 = strlen(v36);
  v38 = v61.m128i_i64[0];
  v39 = v37 + 1;
  v40 = v61.m128i_i64[0] + v37 + 1;
  if ( !__CFADD__(v61.m128i_i64[0], v37 + 1) )
  {
LABEL_48:
    v41 = v60;
    v42 = v38;
    if ( v61.m128i_i64[1] < v40 )
    {
      v60 = qvector_reserve(v56, v60, v40, 1);
      v41 = v60;
      v42 = v61.m128i_i64[0];
    }
    memset((void *)(v41 + v42), 0, v40 - v42);
    v61.m128i_i64[0] = v40;
    goto LABEL_51;
  }
  if ( v61.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
  {
    v40 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_48;
  }
  if ( v61.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_72;
LABEL_51:
  v2 = v36;
  memcpy((void *)(v60 + v38), v36, v39);
LABEL_4:
  v5 = _mm_loadu_si128(&v61);
  v6 = *(_QWORD *)v55;
  v7 = *(_QWORD *)(v55 + 16);
  *(_QWORD *)v55 = v60;
  *(__m128i *)(v55 + 8) = v5;
  v60 = v6;
  v61.m128i_i64[1] = v7;
  if ( v6 )
  {
    v61.m128i_i64[0] = 0;
    qfree(v6, v2);
  }
  return v63[0] - __readfsqword(0x28u);
}
