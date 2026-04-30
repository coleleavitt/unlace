__int64 __fastcall sub_1A0100(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 bpt_kernel_interface; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rax
  const char *v10; // r14
  int v11; // edx
  int v12; // eax
  char *v13; // rdx
  __int64 v14; // rcx
  char *v15; // r8
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  unsigned __int64 v18; // r13
  int v19; // edx
  unsigned __int64 v20; // r13
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  const char *v27; // r15
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rdx
  _QWORD *v31; // r13
  unsigned __int64 v32; // rax
  char *v33; // r13
  const char *v34; // r15
  unsigned int v35; // r14d
  unsigned int v36; // r14d
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rbp
  unsigned __int64 v40; // rax
  _DWORD *v41; // rsi
  int v42; // eax
  bool v43; // zf
  __int64 v44; // rbp
  void *v45; // r8
  __int128 v46; // kr00_16
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // rdx
  unsigned __int64 v51; // r15
  size_t v52; // r13
  void *v53; // rdi
  size_t v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  char v57; // r8
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // r15
  __int64 v60; // rsi
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rax
  const void *v63; // r15
  void *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // r15
  __int64 v70; // rsi
  unsigned __int64 v71; // r13
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *func; // rax
  _QWORD *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _BYTE *v81; // rsi
  size_t v82; // rbp
  __int64 v83; // r14
  __int64 v84; // rbx
  __int64 v85; // [rsp+0h] [rbp-98h]
  char v86; // [rsp+0h] [rbp-98h]
  __int64 v87; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+10h] [rbp-88h] BYREF
  __int128 v89; // [rsp+18h] [rbp-80h]
  char *s[2]; // [rsp+30h] [rbp-68h]
  __m128i v91; // [rsp+40h] [rbp-58h]
  unsigned __int64 v92; // [rsp+58h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 160LL))(bpt_kernel_interface, a3);
  if ( !v6 )
    return 0;
  v7 = v6;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 224LL))(
    bpt_kernel_interface,
    *(_QWORD *)(v6 + 32),
    *(_QWORD *)(v6 + 40),
    *(_QWORD *)a2);
  v8 = *(_QWORD **)a2;
  v9 = *(int *)(v7 + 44);
  *(__m128i *)s = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_85C8C0), (__m128i)(unsigned __int64)"Rel");
  v91 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_85C8C8), (__m128i)(unsigned __int64)"Src");
  if ( (int)v9 > 3 )
  {
    v51 = 4;
    v10 = "???";
    v52 = 3;
  }
  else
  {
    v10 = s[v9];
    if ( !v10 || (v54 = strlen(s[v9]), (v52 = v54) == 0) )
    {
      v8[4] = 0;
      v11 = *(_DWORD *)(v7 + 68);
      if ( !v11 )
        goto LABEL_5;
      goto LABEL_50;
    }
    v51 = v54 + 1;
  }
  v53 = (void *)v8[3];
  if ( v8[5] < v51 )
  {
    v67 = qvector_reserve(v8 + 3, v8[3], v51, 1);
    v8[3] = v67;
    v53 = (void *)v67;
  }
  v8[4] = v51;
  memcpy(v53, v10, v52);
  *(_BYTE *)(v8[3] + v52) = 0;
  v11 = *(_DWORD *)(v7 + 68);
  if ( v11 )
LABEL_50:
    sub_169A50((__int64 *)(*(_QWORD *)a2 + 48LL), (__int64)"%d", v11);
