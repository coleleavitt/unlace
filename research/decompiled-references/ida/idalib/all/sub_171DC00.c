__int64 __fastcall sub_171DC00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        char a10)
{
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // bp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 result; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 *v25; // rbp
  __int64 *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // r9
  __m128 v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 *v43; // rax
  __int64 v44; // r15
  __int64 *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  int v49; // r14d
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // r15
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rbp
  int v59; // r15d
  __int64 *v60; // rbp
  __int64 *v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rbp
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 *v68; // r9
  __m128 v69; // xmm0
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r14
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // [rsp+8h] [rbp-100h]
  int v78; // [rsp+8h] [rbp-100h]
  int v79; // [rsp+8h] [rbp-100h]
  __int64 v80; // [rsp+8h] [rbp-100h]
  __int64 v81; // [rsp+8h] [rbp-100h]
  unsigned __int8 v82; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v83; // [rsp+14h] [rbp-F4h]
  unsigned __int8 v84; // [rsp+20h] [rbp-E8h]
  unsigned __int8 v85; // [rsp+24h] [rbp-E4h]
  _BYTE v86[4]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int8 v87; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v88; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v90; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+48h] [rbp-C0h]
  __int64 v92[8]; // [rsp+50h] [rbp-B8h] BYREF
  __m128 v93; // [rsp+90h] [rbp-78h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v95; // [rsp+A8h] [rbp-60h]
  __int64 v96; // [rsp+B0h] [rbp-58h]
  _BYTE *v97; // [rsp+B8h] [rbp-50h]
  __int64 *v98; // [rsp+C0h] [rbp-48h]

  v12 = a4;
  v13 = a9;
  v82 = a3;
  v87 = a8;
  v88 = a5;
  v83 = a9;
  v86[0] = a10;
  v14 = sub_1714190(a2, a2, a3, a4, a5, a6);
  v92[0] = a6;
  v92[1] = (__int64)&v87;
  v15 = v14 + 48;
  v89 = v14;
  v92[2] = a7;
  v92[3] = (__int64)v86;
  v92[4] = (__int64)&v88;
  v92[5] = (__int64)&v89;
  v92[6] = a1;
  if ( v13 )
  {
    v16 = sub_B8E970(v15);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_BYTE *)(v16 + 28) & 0x7F;
        if ( (_BYTE)v17 == 75 && (*(_BYTE *)(v16 + 73) & 0x40) != 0 )
          break;
        v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v16 )
          goto LABEL_3;
      }
LABEL_56:
      a2 = v16;
      v80 = v16;
      sub_171D220(v92, v16);
      v16 = v80;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v16 )
          break;
        v17 = *(_BYTE *)(v16 + 28) & 0x7F;
        if ( (_BYTE)v17 == 75 && (*(_BYTE *)(v16 + 73) & 0x40) != 0 )
          goto LABEL_56;
      }
    }
LABEL_3:
    v21 = v89;
    if ( !v12 )
      goto LABEL_4;
    v63 = sub_B8C330(v89);
    v64 = *(_QWORD *)(a7 + 176);
    a2 = *(_QWORD *)(v64 + 248);
    v90 = sub_16FEC70(*(_QWORD **)(v64 + 240), (_QWORD *)a2, v65, v66, v67, v68);
    v95 = &v90;
    v69 = _mm_loadh_ps((const double *)&a7);
    v97 = v86;
    v91 = v70;
    v93 = v69;
    v94 = v63;
    v96 = a1;
    v98 = &v88;
    v71 = sub_B8E970(v89 + 48);
    v72 = v71;
    if ( v71 )
    {
      if ( (*(_BYTE *)(v71 + 28) & 0x7F) == 0x12 )
      {
        while ( 1 )
        {
LABEL_99:
          if ( (*(_QWORD *)(v72 + 40) & 3LL) == 1 )
          {
            v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v72 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v75 + 16) != 13 || ((*(_WORD *)(v75 + 18) >> 3) & 0x1FF) != 0x1B3)
              && (*(_BYTE *)(v72 + 58) & 2) == 0 )
            {
              a2 = v72;
              sub_1714C50(&v93, v72);
            }
          }
          v76 = *(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v72 = v76;
          if ( !v76 )
            break;
          if ( (*(_BYTE *)(v76 + 28) & 0x7F) != 0x12 )
          {
            while ( 1 )
            {
              v17 = *(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v72 = v17;
              if ( !v17 )
                break;
              v17 = *(_BYTE *)(v17 + 28) & 0x7F;
              if ( (_BYTE)v17 == 18 )
                goto LABEL_99;
            }
            v21 = v89;
            goto LABEL_33;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v73 = *(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v72 = v73;
          if ( !v73 )
            break;
          if ( (*(_BYTE *)(v73 + 28) & 0x7F) == 0x12 )
            goto LABEL_99;
        }
      }
    }
  }
  else
  {
    v28 = sub_B8E970(v15);
    if ( v28 )
    {
      while ( 1 )
      {
        v17 = *(_BYTE *)(v28 + 28) & 0x7F;
        if ( (_BYTE)v17 == 75 && (*(_BYTE *)(v28 + 73) & 0x40) == 0 )
          break;
        v28 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v28 )
          goto LABEL_26;
      }
LABEL_21:
      a2 = v28;
      v77 = v28;
      sub_171D220(v92, v28);
      v28 = v77;
      while ( 1 )
      {
        v28 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v28 )
          break;
        while ( 1 )
        {
          v17 = *(_BYTE *)(v28 + 28) & 0x7F;
          if ( (_BYTE)v17 != 75 )
            break;
          if ( (*(_BYTE *)(v28 + 73) & 0x40) == 0 )
            goto LABEL_21;
          v28 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v28 )
            goto LABEL_26;
        }
      }
    }
