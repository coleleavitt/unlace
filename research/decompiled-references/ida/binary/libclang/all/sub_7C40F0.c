__int16 __fastcall sub_7C40F0(_BYTE *a1, __int64 a2)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r12
  char v6; // al
  unsigned __int8 v7; // al
  char v8; // al
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  const char *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int *v13; // r14
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r8
  char *v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  _WORD *v20; // r12
  __int64 v21; // rdi
  void *v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // edx
  unsigned __int16 v27; // si
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r13
  char *v33; // rax
  char *v34; // r14
  _BYTE *v35; // rcx
  _BYTE *v36; // r15
  size_t v37; // rax
  _BYTE *v38; // rdx
  __int64 v39; // rdi
  void *v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  _BYTE *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  _QWORD *v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rax
  char v53; // al
  __int64 v54; // r14
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rsi
  __int64 v57; // rdi
  void *v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rax
  _BYTE *v65; // [rsp+8h] [rbp-80h]
  size_t v66; // [rsp+8h] [rbp-80h]
  unsigned __int64 v67; // [rsp+18h] [rbp-70h] BYREF
  int v68[4]; // [rsp+20h] [rbp-68h] BYREF
  const char *v69; // [rsp+30h] [rbp-58h]
  unsigned __int64 v70; // [rsp+38h] [rbp-50h]
  __int16 v71; // [rsp+40h] [rbp-48h]

  if ( (a1[12] & 1) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_3;
    sub_7C2700((__int64)a1, a2);
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    sub_7C2320((__int64)a1, a2, 1);
LABEL_3:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x29 && *(_DWORD *)(a2 + 100) )
  {
    v30 = *(_QWORD *)a1;
    v31 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v31) <= 4 )
    {
      sub_26240F0(v30, "this ", 5);
    }
    else
    {
      *(_DWORD *)v31 = 1936287860;
      *(_BYTE *)(v31 + 4) = 32;
      *(_QWORD *)(v30 + 32) += 5LL;
    }
  }
  v4 = (unsigned __int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v4 = (unsigned __int64 *)v4[4];
  if ( v4 )
  {
    v5 = *v4;
    goto LABEL_9;
  }
  v47 = sub_798D40(a2);
  v48 = *(_QWORD *)(a2 + 48);
  v49 = (_QWORD *)v47;
  v5 = v48;
  v50 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
  v51 = *(_QWORD *)(v50 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v52 = *(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v52 & 8) != 0 )
    {
      v53 = v48 | v52;
      v54 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | v53 & 7;
      if ( (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          & 0x1C0) != 0 )
      {
        v55 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            & 0xFFFFFFFFFFFFFE3FLL
            | v53 & 7;
        if ( (v51 & 7) != 0 || (v51 & 8) != 0 )
        {
          v56 = sub_B0CF30(v48, v50) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v55 <= 7 )
            goto LABEL_84;
        }
        else
        {
          v56 = v50 & 0xFFFFFFFFFFFFFFF0LL;
          if ( v55 <= 7 )
          {
LABEL_84:
            v5 = v56 | (unsigned int)v54 & 0xFFFFFE3F;
            goto LABEL_9;
          }
        }
        v5 = sub_6C3980(v49, v56, v54 & 0xFFFFFFFFFFFFFE3FLL);
      }
    }
  }