LABEL_5:
  v12 = *(_DWORD *)(v7 + 64);
  if ( v12 != 4 )
  {
    v13 = "RW";
    if ( v12 != 3 )
    {
      if ( v12 > 3 )
      {
        v13 = "?";
        if ( v12 == 8 )
          v13 = "X";
      }
      else
      {
        v13 = "W";
        if ( v12 != 1 )
        {
          v13 = "?";
          if ( v12 == 2 )
            v13 = "R";
        }
      }
    }
    v14 = *(unsigned int *)(v7 + 80);
    v15 = (char *)&unk_5C2F25;
    if ( (_DWORD)v14 != 1 )
      v15 = "s";
    sub_169A50((__int64 *)(*(_QWORD *)a2 + 72LL), (__int64)"%2s (%d byte%s)", v13, v14, v15);
  }
  v16 = *(_QWORD **)a2;
  v17 = *(_QWORD *)a2 + 96LL;
  if ( v17 != v7 + 8 )
  {
    v18 = *(_QWORD *)(v7 + 16);
    if ( v18 > 1 )
    {
      v63 = *(const void **)(v7 + 8);
      v64 = (void *)v16[12];
      if ( v16[14] < v18 )
      {
        v64 = (void *)qvector_reserve(v17, v16[12], *(_QWORD *)(v7 + 16), 1);
        v16[12] = v64;
      }
      v16[13] = v18;
      memmove(v64, v63, v18 - 1);
      *(_BYTE *)(v16[12] + v18 - 1) = 0;
      v16 = *(_QWORD **)a2;
    }
    else
    {
      v16[13] = 0;
      v16 = *(_QWORD **)a2;
    }
  }
  v19 = *(_DWORD *)(v7 + 72);
  if ( (v19 & 1) != 0 )
  {
    v55 = v16[15];
    if ( v16[17] <= 5u )
    {
      v66 = qvector_reserve(v16 + 15, v55, 6, 1);
      v16[15] = v66;
      v55 = v66;
    }
    v16[16] = 6;
    *(_DWORD *)v55 = 1634038338;
    *(_BYTE *)(v55 + 4) = 107;
    *(_BYTE *)(v16[15] + 5LL) = 0;
    v19 = *(_DWORD *)(v7 + 72);
  }
  if ( (v19 & 2) != 0 )
  {
    v20 = v16[16];
    if ( v20 > 1 )
    {
      v68 = v20 - 1;
      v69 = v20 + 2;
      v70 = v16[15];
      v71 = v20 + 3;
      if ( v16[17] < v71 )
      {
        v78 = qvector_reserve(v16 + 15, v70, v71, 1);
        v16[15] = v78;
        v70 = v78;
      }
      v16[16] = v71;
      *(_BYTE *)(v70 + v69) = 0;
      v72 = v68 + v16[15];
      *(_WORD *)v72 = 9760;
      *(_BYTE *)(v72 + 2) = 32;
      v20 = v16[16];
    }
    if ( v20 )
    {
      v21 = v20 + 4;
      v22 = v20 + 5;
      v23 = v16[15];
      --v20;
      if ( v16[17] >= v22 )
      {
LABEL_22:
        v16[16] = v22;
        *(_BYTE *)(v23 + v21) = 0;
        v24 = v16[15] + v20;
        *(_DWORD *)v24 = 1667330644;
        *(_BYTE *)(v24 + 4) = 101;
        v19 = *(_DWORD *)(v7 + 72);
        goto LABEL_23;
      }
    }
    else
    {
      v23 = v16[15];
      v22 = 6;
      v21 = 5;
      if ( v16[17] >= 6u )
        goto LABEL_22;
    }
    v56 = qvector_reserve(v16 + 15, v23, v22, 1);
    v16[15] = v56;
    v23 = v56;
    goto LABEL_22;
  }
LABEL_23:
  if ( (v19 & 0x1C0) == 0 )
    goto LABEL_34;
  v25 = v16[16];
  if ( (v19 & 0x20) != 0 )
  {
    v26 = 8;
    v27 = "Trace ON";
    v57 = 1;
    if ( v25 <= 1 )
      goto LABEL_26;
LABEL_63:
    v58 = v25 - 1;
    v59 = v25 + 2;
    v60 = v16[15];
    v61 = v25 + 3;
    if ( v16[17] < v61 )
    {
      v86 = v57;
      v79 = qvector_reserve(v16 + 15, v60, v61, 1);
      v57 = v86;
      v16[15] = v79;
      v60 = v79;
    }
    v16[16] = v61;
    *(_BYTE *)(v60 + v59) = 0;
    v27 = "Trace OFF";
    v62 = v58 + v16[15];
    v26 = 9;
    *(_WORD *)v62 = 9760;
    *(_BYTE *)(v62 + 2) = 32;
    v25 = v16[16];
    if ( v57 )
    {
      v26 = 8;
      v27 = "Trace ON";
    }
    goto LABEL_26;
  }
  v26 = 9;
  v27 = "Trace OFF";
  if ( v25 > 1 )
  {
    v57 = 0;
    goto LABEL_63;
  }
