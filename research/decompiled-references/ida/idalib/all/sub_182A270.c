void __fastcall sub_182A270(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 *v10; // rdi
  __m128i *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  unsigned int v24; // r12d
  unsigned int v25; // eax
  unsigned __int64 v26; // r14
  __int64 v27; // rbp
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // rax
  _QWORD *v55; // rax
  size_t v56; // rax
  __int64 v57[3]; // [rsp+8h] [rbp-110h] BYREF
  __int128 v58; // [rsp+20h] [rbp-F8h] BYREF
  void *v59[2]; // [rsp+30h] [rbp-E8h]
  _OWORD v60[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-A8h]
  unsigned __int8 *v63[11]; // [rsp+80h] [rbp-98h] BYREF
  char v64; // [rsp+D8h] [rbp-40h]
  unsigned int v65; // [rsp+E0h] [rbp-38h]
  char v66; // [rsp+E4h] [rbp-34h]

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F63050(v6, a2, v7, a4);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 || ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 25;
    if ( (unsigned int)v18 > 1 )
      v17 = sub_F63050(v17, a2, v18, a4);
    v19 = *(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(_QWORD *)v19;
    if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) != 16
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16
       || !sub_F63050(v20, a2, v18, a4)) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 25;
      if ( (unsigned int)v22 > 1 )
        v21 = sub_F63050(v21, a2, v22, a4);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0 )
      {
        v23 = sub_B77620(a2);
        v24 = v23;
        v25 = sub_B72FF0(a2);
        v26 = HIDWORD(v23);
        sub_168B9F0((__int64)v61, a1 + 1, v25, 0xFF5u, 0);
        v57[0] = *(_QWORD *)(a2 + 48);
        v27 = sub_162B6D0((__int64)v61, v57);
        if ( v24 && v26 )
        {
          v56 = j__strlen("void");
          *(__int64 *)((char *)&v57[1] + 4) = __PAIR64__(v26, v24);
          sub_18056E0((__int64)&v58, __SPAIR64__(v26, v24), 1, "void", v56);
        }
        else
        {
          v59[0] = nullptr;
          memset(v60, 0, sizeof(v60));
          v59[1] = (char *)v60 + 8;
          BYTE8(v60[0]) = 0;
          v58 = 0;
        }
        sub_1589170(v27, &v58);
        if ( v59[1] != (char *)v60 + 8 )
          operator delete(v59[1]);
        goto LABEL_36;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    if ( !sub_B979F0((_QWORD *)a2) )
    {
      v29 = sub_B73090(a2);
      sub_168B9F0((__int64)v61, a1 + 1, v29, 0xFF4u, 0);
      if ( v64 )
      {
        sub_AE9DF0(v63, a2, 0xAu);
      }
      else if ( v66 )
      {
        v44 = sub_168B9E0(v61);
        v47 = v62;
        if ( v62 )
          v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
        *(_QWORD *)&v58 = v47;
        v48 = sub_1587BC0(v44, (__int64 *)&v58, v42, v43, v45, v46);
        sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v65 + 8), a2, 0xAu);
      }
LABEL_36:
      sub_15F7200(v61);
      return;
    }
    v9 = sub_B73090(a2);
    sub_168B9F0((__int64)v61, a1 + 1, v9, 0x1B9Eu, 0);
    if ( v64 )
    {
      sub_AE9DF0(v63, a2, 0xAu);
      sub_15F7200(v61);
    }
    else
    {
      if ( v66 )
      {
        v39 = sub_168B9E0(v61);
        v40 = v62;
        if ( v62 )
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
        *(_QWORD *)&v58 = v40;
        v41 = sub_1587BC0(v39, (__int64 *)&v58, v35, v36, v37, v38);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v65 + 8), a2, 0xAu);
      }
      sub_15F7200(v61);
    }
  }
  if ( (*(_BYTE *)(a2 + 82) & 2) != 0 && (*(_BYTE *)(a1[29] + 89) & 4) == 0 )
  {
    v28 = sub_B73090(a2);
    sub_168B9F0((__int64)v61, a1 + 1, v28, 0x1B9Du, 0);
    if ( v64 )
    {
      sub_AE9DF0(v63, a2, 0xAu);
    }
    else if ( v66 )
    {
      v53 = sub_168B9E0(v61);
      v54 = v62;
      if ( v62 )
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
      *(_QWORD *)&v58 = v54;
      v55 = sub_1587BC0(v53, (__int64 *)&v58, v49, v50, v51, v52);
      sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v65 + 8), a2, 0xAu);
    }
    sub_15F7200(v61);
  }
  v10 = (__int64 *)(a1[31] + 2352);
  if ( *(_WORD *)(a3[4].m128i_i64[1] + 8) == 117 )
  {
    v11 = (__m128i *)sub_1806F50(v10, 40, 3u);
    sub_B11850(v11, a1[31], a3);
  }
  else
  {
    v11 = (__m128i *)sub_1806F50(v10, 40, 3u);
    sub_B0E410(v11, a1[31], a3);
  }
  sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
  v16 = a1[29];
  if ( (*(_BYTE *)(v16 + 60) & 0x20) != 0 && (*(_BYTE *)(v16 + 89) & 4) == 0 )
  {
    v30 = sub_B33440(a1[31], 0, 0);
    sub_B8CC60(a2, v30, v31, v32, v33, v34);
  }
}