LABEL_9:
  v6 = a1[9];
  if ( (v6 & 1) != 0 )
    goto LABEL_33;
  v7 = *(_BYTE *)(a2 + 96);
  if ( (v7 & 7) == 0 )
  {
LABEL_11:
    v8 = (v7 >> 3) & 3;
    if ( v8 != 2 )
      goto LABEL_12;
    goto LABEL_64;
  }
  v32 = *(_QWORD *)a1;
  v33 = sub_77AFB0(*(_BYTE *)(a2 + 96) & 7);
  v34 = v33;
  v35 = *(_BYTE **)(v32 + 24);
  v36 = *(_BYTE **)(v32 + 32);
  if ( v33 )
  {
    v65 = *(_BYTE **)(v32 + 24);
    v37 = strlen(v33);
    v35 = v65;
    if ( v65 - v36 < v37 )
    {
      v63 = sub_26240F0(v32, v34, v37);
      v35 = *(_BYTE **)(v63 + 24);
      v36 = *(_BYTE **)(v63 + 32);
      v32 = v63;
    }
    else if ( v37 )
    {
      v66 = v37;
      memcpy(v36, v34, v37);
      v38 = (_BYTE *)(*(_QWORD *)(v32 + 32) + v66);
      *(_QWORD *)(v32 + 32) = v38;
      v35 = *(_BYTE **)(v32 + 24);
      v36 = v38;
    }
  }
  if ( v36 == v35 )
  {
    sub_26240F0(v32, " ", 1);
    v7 = *(_BYTE *)(a2 + 96);
    goto LABEL_11;
  }
  *v36 = 32;
  ++*(_QWORD *)(v32 + 32);
  v8 = (*(_BYTE *)(a2 + 96) >> 3) & 3;
  if ( v8 != 2 )
  {
LABEL_12:
    if ( v8 == 3 )
    {
      v57 = *(_QWORD *)a1;
      v58 = *(void **)(*(_QWORD *)a1 + 32LL);
      if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v58 <= 0xDu )
      {
        sub_26240F0(v57, "_Thread_local ", 14);
      }
      else
      {
        qmemcpy(v58, "_Thread_local ", 14);
        *(_QWORD *)(v57 + 32) += 14LL;
      }
    }
    else if ( v8 == 1 )
    {
      v41 = *(_QWORD *)a1;
      v42 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
      if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v42) <= 8 )
      {
        sub_26240F0(v41, "__thread ", 9);
      }
      else
      {
        *(_BYTE *)(v42 + 8) = 32;
        *(_QWORD *)v42 = 0x6461657268745F5FLL;
        *(_QWORD *)(v41 + 32) += 9LL;
      }
    }
    goto LABEL_14;
  }
LABEL_64:
  v39 = *(_QWORD *)a1;
  v40 = *(void **)(*(_QWORD *)a1 + 32LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v40 <= 0xCu )
  {
    sub_26240F0(v39, "thread_local ", 13);
  }
  else
  {
    qmemcpy(v40, "thread_local ", 13);
    *(_QWORD *)(v39 + 32) += 13LL;
  }
LABEL_14:
  if ( (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
  {
    v59 = *(_QWORD *)a1;
    v60 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v60) <= 0x12 )
    {
      sub_26240F0(v59, "__module_private__ ", 19);
    }
    else
    {
      *(__m128i *)v60 = _mm_load_si128((const __m128i *)&xmmword_3C7E8C0);
      *(_DWORD *)(v60 + 15) = 543121253;
      *(_QWORD *)(v59 + 32) += 19LL;
    }
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x29 )
  {
    if ( (a1[9] & 0x1A) != 8 )
      goto LABEL_35;
    goto LABEL_43;
  }
  if ( *(char *)(a2 + 97) >= 0 )
  {
    if ( (a1[9] & 0x1A) != 8 )
    {
LABEL_18:
      v9 = *(_QWORD *)(a2 + 40);
      v10 = 0;
      v11 = &byte_3B9466E;
      if ( (v9 & 7) == 0 )
      {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = v12;
        if ( v12 )
        {
          v13 = *(unsigned int **)(v12 + 16);
          v10 = *v13;
          v11 = (const char *)(v13 + 4);
        }
      }
      goto LABEL_21;
    }
    goto LABEL_43;
  }
  v21 = *(_QWORD *)a1;
  v22 = *(void **)(*(_QWORD *)a1 + 32LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v22 <= 9u )
  {
    sub_26240F0(v21, "constexpr ", 10);
  }
  else
  {
    qmemcpy(v22, "constexpr ", 10);
    *(_QWORD *)(v21 + 32) += 10LL;
  }
  v5 &= ~1uLL;
  v6 = a1[9];
