__int16 __fastcall sub_B905D0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r12
  char v13; // al
  char v14; // al
  bool v15; // cc
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned int *v19; // r13
  __int64 v20; // r14
  const char *v21; // r13
  unsigned __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r8
  char *v25; // rax
  const char *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int16 *v30; // rax
  const char *v31; // r12
  unsigned __int64 v32; // rdi
  const char *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  const char *v37; // r10
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // r9d
  int v41; // r10d
  const char *v42; // r13
  char *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int16 *v46; // rdx
  const char **v47; // rax
  unsigned __int64 v49; // [rsp+8h] [rbp-60h] BYREF
  __m128i v50; // [rsp+10h] [rbp-58h] BYREF
  const char *v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]
  __int16 v53; // [rsp+30h] [rbp-38h]

  v7 = (__int64)a2;
  sub_B8EE40(a1, a2, a3, a4, a5, a6);
  if ( (a2[29] & 1) != 0 )
    sub_B8E960((const char **)a1, (__int64)a2, 1, v8, v9, v10);
  if ( (a2[28] & 0x7F) == 0x2B && *((_DWORD *)a2 + 25) )
  {
    a2 = "this ";
    sub_971800(*(_QWORD *)a1, "this ");
  }
  v11 = (unsigned __int64 *)(*(_QWORD *)(v7 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v7 + 56) & 4) != 0 )
    v11 = (unsigned __int64 *)v11[4];
  if ( v11 )
  {
    v12 = *v11;
  }
  else
  {
    v45 = sub_B685F0(v7);
    a2 = *(const char **)(v7 + 48);
    v12 = sub_B8FF10(v45, (__int64)a2);
  }
  v13 = *(_BYTE *)(a1 + 9);
  if ( (v13 & 1) != 0 )
    goto LABEL_34;
  if ( (*(_BYTE *)(v7 + 96) & 7) == 0 )
  {
    v14 = (*(_BYTE *)(v7 + 96) >> 3) & 3;
    v15 = v14 != 3;
    if ( v14 != 2 )
      goto LABEL_13;
LABEL_54:
    a2 = "thread_local ";
    sub_971800(*(_QWORD *)a1, "thread_local ");
    if ( (*(_QWORD *)(v7 + 8) & 7LL) != 4 )
      goto LABEL_17;
LABEL_55:
    a2 = "__module_private__ ";
    sub_971800(*(_QWORD *)a1, "__module_private__ ");
    if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B )
      goto LABEL_18;
LABEL_56:
    if ( (*(_BYTE *)(a1 + 9) & 0x1A) != 8 )
    {
      v16 = *(_QWORD *)(v7 + 40);
      v17 = v16 & 7;
      if ( (*(_BYTE *)(a1 + 13) & 0x10) == 0 )
        goto LABEL_21;
LABEL_37:
      if ( !(_DWORD)v17 )
      {
        v32 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v32 )
        {
          v21 = (const char *)sub_FBA480(v32);
          v20 = v17;
          goto LABEL_24;
        }
      }
LABEL_49:
      v20 = 0;
      v21 = &byte_22CD811;
      goto LABEL_24;
    }
    goto LABEL_40;
  }
  v42 = *(const char **)a1;
  v43 = sub_B4F380(*(_BYTE *)(v7 + 96) & 7);
  v44 = sub_971800((__int64)v42, v43);
  a2 = " ";
  sub_971800(v44, " ");
  v14 = (*(_BYTE *)(v7 + 96) >> 3) & 3;
  v15 = v14 != 3;
  if ( v14 == 2 )
    goto LABEL_54;
LABEL_13:
  if ( v15 )
  {
    if ( v14 == 1 )
    {
      a2 = "__thread ";
      sub_971800(*(_QWORD *)a1, "__thread ");
    }
  }
  else
  {
    a2 = "_Thread_local ";
    sub_971800(*(_QWORD *)a1, "_Thread_local ");
  }
  if ( (*(_QWORD *)(v7 + 8) & 7LL) == 4 )
    goto LABEL_55;
LABEL_17:
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x2B )
    goto LABEL_56;
LABEL_18:
  if ( *(char *)(v7 + 97) >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 9) & 0x1A) != 8 )
    {
      v16 = *(_QWORD *)(v7 + 40);
      v17 = v16 & 7;
      goto LABEL_21;
    }
    goto LABEL_40;
  }
  a2 = "constexpr ";
  sub_971800(*(_QWORD *)a1, "constexpr ");
  v12 &= ~1uLL;
  v13 = *(_BYTE *)(a1 + 9);
