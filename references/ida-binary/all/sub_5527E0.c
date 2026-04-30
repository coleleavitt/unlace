unsigned __int64 __fastcall sub_5527E0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // r13
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  int v22; // eax
  __int64 v23; // rdi
  const char *v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __int64 v33; // rax
  const char *v34; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+8h] [rbp-C0h]
  __int64 v36; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-A0h]
  __int16 v38; // [rsp+38h] [rbp-90h]
  char v39; // [rsp+3Ah] [rbp-8Eh]
  char v40; // [rsp+40h] [rbp-88h]
  __int64 v41; // [rsp+48h] [rbp-80h]
  __int128 v42; // [rsp+50h] [rbp-78h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int128 v44; // [rsp+68h] [rbp-60h]
  int v45; // [rsp+80h] [rbp-48h] BYREF
  __int16 v46; // [rsp+84h] [rbp-44h]
  __int64 v47; // [rsp+88h] [rbp-40h]
  int v48; // [rsp+90h] [rbp-38h]
  int v49; // [rsp+94h] [rbp-34h]
  unsigned __int64 v50; // [rsp+98h] [rbp-30h]

  v50 = __readfsqword(0x28u);
  v10 = sub_552140(a1 + 352);
  if ( v10 == -1 || (v11 = *(_QWORD *)(a1 + 544) + 152 * v10) == 0 )
  {
    v33 = sub_552140(a1 + 624);
    if ( v33 == -1 )
      return v50 - __readfsqword(0x28u);
    v11 = *(_QWORD *)(a1 + 816) + 152 * v33;
    if ( !v11 )
      return v50 - __readfsqword(0x28u);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 88LL))(
          *(_QWORD *)(a1 + 256),
          0,
          0);
  if ( !v12 )
    goto LABEL_18;
  if ( !*(_BYTE *)(a1 + 1009) )
    goto LABEL_32;
  v13 = *(_QWORD *)(a1 + 256);
  v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 40LL);
  if ( (char *)v14 == (char *)sub_178B50 )
    v15 = v13 + 40;
  else
    v15 = v14();
  v16 = *(_QWORD *)(a1 + 1024);
  if ( *(_QWORD *)(v15 + 8) )
  {
    v17 = *(const char **)v15;
    v18 = &s1;
    if ( !v16 )
      goto LABEL_10;
  }
  else
  {
    v17 = &s1;
    if ( !v16 )
      goto LABEL_11;
  }
  v18 = *(const char **)(a1 + 1016);
LABEL_10:
  if ( !strcmp(v18, v17) )
  {
LABEL_11:
    if ( *(_WORD *)(a1 + 1040) != *(_WORD *)(v15 + 24)
      || *(_BYTE *)(a1 + 1042) != *(_BYTE *)(v15 + 26)
      || *(_BYTE *)(a1 + 1048) != *(_BYTE *)(v15 + 32) )
    {
      goto LABEL_18;
    }
    v19 = *(_QWORD *)(a1 + 1064);
    if ( *(_QWORD *)(v15 + 48) )
    {
      v20 = *(const char **)(v15 + 40);
      v21 = &s1;
      if ( !v19 )
        goto LABEL_17;
    }
    else
    {
      v20 = &s1;
      if ( !v19 )
        goto LABEL_32;
    }
    v21 = *(const char **)(a1 + 1056);
LABEL_17:
    if ( strcmp(v21, v20) )
      goto LABEL_18;
LABEL_32:
    if ( *(_DWORD *)v12 == *(_DWORD *)v11 && *(_WORD *)(v12 + 4) == *(_WORD *)(v11 + 4) )
      return v50 - __readfsqword(0x28u);
  }
LABEL_18:
  v39 = 1;
  v38 = 0;
  v36 = 0;
  v40 = 0;
  v41 = 0;
  v43 = 0;
  v37 = 0;
  v42 = 0;
  v44 = 0;
  sub_5521F0(a1 + 264, (__int64)&v36);
  v22 = *(_DWORD *)v11;
  v23 = *(_QWORD *)(a1 + 256);
  v24 = (const char *)&v36;
  v49 = 0;
  v45 = v22;
  LOWORD(v22) = *(_WORD *)(v11 + 4);
  v34 = nullptr;
  v46 = v22;
  v47 = *(_QWORD *)(v11 + 12);
  v25 = *(_DWORD *)(v11 + 20);
  v35 = 0;
  v48 = v25;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, int *, __int64, const char **))(*(_QWORD *)v23 + 32LL))(
         v23,
         &v36,
         &v45,
         16,
         &v34) )
  {
    v24 = &s1;
    if ( (_QWORD)v35 )
      v24 = v34;
    sub_169630(
      (int)"AUTOHIDE NONE\nCould not acquire license: %s",
      (__int64)v24,
      v26,
      v27,
      v28,
      v29,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v30,
      v31,
      a8,
      a9,
      (char)v34);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v24);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v24);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41, v24);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v24);
  }
  return v50 - __readfsqword(0x28u);
}
