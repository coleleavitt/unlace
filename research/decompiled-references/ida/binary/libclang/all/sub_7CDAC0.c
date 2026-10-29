void __fastcall sub_7CDAC0(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rdi
  unsigned __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rdx
  size_t v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __m128i *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // esi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdi
  _BYTE *v22; // rax
  __int64 v23; // rdi
  _DWORD *v24; // rdx
  __int64 v25; // rdi
  _WORD *v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbp
  int v30; // r14d
  int v31; // r13d
  __int64 v32; // rdi
  _WORD *v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  _QWORD *v37; // r8
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // r13
  _BYTE *v42; // rax
  _WORD *v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  _WORD *v46; // rdx
  __int64 v47; // rdi
  _BYTE *v48; // rax
  __int64 v49; // rdx
  char v50; // dl
  __int64 v51; // r9
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // [rsp+18h] [rbp-B0h]
  _QWORD *v56; // [rsp+28h] [rbp-A0h]
  int v57; // [rsp+30h] [rbp-98h]
  unsigned __int64 v58; // [rsp+38h] [rbp-90h]
  unsigned __int64 v59; // [rsp+48h] [rbp-80h] BYREF
  void *v60; // [rsp+50h] [rbp-78h]
  unsigned __int64 v61; // [rsp+58h] [rbp-70h]
  _QWORD dest[2]; // [rsp+60h] [rbp-68h] BYREF
  void *v63[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v64; // [rsp+80h] [rbp-48h] BYREF

  v3 = dest;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*(_QWORD *)(a2 + 88) + 40LL) & 7) != 0 )
    v4 = 0;
  v5 = *(__int64 **)(v4 + 16);
  v6 = *v5;
  v60 = dest;
  v7 = (unsigned int)v6;
  v63[0] = (void *)(unsigned int)v6;
  v8 = (unsigned int)v6;
  if ( (v6 & 0xFFFFFFF0) != 0 )
  {
    v60 = (void *)std::string::_M_create();
    v3 = v60;
    v8 = (unsigned __int64)v63[0];
    dest[0] = v63[0];
  }
  if ( v7 == 1 )
  {
    *v3 = *((_BYTE *)v5 + 16);
    v8 = (unsigned __int64)v63[0];
    v3 = v60;
  }
  else if ( v7 )
  {
    memcpy(v3, v5 + 2, v7);
    v8 = (unsigned __int64)v63[0];
    v3 = v60;
  }
  v61 = v8;
  v3[v8] = 0;
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)(a2 + 96);
  v11 = *(__m128i **)(*(_QWORD *)a1 + 32LL);
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v11;
  if ( v10 )
  {
    if ( v12 <= 0xF )
    {
      v9 = sub_26240F0(v9, "@implementation ", 16);
    }
    else
    {
      *v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E920);
      *(_QWORD *)(v9 + 32) += 16LL;
    }
    v13 = sub_26240F0(v9, v60, v61);
    v14 = *(_QWORD *)(v13 + 32);
    v15 = v13;
    if ( (unsigned __int64)(*(_QWORD *)(v13 + 24) - v14) <= 2 )
    {
      v15 = sub_26240F0(v13, " : ", 3);
    }
    else
    {
      *(_BYTE *)(v14 + 2) = 32;
      *(_WORD *)v14 = 14880;
      *(_QWORD *)(v13 + 32) += 3LL;
    }
    v16 = a2 + 48;
    sub_77A870(v10, v15);
    v17 = sub_79C190(a2 + 48);
    if ( v17 )
      goto LABEL_16;
    goto LABEL_23;
  }
  if ( v12 <= 0xF )
  {
    v9 = sub_26240F0(v9, "@implementation ", 16);
  }
  else
  {
    *v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E920);
    *(_QWORD *)(v9 + 32) += 16LL;
  }
  v16 = a2 + 48;
  sub_26240F0(v9, v60, v61);
  v17 = sub_79C190(a2 + 48);
  if ( v17 )
  {
LABEL_16:
    while ( (*(_BYTE *)(v17 + 28) & 0x7F) != 0x30 )
    {
      v18 = *(_QWORD *)(v17 + 8);
      v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 <= 7 )
        goto LABEL_22;
    }
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v17 + 8);
      v17 = v20 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v20 <= 7 )
        break;
      if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x30 )
        ++v19;
    }
    if ( v19 == -1 )
    {
LABEL_22:
      if ( !v10 )
        goto LABEL_61;
      goto LABEL_23;
    }
    v25 = *(_QWORD *)a1;
    v26 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v26 <= 1u )
    {
      sub_26240F0(v25, "{\n", 2);
    }
    else
    {
      *v26 = 2683;
      *(_QWORD *)(v25 + 32) += 2LL;
    }
    *(_DWORD *)(a1 + 32) += *(unsigned __int8 *)(a1 + 8);
    v27 = sub_79C190(v16);
    if ( !v27 )
    {
LABEL_56:
      v45 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 32) -= *(unsigned __int8 *)(a1 + 8);
      v46 = *(_WORD **)(v45 + 32);
      if ( *(_QWORD *)(v45 + 24) - (_QWORD)v46 <= 1u )
      {
        sub_26240F0(v45, "}\n", 2);
      }
      else
      {
        *v46 = 2685;
        *(_QWORD *)(v45 + 32) += 2LL;
      }
      goto LABEL_25;
    }
    while ( (*(_BYTE *)(v27 + 28) & 0x7F) != 0x30 )
    {
      v28 = *(_QWORD *)(v27 + 8);
      v27 = v28 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 <= 7 )
        goto LABEL_56;
    }
    v55 = v16;
    v29 = v27;