LABEL_26:
    v21 = v89;
    if ( !v12 )
    {
LABEL_4:
      result = *(_BYTE *)(v21 + 28) & 0x7F;
      if ( (_BYTE)result == 19 )
        goto LABEL_5;
      goto LABEL_34;
    }
    v29 = sub_B8C330(v89);
    v30 = *(_QWORD *)(a7 + 176);
    a2 = *(_QWORD *)(v30 + 248);
    v90 = sub_16FEC70(*(_QWORD **)(v30 + 240), (_QWORD *)a2, v31, v32, v33, v34);
    v95 = &v90;
    v35 = _mm_loadh_ps((const double *)&a7);
    v97 = v86;
    v91 = v36;
    v93 = v35;
    v94 = v29;
    v96 = a1;
    v98 = &v88;
    v37 = sub_B8E970(v89 + 48);
    v38 = v37;
    if ( v37 )
    {
      if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x12 )
      {
        while ( 1 )
        {
LABEL_91:
          if ( (*(_QWORD *)(v38 + 40) & 3LL) == 1 )
          {
            a2 = v38;
            sub_1714C50(&v93, v38);
          }
          v74 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v38 = v74;
          if ( !v74 )
            break;
          if ( (*(_BYTE *)(v74 + 28) & 0x7F) != 0x12 )
          {
            while ( 1 )
            {
              v17 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v38 = v17;
              if ( !v17 )
                break;
              v17 = *(_BYTE *)(v17 + 28) & 0x7F;
              if ( (_BYTE)v17 == 18 )
                goto LABEL_91;
            }
            v21 = v89;
            goto LABEL_33;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v39 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v38 = v39;
          if ( !v39 )
            break;
          if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x12 )
            goto LABEL_91;
        }
      }
    }
  }
  v21 = v89;
LABEL_33:
  result = *(_BYTE *)(v21 + 28) & 0x7F;
  if ( (_BYTE)result == 19 )
  {
LABEL_5:
    v23 = *(_QWORD *)(v21 + 104);
    if ( v23 )
    {
      result = v23 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = result;
      if ( !result )
        return result;
    }
    else
    {
      sub_A79820((__int64 *)(*(_QWORD *)(v21 + 96) + 88LL), *(_QWORD *)(v21 + 96), v17, v18, v19, v20);
      result = *(_QWORD *)(v21 + 104);
      v24 = result & 0xFFFFFFFFFFFFFFF8LL;
      if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( result )
          return result;
        sub_A79820((__int64 *)(*(_QWORD *)(v21 + 96) + 88LL), *(_QWORD *)(v21 + 96), 0, v51, v52, v53);
        result = *(_QWORD *)(v21 + 104) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !result )
          return result;
        result = *(_QWORD *)(result + 8);
        v25 = nullptr;
        goto LABEL_8;
      }
    }
    result = *(_QWORD *)(v24 + 8);
    v25 = (__int64 *)(result + 8LL * *(unsigned int *)(v24 + 16));
LABEL_8:
    if ( v25 != (__int64 *)result )
    {
      v26 = (__int64 *)result;
      do
      {
        v27 = *v26++;
        result = sub_171DC00(a1, v27, v82, v12, v88, a6, a7, v87, v83, 0);
      }
      while ( v25 != v26 );
    }
    return result;
  }
