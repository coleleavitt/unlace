unsigned __int64 __fastcall sub_16D050(__int64 *a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  const char **v8; // rsi
  int v9; // r13d
  __int64 v10; // r15
  const char *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // r12
  __int64 v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // rdi
  bool v17; // zf
  int v18; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __m128i v26; // xmm1
  __int64 v27; // xmm0_8
  __int64 v28; // r15
  __int64 (__fastcall *v29)(__int64, __int64, __int64); // rax
  __int64 *i; // rax
  __int64 *v31; // r12
  bool v32; // r15
  __int64 v33; // rdx
  const char *v34; // rsi
  void (__fastcall *v35)(__int64, __int64, __int64, unsigned int *, _QWORD); // rax
  _QWORD *j; // rax
  _QWORD *v37; // r13
  int v39; // eax
  int v40; // edx
  char v41; // al
  int v42; // eax
  int v43; // esi
  const char *v44; // rsi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // [rsp+0h] [rbp-168h]
  const char *v49; // [rsp+8h] [rbp-160h]
  __int64 v50; // [rsp+10h] [rbp-158h]
  __int64 v51; // [rsp+18h] [rbp-150h]
  __int64 v52; // [rsp+20h] [rbp-148h]
  char v53; // [rsp+2Ah] [rbp-13Eh]
  unsigned int v54; // [rsp+2Ch] [rbp-13Ch] BYREF
  __int64 v55; // [rsp+30h] [rbp-138h] BYREF
  __int128 v56; // [rsp+38h] [rbp-130h]
  const char *v57; // [rsp+50h] [rbp-118h] BYREF
  __int128 v58; // [rsp+58h] [rbp-110h]
  __int128 v59; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+80h] [rbp-E8h]
  __int64 v61; // [rsp+88h] [rbp-E0h]
  _BOOL4 v62; // [rsp+90h] [rbp-D8h]
  __int64 v63; // [rsp+98h] [rbp-D0h]
  __m128i v64; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-B8h]
  __int64 v66; // [rsp+B8h] [rbp-B0h]
  _BOOL4 v67; // [rsp+C0h] [rbp-A8h]
  __int64 v68; // [rsp+C8h] [rbp-A0h]
  _BYTE v69[88]; // [rsp+D0h] [rbp-98h] BYREF
  unsigned __int64 v70; // [rsp+128h] [rbp-40h]

  v5 = (__int64)a1;
  v6 = a1[106];
  v53 = BYTE1(a4);
  v54 = a4;
  v70 = __readfsqword(0x28u);
  v56 = 0;
  v55 = 0;
  if ( v6
    && (a1 = &v55,
        v8 = nullptr,
        v55 = qvector_reserve(),
        *(_QWORD *)(v55 + 8 * v56) = v6,
        v51 = v56,
        *(_QWORD *)&v56 = v56 + 1,
        (_QWORD)v56) )
  {
    v52 = 0;
    v9 = 0;
    v10 = 0;
    v50 = 0;
    v49 = nullptr;
    while ( 1 )
    {
      v13 = *(__int64 **)(v55 + 8 * v10);
      sub_91070((__int64)v13);
      v14 = *((_QWORD *)a3 + 2);
      v15 = *((_QWORD *)a3 + 3);
      v16 = *((_QWORD *)a3 + 5);
      v17 = *(_QWORD *)(v5 + 848) == (_QWORD)v13;
      v59 = *a3;
      v61 = v15;
      v62 = v17;
      v63 = v16;
      v60 = v14;
      if ( v16 )
        v63 = (*(__int64 (__fastcall **)(__int64, const char **))(*(_QWORD *)v16 + 16LL))(v16, v8);
      v58 = 0;
      v8 = &v57;
      v57 = nullptr;
      v18 = (*(__int64 (__fastcall **)(__int64 *, const char **, __int64, __int128 *, _QWORD))(*v13 + 24))(
              v13,
              &v57,
              a2,
              &v59,
              v54);
      if ( !v18 )
        break;
      v48 = v18;
      sub_91090((__int64)v13);
      v11 = v57;
      if ( !v9 )
      {
        v12 = *((_QWORD *)&v58 + 1);
        v9 = v48;
        v52 = v58;
        *((_QWORD *)&v58 + 1) = v50;
        v57 = v49;
        v50 = v12;
        v49 = v11;
        v11 = v57;
      }
      if ( v11 )
      {
        *(_QWORD *)&v58 = 0;
        qfree();
      }
      a1 = (__int64 *)v63;
      if ( v63 )
        qfree();
      if ( v51 == v10 )
        goto LABEL_24;
      ++v10;
    }
    if ( v13 )
    {
      sub_168770((__int64)v69, v5, 0, v19, v20, v21);
      sub_16C9F0((__int64)v69);
    }
    a1 = v13;
    sub_91080(v13);
    if ( !*(_QWORD *)(v5 + 480) )
LABEL_109:
      sub_1582F0(a1);
    if ( *(_DWORD *)(v5 + 472) != (*(_QWORD *)(v5 + 848) == (_QWORD)v13) )
    {
      v25 = *(_QWORD *)(v5 + 464);
      v26 = *(__m128i *)(v5 + 440);
      v27 = *(_QWORD *)(v5 + 456);
      v67 = *(_QWORD *)(v5 + 848) == (_QWORD)v13;
      v66 = v25;
      v68 = 0;
      v64 = v26;
      v65 = v27;
      sub_16CBF0((const __m128i *)(v5 + 440), &v64, 2, v22, v23, v24);
    }
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    a1 = (__int64 *)v63;
    if ( v63 )
      qfree();
  }
  else
  {
    v52 = 0;
    v9 = 0;
    v49 = nullptr;
  }