LABEL_41:
    v30 = *(_DWORD *)(a1 + 32);
    v31 = 0;
    if ( v30 )
    {
      do
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)a1;
          v33 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
          if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v33 <= 1u )
            break;
          ++v31;
          *v33 = 8224;
          *(_QWORD *)(v32 + 32) += 2LL;
          if ( v30 == v31 )
            goto LABEL_46;
        }
        ++v31;
        sub_26240F0(v32, "  ", 2);
      }
      while ( v30 != v31 );
    }
LABEL_46:
    v34 = *(_QWORD *)a1;
    v35 = sub_798D40(v29);
    v36 = *(_QWORD *)(v29 + 48);
    v37 = (_QWORD *)v35;
    v38 = v36;
    v39 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    v40 = *(_QWORD *)(v39 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33
      || (v49 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL], (v49 & 8) == 0)
      || (v50 = v36 | v49,
          v51 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
              | v50 & 7,
          (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
         & 0x1C0) == 0) )
    {
LABEL_47:
      v59 = v38;
      sub_B2AE60(v63, &v59, a1 + 8);
      v41 = sub_26240F0(v34, v63[0], v63[1]);
      v42 = *(_BYTE **)(v41 + 32);
      if ( (unsigned __int64)v42 >= *(_QWORD *)(v41 + 24) )
      {
        v41 = sub_26239D0(v41, 32);
      }
      else
      {
        *(_QWORD *)(v41 + 32) = v42 + 1;
        *v42 = 32;
      }
      sub_77A870(v29, v41);
      v43 = *(_WORD **)(v41 + 32);
      if ( *(_QWORD *)(v41 + 24) - (_QWORD)v43 <= 1u )
      {
        sub_26240F0(v41, ";\n", 2);
      }
      else
      {
        *v43 = 2619;
        *(_QWORD *)(v41 + 32) += 2LL;
      }
      if ( v63[0] != &v64 )
        operator delete(v63[0], v64 + 1);
      while ( 1 )
      {
        v44 = *(_QWORD *)(v29 + 8);
        v29 = v44 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v44 <= 7 )
          break;
        if ( (*(_BYTE *)(v29 + 28) & 0x7F) == 0x30 )
          goto LABEL_41;
      }
      v16 = v55;
      goto LABEL_56;
    }
    v52 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        & 0xFFFFFFFFFFFFFE3FLL
        | v50 & 7;
    if ( (v40 & 7) != 0 || (v40 & 8) != 0 )
    {
      v58 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          & 0xFFFFFFFFFFFFFE3FLL
          | v50 & 7;
      v57 = *(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | v50 & 7;
      v56 = v37;
      v54 = sub_B0CF30(v36, v36);
      v52 = v58;
      LODWORD(v51) = v57;
      v37 = v56;
      v53 = v54 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v58 <= 7 )
        goto LABEL_71;
    }
    else
    {
      v53 = v39 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v52 <= 7 )
      {
LABEL_71:
        v38 = (unsigned int)v51 & 0xFFFFFE3F | v53;
        goto LABEL_47;
      }
    }
    v38 = sub_6C3980(v37, v53, v52);
    goto LABEL_47;
  }
LABEL_61:
  if ( !sub_79C190(v16) )
  {
    sub_7CBE80(a1, v16, 0);
    v47 = *(_QWORD *)a1;
    v48 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v48 )
    {
      sub_26240F0(v47, "\n", 1);
    }
    else
    {
      *v48 = 10;
      ++*(_QWORD *)(v47 + 32);
    }
    goto LABEL_26;
  }
LABEL_23:
  v21 = *(_QWORD *)a1;
  v22 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
  if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v22 )
  {
    sub_26240F0(v21, "\n", 1);
  }
  else
  {
    *v22 = 10;
    ++*(_QWORD *)(v21 + 32);
  }
LABEL_25:
  sub_7CBE80(a1, v16, 0);
LABEL_26:
  v23 = *(_QWORD *)a1;
  v24 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v24 <= 3u )
  {
    sub_26240F0(v23, "@end", 4);
  }
  else
  {
    *v24 = 1684956480;
    *(_QWORD *)(v23 + 32) += 4LL;
  }
  if ( v60 != dest )
    operator delete(v60, dest[0] + 1LL);
}

