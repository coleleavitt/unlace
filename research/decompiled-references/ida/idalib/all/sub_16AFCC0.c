void __fastcall sub_16AFCC0(_QWORD *a1, char a2, char a3, __int64 a4, double a5, double a6)
{
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r12d
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r12
  bool v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r10d
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 *v41; // rdi
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbp
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // r14
  unsigned __int8 v55; // r13
  double v56; // xmm0_8
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r15
  int v61; // r10d
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  int v64; // r10d
  unsigned __int64 v65; // r15
  unsigned int v66; // eax
  unsigned __int64 v67; // rax
  int *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // r10d
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // [rsp-10h] [rbp-128h]
  int v77; // [rsp+8h] [rbp-110h]
  int v78; // [rsp+8h] [rbp-110h]
  __int64 v79; // [rsp+8h] [rbp-110h]
  __int64 v80; // [rsp+8h] [rbp-110h]
  int *v81; // [rsp+10h] [rbp-108h] BYREF
  int v82; // [rsp+1Ch] [rbp-FCh]
  unsigned int v83; // [rsp+24h] [rbp-F4h] BYREF
  char v84[8]; // [rsp+28h] [rbp-F0h] BYREF
  __m128i v85; // [rsp+30h] [rbp-E8h] BYREF
  __m128 v86; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v87[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v88; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v89; // [rsp+70h] [rbp-A8h] BYREF
  char v90; // [rsp+C8h] [rbp-50h]
  unsigned int v91; // [rsp+D0h] [rbp-48h]
  char v92; // [rsp+D4h] [rbp-44h]

  v9 = *((_DWORD *)a1 + 10);
  if ( v9 )
  {
    a4 = a1[1];
    if ( v9 == 502 )
    {
      v28 = a1[2];
      v29 = a1[14];
      *((_DWORD *)a1 + 10) = 0;
      a1[1] = sub_18EFDE0(*a1, v29, v28, a4 & 0xFFFFFFFFFFFFFFFELL, (char *)a1 + 36, a1 + 4, a1 + 6);
      return;
    }
    if ( v9 == 498 )
    {
      if ( a4 == 1 )
        return;
    }
    else
    {
      v10 = sub_1907C70(*a1, a4 & 0xFFFFFFFFFFFFFFFELL);
      a1[1] = v10;
      if ( v10 == 1 )
        return;
      *((_DWORD *)a1 + 10) = 0;
      v9 = 0;
    }
  }
  v11 = a1[2];
  v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 13 || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    if ( (*(_BYTE *)(v12 + 17) & 4) != 0 )
      return;
    v16 = a1[1] & 0xFFFFFFFFFFFFFFFELL;
    if ( ((*(_DWORD *)v16 >> 14) & 0xC) != 0 )
      return;
    v17 = *a1;
    v18 = *(_QWORD *)(*a1 + 232LL);
    v19 = (a2 != 0) + 1;
    if ( (*(_BYTE *)(v18 + 89) & 1) != 0 )
    {
      v86.m128_u64[0] = *(_QWORD *)(v16 + 8);
      if ( (unsigned __int8)sub_19F8900(*(_QWORD *)(v17 + 680), v16, a1[2]) )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v86.m128_u64[0]
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 2 <= 1 )
        {
          v47 = *a1;
          v48 = sub_A72990(*(_QWORD *)(*a1 + 248LL), v86.m128_i64[0]);
          a1[1] = sub_160A600(v47, a1[1] & 0xFFFFFFFFFFFFFFFELL, v48, 0x42u, 0, 0, a5, a6, (unsigned int)(a2 != 0) + 1);
        }
        *((_DWORD *)a1 + 9) = 67;
        return;
      }
      v16 = a1[1] & 0xFFFFFFFFFFFFFFFELL;
      if ( (unsigned __int8)sub_19F8B20(*(_QWORD *)(*a1 + 680LL), v16, a1[2]) )
      {
        v51 = *(_QWORD *)(v86.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL);
        v52 = (unsigned int)*(unsigned __int8 *)(v51 + 16) - 57;
        if ( ((unsigned int)v52 <= 1 || (v51 = sub_16A7B90(v51, v16, v52, a4)) != 0) && *(_DWORD *)(v51 + 20) == 1 )
        {
          v16 = a1[1] & 0xFFFFFFFFFFFFFFFELL;
          a1[1] = sub_160A600(
                    *a1,
                    v16,
                    *(_QWORD *)(v51 + 32),
                    0x41u,
                    (*(_BYTE *)(v16 + 1) >> 1) & 3,
                    0,
                    a5,
                    a6,
                    (unsigned int)(a2 != 0) + 1);
        }
        v53 = *(_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v53 + 16) - 57 <= 1
          || (v53 = sub_16A7B90(*(_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF0LL), v16, v52, a4)) != 0 )
        {
          v54 = *a1;
          v55 = *(_BYTE *)((a1[1] & 0xFFFFFFFFFFFFFFFELL) + 1);
          v56 = sub_18D1110(*a1, a1 + 1, *(_QWORD *)(v53 + 32));
          a1[1] = sub_160A600(
                    v54,
                    a1[1] & 0xFFFFFFFFFFFFFFFELL,
                    *(_QWORD *)(v53 + 32),
                    v57,
                    (v55 >> 1) & 3,
                    0,
                    v56,
                    a6,
                    (unsigned int)(a2 != 0) + 1);
        }
        *((_DWORD *)a1 + 9) = 68;
        return;
      }
      v12 = *(_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8LL), *((_DWORD *)a1 + 25), 0xCD3u, 0);
        v85.m128i_i32[0] = 4;
        v49 = sub_1587D10((__int64)v87, v85.m128i_i32);
        v50 = sub_1605D30(v49, (__int64 *)&v86);
        sub_1605D30(v50, a1 + 2);
        sub_15F7200(v87);
        a1[1] = 1;
        return;
      }
    }
    if ( !*((_DWORD *)a1 + 8)
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48
      && *((_DWORD *)a1 + 10) != 498 )
    {
      v16 = a1[1] & 0xFFFFFFFFFFFFFFFELL;
      v20 = sub_19179A0(*a1, v16, 1);
      a1[1] = v20;
      if ( v20 == 1 )
        return;
      v12 = *(_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 57 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
      && (v12 = sub_F63050(v12, v16, v18, a4)) != 0 )
    {
      v21 = ((unsigned __int64)*((unsigned int *)a1 + 27) << 32) | *((unsigned int *)a1 + 25);
      if ( (unsigned __int8)sub_16AAE20(*a1, v21, a1[2], *(_QWORD *)((a1[1] & 0xFFFFFFFFFFFFFFFELL) + 8)) )
        goto LABEL_34;
      v25 = (*(_BYTE *)(v12 + 18) >> 3) & 0xF;
      if ( v25 == 1
        || (v22 = *(_BYTE *)(*(_QWORD *)(*a1 + 232LL) + 201LL) & 3, (_BYTE)v22 == 2) && (unsigned int)v25 - 2 <= 1 )
      {
        if ( sub_9EC890(
               *(_QWORD *)(*(_QWORD *)((a1[1] & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
               v21,
               v22,
               v23,
               v24)
          || sub_F58060(*(_QWORD *)(*(_QWORD *)((a1[1] & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v26 = a1[1];
          v27 = a1[2];
          *((_DWORD *)a1 + 9) = 26;
          a1[1] = sub_18D1860(*a1, v27, v26 & 0xFFFFFFFFFFFFFFFELL);
          return;
        }
      }
    }
    v32 = sub_F65F60(*(_QWORD *)(*(_QWORD *)((a1[1] & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v32 )
    {
      sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8LL), *((_DWORD *)a1 + 25), 0x155Au, 0);
      v85.m128i_i32[0] = 1;
      v31 = sub_1587D10((__int64)v87, v85.m128i_i32);
      v86.m128_u64[0] = sub_EEC8C0(a1[1] & 0xFFFFFFFFFFFFFFFELL, (__int64)&v85, a5);
      sub_1587DB0(v31, (__int64 *)&v86);
      sub_15F7200(v87);
      goto LABEL_34;
    }
    v33 = a1[2];
    v34 = *a1;
    v83 = 3283;
    v35 = sub_16A8630(v34, a1 + 1, v33, 1, &v83);
    if ( a1[1] == 1 )
      return;
    v38 = v35 - 1;
    v39 = *a1;
    if ( (unsigned int)(v35 - 1) <= 1 )
    {
      *((_DWORD *)a1 + 9) = 5;
      if ( (*(_BYTE *)(*(_QWORD *)(v39 + 232) + 107LL) & 0x14) == 0 )
      {
        if ( v35 == 1 )
        {
LABEL_51:
          v44 = sub_16A8F30(v39, a1 + 1, a1[2], v36, v37);
          if ( v44 )
          {
            sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8LL), *((_DWORD *)a1 + 25), v44, 0);
            v86.m128_u64[0] = *(_QWORD *)((a1[1] & 0xFFFFFFFFFFFFFFFELL) + 8);
            v45 = sub_162B6D0((__int64)v87, (__int64 *)&v86);
            v46 = sub_1605D30(v45, a1 + 2);
            sub_16AAEC0(v46, (unsigned int *)a1 + 25);
            sub_15F7200(v87);
          }
          return;
        }
        v38 = 1;
LABEL_45:
        if ( v83 )
        {
          v42 = *a1;
          v77 = v38;
          v43 = a1[1] & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_QWORD *)(v43 + 8) == *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 19080LL) )
          {
            v58 = sub_1BE7B70(v42, v43, a1[2], 1, v84, 0);
            v38 = v77;
            if ( v58 )
            {
              v59 = a1[1];
              LODWORD(v81) = v77;
              v60 = sub_16A9540(v59 & 0xFFFFFFFFFFFFFFFELL);
              sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8LL), *((_DWORD *)a1 + 25), 0xCD0u, 0);
              v61 = v77;
              v79 = *(_QWORD *)(v60 + 16);
              if ( v90 )
              {
                sub_AE9DF0(&v89, *(_QWORD *)(v60 + 16), 9u);
                v61 = (int)v81;
              }
              else if ( v92 )
              {
                v82 = (int)v81;
                v68 = (int *)sub_168B9E0(v87);
                v73 = (int)v81;
                v81 = v68;
                v74 = v88;
                if ( v88 )
                {
                  v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 32LL))(v88);
                  v73 = v82;
                }
                v82 = v73;
                v86.m128_u64[0] = v74;
                v75 = sub_1587BC0((__int64)v81, (__int64 *)&v86, v69, v70, v71, v72);
                sub_AE9DF0((unsigned __int8 **)(*v75 + 32LL * v91 + 8), v79, 9u);
                v61 = v82;
              }
              LODWORD(v81) = v61;
              v62 = sub_1605D30((__int64)v87, a1 + 2);
              v80 = sub_16AAEC0(v62, (unsigned int *)a1 + 25);
              v85 = _mm_loadu_si128((const __m128i *)(v60 + 40));
              v63 = sub_E90530(v85.m128i_i64);
              v64 = (int)v81;
              v65 = HIDWORD(v63);
              v66 = 0;
              if ( v85.m128i_i64[0] )
              {
                v86 = (__m128)_mm_load_si128(&v85);
                v67 = *(_QWORD *)(v85.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v67 )
                {
                  v81 = (int *)v86.m128_u64[1];
                  v86 = _mm_loadh_ps((const double *)&v81);
                  while ( (*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                  {
                    v32 = 1;
                    v67 = *(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  if ( v32 )
                    v86.m128_u64[0] = v67;
                }
                LODWORD(v81) = v64;
                v66 = sub_E90530((__int64 *)&v86);
                v64 = (int)v81;
              }
              LODWORD(v81) = v64;
              v86.m128_u64[0] = __PAIR64__(v65, v66);
              sub_1587DB0(v80, (__int64 *)&v86);
              sub_15F7200(v87);
              sub_1BE6FF0(*a1, a1[1] & 0xFFFFFFFFFFFFFFFELL, 0, 0);
              v38 = (int)v81;
            }
          }
          else
          {
            sub_16ADB50(
              v42,
              v83,
              (a2 != 0) + 4,
              *(_QWORD *)((char *)a1 + 100),
              *((_DWORD *)a1 + 27),
              v43,
              a5,
              a1[2],
              a3);
            v38 = v77;
          }
        }
        if ( v38 == 1 )
          goto LABEL_49;
LABEL_34:
        a1[1] = 1;
        return;
      }
    }
    else
    {
      if ( v35 )
        goto LABEL_45;
      v40 = a1[2];
      v81 = (int *)a1 + 9;
      v35 = sub_16A89A0(v39, a1 + 1, v40, &v83, (int *)a1 + 9);
      if ( a1[1] == 1 )
        return;
      v41 = (__int64 *)*a1;
      if ( !v35 )
      {
        v35 = sub_16AC3B0(
                (__int64)v41,
                a1 + 1,
                a1[2],
                v19,
                *(_QWORD *)((char *)a1 + 100),
                *((_DWORD *)a1 + 27),
                a5,
                (int *)&v83,
                v81,
                (__int64)(a1 + 6),
                a3);
        if ( a1[1] == 1 )
          return;
        v41 = (__int64 *)*a1;
        if ( !v35 )
        {
          v35 = sub_16AEA70(
                  v41,
                  a1 + 1,
                  a1[2],
                  1u,
                  *(_QWORD *)((char *)a1 + 100),
                  *((unsigned int *)a1 + 27),
                  a5,
                  &v83,
                  v81);
          v36 = v76;
          if ( a1[1] == 1 )
            return;
          v41 = (__int64 *)*a1;
        }
      }
      if ( (*(_BYTE *)(v41[29] + 107) & 0x14) == 0 )
      {
LABEL_70:
        v38 = v35 - 1;
        if ( v35 == 1 )
        {
LABEL_49:
          v39 = *a1;
          if ( *((_DWORD *)a1 + 9) == 1 )
          {
            sub_16D1370(
              v39,
              a1[1] & 0xFFFFFFFFFFFFFFFELL,
              a1[2],
              ((unsigned __int64)*((unsigned int *)a1 + 27) << 32) | *((unsigned int *)a1 + 25));
            v39 = *a1;
          }
          goto LABEL_51;
        }
        goto LABEL_45;
      }
      v38 = v35 - 1;
      if ( (unsigned int)(v35 - 1) > 1 )
        goto LABEL_45;
    }
    v78 = v35;
    sub_16A7710((__int64)a1, v19, 0);
    v35 = v78;
    goto LABEL_70;
  }
  *((_DWORD *)a1 + 9) = 24;
  v14 = *a1;
  if ( v9 != 498 )
  {
    v15 = a1[1];
LABEL_10:
    a1[1] = sub_19A6720(v14, v15 & 0xFFFFFFFFFFFFFFFELL);
    return;
  }
  v30 = a1[14];
  *((_DWORD *)a1 + 10) = 0;
  sub_1BE7810(v14, (_DWORD)a1 + 8, 0, 1, v30, v11, 3280);
  v15 = a1[1];
  if ( v15 != 1 )
  {
    v14 = *a1;
    goto LABEL_10;
  }
}