LABEL_24:
  v28 = *(_QWORD *)(v5 + 480);
  if ( !v28 )
  {
    sub_1582F0(a1);
LABEL_106:
    sub_1582F0(a1);
LABEL_107:
    sub_1582F0(a1);
LABEL_108:
    sub_1582F0(a1);
    goto LABEL_109;
  }
  v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 624LL);
  if ( v29 == sub_161320 )
  {
    if ( !*(_QWORD *)(a2 + 40) )
      goto LABEL_29;
    if ( sub_1612C0(v5) )
      goto LABEL_33;
LABEL_28:
    v28 = *(_QWORD *)(v5 + 480);
LABEL_29:
    for ( i = *(__int64 **)(v5 + 1000); (__int64 *)(v5 + 1000) != i; i = v31 )
    {
      v31 = (__int64 *)*i;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)i[2] + 24LL))(i[2], v28);
    }
    goto LABEL_32;
  }
  v47 = v29(v5, a2, v5 + 440);
  if ( v47 > 0 )
  {
    if ( v47 != 1 )
    {
LABEL_32:
      sub_152F30(v5);
      *(_BYTE *)(v5 + 840) = 0;
      *(_BYTE *)(v5 + 953) = 1;
      goto LABEL_33;
    }
    goto LABEL_28;
  }
