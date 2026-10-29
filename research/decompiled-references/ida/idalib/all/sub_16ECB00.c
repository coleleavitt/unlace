__int64 __fastcall sub_16ECB00(__int64 a1, unsigned __int64 a2, int a3, double a4, double a5)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r8
  __m128i v10; // xmm0
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 i; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // r14
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r14
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rsi
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rax
  unsigned __int64 v58; // rdi
  __int64 v59; // rbx
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 *v62; // [rsp+8h] [rbp-120h] BYREF
  int v63; // [rsp+14h] [rbp-114h]
  unsigned __int64 v64; // [rsp+18h] [rbp-110h] BYREF
  bool v65; // [rsp+2Fh] [rbp-F9h] BYREF
  __int64 v66; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+38h] [rbp-F0h] BYREF
  int v68; // [rsp+40h] [rbp-E8h]
  __int128 v69; // [rsp+44h] [rbp-E4h] BYREF
  __int128 v70; // [rsp+54h] [rbp-D4h] BYREF
  int v71; // [rsp+64h] [rbp-C4h]
  const char *v72; // [rsp+68h] [rbp-C0h] BYREF
  __m128i v73; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+80h] [rbp-A8h]

  v63 = a3;
  v64 = a2;
  v7 = sub_16EC930(a1, a2, 3u, a4);
  if ( !(_BYTE)v7 )
  {
    v69 = 0;
    *(_QWORD *)((char *)&v69 + 4) = "ckd_add";
    v70 = 0;
    *(_QWORD *)((char *)&v70 + 4) = "ckd_sub";
    v72 = "ckd_mul";
    v62 = (__int64 *)&v64;
    v71 = 0;
    v68 = 115;
    v10 = (__m128i)_mm_loadh_ps((const double *)&v62);
    HIDWORD(v69) = 1284;
    HIDWORD(v70) = 967;
    v73 = v10;
    v74 = a1;
    v11 = sub_16BC680((__int64)&v73, 115, (const char **)((char *)&v69 + 4), v6, v8, v10, a5);
    if ( !v11 )
    {
      v11 = sub_16BC680((__int64)&v73, HIDWORD(v69), (const char **)((char *)&v70 + 4), v12, v13, v10, a5);
      if ( !v11 )
        v11 = sub_16BC680((__int64)&v73, HIDWORD(v70), &v72, v14, v15, v10, a5);
    }
    v65 = v11;
    v16 = v64;
    for ( i = 0; i != 16; i += 8 )
    {
      v18 = *(_QWORD *)(i + v16 + 8 * (((*(_BYTE *)(v16 + 2) & 8) != 0) + 1LL) + 32);
      v19 = sub_19179A0(a1, v18, 1);
      if ( v19 == 1 )
        return 1;
      v16 = v64;
      v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
      v22 = ((*(_BYTE *)(v64 + 2) & 8) != 0) + 1LL;
      *(_QWORD *)(i + v64 + 8 * v22 + 32) = v19 & 0xFFFFFFFFFFFFFFFELL;
      v66 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( v65 )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v23 + 16) != 13 )
          goto LABEL_33;
        v24 = (*(_WORD *)(v23 + 18) >> 3) & 0x1FF;
        if ( v24 <= 0x1C2u )
        {
          if ( ((v24 + 69) & 0x1FFu) > 4 && v24 != 438 && v24 != 449 )
          {
LABEL_33:
            v56 = sub_EEB7E0(v21, v18, *(double *)v10.m128i_i64);
            sub_168B9F0((__int64)&v73, (__int64 *)(a1 + 8), v56, 0x1283u, 0);
            v57 = sub_15890D0((__int64)&v73, (unsigned __int8 *)&v65);
            v58 = v21;
            v59 = sub_1605D30(v57, &v66);
            goto LABEL_34;
          }
        }
        else if ( v24 > 0x1C7u )
        {
          goto LABEL_33;
        }
      }
      else
      {
        if ( !sub_9EC890(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL), v18, v22, v16, v20) )
          goto LABEL_33;
        v16 = v64;
      }
    }
    v25 = *(_QWORD *)(v16 + 8 * (((*(_BYTE *)(v16 + 2) & 8) != 0) + 1LL) + 48);
    v26 = sub_19179A0(a1, v25, 1);
    if ( v26 == 1 )
      return 1;
    v29 = v64;
    v30 = v26 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v64 + 8 * (((*(_BYTE *)(v64 + 2) & 8) != 0) + 1LL) + 48) = v26 & 0xFFFFFFFFFFFFFFFELL;
    v66 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v31 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) == 42 || (v31 = sub_16B68B0(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL), v25, v29, v27)) != 0 )
    {
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL), v25, v29, v27, v28) )
      {
        v35 = *(_QWORD *)(v31 + 32);
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v36 + 16) == 13 )
        {
          v37 = *(unsigned __int16 *)(v36 + 18);
          LOWORD(v37) = ((unsigned __int16)v37 >> 3) & 0x1FF;
          if ( (unsigned __int16)v37 > 0x1C2u )
          {
            if ( (unsigned __int16)v37 <= 0x1C7u )
              goto LABEL_21;
          }
          else
          {
            v32 = (unsigned int)(v37 + 69);
            LOWORD(v32) = (v37 + 69) & 0x1FF;
            if ( (unsigned __int16)v32 <= 4u || (_WORD)v37 == 438 || (_WORD)v37 == 449 )
            {
LABEL_21:
              if ( (v35 & 1) == 0 )
              {
                v38 = v35 & 0xFFFFFFFFFFFFFFF0LL;
                if ( (*(_BYTE *)(v38 + 8) & 1) == 0 )
                {
                  if ( v63 != 967 )
                    return v7;
                  v39 = v64;
                  v40 = *(_QWORD *)(v64 + 8 * (((*(_BYTE *)(v64 + 2) & 8) != 0) + 1LL) + 32);
                  v41 = *(_QWORD *)(v40 + 8);
                  v42 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 10 )
                  {
                    if ( sub_F65140(v42, v64, v38, v32, v33, v34) )
                    {
                      v54 = v41;
                      if ( (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v41, v38, v32, v33) > 0x80 )
                        goto LABEL_29;
                    }
                    v39 = v64;
                  }
                  v40 = *(_QWORD *)(v39 + 8 * (((*(_BYTE *)(v39 + 2) & 8) != 0) + 1LL) + 40);
                  v43 = *(_QWORD *)(v40 + 8);
                  v44 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 10 )
                  {
                    if ( sub_F65140(v44, v39, v38, v32, v33, v34) )
                    {
                      v54 = v43;
                      if ( (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v43, v38, v32, v33) > 0x80 )
                        goto LABEL_29;
                    }
                    v39 = v64;
                  }
                  v40 = *(_QWORD *)(v39 + 8 * (((*(_BYTE *)(v39 + 2) & 8) != 0) + 1LL) + 48);
                  v49 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL), v39, v38, v32, v33);
                  v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 10 )
                    return v7;
                  if ( !sub_F65140(v50, v39, v45, v46, v47, v48) )
                    return v7;
                  v54 = v49;
                  if ( (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v49, v51, v52, v53) <= 0x80 )
                    return v7;
LABEL_29:
                  v55 = sub_EEB7E0(v40, v54, *(double *)v10.m128i_i64);
                  sub_168B9F0((__int64)&v73, (__int64 *)(a1 + 8), v55, 0x1282u, 0);
                  LODWORD(v67) = 128;
                  v7 = *(unsigned __int8 *)(sub_1587D10((__int64)&v73, (int *)&v67) + 120);
                  sub_15F7200(&v73);
                  return v7;
                }
              }
              goto LABEL_37;
            }
          }
        }
        if ( !v65 )
          goto LABEL_21;
      }
    }
LABEL_37:
    v60 = sub_EEB7E0(v30, v25, *(double *)v10.m128i_i64);
    sub_168B9F0((__int64)&v73, (__int64 *)(a1 + 8), v60, 0x1284u, 0);
    v61 = sub_15890D0((__int64)&v73, (unsigned __int8 *)&v65);
    v58 = v30;
    v59 = sub_1605D30(v61, &v66);
LABEL_34:
    v67 = sub_EEC8C0(v58, (__int64)&v66, *(double *)v10.m128i_i64);
    sub_1587DB0(v59, &v67);
    sub_15F7200(&v73);
    return 1;
  }
  return v7;
}
