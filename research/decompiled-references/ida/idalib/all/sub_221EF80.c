_QWORD *__fastcall sub_221EF80(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  unsigned __int64 v6; // rax
  int v7; // r12d
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  const void *v13; // rsi
  __int64 v14; // rax
  _WORD *v15; // rdi
  unsigned __int64 v16; // rdx
  int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // r14
  const void *v28; // rsi
  __int64 v29; // rax
  _WORD *v30; // rdi
  unsigned __int64 v31; // r9
  int v32; // r14d
  __int64 v33; // rax
  void *v34; // rax
  char v35; // cl
  _QWORD *v36; // rax
  char *v37; // r15
  __m128i *v38; // rax
  __int64 v39; // r15
  void *v40; // rdi
  char *v42; // rbp
  __int64 v43; // rdx
  char *v44; // r14
  char v45; // cl
  _QWORD *v46; // rax
  char *v47; // r8
  char *v48; // r12
  unsigned __int64 v49; // rdx
  char *v50; // r13
  const char **v51; // [rsp+8h] [rbp-160h]
  __int64 v52; // [rsp+8h] [rbp-160h]
  char *v53; // [rsp+8h] [rbp-160h]
  std::_V2 *v54; // [rsp+10h] [rbp-158h]
  _QWORD *v55; // [rsp+18h] [rbp-150h]
  _QWORD v58[2]; // [rsp+30h] [rbp-138h] BYREF
  _QWORD v59[2]; // [rsp+40h] [rbp-128h] BYREF
  void *v60[2]; // [rsp+50h] [rbp-118h] BYREF
  __int64 v61; // [rsp+60h] [rbp-108h] BYREF
  void *v62[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v63[4]; // [rsp+80h] [rbp-E8h] BYREF
  void *v64[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v65; // [rsp+B0h] [rbp-B8h] BYREF
  __int16 v66; // [rsp+C0h] [rbp-A8h]
  void *v67[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v68[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int16 v69; // [rsp+F0h] [rbp-78h]
  void *v70[2]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v71[2]; // [rsp+110h] [rbp-58h] BYREF
  __int16 v72; // [rsp+120h] [rbp-48h]

  *(_QWORD *)(a2 + 160) = a3;
  *(_QWORD *)(a2 + 168) = a4;
  *(_BYTE *)(a2 + 177) = 0;
  *(_BYTE *)(a2 + 176) = a5 == 1;
  v51 = (const char **)(a2 + 184);
  v54 = (std::_V2 *)(a2 + 160);
  v55 = (_QWORD *)(a2 + 192);
  LOBYTE(v6) = sub_2219D60((std::_V2 *)(a2 + 160), (const char **)(a2 + 184), (_QWORD *)(a2 + 192));
  if ( (_BYTE)v6 != 65 )
  {
    v6 = (unsigned __int8)v6;
    if ( !(_BYTE)v6 )
    {
      v35 = 48;
      v62[0] = v63;
LABEL_53:
      LOBYTE(v63[0]) = v35;
      v36 = v63;
      v37 = (_BYTE *)(&dword_0 + 1);
      goto LABEL_54;
    }
    v42 = (char *)v68 + 1;
    do
    {
      --v42;
      v43 = v6 & 0xF;
      v6 >>= 4;
      v35 = a0123456789abcd_3[v43];
      *v42 = v35;
    }
    while ( v6 );
    v36 = v63;
    v44 = (char *)((char *)v68 + 1 - v42);
    v62[0] = v63;
    v37 = (char *)((char *)v68 + 1 - v42);
    if ( (unsigned __int64)((char *)v68 + 1 - v42) <= 0xF )
    {
      if ( v44 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_53;
      if ( !v44 )
      {
LABEL_54:
        v62[1] = v37;
        v37[(_QWORD)v36] = 0;
        v38 = (__m128i *)sub_99BDC0(v62, 0, 0, "unrecognized format-version: 0x", 0x1Fu);
        v64[0] = &v65;
        if ( (__m128i *)v38->m128i_i64[0] == &v38[1] )
        {
          v65 = _mm_loadu_si128(v38 + 1);
        }
        else
        {
          v64[0] = (void *)v38->m128i_i64[0];
          v65.m128i_i64[0] = v38[1].m128i_i64[0];
        }
        v64[1] = (void *)v38->m128i_i64[1];
        v38->m128i_i64[0] = (__int64)v38[1].m128i_i64;
        v38->m128i_i64[1] = 0;
        v38[1].m128i_i8[0] = 0;
        v72 = 260;
        v70[0] = v64;
        v39 = std::_V2::generic_category((std::_V2 *)v62);
        sub_2253560(v67, v70);
        sub_22205D0(a1, v67, 22, v39);
        if ( v67[0] != v68 )
          operator delete(v67[0]);
        if ( v64[0] != &v65 )
          operator delete(v64[0]);
        v40 = v62[0];
        if ( v62[0] == v63 )
          goto LABEL_62;
LABEL_61:
        operator delete(v40);
        goto LABEL_62;
      }
    }
    else
    {
      if ( (__int64)v44 < 0 )
        goto LABEL_93;
      v36 = (_QWORD *)operator new((unsigned __int64)(v44 + 1));
      v63[0] = (char *)v68 + 1 - v42;
      v62[0] = v36;
    }
    memcpy(v36, v42, (char *)v68 + 1 - v42);
    v36 = v62[0];
    goto LABEL_54;
  }
  v7 = 0;
LABEL_3:
  if ( *(_QWORD *)(a2 + 184) == *(_QWORD *)(a2 + 168) )
  {
LABEL_39:
    *a1 = 0;
    *a1 = *(_QWORD *)(a2 + 192);
    v34 = nullptr;
    goto LABEL_63;
  }
  while ( 1 )
  {
    v8 = sub_2219DE0(v54, v51, v55);
    if ( *(_QWORD *)(a2 + 192) )
      goto LABEL_39;
    v9 = *(_QWORD *)(a2 + 136);
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 288LL);
      if ( v10 != sub_20CE4D0 )
      {
        v18 = v10(*(_QWORD *)(a2 + 136));
        v15 = *(_WORD **)(v18 + 32);
        v11 = v18;
        v16 = *(_QWORD *)(v18 + 24) - (_QWORD)v15;
        goto LABEL_16;
      }
      v11 = *(_QWORD *)(v9 + 8);
      v12 = *(_QWORD *)(v9 + 32);
      v13 = *(const void **)(v9 + 24);
      v14 = *(_QWORD *)(v11 + 24);
      v15 = *(_WORD **)(v11 + 32);
      v16 = v14 - (_QWORD)v15;
      if ( v14 - (__int64)v15 < v12 )
      {
        sub_227BF10(*(_QWORD *)(v9 + 8), v13, *(_QWORD *)(v9 + 32));
      }
      else
      {
        if ( !v12 )
          goto LABEL_9;
        memcpy(v15, v13, *(_QWORD *)(v9 + 32));
        *(_QWORD *)(v11 + 32) += v12;
      }
      v11 = *(_QWORD *)(v9 + 8);
      v14 = *(_QWORD *)(v11 + 24);
      v15 = *(_WORD **)(v11 + 32);
      v16 = v14 - (_QWORD)v15;
LABEL_9:
      if ( *(int *)(v9 + 16) > 0 )
      {
        v17 = 0;
        do
        {
          if ( (unsigned __int64)(v14 - (_QWORD)v15) <= 1 )
          {
            sub_227BF10(v11, "  ", 2);
          }
          else
          {
            *v15 = 8224;
            *(_QWORD *)(v11 + 32) += 2LL;
          }
          v11 = *(_QWORD *)(v9 + 8);
          ++v17;
          v14 = *(_QWORD *)(v11 + 24);
          v15 = *(_WORD **)(v11 + 32);
        }
        while ( *(_DWORD *)(v9 + 16) > v17 );
        if ( (unsigned __int64)(v14 - (_QWORD)v15) > 7 )
          goto LABEL_41;
        goto LABEL_17;
      }
LABEL_16:
      if ( v16 > 7 )
      {
LABEL_41:
        *(_QWORD *)v15 = 0x206E6F6974636553LL;
        *(_QWORD *)(v11 + 32) += 8LL;
        goto LABEL_18;
      }
LABEL_17:
      v11 = sub_227BF10(v11, "Section ", 8);
LABEL_18:
      v19 = sub_227B910(v11, (unsigned int)++v7);
      v20 = *(_QWORD *)(v19 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v20) > 2 )
      {
        *(_BYTE *)(v20 + 2) = 10;
        *(_WORD *)v20 = 31520;
        *(_QWORD *)(v19 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v19, " {\n", 3);
      }
      ++*(_DWORD *)(*(_QWORD *)(a2 + 136) + 16LL);
    }
    v21 = *(_QWORD *)(a2 + 184) - 4LL;
    if ( v8 <= 3 || v21 + v8 > a4 )
      break;
    sub_221E840(v70, a2, v8);
    if ( v70[0] )
    {
      *a1 = v70[0];
      v34 = *(void **)(a2 + 192);
      goto LABEL_63;
    }
    v22 = *(_QWORD *)(a2 + 136);
    if ( !v22 )
      goto LABEL_3;
    v23 = *(_DWORD *)(v22 + 16);
    v24 = (unsigned int)(v23 - 1);
    if ( v23 <= 1 )
      v24 = 0;
    v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 288LL);
    *(_DWORD *)(v22 + 16) = v24;
    if ( v25 != sub_20CE4D0 )
    {
      v33 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 (__fastcall *)(__int64)))v25)(
              v22,
              a2,
              v24,
              sub_20CE4D0);
      v30 = *(_WORD **)(v33 + 32);
      v26 = v33;
      v31 = *(_QWORD *)(v33 + 24) - (_QWORD)v30;
LABEL_37:
      if ( v31 > 1 )
        goto LABEL_43;
      goto LABEL_38;
    }
    v26 = *(_QWORD *)(v22 + 8);
    v27 = *(_QWORD *)(v22 + 32);
    v28 = *(const void **)(v22 + 24);
    v29 = *(_QWORD *)(v26 + 24);
    v30 = *(_WORD **)(v26 + 32);
    v31 = v29 - (_QWORD)v30;
    if ( v27 > v29 - (__int64)v30 )
    {
      sub_227BF10(*(_QWORD *)(v22 + 8), v28, *(_QWORD *)(v22 + 32));
    }
    else
    {
      if ( !v27 )
        goto LABEL_30;
      memcpy(v30, v28, *(_QWORD *)(v22 + 32));
      *(_QWORD *)(v26 + 32) += v27;
    }
    v26 = *(_QWORD *)(v22 + 8);
    LODWORD(v24) = *(_DWORD *)(v22 + 16);
    v29 = *(_QWORD *)(v26 + 24);
    v30 = *(_WORD **)(v26 + 32);
    v31 = v29 - (_QWORD)v30;
