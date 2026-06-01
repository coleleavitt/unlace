void __fastcall sub_1826A50(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int8 v8; // dl
  __int64 v9; // rdx
  _QWORD **v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __m128i *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+8h] [rbp-E0h]
  __int64 v55; // [rsp+8h] [rbp-E0h]
  __int64 v56; // [rsp+8h] [rbp-E0h]
  _QWORD *v57; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v59[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v61[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v62; // [rsp+98h] [rbp-50h]
  unsigned int v63; // [rsp+A0h] [rbp-48h]
  char v64; // [rsp+A4h] [rbp-44h]

  v5 = sub_B97230(a2);
  v6 = a3[3].m128i_u16[4];
  v57 = nullptr;
  v7 = v5;
  v8 = a3[3].m128i_u8[10];
  LOBYTE(v5) = v8 >> 3;
  v9 = v6 + 13LL * ((v8 & 4) != 0);
  v10 = &v57;
  v11 = sub_1E5F010(a3[(v5 & 1) + 5].m128i_i64[v9], &v57);
  v12 = v11;
  if ( !v57 )
  {
    v10 = (_QWORD **)v11;
    v57 = sub_A81910(*(_QWORD **)(a1 + 248), v11, a3[1].m128i_u32[2]);
  }
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v12 & 7 | (v12 >> 3) & 1 )
    goto LABEL_17;
  if ( *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 7LL | (*(__int64 *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1 )
    goto LABEL_17;
  v54 = *v13;
  v14 = sub_F6AC00(*v13);
  v18 = v54;
  if ( !v14 )
  {
    v26 = sub_F6A860(v54);
    if ( !v26 || (*(_BYTE *)(v26 + 18) & 8) == 0 )
      goto LABEL_17;
  }
  v19 = sub_F63270(*v13, (__int64)v10, v18, v15, v16, v17);
  if ( v19 && (*((_BYTE *)v19 + 28) & 0x7Fu) - 60 <= 1 )
  {
    v20 = sub_BBF290((__int64)v19);
  }
  else
  {
    v52 = sub_F6A860(*v13);
    if ( !v52 )
      goto LABEL_17;
    while ( (*(_BYTE *)(v52 + 18) & 8) != 0 )
    {
      v53 = sub_F5E8A0(v52);
      v52 = sub_F6A860(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v52 )
        goto LABEL_17;
    }
    v59[0] = *(_QWORD *)(v52 + 32);
    v20 = sub_F22BD0(v59, 0);
  }
  if ( v20 )
  {
    if ( v7 )
    {
      if ( v7 == v20
        || (v55 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 32LL))(v20),
            v55 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7)) )
      {
        v21 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
        sub_B17640(v21, *(_QWORD *)(a1 + 248), a3, (__int64)v57);
        sub_B8CC60(a2, (__int64)v21, v22, v23, v24, v25);
        return;
      }
    }
  }
LABEL_17:
  sub_168B9F0((__int64)v59, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC87u, 0);
  if ( v62 )
  {
    sub_AE9DF0(v61, v12, 8u);
  }
  else if ( v64 )
  {
    v39 = sub_168B9E0(v59);
    v43 = v60;
    if ( v60 )
    {
      v56 = v39;
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
      v39 = v56;
    }
    v58 = v43;
    v44 = sub_1587BC0(v39, &v58, v39, v40, v41, v42);
    sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v63 + 8), v12, 8u);
  }
  v27 = sub_15DD120((__int64)v59, (__int64)a3);
  v28 = v27;
  if ( *(_BYTE *)(v27 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v27 + 32), v7, 0xAu);
  }
  else if ( *(_BYTE *)(v27 + 132) )
  {
    v34 = sub_168B9E0((_QWORD *)v27);
    v37 = *(_QWORD *)(v28 + 16);
    if ( v37 )
      v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v37 + 32LL))(*(_QWORD *)(v28 + 16));
    v58 = v37;
    v38 = sub_1587BC0(v34, &v58, v32, v33, v35, v36);
    sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * *(unsigned int *)(v28 + 128) + 8), v7, 0xAu);
  }
  sub_15F7200(v59);
  v29 = sub_F6AC00(*v13);
  v30 = v29;
  if ( v29 )
  {
    sub_168B9F0((__int64)v59, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(v29 + 32) + 24LL), 0x172Eu, 0);
    v31 = *(_QWORD *)(v30 + 32);
    if ( v62 )
    {
      sub_AE9DF0(v61, v31, 0xAu);
    }
    else if ( v64 )
    {
      v47 = sub_168B9E0(v59);
      v50 = v60;
      if ( v60 )
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
      v58 = v50;
      v51 = sub_1587BC0(v47, &v58, v45, v46, v48, v49);
      sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v63 + 8), v31, 0xAu);
    }
    sub_15F7200(v59);
  }
}
