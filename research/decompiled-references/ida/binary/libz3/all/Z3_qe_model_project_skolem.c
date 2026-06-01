__int64 __fastcall Z3_qe_model_project_skolem(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        void *a6)
{
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // r12
  char v12; // al
  void *v13; // r9
  __int64 *v14; // rbx
  __int64 v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rsi
  bool v18; // zf
  _DWORD *v20; // rax
  int v21; // r9d
  __int64 *v22; // rbx
  unsigned int *v23; // r9
  __int64 *v24; // r15
  void (__fastcall ***v25)(_QWORD); // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r12
  _DWORD *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // esi
  __int64 v32; // rbp
  unsigned int v33; // r8d
  char *v34; // rcx
  char *v35; // r13
  int v36; // edi
  __m128 v37; // xmm0
  __int64 v38; // r8
  _OWORD *v39; // r10
  __m128 *v40; // rax
  __m128 *v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r10d
  char *v47; // rdx
  char *v48; // rax
  const __m128i *v49; // r14
  __m128i *v50; // r11
  __int64 v51; // rdx
  __m128i *v52; // rsi
  __m128i *v53; // rdx
  __m128i v54; // xmm0
  void *v55; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+8h] [rbp-F0h]
  int v57[2]; // [rsp+10h] [rbp-E8h]
  __m128i *v58; // [rsp+18h] [rbp-E0h]
  char *v59; // [rsp+20h] [rbp-D8h]
  char *v60; // [rsp+28h] [rbp-D0h]
  unsigned int *v61; // [rsp+30h] [rbp-C8h]
  char v62[8]; // [rsp+38h] [rbp-C0h]
  __int64 v63; // [rsp+40h] [rbp-B8h]
  char *v64; // [rsp+48h] [rbp-B0h]
  int v65; // [rsp+50h] [rbp-A8h]
  void *ptr; // [rsp+58h] [rbp-A0h] BYREF
  char v67[8]; // [rsp+60h] [rbp-98h] BYREF
  int v68[2]; // [rsp+68h] [rbp-90h]
  int v69[2]; // [rsp+70h] [rbp-88h] BYREF
  int v70[2]; // [rsp+78h] [rbp-80h]
  int v71; // [rsp+80h] [rbp-78h] BYREF
  __int64 v72; // [rsp+88h] [rbp-70h]
  __int64 *v73; // [rsp+90h] [rbp-68h]
  unsigned int v74; // [rsp+98h] [rbp-60h]

  v56 = a1;
  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  BYTE3(v63) = v9;
  if ( v9 )
  {
    v55 = a6;
    sub_2A2020(v56, a2, a3, a4, a5, (__int64)a6);
    a6 = v55;
  }
  v10 = v56;
  v55 = a6;
  *(_QWORD *)v68 = 0;
  *(_DWORD *)(v56 + 1520) = 0;
  v11 = *(_QWORD *)(v10 + 232);
  *(_QWORD *)v62 = v67;
  *(_QWORD *)v67 = v11;
  v12 = sub_2B3870(a3, a4, (__int64)v67);
  v13 = v55;
  if ( !v12 )
  {
    if ( !BYTE3(v63) )
    {
      v14 = *(__int64 **)v68;
      v15 = 0;
      if ( *(_QWORD *)v68 )
        goto LABEL_6;
      return v15;
    }
    sub_2BB620(0);
    v14 = *(__int64 **)v68;
    v15 = 0;
    if ( *(_QWORD *)v68 )
      goto LABEL_6;
LABEL_92:
    byte_1C7EBA0 = 1;
    return v15;
  }
  *(_QWORD *)v70 = v11;
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  v20 = *(_DWORD **)(a2 + 24);
  *(_QWORD *)v69 = a5;
  ptr = v20;
  if ( v20 )
    ++v20[4];
  v55 = v13;
  sub_15B8F20(&v71, v11);
  sub_3D2520(
    v11,
    *(int *)v62,
    (int)v69,
    (int)&ptr,
    (int)&v71,
    v21,
    v55,
    v56,
    (int)&v71,
    v58,
    (int)v59,
    (__int64)v60,
    (int)v61,
    v62[0],
    v63,
    (int)v64,
    v65,
    (int)ptr,
    *(int *)v67,
    v68[0],
    v69[0],
    v70[0],
    v71,
    v72,
    (__int64)v73);
  sub_251FD0(v56, *(__int64 *)v69);
  v22 = v73;
  v23 = (unsigned int *)v55;
  v24 = &v73[2 * v74];
  if ( v73 == v24 )
    goto LABEL_21;
  while ( (unsigned __int64)*v22 <= 1 )
  {
    v22 += 2;
    if ( v24 == v22 )
      goto LABEL_21;
  }
  if ( v24 == v22 )
    goto LABEL_21;
  v28 = *v22;
  if ( *v22 )
    goto LABEL_57;
  while ( 2 )
  {
    v29 = (_DWORD *)v22[1];
    v55 = v29;
    if ( v29 )
      ++v29[2];
    v30 = v23[10];
    v31 = v23[12];
    if ( 3 * (int)v30 < 4 * (v31 + v23[11]) )
    {
      v60 = (char *)v23;
      LODWORD(v59) = 2 * v30;
      v58 = (__m128i *)(16LL * (unsigned int)(2 * v30));
      v45 = sub_186B270((size_t)v58);
      v46 = (unsigned int)v59;
      v34 = (char *)v58;
      v32 = v45;
      v47 = (char *)v45;
      v23 = (unsigned int *)v60;
      v48 = &v58->m128i_i8[v45];
      if ( (_DWORD)v59 )
      {
        if ( (((_BYTE)v48 - (_BYTE)v32) & 0x10) == 0
          || (v47 = (char *)(v32 + 16), *(_OWORD *)v32 = 0, (char *)(v32 + 16) != v48) )
        {
          do
          {
            *(_OWORD *)v47 = 0;
            v47 += 32;
            *((_OWORD *)v47 - 1) = 0;
          }
          while ( v47 != v48 );
        }
      }
      v49 = *((const __m128i **)v23 + 4);
      v33 = v46 - 1;
      v35 = v48;
      v50 = (__m128i *)&v49[v23[10]];
      if ( v49 != v50 )
      {
        do
        {
          while ( v49->m128i_i64[0] <= 1uLL )
          {
            if ( v50 == ++v49 )
              goto LABEL_71;
          }
          v51 = 16LL * (*(_DWORD *)(v49->m128i_i64[0] + 12) & v33);
          v52 = (__m128i *)(v32 + v51);
          if ( v34 == (char *)v51 )
          {
LABEL_75:
            if ( (__m128i *)v32 == v52 )
            {
LABEL_83:
              v64 = v48;
              HIDWORD(v63) = v46;
              v61 = v23;
              v60 = v34;
              LODWORD(v59) = v46 - 1;
              v58 = v50;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v53 = (__m128i *)v32;
            while ( v53->m128i_i64[0] )
            {
              if ( v52 == ++v53 )
                goto LABEL_83;
            }
          }
          else
          {
            v53 = (__m128i *)(v32 + v51);
            while ( v53->m128i_i64[0] )
            {
              if ( v48 == (char *)++v53 )
                goto LABEL_75;
            }
          }
          v54 = _mm_loadu_si128(v49++);
          *v53 = v54;
        }
        while ( v50 != v49 );
LABEL_71:
        v50 = *((__m128i **)v23 + 4);
      }
      if ( v50 )
      {
        LODWORD(v61) = v46;
        v60 = (char *)v23;
        v59 = v34;
        LODWORD(v58) = v46 - 1;
        sub_186B220(v50);
        v46 = (unsigned int)v61;
        v23 = (unsigned int *)v60;
        v34 = v59;
        v33 = (unsigned int)v58;
      }
      *((_QWORD *)v23 + 4) = v32;
      v31 = 0;
      v23[10] = v46;
      v23[12] = 0;
    }
    else
    {
      v32 = *((_QWORD *)v23 + 4);
      v33 = v30 - 1;
      v34 = (char *)(16 * v30);
      v35 = &v34[v32];
    }
    v36 = *(_DWORD *)(v28 + 12);
    v37 = _mm_loadh_ps((const double *)&v55);
    v38 = 16LL * (v36 & v33);
    v39 = (_OWORD *)(v32 + v38);
    if ( (char *)v38 != v34 )
    {
      v40 = (__m128 *)(v32 + v38);
      v41 = nullptr;
      while ( 1 )
      {
        v42 = v40->m128_u64[0];
        if ( v40->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(v42 + 12) == v36 && v42 == v28 )
          {
            *v40 = v37;
            goto LABEL_52;
          }
        }
        else
        {
          if ( !v42 )
          {
            if ( v41 )
              goto LABEL_81;
            v41 = v40;
            goto LABEL_82;
          }
          v41 = v40;
        }
        if ( ++v40 == (__m128 *)v35 )
          goto LABEL_47;
      }
    }
    v41 = nullptr;
    while ( 1 )
    {
LABEL_47:
      if ( v39 == (_OWORD *)v32 )
      {
        v55 = v23;
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v43 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 <= 1u )
        break;
      if ( *(_DWORD *)(v43 + 12) == v36 && v43 == v28 )
      {
        *(__m128 *)v32 = v37;
        goto LABEL_52;
      }
LABEL_46:
      v32 += 16;
    }
    if ( v43 )
    {
      v41 = (__m128 *)v32;
      goto LABEL_46;
    }
    if ( v41 )
LABEL_81:
      v23[12] = v31 - 1;
    else
      v41 = (__m128 *)v32;
LABEL_82:
    *v41 = v37;
    ++v23[11];
LABEL_52:
    v44 = v22 + 2;
    if ( v24 != v22 + 2 )
    {
      while ( 1 )
      {
        v28 = *v44;
        v22 = v44;
        if ( (unsigned __int64)*v44 > 1 )
          break;
        v44 += 2;
        if ( v24 == v44 )
          goto LABEL_21;
      }
      if ( v24 != v44 )
      {
LABEL_57:
        ++*(_DWORD *)(v28 + 8);
        continue;
      }
    }
    break;
  }
