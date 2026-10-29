__int64 __fastcall sub_70E2E0(__int64 a1, char *a2, void *a3)
{
  _BYTE *v4; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  const char *v10; // rax
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r13
  size_t v14; // r14
  __int64 v15; // r12
  unsigned int v16; // r13d
  __int64 v18; // rax
  __int64 v19; // r13
  size_t v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  const char *v23; // rax
  __int64 *v24; // r12
  const char *v25; // rbx
  size_t v26; // rax
  size_t v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  bool v31; // cc
  size_t v32; // rax
  size_t v33; // r12
  __int64 v34; // rax
  char *v35; // r13
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r12
  unsigned int v41; // edx
  unsigned int v42; // eax
  void *v43; // r11
  __int64 v44; // r13
  __int64 v45; // r13
  __int64 v46; // rax
  char v47; // al
  void *v48; // r12
  unsigned int v49; // eax
  void (__fastcall *v50)(__int128 *, __int64, __int64); // rax
  __m128i v51; // xmm0
  void (__fastcall *v52)(__m128i *, __int128 *, __int64); // rax
  unsigned int v53; // eax
  __int64 v54; // rdi
  void *v55; // rdi
  size_t v56; // r13
  __int64 v57; // rax
  int v58; // r12d
  const char *errdesc; // rax
  __int64 *v60; // r13
  const char *v61; // rbx
  size_t v62; // rax
  size_t v63; // r12
  void *v64; // rdi
  size_t v65; // r14
  char *v66; // rsi
  __m128i si128; // xmm0
  void *v68; // rdi
  size_t v69; // r13
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rax
  __int64 v75; // [rsp+8h] [rbp-138h]
  __int64 v76; // [rsp+10h] [rbp-130h]
  __int64 v77; // [rsp+18h] [rbp-128h]
  unsigned int v78; // [rsp+20h] [rbp-120h]
  void *v79; // [rsp+20h] [rbp-120h]
  size_t v80; // [rsp+28h] [rbp-118h]
  void *v81; // [rsp+28h] [rbp-118h]
  __int64 v82; // [rsp+28h] [rbp-118h]
  __int64 v83; // [rsp+28h] [rbp-118h]
  _BYTE *src; // [rsp+30h] [rbp-110h]
  const char *srcc; // [rsp+30h] [rbp-110h]
  void *srca; // [rsp+30h] [rbp-110h]
  void *srcb; // [rsp+30h] [rbp-110h]
  void *v89; // [rsp+38h] [rbp-108h]
  __int64 v90; // [rsp+40h] [rbp-100h] BYREF
  __int64 v91; // [rsp+48h] [rbp-F8h] BYREF
  void *ptr; // [rsp+50h] [rbp-F0h] BYREF
  __int128 v93; // [rsp+58h] [rbp-E8h]
  __int128 v94; // [rsp+70h] [rbp-D0h] BYREF
  __m128i v95; // [rsp+80h] [rbp-C0h] BYREF
  __m128i v96; // [rsp+90h] [rbp-B0h] BYREF
  __m128i v97; // [rsp+A0h] [rbp-A0h]
  __m128i v98[2]; // [rsp+B0h] [rbp-90h] BYREF
  _BYTE v99[16]; // [rsp+D0h] [rbp-70h] BYREF
  void (__fastcall *v100)(_BYTE *, _BYTE *, __int64); // [rsp+E0h] [rbp-60h]
  __int64 v101; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v102; // [rsp+108h] [rbp-38h]

  v4 = *(_BYTE **)(a1 + 64);
  v102 = __readfsqword(0x28u);
  src = v4;
  if ( v4 )
  {
    v6 = (__int64)(v4 + 1);
    v7 = (__int64)v4;
    v8 = *(_QWORD *)(a1 + 56);
    src = v4 - 1;
    v9 = a1 + 56;
    if ( *(_QWORD *)(a1 + 72) >= (unsigned __int64)(v4 + 1) )
      goto LABEL_3;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 56);
    v7 = 1;
    v6 = 2;
    v9 = a1 + 56;
    if ( *(_QWORD *)(a1 + 72) >= 2u )
      goto LABEL_3;
  }
  v18 = qvector_reserve(v9, v8, v6, 1);
  *(_QWORD *)(a1 + 56) = v18;
  v8 = v18;