LABEL_26:
  v28 = v26;
  if ( v25 )
    v28 = --v25 + v26;
  v29 = v16[15];
  v30 = v28 + 1;
  if ( v16[17] < (unsigned __int64)(v28 + 1) )
  {
    v87 = v28;
    v85 = v28 + 1;
    v74 = qvector_reserve(v16 + 15, v29, v30, 1);
    v28 = v87;
    v30 = v85;
    v16[15] = v74;
    v29 = v74;
  }
  v16[16] = v30;
  *(_BYTE *)(v29 + v28) = 0;
  v31 = (_QWORD *)(v16[15] + v25);
  *v31 = *(_QWORD *)v27;
  *(_QWORD *)((char *)v31 + v26 - 8) = *(_QWORD *)&v27[v26 - 8];
  v32 = (unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v33 = (char *)v31 - v32;
  v34 = (const char *)(v27 - v33);
  v35 = ((_DWORD)v33 + v26) & 0xFFFFFFF8;
  if ( v35 >= 8 )
  {
    v36 = v35 & 0xFFFFFFF8;
    v37 = 0;
    do
    {
      v38 = v37;
      v37 += 8;
      *(_QWORD *)(v32 + v38) = *(_QWORD *)&v34[v38];
    }
    while ( v37 < v36 );
  }
  v19 = *(_DWORD *)(v7 + 72);
LABEL_34:
  v39 = *(_QWORD *)a2;
  v40 = *(_QWORD *)(*(_QWORD *)a2 + 160LL);
  v41 = *(_DWORD **)(*(_QWORD *)a2 + 144LL);
  if ( (v19 & 8) != 0 )
  {
    if ( dword_8CC5F0 && (*(_BYTE *)(v7 + 76) & 1) != 0 )
    {
      if ( v40 <= 0xA )
      {
        v80 = qvector_reserve(v39 + 144, v41, 11, 1);
        *(_QWORD *)(v39 + 144) = v80;
        v41 = (_DWORD *)v80;
      }
      *(_QWORD *)(v39 + 152) = 11;
      qmemcpy(v41, "Unresolved", 10);
      *(_BYTE *)(*(_QWORD *)(v39 + 144) + 10LL) = 0;
      v42 = 133;
    }
    else
    {
      if ( v40 <= 7 )
      {
        v73 = qvector_reserve(v39 + 144, v41, 8, 1);
        *(_QWORD *)(v39 + 144) = v73;
        v41 = (_DWORD *)v73;
      }
      *(_QWORD *)(v39 + 152) = 8;
      *v41 = 1650552389;
      *(_DWORD *)((char *)v41 + 3) = 1684368482;
      *(_BYTE *)(*(_QWORD *)(v39 + 144) + 7LL) = 0;
      v42 = 120;
    }
  }
  else
  {
    if ( v40 <= 8 )
    {
      v65 = qvector_reserve(v39 + 144, v41, 9, 1);
      *(_QWORD *)(v39 + 144) = v65;
      v41 = (_DWORD *)v65;
    }
    *(_QWORD *)(v39 + 152) = 9;
    *(_QWORD *)v41 = 0x64656C6261736944LL;
    *(_BYTE *)(*(_QWORD *)(v39 + 144) + 8LL) = 0;
    v42 = 127;
  }
  a2[35] = v42;
  v43 = *(_DWORD *)(v7 + 44) == 3;
  src = nullptr;
  v89 = 0;
  if ( v43 )
  {
    v45 = nullptr;
    v46 = 0u;
  }
  else
  {
    v44 = *(_QWORD *)(v7 + 56);
    if ( get_cmt(&src, v44, 0) <= 0 && get_cmt(&src, v44, 1) <= 0 )
    {
      v75 = (_QWORD *)getseg(v44);
      if ( v75 && *v75 == v44 && v75[1] == v44 + *(int *)(v7 + 80) )
      {
        get_segm_name(&src, v75, 0);
        v81 = src;
        if ( (_QWORD)v89 )
        {
          v82 = v89 - 1;
          v83 = v89 + 8;
          v84 = v89 + 9;
          if ( *((_QWORD *)&v89 + 1) >= (unsigned __int64)(v89 + 9) )
            goto LABEL_90;
        }
        else
        {
          if ( *((_QWORD *)&v89 + 1) > 9u )
          {
            *(_QWORD *)&v89 = 10;
            *((_BYTE *)src + 9) = 0;
LABEL_92:
            v81[8] = 32;
            *(_QWORD *)v81 = 0x3A746E656D676553LL;
            v45 = src;
            v46 = v89;
            goto LABEL_43;
          }
          v82 = 0;
          v84 = 10;
          v83 = 9;
        }
        src = (void *)qvector_reserve(&src, src, v84, 1);
        v81 = src;
LABEL_90:
        *(_QWORD *)&v89 = v84;
        v81[v83] = 0;
        v81 = src;
        if ( v82 )
        {
          memmove((char *)src + 9, src, v82);
          v81 = src;
        }
        goto LABEL_92;
      }
      func = (_QWORD *)get_func(v44);
      v77 = func;
      if ( !func || *func != v44 || get_func_cmt(&src, func, 0) <= 0 && get_func_cmt(&src, v77, 1) <= 0 )
        get_ea_name(&src, v44, 0, 0);
    }
    v45 = src;
    v46 = v89;
  }
LABEL_43:
  v47 = *(_QWORD *)a2;
  v48 = *(void **)(*(_QWORD *)a2 + 168LL);
  v49 = *(_QWORD *)(*(_QWORD *)a2 + 184LL);
  *(_QWORD *)(v47 + 168) = v45;
  *(_OWORD *)(v47 + 176) = v46;
  src = v48;
  *((_QWORD *)&v89 + 1) = v49;
  if ( v48 )
  {
    *(_QWORD *)&v89 = 0;
    qfree(v48, (const char *)v46);
  }
  return 1;
}