LABEL_21:
  v15 = *(_QWORD *)v69;
  sub_15BA200(*(_QWORD *)v57);
  v25 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v18 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v18 )
    {
      (**v25)(v25);
      sub_186B220(v25);
    }
  }
  v26 = *(_QWORD *)v69;
  if ( *(_QWORD *)v69
    && (v27 = *(_QWORD *)v70, v18 = *(_DWORD *)(*(_QWORD *)v69 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v69 + 8LL), v18) )
  {
    sub_15D7BC0(v27, v26);
    v14 = *(__int64 **)v68;
    if ( *(_QWORD *)v68 )
      goto LABEL_6;
  }
  else
  {
    v14 = *(__int64 **)v68;
    if ( !*(_QWORD *)v68 )
      goto LABEL_14;
LABEL_6:
    v16 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v16 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v17 = *v14;
        if ( *v14 )
        {
          v18 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v14 >= v16 )
          goto LABEL_12;
      }
      sub_15D7BC0(*(_QWORD *)v67, v17);
      ++v14;
    }
    while ( v14 < v16 );
LABEL_12:
    v14 = *(__int64 **)v68;
    if ( *(_QWORD *)v68 )
LABEL_13:
      sub_186B220(v14 - 1);
  }
LABEL_14:
  if ( BYTE3(v63) )
    goto LABEL_92;
  return v15;
}

