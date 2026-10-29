void __fastcall sub_1816690(__int64 a1, __int64 a2, const __m128i *a3)
{
  _QWORD *v4; // rbp
  __int8 v6; // dl
  __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 **v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rbp
  __m128i *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 **v36; // rax
  __int64 *v37; // rdx
  unsigned __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbp
  __m128i *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r13
  bool v52; // al
  __int64 *v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+8h] [rbp-E0h]
  __int64 v62; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v63; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v64[200]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = nullptr;
  v6 = a3[3].m128i_i8[10];
  v62 = 0;
  if ( (v6 & 0x20) != 0 )
  {
    v29 = sub_1E5F010(a3[5].m128i_i64[13 * ((v6 & 4) != 0) + 2 * ((v6 & 8) != 0) + a3[3].m128i_u16[4]], &v62);
    LODWORD(v63) = -1;
    v4 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
    v30 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    if ( (unsigned int)(v30 - 43) > 1 )
    {
      if ( (unsigned __int8)(v30 - 2) > 4u )
        goto LABEL_2;
      LODWORD(v63) = 1;
    }
    else
    {
      LODWORD(v63) = 0;
    }
    sub_168B9F0((__int64)v64, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC70u, 0);
    v31 = sub_1588370((__int64)v64, (unsigned int *)&v63);
    sub_15DD120(v31, (__int64)a3);
    sub_15F7200(v64);
    return;
  }
LABEL_2:
  v7 = (__int64 *)(a1 + 8);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v12 = (__int64 *)(a1 + 8);
  v13 = v8;
  v14 = v8;
  if ( *(_WORD *)(a3[4].m128i_i64[1] + 8) == 294 )
  {
    if ( (unsigned __int8)sub_1816490(v12, v8, (__int64)a3, v9, v10, v11) )
      return;
    if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
      goto LABEL_24;
    v36 = (__int64 **)sub_B8C3D0(v13, v14, v32, v33, v34, v35);
    v37 = *v36;
    v38 = (unsigned __int64)&(*v36)[*((unsigned int *)v36 + 2)];
    if ( (unsigned __int64)v37 < v38 )
    {
      v53 = v37;
      while ( *(_WORD *)(*v53 + 36) != 323 )
      {
        if ( (__int64 *)v38 == ++v53 )
          goto LABEL_24;
      }
      if ( (__int64 *)v38 == v53 )
        goto LABEL_24;
    }
    else
    {
      if ( v37 == (__int64 *)v38 )
      {
LABEL_24:
        v41 = v13;
        do
        {
          v42 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
          sub_B16A50(v42, *(_QWORD *)(a1 + 248), a3, v62);
          sub_B8CC60(v41, (__int64)v42, v43, v44, v45, v46);
          v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 40LL))(v41);
        }
        while ( v41 != 0 && v13 != v41 );
        return;
      }
      if ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 323 )
      {
        v39 = (__int64 *)(v38 + 8);
        while ( v37 != v39 )
        {
          v40 = *v39++;
          if ( *(_WORD *)(v40 + 36) == 323 )
            goto LABEL_53;
        }
        goto LABEL_24;
      }
    }
LABEL_53:
    v47 = *v37;
    if ( *(_WORD *)(*v37 + 36) != 323 )
    {
      v54 = v37 + 1;
      do
        v47 = *v54++;
      while ( *(_WORD *)(v47 + 36) != 323 );
    }
    goto LABEL_33;
  }
  if ( (unsigned __int8)sub_1816290(v12, v8, (__int64)a3, v9, v10, v11) )
    return;
  if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
    goto LABEL_10;
  v19 = (__int64 **)sub_B8C3D0(v13, v14, v15, v16, v17, v18);
  v20 = *v19;
  v21 = (unsigned __int64)&(*v19)[*((unsigned int *)v19 + 2)];
  if ( (unsigned __int64)v20 >= v21 )
  {
    if ( v20 == (__int64 *)v21 )
    {
LABEL_10:
      v23 = v13;
      do
      {
        v24 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
        sub_B175E0(v24, *(_QWORD *)(a1 + 248), a3, v62);
        sub_B8CC60(v23, (__int64)v24, v25, v26, v27, v28);
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
      }
      while ( v23 != 0 && v13 != v23 );
      return;
    }
    while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 328 )
    {
      v21 += 8LL;
      if ( v20 == (__int64 *)v21 )
        goto LABEL_10;
    }
  }
  else
  {
    v22 = v20;
    while ( *(_WORD *)(*v22 + 36) != 328 )
    {
      if ( (__int64 *)v21 == ++v22 )
        goto LABEL_10;
    }
    if ( (__int64 *)v21 == v22 )
      goto LABEL_10;
  }
  while ( 1 )
  {
    v47 = *v20;
    if ( *(_WORD *)(*v20 + 36) == 328 )
      break;
    ++v20;
  }
LABEL_33:
  v48 = *(_QWORD **)(v47 + 40);
  if ( v48 )
  {
    v49 = nullptr;
    v48 = *(_QWORD **)(*v48 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v4 )
      goto LABEL_36;
  }
  else if ( !v4 )
  {
    return;
  }
  v49 = (_QWORD *)*v4;
LABEL_36:
  if ( v49 != v48 )
  {
    sub_168B9F0((__int64)v64, v7, a3[1].m128i_u32[2], 0xCADu, 0);
    v50 = sub_15DD120((__int64)v64, (__int64)a3);
    v51 = v50;
    if ( *(_BYTE *)(v50 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v50 + 32), v47, 0xEu);
    }
    else if ( *(_BYTE *)(v50 + 132) )
    {
      v55 = sub_168B9E0((_QWORD *)v50);
      v59 = *(_QWORD *)(v51 + 16);
      if ( v59 )
      {
        v61 = v55;
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
        v55 = v61;
      }
      v63 = v59;
      v60 = sub_1587BC0(v55, &v63, v55, v56, v57, v58);
      sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * *(unsigned int *)(v51 + 128) + 8), v47, 0xEu);
    }
    v52 = 1;
    if ( (a3[2].m128i_i8[3] & 2) == 0 )
      v52 = (*(_BYTE *)(v47 + 35) & 2) != 0;
    LOBYTE(v63) = v52;
    sub_1588420(v51, (unsigned __int8 *)&v63);
    sub_15F7200(v64);
    sub_168B9F0((__int64)v64, v7, *(_DWORD *)(v47 + 24), 0x16CFu, 0);
    sub_15F7200(v64);
  }
}