LABEL_34:
  if ( (_BYTE)result == 20 )
  {
    v40 = *(_QWORD *)(v21 + 120);
    if ( !v82 )
      goto LABEL_36;
    if ( !v40 )
    {
      a2 = *(_QWORD *)(v21 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, v17, 0, v19, v20);
      v40 = *(_QWORD *)(v21 + 120);
    }
    v54 = v40 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v40 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( v40 )
        goto LABEL_50;
LABEL_70:
      a2 = *(_QWORD *)(v21 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, v17, v40, v19, v20);
      v40 = *(_QWORD *)(v21 + 120);
LABEL_37:
      v17 = v40 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v40 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (*(_BYTE *)(v17 + 72) & 1) == 0 )
        {
          v41 = *(unsigned int *)(v17 + 48);
          if ( (_DWORD)v41 )
          {
LABEL_40:
            a2 = *(_QWORD *)(v17 + 40);
            v42 = a2 + 8 * v41;
            goto LABEL_41;
          }
          goto LABEL_119;
        }
        sub_BA8900(v21);
        v40 = *(_QWORD *)(v21 + 120);
        v17 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(unsigned int *)((v40 & 0xFFFFFFFFFFFFFFF8LL) + 48);
        if ( (_DWORD)v41 )
          goto LABEL_40;
        if ( v40 )
        {
LABEL_119:
          if ( !v17 )
            goto LABEL_50;
LABEL_74:
          if ( (*(_BYTE *)(v17 + 72) & 1) != 0 )
          {
            sub_BA8900(v21);
            v40 = *(_QWORD *)(v21 + 120);
            v17 = v40 & 0xFFFFFFFFFFFFFFF8LL;
          }
          a2 = *(unsigned int *)(v17 + 24);
          v42 = *(_QWORD *)(v17 + 16) + 8 * a2;
LABEL_41:
          if ( v40 )
            goto LABEL_42;
          goto LABEL_90;
        }
        a2 = *(_QWORD *)(v21 + 96);
        sub_A794E0((__int64 *)(a2 + 88), a2, v17, 0, v19, v20);
        v40 = *(_QWORD *)(v21 + 120);
        v17 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v40 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_74;
      }
      if ( !v40 )
      {
        v42 = 0;
LABEL_90:
        a2 = *(_QWORD *)(v21 + 96);
        sub_A794E0((__int64 *)(a2 + 88), a2, v17, v40, v19, v20);
        v17 = *(_QWORD *)(v21 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_42:
        if ( !v17 )
        {
          v43 = nullptr;
LABEL_46:
          if ( v43 != (__int64 *)v42 )
          {
            v78 = v12;
            v44 = a7;
            v85 = v12;
            v45 = v43;
            do
            {
              a2 = *v45++;
              sub_171DC00(a1, a2, v82, v78, v88, a6, v44, v87, v83, 0);
            }
            while ( (__int64 *)v42 != v45 );
            v12 = v85;
          }
          goto LABEL_50;
        }
        if ( (*(_BYTE *)(v17 + 72) & 1) != 0 )
        {
          sub_BA8900(v21);
          v17 = *(_QWORD *)(v21 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          v40 = *(unsigned int *)(v17 + 48);
          if ( (_DWORD)v40 )
            goto LABEL_45;
          if ( !*(_QWORD *)(v21 + 120) )
          {
            a2 = *(_QWORD *)(v21 + 96);
            sub_A794E0((__int64 *)(a2 + 88), a2, v17, v40, v19, v20);
            v17 = *(_QWORD *)(v21 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v43 = nullptr;
          if ( !v17 )
            goto LABEL_46;
        }
        else if ( *(_DWORD *)(v17 + 48) )
        {
LABEL_45:
          v43 = *(__int64 **)(v17 + 40);
          goto LABEL_46;
        }
        if ( (*(_BYTE *)(v17 + 72) & 1) != 0 )
        {
          sub_BA8900(v21);
          v17 = *(_QWORD *)(v21 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v43 = *(__int64 **)(v17 + 16);
        goto LABEL_46;
      }
LABEL_50:
      result = sub_BAB630(v21, a2, v17, v40, v19, v20);
      if ( result )
      {
        v49 = v87;
        v79 = v88;
        v50 = sub_BAB630(v21, a2, v46, v47, v88, v48);
        return sub_171DC00(a1, v50, v82, v12, v79, a6, a7, v49, v83, 0);
      }
      return result;
    }
    if ( (*(_BYTE *)(v54 + 72) & 1) != 0 )
    {
      sub_BA8900(v21);
      v40 = *(_QWORD *)(v21 + 120);
      v55 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF8LL) + 56);
      if ( !v55 )
        goto LABEL_36;
    }
    else
    {
      v55 = *(_QWORD *)(v54 + 56);
      if ( !v55 )
        goto LABEL_37;
    }
    v56 = v12;
    v84 = v12;
    v57 = a7;
    v81 = v21;
    v58 = v55;
    v59 = v56;
    do
    {
      a2 = v58;
      sub_171DC00(a1, v58, 1, v59, v88, a6, v57, v87, v83, v86[0]);
      v58 = *(_QWORD *)(v58 + 128);
    }
    while ( v58 );
    v21 = v81;
    v12 = v84;
    v40 = *(_QWORD *)(v81 + 120);
LABEL_36:
    if ( v40 )
      goto LABEL_37;
    goto LABEL_70;
  }
  if ( (_BYTE)result == 23 )
  {
    result = *(_QWORD *)(v21 + 104);
    v60 = (__int64 *)(result + 8LL * *(unsigned int *)(v21 + 112));
    if ( (__int64 *)result != v60 )
    {
      v61 = (__int64 *)result;
      do
      {
        v62 = *v61++;
        result = sub_171DC00(a1, v62, v82, v12, v88, a6, a7, v87, v83, 0);
      }
      while ( v60 != v61 );
    }
  }
  return result;
}