LABEL_33:
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 608LL))(v5, a2, v5 + 440, 0);
  v32 = 1;
  if ( *(_DWORD *)(v5 + 472) != 1 )
    v32 = *(_DWORD *)(v5 + 464) >= 0;
  v33 = *(_QWORD *)(v5 + 280);
  if ( v33 )
  {
    if ( !*(_BYTE *)(v5 + 296) )
    {
LABEL_37:
      sub_15D7F0((__int64 *)(v5 + 272), *(_QWORD *)(v5 + 480), *(__int16 *)(v5 + 468));
      goto LABEL_38;
    }
    v42 = *(_DWORD *)(v5 + 908);
    if ( v42 == 6 )
    {
      if ( (*(_BYTE *)(v5 + 912) & 2) != 0 )
        goto LABEL_37;
LABEL_60:
      if ( !v32 )
        goto LABEL_39;
      sub_15D6A0((__int64 *)(v5 + 272));
LABEL_62:
      v39 = *(_DWORD *)(v5 + 908);
      v40 = *(_DWORD *)(v5 + 912);
      if ( v39 != 10 && v39 != 6 && v39 != 11 )
      {
        if ( (unsigned int)(v39 - 1) > 1 )
          goto LABEL_39;
LABEL_66:
        v41 = v53 - 4;
        if ( (unsigned __int8)(v53 - 4) > 1u )
          goto LABEL_67;
        goto LABEL_68;
      }
LABEL_70:
      if ( (v40 & 1) == 0 )
      {
        v41 = v53 - 4;
        if ( (unsigned __int8)(v53 - 4) > 1u )
        {
LABEL_67:
          if ( (unsigned __int8)(v41 + 3) > 1u )
            goto LABEL_39;
        }
LABEL_68:
        sub_163850(v5);
        goto LABEL_39;
      }
      goto LABEL_39;
    }
    if ( v42 == 10 )
    {
      if ( (*(_BYTE *)(v5 + 912) & 0x20) != 0 )
      {
LABEL_96:
        if ( !*(_BYTE *)(v5 + 296) )
          goto LABEL_37;
        v45 = *(_DWORD *)(v5 + 908);
        v46 = *(_DWORD *)(v5 + 912);
        if ( v45 == 2 || v45 == 7 || (v46 & 2) != 0 || v45 == 1 && (v46 & 0x10) != 0 )
          goto LABEL_37;
        goto LABEL_60;
      }
LABEL_38:
      if ( !v32 )
        goto LABEL_39;
      goto LABEL_62;
    }
LABEL_75:
    if ( (unsigned int)(v42 - 1) <= 1 || v42 == 7 )
    {
      if ( !v33 )
        goto LABEL_78;
      goto LABEL_96;
    }
    goto LABEL_38;
  }
  v42 = *(_DWORD *)(v5 + 908);
  if ( v42 == 6 )
  {
    v40 = *(_DWORD *)(v5 + 912);
    if ( (v40 & 2) == 0 )
    {
      if ( !v32 )
        goto LABEL_39;
      goto LABEL_70;
    }
LABEL_94:
    sub_15D710((__int64 *)(v5 + 272), *(_QWORD *)(a2 + 40), *(__int16 *)(a2 + 28), 1);
    sub_15D7F0((__int64 *)(v5 + 272), *(_QWORD *)(v5 + 480), *(__int16 *)(v5 + 468));
    goto LABEL_38;
  }
  if ( v42 != 10 )
    goto LABEL_75;
  if ( (*(_BYTE *)(v5 + 912) & 0x20) == 0 )
    goto LABEL_38;
LABEL_78:
  v43 = *(_DWORD *)(v5 + 912);
  if ( v42 == 7 || v42 == 2 || (v43 & 2) != 0 )
    goto LABEL_94;
  if ( v42 != 1 )
    goto LABEL_38;
  if ( (v43 & 0x10) != 0 )
    goto LABEL_94;
  if ( v32 )
    goto LABEL_66;
LABEL_39:
  a1 = (__int64 *)v5;
  sub_15E940(v5, 0);
  if ( v9 == 2 )
  {
    v44 = s1;
    if ( v52 )
      v44 = v49;
    a1 = (__int64 *)"%s";
    sub_921F0((__int64)"%s", v44);
  }
  else if ( v9 == 3 )
  {
    v34 = s1;
    if ( v52 )
      v34 = v49;
    a1 = (__int64 *)"%s";
    sub_92120((__int64)"%s", v34);
  }
  v17 = *(_QWORD *)(v5 + 480) == 0;
  byte_252E9C = 1;
  if ( v17 )
    goto LABEL_106;
  v35 = *(void (__fastcall **)(__int64, __int64, __int64, unsigned int *, _QWORD))(v5 + 408);
  if ( v35 )
  {
    *(_BYTE *)(v5 + 985) = 1;
    a1 = (__int64 *)v5;
    v35(v5, a2, v5 + 440, &v54, *(_QWORD *)(v5 + 432));
    v17 = *(_QWORD *)(v5 + 480) == 0;
    *(_BYTE *)(v5 + 985) = 0;
    if ( v17 )
      goto LABEL_107;
  }
  for ( j = *(_QWORD **)(v5 + 1144); (_QWORD *)(v5 + 1144) != j; j = v37 )
  {
    a1 = (__int64 *)j[2];
    v37 = (_QWORD *)*j;
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, v5 + 440);
  }
  if ( !*(_QWORD *)(v5 + 480) )
    goto LABEL_108;
  sub_163FD0();
  if ( *(_DWORD *)(v5 + 908) != 10 || (*(_BYTE *)(v5 + 912) & 0x20) == 0 )
    sub_19B690(2, 0, 0);
  nullsub_78();
  if ( v49 )
    qfree();
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  return v70 - __readfsqword(0x28u);
}