LABEL_3:
  *(_QWORD *)(a1 + 64) = v6;
  src[v8] = 43;
  *(_BYTE *)(*(_QWORD *)(a1 + 56) + v7) = 0;
  v10 = (const char *)qbasename(a2);
  ptr = nullptr;
  v93 = 0;
  if ( v10 )
  {
    srcc = v10;
    v11 = strlen(v10);
    v12 = v11 + 1;
    v13 = v11;
    ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
    *(_QWORD *)&v93 = v12;
    memmove(ptr, srcc, v13);
    *((_BYTE *)ptr + v13) = 0;
    srca = (void *)v93;
    if ( (_QWORD)v93 )
    {
      v14 = v93 - 1;
      if ( (_QWORD)v93 != 1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        v20 = v93 - 1;
        if ( v19 )
        {
          --v19;
          v20 = v14 + v19;
          srca = (void *)(v93 + v19);
        }
        v21 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)srca )
        {
          v80 = v20;
          v22 = qvector_reserve(v9, v21, srca, 1);
          *(_QWORD *)(a1 + 56) = v22;
          v20 = v80;
          v21 = v22;
        }
        *(_QWORD *)(a1 + 64) = srca;
        *(_BYTE *)(v21 + v20) = 0;
        memcpy((void *)(v19 + *(_QWORD *)(a1 + 56)), ptr, v14);
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v93 = 0;
      qfree(ptr);
    }
  }
  *(_BYTE *)(a1 + 340) = 0;
  srcb = (void *)open_linput(a2, 0);
  if ( srcb )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( sub_813700(v15, srcb, a1 + 272, 68, 1) != 68 )
    {
LABEL_10:
      v16 = 0;
LABEL_11:
      close_linput(srcb);
      return v16;
    }
    v78 = strcmp((const char *)(a1 + 272), "VCD");
    if ( v78 )
    {
      sub_3573A0((char **)v15);
      goto LABEL_10;
    }
    if ( *(_BYTE *)(a1 + 282) != 1 )
    {
      v66 = *(char **)v15;
      if ( *(_QWORD *)(v15 + 16) <= 0x1Eu )
      {
        v71 = qvector_reserve(v15, v66, 31, 1);
        *(_QWORD *)v15 = v71;
        v66 = (char *)v71;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23842D0);
      *(_QWORD *)(v15 + 8) = 31;
      *(__m128i *)v66 = si128;
      *(__m128i *)(v66 + 14) = _mm_load_si128((const __m128i *)&xmmword_23842E0);
      *(_BYTE *)(*(_QWORD *)v15 + 30LL) = 0;
      goto LABEL_10;
    }
    v28 = *(_QWORD *)(a1 + 48);
    if ( v28 && (*(_QWORD *)v28 != *(_QWORD *)(a1 + 288) || *(_OWORD *)(a1 + 296) != *(_OWORD *)(v28 + 8)) )
    {
      sub_3573A0(*(char ***)(a1 + 32));
      goto LABEL_10;
    }
    v29 = *(_QWORD *)(a1 + 168);
    if ( v29 )
    {
      qfclose(v29);
      *(_QWORD *)(a1 + 168) = 0;
    }
    v30 = *(_QWORD *)(a1 + 160);
    if ( v30 )
    {
      qfclose(v30);
      v31 = *(_QWORD *)(a1 + 144) <= 1u;
      *(_QWORD *)(a1 + 160) = 0;
      if ( !v31 )
        qunlink(*(_QWORD *)(a1 + 136));
    }
    if ( a3 && (v32 = strlen((const char *)a3), (v33 = v32) != 0) )
    {
      v55 = *(void **)(a1 + 112);
      v56 = v32 + 1;
      if ( *(_QWORD *)(a1 + 128) < v32 + 1 )
      {
        v70 = qvector_reserve(a1 + 112, *(_QWORD *)(a1 + 112), v56, 1);
        *(_QWORD *)(a1 + 112) = v70;
        v55 = (void *)v70;
      }
      *(_QWORD *)(a1 + 120) = v56;
      memmove(v55, a3, v33);
      *(_BYTE *)(*(_QWORD *)(a1 + 112) + v33) = 0;
      if ( *(_QWORD *)(a1 + 120) > 1u )
      {
        v57 = fopenM(a3);
        *(_QWORD *)(a1 + 168) = v57;
        v58 = 0;
        if ( v57 || *__errno_location() == 2 )
        {
          while ( 1 )
          {
            sub_3573A0((char **)(a1 + 136));
            v35 = (char *)haystack;
            if ( *(_QWORD *)(a1 + 144) )
              v35 = *(char **)(a1 + 136);
            if ( !(unsigned __int8)qfileexist(v35, "%s.%d.$$$") )
              break;
            ++v58;
          }
          v34 = qfopen(v35, "wb+");
          *(_QWORD *)(a1 + 160) = v34;
        }
        else
        {
          v34 = *(_QWORD *)(a1 + 160);
          v35 = (char *)a3;
        }
LABEL_39:
        if ( !v34 )
        {
          errdesc = (const char *)get_errdesc(v35);
          v60 = *(__int64 **)(a1 + 104);
          v61 = errdesc;
          if ( errdesc && (v62 = strlen(errdesc), (v63 = v62) != 0) )
          {
            v64 = (void *)*v60;
            v65 = v62 + 1;
            if ( v60[2] < v62 + 1 )
            {
              v74 = qvector_reserve(v60, *v60, v62 + 1, 1);
              *v60 = v74;
              v64 = (void *)v74;
            }
            v60[1] = v65;
            memmove(v64, v61, v63);
            *(_BYTE *)(*v60 + v63) = 0;
          }
          else
          {
            v60[1] = 0;
          }
          goto LABEL_10;
        }
        v36 = *(unsigned int *)(a1 + 284);
        v37 = *(unsigned int *)(a1 + 336);
        v38 = qlsize(srcb);
        v39 = v36 + 68;
        ptr = nullptr;
        v93 = 0;
        v40 = v38 - (v36 + 68) - v37;
        if ( a3 )
        {
          v41 = *(_DWORD *)(a1 + 284);
          v42 = *(_DWORD *)(a1 + 336);
          if ( v41 >= v42 )
            v42 = *(_DWORD *)(a1 + 284);
          v43 = nullptr;
          v44 = v42;
          if ( v42 )
          {
            v83 = v39;
            ptr = (void *)qvector_reserve(&ptr, 0, v42, 1);
            v41 = *(_DWORD *)(a1 + 284);
            v43 = ptr;
            v39 = v83;
          }
          *(_QWORD *)&v93 = v44;
          v45 = v41;
          v77 = v39;
          v76 = *(_QWORD *)(a1 + 160);
          v75 = *(_QWORD *)(a1 + 32);
          v81 = v43;
          v46 = sub_813700(v75, srcb, v43, v41, 1);
          v39 = v77;
          if ( v45 != v46 || v76 && (v47 = sub_813810(v75, v76, v81, v45), v39 = v77, !v47) )
          {
            v16 = 0;
LABEL_47:
            if ( ptr )
            {
              *(_QWORD *)&v93 = 0;
              qfree(ptr);
            }
            goto LABEL_11;
          }
        }
        if ( *(_QWORD *)(a1 + 16) )
        {
          v82 = v39;
          v90 = *(unsigned int *)(a1 + 284);
          (*(void (__fastcall **)(__int64, __int64 *))(a1 + 24))(a1, &v90);
          v39 = v82;
        }
        v48 = (void *)sub_814880(srcb, v39, v40);
        qlseek(*(_QWORD *)(a1 + 40), 0, 0);
        if ( a3 )
        {
          v49 = *(char *)(a1 + 283);
          v95 = 0u;
          v78 = v49;
          v50 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a1 + 16);
          v94 = 0;
          if ( v50 )
          {
            v50(&v94, a1, 2);
            v51 = _mm_loadu_si128((const __m128i *)(a1 + 16));
            v52 = *(void (__fastcall **)(__m128i *, __int128 *, __int64))(a1 + 16);
            v97 = 0u;
            v95 = v51;
            v96 = 0;
            if ( v52 )
            {
              v52(&v96, &v94, 2);
              v97 = _mm_load_si128(&v95);
            }
          }
          else
          {
            v96 = 0;
            v97 = 0u;
          }
        }
        else
        {
          v95 = 0u;
          v97 = 0u;
          v94 = 0;
          v96 = 0;
        }
        sub_70AB90(v98, *(_QWORD **)(a1 + 32), *(_QWORD *)(a1 + 160), a2, v78, 0, &v96);
        if ( v97.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v97.m128i_i64[0])(&v96, &v96, 3);
        v53 = sub_802340(*(_QWORD *)(a1 + 32), a1 + 176, *(_QWORD *)(a1 + 40), v48, v98);
        v54 = v101;
        v16 = v53;
        if ( !(_BYTE)v53 )
          goto LABEL_63;
        if ( a3 )
        {
          v79 = ptr;
          v89 = *(void **)(a1 + 32);
          if ( v37 != sub_813700(v89, srcb, ptr, v37, 1) )
          {
LABEL_62:
            v54 = v101;
            v16 = 0;
            goto LABEL_63;
          }
          v73 = sub_70FC00(v89, v98, v79, v37);
          v54 = v101;
          if ( !(_BYTE)v73 )
          {
            v16 = 0;
LABEL_63:
            v98[0].m128i_i64[0] = (__int64)off_2B0E470;
            if ( v54 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
            goto LABEL_65;
          }
          if ( !v101 )
          {
            *(_BYTE *)(a1 + 340) = 1;
            v16 = v73;
            v98[0].m128i_i64[0] = (__int64)off_2B0E470;
LABEL_65:
            v98[0].m128i_i64[1] = (__int64)&off_2B0E438;
            if ( v100 )
              v100(v99, v99, 3);
            if ( v95.m128i_i64[0] )
              ((void (__fastcall *)(__int128 *, __int128 *, __int64))v95.m128i_i64[0])(&v94, &v94, 3);
            close_linput(v48);
            goto LABEL_47;
          }
        }
        else
        {
          v54 = v101;
          if ( !v101 )
          {
LABEL_101:
            if ( *(_QWORD *)(a1 + 16) )
            {
              v91 = *(_QWORD *)(a1 + 312) - *(unsigned int *)(a1 + 284);
              (*(void (__fastcall **)(__int64, __int64 *))(a1 + 24))(a1, &v91);
            }
LABEL_99:
            *(_BYTE *)(a1 + 340) = 1;
            v54 = v101;
            goto LABEL_63;
          }
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54) )
          goto LABEL_62;
        if ( a3 )
          goto LABEL_99;
        goto LABEL_101;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 120) = 0;
    }
    v34 = qtmpfile();
    *(_QWORD *)(a1 + 160) = v34;
    v35 = "<tmpfile>";
    goto LABEL_39;
  }
  v23 = (const char *)get_errdesc(a2);
  v24 = *(__int64 **)(a1 + 32);
  v25 = v23;
  if ( v23 && (v26 = strlen(v23), (v27 = v26) != 0) )
  {
    v68 = (void *)*v24;
    v69 = v26 + 1;
    if ( v24[2] < v26 + 1 )
    {
      v72 = qvector_reserve(v24, *v24, v26 + 1, 1);
      *v24 = v72;
      v68 = (void *)v72;
    }
    v24[1] = v69;
    memmove(v68, v25, v27);
    *(_BYTE *)(*v24 + v27) = 0;
  }
  else
  {
    v24[1] = 0;
  }
  return 0;
}