LABEL_34:
  if ( (v13 & 0x1A) == 8 )
  {
LABEL_40:
    a2 = *(const char **)a1;
    sub_B8EC30(v12, *(_QWORD *)a1);
  }
  v16 = *(_QWORD *)(v7 + 40);
  v17 = v16 & 7;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x2B && (*(_BYTE *)(a1 + 13) & 0x10) != 0 )
    goto LABEL_37;
LABEL_21:
  if ( (_DWORD)v17 )
    goto LABEL_49;
  v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v18 )
    goto LABEL_49;
  v19 = *(unsigned int **)(v18 + 16);
  v20 = *v19;
  v21 = (const char *)(v19 + 4);
LABEL_24:
  v49 = v12;
  v22 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  v23 = *(_QWORD *)v22;
  if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) == 38
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
    && (v23 = sub_F3F310(v23, a2, v17, v8)) != 0 )
  {
    v24 = *(unsigned int *)(a1 + 32);
    v49 = *(_QWORD *)(v23 + 32);
    v25 = "...";
  }
  else
  {
    v24 = *(unsigned int *)(a1 + 32);
    v25 = (char *)&byte_22CD811;
  }
  v51 = v21;
  v26 = *(const char **)a1;
  v53 = 1283;
  v50.m128i_i64[0] = (__int64)v25;
  v52 = v20;
  sub_F50AF0(&v49, v26, a1 + 8, &v50, v24);
  if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    sub_B8E960((const char **)a1, v7, 2, v27, v28, v29);
  v30 = (unsigned __int16 *)sub_B4F900(v7);
  v31 = (const char *)v30;
  if ( (*(_BYTE *)(a1 + 10) & 1) == 0 )
  {
    if ( v30 )
    {
      LOWORD(v30) = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( (_BYTE)v30 == 43 || (*(_BYTE *)(v7 + 97) & 8) == 0 )
      {
        v33 = v31;
        v30 = (unsigned __int16 *)sub_BD7BC0(v31);
        v35 = *v30;
        LOWORD(v35) = v35 & 0x1FF;
        v36 = (*(_BYTE *)(v7 + 96) >> 5) & 3;
        if ( (unsigned int)(unsigned __int16)v35 - 113 <= 1 && (_BYTE)v36 == 1 )
        {
          if ( (*(_QWORD *)v30 & 0x200000LL) != 0 )
          {
            v37 = *(const char **)a1;
            goto LABEL_61;
          }
          if ( !*((_DWORD *)v30 + 8) )
            return (__int16)v30;
          v46 = v30 + 24;
          v47 = (const char **)(v30 + 20);
          if ( (_WORD)v35 == 114 )
            v47 = (const char **)v46;
          v33 = *v47;
          LOWORD(v30) = sub_BDA2B0(*v47);
          if ( (_BYTE)v30 )
            return (__int16)v30;
          LOBYTE(v36) = (*(_BYTE *)(v7 + 96) >> 5) & 3;
        }
        v36 = (unsigned __int8)v36;
        v37 = *(const char **)a1;
        if ( (unsigned __int8)v36 != 1 )
        {
          if ( !(_BYTE)v36 )
          {
            v33 = *(const char **)a1;
            sub_971800(*(_QWORD *)a1, " = ");
          }
LABEL_46:
          v38 = *(_QWORD *)(a1 + 24);
          v50 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v50.m128i_i8[1] &= 0xFAu;
          v39 = sub_B8EB60(v33, "\n", v36, v35, v34, v38);
          sub_EE3EC0((_DWORD)v31, v41, 0, (unsigned int)&v50, *(_DWORD *)(a1 + 32), v40, (__int64)"\n", v39);
          LOWORD(v30) = (*(_BYTE *)(v7 + 96) >> 5) & 3;
          if ( (_BYTE)v30 == 1 )
          {
            LOWORD(v30) = *(_WORD *)v31 & 0x1FF;
            if ( (_WORD)v30 != 19 )
              LOWORD(v30) = sub_971800(*(_QWORD *)a1, ")");
          }
          return (__int16)v30;
        }
LABEL_61:
        if ( (*(_WORD *)v31 & 0x1FF) != 0x13 )
        {
          v33 = v37;
          sub_971800((__int64)v37, "(");
        }
        goto LABEL_46;
      }
    }
  }
  return (__int16)v30;
}