LABEL_30:
    if ( (int)v24 <= 0 )
      goto LABEL_37;
    v32 = 0;
    do
    {
      if ( (unsigned __int64)(v29 - (_QWORD)v30) <= 1 )
      {
        sub_227BF10(v26, "  ", 2);
      }
      else
      {
        *v30 = 8224;
        *(_QWORD *)(v26 + 32) += 2LL;
      }
      v26 = *(_QWORD *)(v22 + 8);
      ++v32;
      v29 = *(_QWORD *)(v26 + 24);
      v30 = *(_WORD **)(v26 + 32);
    }
    while ( *(_DWORD *)(v22 + 16) > v32 );
    if ( (unsigned __int64)(v29 - (_QWORD)v30) > 1 )
    {
LABEL_43:
      *v30 = 2685;
      *(_QWORD *)(v26 + 32) += 2LL;
      goto LABEL_3;
    }
LABEL_38:
    sub_227BF10(v26, "}\n", 2);
    if ( *(_QWORD *)(a2 + 184) == *(_QWORD *)(a2 + 168) )
      goto LABEL_39;
  }
  if ( *(_QWORD *)(a2 + 184) == 4 )
  {
    v45 = 48;
    v58[0] = v59;
    goto LABEL_74;
  }
  v48 = (char *)v71 + 1;
  do
  {
    --v48;
    v49 = v21 & 0xF;
    v21 >>= 4;
    v45 = a0123456789abcd_3[v49];
    *v48 = v45;
  }
  while ( v21 );
  v46 = v59;
  v58[0] = v59;
  v50 = (char *)((char *)v71 + 1 - v48);
  v47 = (char *)((char *)v71 + 1 - v48);
  if ( (unsigned __int64)((char *)v71 + 1 - v48) > 0xF )
  {
    if ( (__int64)v50 >= 0 )
    {
      v46 = (_QWORD *)operator new((unsigned __int64)(v50 + 1));
      v59[0] = (char *)v71 + 1 - v48;
      v47 = (char *)((char *)v71 + 1 - v48);
      v58[0] = v46;
      goto LABEL_84;
    }
LABEL_93:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v50 == (_BYTE *)&dword_0 + 1 )
  {
LABEL_74:
    LOBYTE(v59[0]) = v45;
    v46 = v59;
    v47 = (_BYTE *)(&dword_0 + 1);
  }
  else if ( v50 )
  {
LABEL_84:
    v53 = v47;
    memcpy(v46, v48, (size_t)v50);
    v46 = (_QWORD *)v58[0];
    v47 = v53;
  }
  v58[1] = v47;
  v47[(_QWORD)v46] = 0;
  LODWORD(v62[0]) = v8;
  v64[0] = "invalid section length ";
  v66 = 2307;
  v65.m128i_i64[0] = (__int64)v62[0];
  v69 = 770;
  v72 = (unsigned __int16)&elf_gnu_hash_indexes[43] + 2;
  v67[0] = v64;
  v68[0] = " at offset 0x";
  v70[0] = v67;
  v71[0] = v58;
  v52 = std::_V2::generic_category((std::_V2 *)((char *)&elf_gnu_hash_indexes[43] + 2));
  sub_2253560(v60, v70);
  sub_22205D0(a1, v60, 22, v52);
  if ( v60[0] != &v61 )
    operator delete(v60[0]);
  v40 = (void *)v58[0];
  if ( (_QWORD *)v58[0] != v59 )
    goto LABEL_61;
LABEL_62:
  v34 = *(void **)(a2 + 192);
LABEL_63:
  *(_QWORD *)(a2 + 192) = 0;
  v67[0] = v34;
  sub_A05760(v70, (_QWORD **)v67);
  if ( v67[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v67[0] + 8LL))(v67[0]);
  return a1;
}
