_QWORD *__fastcall sub_DBC750(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rbx
  _OWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // esi
  int v11; // eax
  unsigned __int32 v12; // r10d
  unsigned __int64 v13; // r14
  __m128i v14; // xmm0
  __m128i *v15; // rbx
  __int32 v16; // ecx
  size_t v17; // r13
  __m128i *v18; // rbp
  int v19; // edi
  __m128i v20; // xmm1
  __int64 v21; // rcx
  __m128i *v22; // r10
  __m128i *v23; // rax
  __m128i *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int32 v28; // r10d
  __m128i *v29; // rdx
  __m128i *v30; // rax
  const __m128i *v31; // r12
  __m128i *v32; // r11
  __int64 v33; // rdx
  __m128i *v34; // rsi
  __m128i *v35; // rdx
  __m128i v36; // xmm1
  __int64 v37; // rbx
  _QWORD *v38; // rbp
  _OWORD *v39; // rax
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // r13
  __int64 *v44; // rbx
  __int64 *v45; // r12
  __int64 v46; // rbp
  unsigned int v47; // edi
  __int64 v48; // rbp
  __int64 *v49; // rdx
  int v50; // ecx
  __int64 v51; // rdi
  __int64 *v52; // rsi
  __int64 *v53; // rax
  __int64 v54; // rbp
  __int64 v55; // rsi
  __int64 v56; // rdi
  bool v57; // zf
  _QWORD *result; // rax
  __int64 *v59; // rbp
  unsigned __int64 v60; // r12
  __int64 v61; // rsi
  __int64 v62; // [rsp+0h] [rbp-138h]
  __m128i v63; // [rsp+8h] [rbp-130h] BYREF
  _QWORD *v64; // [rsp+18h] [rbp-120h]
  __int64 v65; // [rsp+20h] [rbp-118h]
  _QWORD *v66; // [rsp+28h] [rbp-110h]
  int v67; // [rsp+30h] [rbp-108h]
  __int32 v68; // [rsp+34h] [rbp-104h]
  __m128i *v69; // [rsp+38h] [rbp-100h]
  _QWORD *v70; // [rsp+40h] [rbp-F8h]
  __int64 v71; // [rsp+48h] [rbp-F0h]
  void *v72; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-E0h]
  int v74; // [rsp+60h] [rbp-D8h]
  _QWORD v75[3]; // [rsp+70h] [rbp-C8h] BYREF
  void *v76; // [rsp+88h] [rbp-B0h]
  __int64 v77; // [rsp+98h] [rbp-A0h]
  void *v78; // [rsp+A0h] [rbp-98h]
  __int64 v79; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-80h]
  __int64 *v81; // [rsp+C0h] [rbp-78h]
  __int64 v82; // [rsp+C8h] [rbp-70h]
  void **v83; // [rsp+D0h] [rbp-68h]
  void *v84; // [rsp+D8h] [rbp-60h]
  __int64 v85; // [rsp+E0h] [rbp-58h]
  int v86; // [rsp+E8h] [rbp-50h]
  _QWORD *v87; // [rsp+F0h] [rbp-48h]

  v5 = a3;
  LODWORD(v62) = (_DWORD)a1;
  v65 = a2;
  v71 = a4;
  v70 = a5;
  v6 = (_OWORD *)sub_186B270(0x80u);
  v7 = a1;
  v72 = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v74 = 0;
  v73 = 8;
  if ( !(_DWORD)v5 )
    goto LABEL_48;
  v8 = 0;
  v9 = 8;
  v10 = 0;
  v62 = 8 * v5;
  v11 = 0;