LABEL_33:
  if ( (v6 & 0x1A) == 8 )
  {
LABEL_43:
    sub_7C2810(v5, *(_QWORD *)a1);
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
      goto LABEL_18;
    goto LABEL_35;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
    goto LABEL_18;
LABEL_35:
  if ( (a1[13] & 0x10) == 0 )
    goto LABEL_18;
  v23 = *(_QWORD *)(a2 + 40);
  v10 = 0;
  v11 = &byte_3B9466E;
  if ( (v23 & 7) == 0 )
  {
    v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v24;
    if ( v24 )
    {
      v11 = (const char *)sub_C86900(v24);
      v10 = v25;
    }
  }
LABEL_21:
  v67 = v5;
  v14 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)v14;
  if ( *(_BYTE *)(*(_QWORD *)v14 + 16LL) == 37
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 37 && (v15 = sub_B0D320(v15)) != 0 )
  {
    v16 = *((unsigned int *)a1 + 8);
    v67 = *(_QWORD *)(v15 + 32);
    v17 = "...";
  }
  else
  {
    v16 = *((unsigned int *)a1 + 8);
    v17 = (char *)&byte_3B9466E;
  }
  v70 = v10;
  v18 = *(_QWORD *)a1;
  v71 = 1283;
  *(_QWORD *)v68 = v17;
  v69 = v11;
  sub_B2AEC0(&v67, v18, a1 + 8, v68, v16);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    sub_7C2320((__int64)a1, a2, 2);
  v19 = sub_77BC00(a2);
  v20 = (_WORD *)v19;
  if ( (a1[10] & 1) == 0 )
  {
    if ( v19 )
    {
      LOWORD(v19) = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (_BYTE)v19 == 41 || (*(_BYTE *)(a2 + 97) & 8) == 0 )
      {
        v19 = sub_80F120(v20);
        LOBYTE(v26) = (*(_BYTE *)(a2 + 96) >> 5) & 3;
        v27 = *(_WORD *)v19 & 0x1FF;
        if ( (unsigned int)v27 - 114 <= 1 )
        {
          if ( (_BYTE)v26 != 1 )
          {
            v26 = (unsigned __int8)v26;
            goto LABEL_48;
          }
          if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
          {
LABEL_75:
            if ( (*v20 & 0x1FF) != 0x14 )
            {
              v45 = *(_QWORD *)a1;
              v46 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
              if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v46 )
              {
                sub_26240F0(v45, "(", 1);
              }
              else
              {
                *v46 = 40;
                ++*(_QWORD *)(v45 + 32);
              }
            }
            goto LABEL_49;
          }
          if ( !*(_DWORD *)(v19 + 32) )
            return v19;
          v43 = (_QWORD *)(v19 + 40);
          v44 = (_QWORD *)(v19 + 48);
          if ( v27 != 115 )
            v44 = v43;
          LOWORD(v19) = sub_8120D0(*v44);
          if ( (_BYTE)v19 )
            return v19;
          LOBYTE(v26) = (*(_BYTE *)(a2 + 96) >> 5) & 3;
        }
        v26 = (unsigned __int8)v26;
        if ( (unsigned __int8)v26 != 1 )
        {
LABEL_48:
          if ( !v26 )
          {
            v61 = *(_QWORD *)a1;
            v62 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
            if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v62) <= 2 )
            {
              sub_26240F0(v61, " = ", 3);
            }
            else
            {
              *(_BYTE *)(v62 + 2) = 32;
              *(_WORD *)v62 = 15648;
              *(_QWORD *)(v61 + 32) += 3LL;
            }
          }
LABEL_49:
          v28 = *(_QWORD *)a1;
          *(__m128i *)v68 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          BYTE1(v68[0]) &= 0xFAu;
          sub_AE6C50((int)v20, v28, 0, (int)v68, *((_DWORD *)a1 + 8), *((_QWORD *)a1 + 3), "\n", 1u);
          LOWORD(v19) = (*(_BYTE *)(a2 + 96) >> 5) & 3;
          if ( (_BYTE)v19 == 1 )
          {
            LOWORD(v19) = *v20 & 0x1FF;
            if ( (_WORD)v19 != 20 )
            {
              v29 = *(_QWORD *)a1;
              v19 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
              if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) == v19 )
              {
                LOWORD(v19) = sub_26240F0(v29, ")", 1);
              }
              else
              {
                *(_BYTE *)v19 = 41;
                ++*(_QWORD *)(v29 + 32);
              }
            }
          }
          return v19;
        }
        goto LABEL_75;
      }
    }
  }
  return v19;
}

