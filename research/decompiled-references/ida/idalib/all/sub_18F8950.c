void __fastcall sub_18F8950(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  unsigned int v8; // r14d
  int v10; // r12d
  int v11; // ebp
  unsigned __int64 v12; // rbx
  __int64 *v13; // rax
  signed __int64 v14; // rdx
  signed __int64 v15; // r14
  __int64 *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // r12d
  __int64 v20; // rax
  char *v21; // rsi
  unsigned __int8 *v22; // rsi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r13
  unsigned __int16 v25; // dx
  unsigned __int64 v26; // rcx
  signed __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // r15
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  char *v34; // rax
  signed __int64 v35; // rdx
  unsigned __int16 v36; // r15
  unsigned int v37; // eax
  signed __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  int v48; // edx
  int v49; // eax
  unsigned int v50; // edx
  __int64 v52; // [rsp+8h] [rbp-120h]
  unsigned __int64 v53; // [rsp+8h] [rbp-120h]
  bool v54; // [rsp+8h] [rbp-120h]
  unsigned __int64 v55; // [rsp+8h] [rbp-120h]
  unsigned __int64 v56; // [rsp+10h] [rbp-118h]
  __int64 v57; // [rsp+10h] [rbp-118h]
  char *v58; // [rsp+18h] [rbp-110h]
  signed __int64 v59; // [rsp+20h] [rbp-108h]
  __int64 v60; // [rsp+28h] [rbp-100h]
  __int64 v61; // [rsp+28h] [rbp-100h]
  __int64 v62; // [rsp+28h] [rbp-100h]
  unsigned __int64 v63; // [rsp+30h] [rbp-F8h]
  __int64 v64; // [rsp+38h] [rbp-F0h]
  __int64 v65; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v66; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v67[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 *v68; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v69; // [rsp+68h] [rbp-C0h]

  v8 = a2 - 17;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( (unsigned int)(a2 - 16) <= 2 )
  {
    v25 = *(_WORD *)a5 & 0x1FF;
    if ( ((*(_WORD *)a4 + 394) & 0x1FFu) > 1 )
    {
      if ( v25 <= 0x75u || v25 > 0x77u || ((*(_WORD *)(a5 + 2) >> 3) & 0x3Fu) - 9 > 6 )
        goto LABEL_39;
      v54 = 0;
      v26 = a5;
      goto LABEL_28;
    }
    v36 = *(_WORD *)(a4 + 2);
    if ( v25 > 0x75u )
    {
      if ( v25 > 0x77u )
      {
        if ( ((v36 >> 3) & 0x3Fu) - 9 > 6 )
          goto LABEL_39;
        v54 = 1;
        goto LABEL_54;
      }
      v48 = (v36 >> 3) & 0x3F;
      v54 = (unsigned int)(v48 - 9) <= 6;
      a2 = v54;
      v49 = (*(_WORD *)(a5 + 2) >> 3) & 0x3F;
      if ( v54 == (unsigned int)(v49 - 9) <= 6 )
        goto LABEL_39;
      v50 = v48 - 16;
      if ( (unsigned int)(v49 - 16) <= 2 || v50 <= 2 )
        goto LABEL_39;
      v26 = a5;
    }
    else
    {
      v37 = ((v36 >> 3) & 0x3F) - 9;
      v54 = v37 <= 6;
      if ( v37 > 6 )
        goto LABEL_39;
      v26 = 0;
    }
    if ( !v54 )
    {
LABEL_28:
      v56 = v26;
      LODWORD(v66) = v11;
      HIDWORD(v66) = sub_EEC140(a5);
      v58 = sub_BFA720((*(_WORD *)(v56 + 2) >> 3) & 0x3F);
      v59 = v27;
      v28 = v12;
      v29 = (unsigned int)sub_EEC140(*(_QWORD *)(v56 + 16));
LABEL_29:
      v63 = (v29 << 32) | (unsigned int)sub_EEB7E0(v28, a2, *(double *)a7.m128i_i64);
      v57 = a1 + 8;
      sub_168B9F0((__int64)&v68, (__int64 *)(a1 + 8), v11, 0x1C67u, 0);
      v60 = sub_15884C0((__int64)&v68, &v66);
      v30 = v67;
      v67[0] = (__int64)sub_BFA720(v10);
      v67[1] = v31;
      v32 = sub_166BAF0(v60, (__int64)v67);
      if ( *(_BYTE *)(v32 + 120) )
      {
        v30 = (__int64 *)v58;
        sub_AEC220((unsigned __int8 **)(v32 + 32), v58, v59);
      }
      else if ( *(_BYTE *)(v32 + 132) )
      {
        v61 = v32;
        v40 = sub_168B9E0((_QWORD *)v32);
        v43 = v61;
        v44 = v40;
        v45 = *(_QWORD *)(v61 + 16);
        if ( v45 )
        {
          v64 = v44;
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
          v44 = v64;
          v43 = v61;
        }
        v62 = v43;
        v65 = v45;
        v46 = sub_1587BC0(v44, &v65, v44, v41, v43, v42);
        v30 = (__int64 *)v58;
        sub_AEC220((unsigned __int8 **)(*v46 + 32LL * *(unsigned int *)(v62 + 128) + 8), v58, v59);
      }
      sub_15F7200(&v68);
      v33 = a5;
      if ( v54 )
        v33 = v12;
      v55 = sub_EEC8C0(v33, (__int64)v30, *(double *)a7.m128i_i64);
      sub_168B9B0((__int64)&v68, v57, 6275);
      sub_AEC220(&v68, v58, v59);
      sub_18F7970(a1, v11, (__int64)&v68, v55, a7, a8);
      if ( v68 && v69 )
        sub_1580C40(v69, (unsigned __int64)v68);
      sub_168B9B0((__int64)&v68, v57, 6273);
      v34 = sub_BFA720(v10);
      sub_AEC220(&v68, v34, v35);
      sub_18F7970(a1, v11, (__int64)&v68, v63, a7, a8);
      if ( v68 && v69 )
        sub_1580C40(v69, (unsigned __int64)v68);
LABEL_39:
      if ( v8 > 1 || v11 < 0 )
        goto LABEL_9;
LABEL_41:
      sub_18F7B20(a1, v10, v11, v12, a7, a8);
      sub_18F7B20(a1, v10, v11, a5, a7, a8);
      goto LABEL_7;
    }
LABEL_54:
    HIDWORD(v66) = v11;
    LODWORD(v66) = sub_EEB7E0(v12, a2, *(double *)a7.m128i_i64);
    v58 = sub_BFA720((v36 >> 3) & 0x3F);
    v59 = v38;
    v39 = sub_EEC140(a5);
    v28 = *(_QWORD *)(v12 + 24);
    v29 = v39;
    goto LABEL_29;
  }
  if ( v8 > 1 )
  {
    if ( (_DWORD)a2 == 20 )
    {
      if ( (int)a3 < 0 )
        return;
      if ( ((*(_WORD *)a4 + 394) & 0x1FFu) > 1 )
        goto LABEL_46;
      v47 = (*(_WORD *)(a4 + 2) >> 3) & 0x3F;
      if ( v47 == 19 )
      {
        if ( (*(_WORD *)sub_BFBAE0(*(_QWORD *)(a4 + 16)) & 0x1FF) == 9 )
          goto LABEL_46;
      }
      else if ( v47 != 20
             || (v12 = *(_QWORD *)(a4 + 24), ((*(_WORD *)v12 + 394) & 0x1FFu) > 1)
             || ((*(_WORD *)(v12 + 2) >> 3) & 0x3F) != 0x13
             || (*(_WORD *)sub_BFBAE0(*(_QWORD *)(v12 + 24)) & 0x1FF) != 9 )
      {
LABEL_46:
        if ( ((*(_WORD *)a5 + 394) & 0x1FFu) <= 1
          && ((*(_WORD *)(a5 + 2) >> 3) & 0x3F) == 0x13
          && (*(_WORD *)sub_BFBAE0(*(_QWORD *)(a5 + 24)) & 0x1FF) != 9 )
        {
          sub_18F7D20(a1, v11, a5, a7, a8);
        }
        return;
      }
      sub_18F7D20(a1, v11, v12, a7, a8);
      goto LABEL_46;
    }
    if ( (_DWORD)a2 == 7 )
    {
      if ( !sub_F60F80(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(a1 + 248), a3, a4, a5, a6) )
        return;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( (int)a3 >= 0 )
    goto LABEL_41;
LABEL_7:
  if ( v10 == 8 )
  {
LABEL_8:
    v13 = (__int64 *)sub_BFA720(v10);
    v15 = v14;
    v16 = v13;
    sub_18F8650(a1, v11, v12, v13, v14, a7, a8);
    sub_18F8650(a1, v11, a5, v16, v15, a7, a8);
  }
LABEL_9:
  if ( (unsigned int)(v10 - 9) <= 6 && (*(_WORD *)v12 & 0x1FF) == 0x5B )
  {
    v17 = sub_BFBC70(*(_QWORD *)(v12 + 32));
    v18 = v17;
    if ( v17 )
    {
      if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 34 <= 5 )
      {
        if ( (unsigned int)sub_B77890(v17) )
        {
          v19 = sub_B77890(v18);
          if ( (unsigned int)(v19 - 26) <= 1 )
          {
            sub_168B9F0((__int64)&v68, (__int64 *)(a1 + 8), v11, 0x1C43u, 0);
            v67[0] = sub_EEC8C0(v12, a1 + 8, *(double *)a7.m128i_i64);
            v52 = sub_1587DB0((__int64)&v68, v67);
            v66 = sub_EEC8C0(a5, (__int64)v67, *(double *)a7.m128i_i64);
            v20 = sub_1587DB0(v52, &v66);
            LOBYTE(v65) = v19 == 26;
            sub_1588420(v20, (unsigned __int8 *)&v65);
            sub_15F7200(&v68);
            v53 = sub_C94560(v12);
            sub_168B9B0((__int64)&v68, a1 + 8, 6275);
            v21 = "<<";
            if ( v19 != 26 )
              v21 = ">>";
            sub_AE9DF0(&v68, (__int64)v21, 1u);
            sub_18F7970(a1, *(_DWORD *)(v12 + 20), (__int64)&v68, v53, a7, a8);
            v22 = v68;
            if ( v68 && v69 )
              sub_1580C40(v69, (unsigned __int64)v68);
            v23 = (unsigned __int64)(unsigned int)sub_EEC140(a5) << 32;
            v24 = (unsigned int)sub_EEB7E0(
                                  *(_QWORD *)(v12 + 8 * (((*(_BYTE *)(v12 + 2) & 8) != 0) + 1LL) + 40),
                                  (__int64)v22,
                                  *(double *)a7.m128i_i64)
                | v23;
            sub_168B9B0((__int64)&v68, a1 + 8, 5940);
            sub_18F7970(a1, v11, (__int64)&v68, v24, a7, a8);
            if ( v68 && v69 )
              sub_1580C40(v69, (unsigned __int64)v68);
          }
        }
      }
    }
  }
}