LABEL_3:
  v12 = 2 * v9;
  v13 = *(_QWORD *)(v7[6] + v8);
  v14 = _mm_loadl_epi64((const __m128i *)(v7[7] + v8));
  if ( 3 * (int)v9 < (unsigned int)(4 * (v10 + v11)) )
  {
    v64 = v7;
    v17 = 16LL * v12;
    v63.m128i_i32[0] = v12;
    v63.m128i_i64[1] = v14.m128i_i64[0];
    v27 = sub_186B270(v17);
    v28 = v63.m128i_i32[0];
    v15 = (__m128i *)v27;
    v29 = (__m128i *)v27;
    v7 = v64;
    v14 = _mm_loadl_epi64((const __m128i *)&v63.m128i_u64[1]);
    v30 = (__m128i *)(v17 + v27);
    if ( v63.m128i_i32[0] )
    {
      if ( (((_BYTE)v30 - (_BYTE)v15) & 0x10) == 0 || (v29 = v15 + 1, *v15 = 0, &v15[1] != v30) )
      {
        do
        {
          v29 += 2;
          v29[-2] = 0;
          v29[-1] = 0;
        }
        while ( v29 != v30 );
      }
    }
    v31 = (const __m128i *)v72;
    v16 = v28 - 1;
    v18 = v30;
    v32 = (__m128i *)((char *)v72 + 16 * (unsigned int)v73);
    if ( v72 != v32 )
    {
      do
      {
        while ( v31->m128i_i64[0] <= 1uLL )
        {
          if ( v32 == ++v31 )
            goto LABEL_36;
        }
        v33 = 16LL * (*(_DWORD *)(v31->m128i_i64[0] + 12) & (unsigned int)v16);
        v34 = &v15[(unsigned __int64)v33 / 0x10];
        if ( v17 == v33 )
        {
LABEL_40:
          if ( v15 == v34 )
          {
LABEL_75:
            v69 = v30;
            v68 = v28;
            v66 = v7;
            LODWORD(v64) = v28 - 1;
            v63.m128i_i64[1] = (__int64)v32;
            v63.m128i_i64[0] = v14.m128i_i64[0];
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v35 = v15;
          while ( v35->m128i_i64[0] )
          {
            if ( v34 == ++v35 )
              goto LABEL_75;
          }
        }
        else
        {
          v35 = &v15[(unsigned __int64)v33 / 0x10];
          while ( v35->m128i_i64[0] )
          {
            if ( v30 == ++v35 )
              goto LABEL_40;
          }
        }
        v36 = _mm_loadu_si128(v31++);
        *v35 = v36;
      }
      while ( v32 != v31 );
LABEL_36:
      v32 = (__m128i *)v72;
    }
    if ( v32 )
    {
      LODWORD(v66) = v28;
      v64 = v7;
      v63.m128i_i32[2] = v28 - 1;
      v63.m128i_i64[0] = v14.m128i_i64[0];
      sub_186B220(v32);
      v28 = (int)v66;
      v7 = v64;
      v16 = v63.m128i_i32[2];
      v14 = _mm_loadl_epi64(&v63);
    }
    v72 = v15;
    v10 = 0;
    LODWORD(v73) = v28;
    v74 = 0;
  }
  else
  {
    v15 = (__m128i *)v72;
    v16 = v9 - 1;
    v17 = 16 * v9;
    v18 = (__m128i *)((char *)v72 + v17);
  }
  v19 = *(_DWORD *)(v13 + 12);
  v20 = _mm_unpacklo_epi64((__m128i)v13, v14);
  v21 = 16LL * (v19 & (unsigned int)v16);
  v22 = &v15[(unsigned __int64)v21 / 0x10];
  if ( v21 != v17 )
  {
    v23 = &v15[(unsigned __int64)v21 / 0x10];
    v24 = nullptr;
    while ( 1 )
    {
      v25 = v23->m128i_i64[0];
      if ( v23->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v25 + 12) == v19 && v13 == v25 )
        {
          *v23 = v20;
          goto LABEL_21;
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v24 )
            goto LABEL_46;
          v24 = v23;
          goto LABEL_47;
        }
        v24 = v23;
      }
      if ( ++v23 == v18 )
        goto LABEL_16;
    }
  }
  v24 = nullptr;
  while ( 1 )
  {
LABEL_16:
    if ( v22 == v15 )
    {
      v63.m128i_i64[0] = (__int64)v7;
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v26 = v15->m128i_i64[0];
    if ( v15->m128i_i64[0] > 1uLL )
      break;
    if ( !v26 )
    {
      if ( v24 )
LABEL_46:
        v74 = v10 - 1;
      else
        v24 = v15;
LABEL_47:
      *v24 = v20;
      v8 += 8;
      ++HIDWORD(v73);
      if ( v62 == v8 )
        goto LABEL_48;
LABEL_22:
      v11 = HIDWORD(v73);
      v10 = v74;
      v9 = (unsigned int)v73;
      goto LABEL_3;
    }
    v24 = v15;
LABEL_15:
    ++v15;
  }
  if ( *(_DWORD *)(v26 + 12) != v19 || v13 != v26 )
    goto LABEL_15;
  *v15 = v20;
LABEL_21:
  v8 += 8;
  if ( v62 != v8 )
    goto LABEL_22;
LABEL_48:
  v37 = *v7;
  v38 = v7 + 5;
  v82 = v71;
  v79 = v37;
  v83 = &v72;
  v39 = (_OWORD *)sub_186B270(0x80u);
  v84 = v39;
  *v39 = 0;
  v75[0] = &off_1C62200;
  v40 = v65;
  v39[1] = 0;
  v39[2] = 0;
  v39[3] = 0;
  v39[4] = 0;
  v39[5] = 0;
  v39[6] = 0;
  v39[7] = 0;
  v86 = 0;
  v87 = v38;
  v75[2] = 0;
  v76 = nullptr;
  v77 = 0;
  v78 = nullptr;
  v80 = v37;
  v81 = nullptr;
  v85 = 8;
  sub_DBE560(
    (unsigned int)&v79,
    (unsigned int)v75,
    v40,
    0,
    v41,
    v42,
    v62,
    v63.m128i_i32[0],
    v63.m128i_i32[2],
    (_DWORD)v64,
    v65,
    (_DWORD)v66,
    v67,
    (_DWORD)v69,
    (__int64)v70);
  v43 = v80;
  v75[0] = &off_1C62200;
  v44 = v81;
  v45 = (__int64 *)v84;
  v46 = (unsigned int)v85;
  if ( v78 )
    sub_186B220(v78);
  if ( v76 )
    sub_186B220(v76);
  v47 = v46 - 1;
  v48 = 16 * v46;
  v49 = &v45[(unsigned __int64)v48 / 8];
  v50 = *(_DWORD *)(v65 + 12);
  v51 = 16LL * (v50 & v47);
  v52 = &v45[(unsigned __int64)v51 / 8];
  v53 = &v45[(unsigned __int64)v51 / 8];
  if ( v51 != v48 )
  {
    do
    {
      v54 = *v53;
      if ( (unsigned __int64)*v53 > 1 )
      {
        if ( *(_DWORD *)(v54 + 12) == v50 && v65 == v54 )
        {
LABEL_80:
          v54 = v53[1];
          if ( v54 )
            ++*(_DWORD *)(v54 + 8);
          goto LABEL_59;
        }
      }
      else if ( !v54 )
      {
        goto LABEL_59;
      }
      v53 += 2;
    }
    while ( v49 != v53 );
  }
  if ( v45 != v52 )
  {
    v53 = v45;
    do
    {
      while ( 1 )
      {
        v54 = *v53;
        if ( (unsigned __int64)*v53 <= 1 )
          break;
        if ( *(_DWORD *)(v54 + 12) == v50 && v65 == v54 )
          goto LABEL_80;
        v53 += 2;
        if ( v52 == v53 )
          goto LABEL_90;
      }
      if ( !v54 )
        goto LABEL_59;
      v53 += 2;
    }
    while ( v52 != v53 );
  }
LABEL_90:
  v54 = 0;
LABEL_59:
  v55 = *v70;
  if ( *v70 )
  {
    v56 = v70[1];
    v57 = (*(_DWORD *)(v55 + 8))-- == 1;
    if ( v57 )
      sub_15D7BC0(v56, v55);
  }
  result = v70;
  *v70 = v54;
  if ( v45 )
    result = (_QWORD *)sub_186B220(v45);
  if ( v44 )
  {
    v59 = v44;
    v60 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
    if ( (unsigned __int64)v44 < v60 )
    {
      do
      {
        while ( 1 )
        {
          v61 = *v59;
          if ( *v59 )
          {
            v57 = (*(_DWORD *)(v61 + 8))-- == 1;
            if ( v57 )
              break;
          }
          if ( (unsigned __int64)++v59 >= v60 )
            goto LABEL_71;
        }
        ++v59;
        sub_15D7BC0(v43, v61);
      }
      while ( (unsigned __int64)v59 < v60 );
    }
LABEL_71:
    result = (_QWORD *)sub_186B220(v44 - 1);
  }
  if ( v72 )
    return (_QWORD *)sub_186B220(v72);
  return result;
}

