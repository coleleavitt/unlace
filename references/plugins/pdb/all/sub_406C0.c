__int64 __fastcall sub_406C0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  size_t v8; // rdx
  __m128i v9; // xmm0
  const char *v10; // r14
  __int64 v11; // rax
  size_t v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rbp
  size_t v16; // rdx
  const char *v17; // r13
  __int64 v18; // rax
  size_t v19; // rax
  __int64 v20; // rbp
  size_t v21; // r12
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  const __m128i *v24; // r13
  const __m128i *v25; // r15
  unsigned __int64 v26; // r12
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rax
  size_t v30; // rdx
  __m128i v31; // xmm0
  const char *v32; // r13
  __m128i *v33; // rax
  __int64 v34; // rax
  size_t v35; // rax
  __int64 v36; // rbp
  size_t v37; // r12
  unsigned __int64 v38; // r14
  __int64 (__fastcall *v39)(__int64); // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  size_t v42; // r12
  __int64 v43; // r14
  unsigned __int64 v44; // r13
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  size_t v48; // r12
  __int64 v49; // r13
  unsigned __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rax
  size_t v55; // r15
  __int64 v56; // r8
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rbp
  int v59; // eax
  __int64 v60; // rsi
  __int64 v61; // rax
  _BYTE *v62; // r12
  _BYTE *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rdx
  int v68; // eax
  _BYTE *v69; // rsi
  _BYTE *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  unsigned __int64 v73; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+0h] [rbp-C8h]
  __int64 v75; // [rsp+8h] [rbp-C0h]
  __int64 v76; // [rsp+8h] [rbp-C0h]
  _BYTE *v77; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE *v79; // [rsp+28h] [rbp-A0h] BYREF
  __m128i v80; // [rsp+30h] [rbp-98h] BYREF
  __int64 v81; // [rsp+40h] [rbp-88h] BYREF
  __int128 v82; // [rsp+48h] [rbp-80h]
  __int64 v83; // [rsp+60h] [rbp-68h] BYREF
  __int128 v84; // [rsp+68h] [rbp-60h]
  _BYTE src[5]; // [rsp+7Eh] [rbp-4Ah] BYREF
  _BYTE v86[5]; // [rsp+83h] [rbp-45h] BYREF
  unsigned __int64 v87[8]; // [rsp+88h] [rbp-40h] BYREF

  v1 = 1;
  v87[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_401F0(a1) )
    return v1;
  v82 = 0;
  v81 = 0;
  v80 = 0;
  getinf_buf(98, &v80, 16);
  v3 = v82;
  v4 = v82 + 16;
  v5 = v82 + 16;
  if ( (unsigned __int64)v82 >= 0xFFFFFFFFFFFFFFF0LL )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v6 = v81;
    v7 = v82;
    v8 = 16;
    if ( *((_QWORD *)&v82 + 1) < v4 )
    {
      v81 = qvector_reserve(&v81, v81, v82 + 16, 1);
      v6 = v81;
      v7 = v82;
      v8 = v4 - v82;
    }
    memset((void *)(v6 + v7), 0, v8);
  }
  v9 = _mm_load_si128(&v80);
  *(_QWORD *)&v82 = v5;
  v10 = ::src;
  *(__m128i *)(v81 + v3) = v9;
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v11 + 8) )
    v10 = *(const char **)v11;
  if ( v10 )
  {
    v12 = strlen(v10);
    v13 = v82;
    v14 = v12 + 1;
    v15 = v12 + 1 + v82;
    if ( __CFADD__(v12 + 1, (_QWORD)v82) )
    {
      if ( (unsigned __int64)v82 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v82 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_15;
        goto LABEL_14;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v13 = v82;
    v14 = 1;
    v10 = "";
    v15 = v82 + 1;
    if ( (_QWORD)v82 == -1 )
    {
      v13 = -1;
      v10 = "";
LABEL_14:
      *(_QWORD *)&v82 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
  }
  v60 = v81;
  v61 = v13;
  if ( *((_QWORD *)&v82 + 1) < v15 )
  {
    v81 = qvector_reserve(&v81, v81, v15, 1);
    v60 = v81;
    v61 = v82;
  }
  memset((void *)(v60 + v61), 0, v15 - v61);
  *(_QWORD *)&v82 = v15;
LABEL_15:
  v16 = v14;
  v17 = ::src;
  memcpy((void *)(v13 + v81), v10, v16);
  v18 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v18 + 32) )
    v17 = *(const char **)(v18 + 24);
  if ( v17 )
  {
    v19 = strlen(v17);
    v20 = v82;
    v21 = v19 + 1;
    v22 = v19 + 1 + v82;
    if ( __CFADD__(v19 + 1, (_QWORD)v82) )
    {
      if ( (unsigned __int64)v82 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v82 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_22;
        goto LABEL_21;
      }
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v20 = v82;
    v21 = 1;
    v17 = "";
    v22 = v82 + 1;
    if ( (_QWORD)v82 == -1 )
    {
      v20 = -1;
      v17 = "";
LABEL_21:
      *(_QWORD *)&v82 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_22;
    }
  }
  v64 = v81;
  v65 = v20;
  if ( *((_QWORD *)&v82 + 1) < v22 )
  {
    v81 = qvector_reserve(&v81, v81, v22, 1);
    v65 = v82;
    v64 = v81;
  }
  memset((void *)(v64 + v65), 0, v22 - v65);
  *(_QWORD *)&v82 = v22;
LABEL_22:
  memcpy((void *)(v20 + v81), v17, v21);
  v23 = v82;
  v24 = *(const __m128i **)(a1 + 8);
  v25 = v24 + 3;
  v26 = v82 + 24;
  v27 = v82 + 24;
  if ( (unsigned __int64)v82 >= 0xFFFFFFFFFFFFFFE8LL )
  {
    v27 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v28 = v81;
    v29 = v82;
    v30 = 24;
    if ( *((_QWORD *)&v82 + 1) < v26 )
    {
      v81 = qvector_reserve(&v81, v81, v82 + 24, 1);
      v28 = v81;
      v29 = v82;
      v30 = v26 - v82;
    }
    memset((void *)(v28 + v29), 0, v30);
  }
  *(_QWORD *)&v82 = v27;
  v31 = _mm_loadu_si128(v24 + 3);
  v32 = ::src;
  v33 = (__m128i *)(v23 + v81);
  *v33 = v31;
  v33[1].m128i_i64[0] = v25[1].m128i_i64[0];
  v34 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v34 + 80) )
    v32 = *(const char **)(v34 + 72);
  if ( v32 )
  {
    v35 = strlen(v32);
    v36 = v82;
    v37 = ++v35;
    v38 = v82 + v35;
    if ( __CFADD__((_QWORD)v82, v35) )
    {
      if ( (unsigned __int64)v82 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v82 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_33;
        goto LABEL_32;
      }
      v38 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v36 = v82;
    v32 = "";
    v37 = 1;
    v38 = v82 + 1;
    if ( (_QWORD)v82 == -1 )
    {
      v36 = -1;
      v32 = "";
      v37 = 1;
LABEL_32:
      *(_QWORD *)&v82 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_33;
    }
  }
  v66 = v81;
  v67 = v36;
  if ( *((_QWORD *)&v82 + 1) < v38 )
  {
    v81 = qvector_reserve(&v81, v81, v38, 1);
    v67 = v82;
    v66 = v81;
  }
  memset((void *)(v66 + v67), 0, v38 - v67);
  *(_QWORD *)&v82 = v38;
LABEL_33:
  memcpy((void *)(v36 + v81), v32, v37);
  v39 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL);
  if ( v39 == sub_23F20 )
    v40 = *(_QWORD *)(a1 + 24);
  else
    v40 = v39(a1);
  v41 = pack_dq(src, v87, v40 + 1) - (_QWORD)src;
  v42 = v41;
  if ( v41 )
  {
    v43 = v82;
    v44 = v82 + v41;
    if ( __CFADD__((_QWORD)v82, v41) )
    {
      if ( (unsigned __int64)v82 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v82 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v82 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_40;
      }
      v44 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v45 = v81;
    v46 = v82;
    if ( *((_QWORD *)&v82 + 1) < v44 )
    {
      v81 = qvector_reserve(&v81, v81, v44, 1);
      v45 = v81;
      v46 = v82;
    }
    memset((void *)(v45 + v46), 0, v44 - v46);
    *(_QWORD *)&v82 = v44;
LABEL_40:
    memcpy((void *)(v43 + v81), src, v42);
  }
  v47 = pack_dd(src, v86) - (_QWORD)src;
  v48 = v47;
  if ( v47 )
  {
    v49 = v82;
    v50 = v82 + v47;
    if ( __CFADD__((_QWORD)v82, v47) )
    {
      if ( (unsigned __int64)v82 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v82 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v82 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_46;
      }
      v50 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v51 = v81;
    v52 = v82;
    if ( *((_QWORD *)&v82 + 1) < v50 )
    {
      v81 = qvector_reserve(&v81, v81, v50, 1);
      v51 = v81;
      v52 = v82;
    }
    memset((void *)(v51 + v52), 0, v50 - v52);
    *(_QWORD *)&v82 = v50;
LABEL_46:
    memcpy((void *)(v49 + v81), src, v48);
  }
  v77 = nullptr;
  v78 = 0;
  if ( (unsigned int)sub_2EC00(a1, 3, v81, v82, &v77, &v78) == 1 && v78 > 0 )
  {
    v79 = v77;
    v84 = 0;
    v83 = 0;
    v53 = unpack_dd(&v79, &v77[v78]);
    *(_DWORD *)(a1 + 1148) = v53;
    if ( v53 <= 0 )
    {
      if ( !under_debugger )
        interr(30493);
      BUG();
    }
    v54 = pack_dd(src, v86) - (_QWORD)src;
    v55 = v54;
    if ( v54 )
    {
      v56 = v84;
      v57 = v84 + v54;
      if ( __CFADD__((_QWORD)v84, v54) )
      {
        if ( (unsigned __int64)v84 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v84 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v84 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
          memcpy((void *)(v56 + v83), src, v55);
          goto LABEL_56;
        }
        v57 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v71 = v83;
      v72 = v84;
      if ( *((_QWORD *)&v84 + 1) < v57 )
      {
        v74 = v57;
        v76 = v84;
        v83 = qvector_reserve(&v83, v83, v57, 1);
        v71 = v83;
        v56 = v76;
        v72 = v84;
        v57 = v74;
      }
      v75 = v56;
      v73 = v57;
      memset((void *)(v71 + v72), 0, v57 - v72);
      v56 = v75;
      *(_QWORD *)&v84 = v73;
      goto LABEL_55;
    }
    do
    {
LABEL_56:
      qfree(v77);
      v77 = nullptr;
      qsleep(100);
      callui(27);
      if ( (unsigned int)sub_2EC00(a1, 7, v83, v84, &v77, &v78) != 1 || v78 <= 0 )
      {
        qfree(v77);
        qstrncpy(a1 + 96, "remote server reported error while opening PDB", 1024);
        goto LABEL_75;
      }
      v79 = v77;
      v58 = (unsigned __int64)&v77[v78];
      v59 = unpack_dd(&v79, &v77[v78]);
    }
    while ( !v59 );
    if ( v59 == 1 )
    {
      *(_DWORD *)(a1 + 32) = unpack_dd(&v79, v58);
      *(_DWORD *)(a1 + 16) = unpack_dd(&v79, v58);
      v68 = unpack_dd(&v79, v58);
      v69 = v79;
      *(_DWORD *)(a1 + 20) = v68;
      v70 = v69;
      while ( (unsigned __int64)v70 < v58 )
      {
        if ( !*v70++ )
        {
          v79 = v70;
          break;
        }
      }
      sub_244A0();
    }
    else if ( v59 == -1 )
    {
      v62 = v79;
      v63 = v79;
      do
      {
        if ( (unsigned __int64)v63 >= v58 )
        {
          v62 = nullptr;
          goto LABEL_74;
        }
        ++v63;
      }
      while ( *(v63 - 1) );
      v79 = v63;
LABEL_74:
      qfree(v77);
      qstrncpy(a1 + 96, v62, 1024);
      goto LABEL_75;
    }
    qfree(v77);
    v1 = 0;
    if ( *(int *)(a1 + 1148) > 0 )
      goto LABEL_62;
LABEL_75:
    v1 = -2147467259;
LABEL_62:
    if ( v83 )
    {
      *(_QWORD *)&v84 = 0;
      qfree(v83);
    }
    goto LABEL_64;
  }
  qfree(v77);
  qstrncpy(a1 + 96, "PDB symbol extraction is not supported by the remote server", 1024);
  v1 = -2147467259;
LABEL_64:
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  return v1;
}
