__int64 __fastcall sub_17B6880(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        char a8,
        _DWORD *a9,
        int a10,
        int a11,
        char a12,
        __int64 a13,
        _BYTE *a14)
{
  unsigned __int64 v15; // rax
  bool v18; // r14
  __int64 v19; // rdi
  __int64 (__fastcall ***v20)(); // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // bl
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 *v45; // rsi
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  size_t v52; // rax
  bool v53; // r14
  unsigned __int64 v54; // rax
  unsigned __int8 v55; // al
  _DWORD *v56; // rax
  __int64 *v57; // rsi
  unsigned int v58; // ecx
  unsigned int v59; // edx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  bool v64; // al
  unsigned int v65; // edx
  __int64 v66; // rax
  char v67; // [rsp+0h] [rbp-108h]
  __int64 v68; // [rsp+8h] [rbp-100h]
  char v69; // [rsp+8h] [rbp-100h]
  char v70; // [rsp+8h] [rbp-100h]
  __int16 v71; // [rsp+8h] [rbp-100h]
  __int64 *v72; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v73[2]; // [rsp+18h] [rbp-F0h] BYREF
  unsigned __int64 v74; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v75; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall **v77)(); // [rsp+40h] [rbp-C8h] BYREF
  int v78; // [rsp+48h] [rbp-C0h]
  __int64 *v79; // [rsp+50h] [rbp-B8h]

  v15 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v73[0] = a3;
  if ( (a2 & 7) != 0 )
    v15 = 0;
  v72 = a4;
  v18 = 0;
  v67 = a8;
  v74 = v15;
  if ( a14 )
  {
    v18 = 1;
    if ( (a14[720] & 1) == 0 )
      v18 = ((**(_DWORD **)a14 >> 12) & 0x7F) == 69;
  }
  v19 = a1[31];
  if ( (v73[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
    || (*(_BYTE *)(*(_QWORD *)(v73[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x10) != 0 )
  {
    v18 = 1;
    v73[0] = *(_QWORD *)(v19 + 18720);
  }
  v20 = (__int64 (__fastcall ***)())v73[0];
  v21 = sub_A71450(v19, v73[0]);
  v75 = v21;
  if ( (*(_BYTE *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x14) == 0 )
  {
    if ( (*(_BYTE *)(a1[29] + 89) & 1) != 0 )
    {
      v69 = sub_1E63CF0(a1, a6, v21, 1, 3968);
      if ( v69 )
        goto LABEL_79;
    }
    else
    {
      v78 = 3813;
      v77 = off_2BC6A30;
      v69 = sub_1E63C20(a1, a6, v21, 0, &v77);
      if ( v69 )
      {
LABEL_79:
        v20 = (__int64 (__fastcall ***)())(&dword_0 + 1);
        sub_B88650(a5, 1);
        v18 = v69;
        goto LABEL_9;
      }
    }
    v20 = &v77;
    sub_F62670(*(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL), (__int64 *)&v77, v60, v61, v62, v63);
    if ( v77 && *((char *)v77 + 28) < 0 )
    {
      v20 = (__int64 (__fastcall ***)())(&dword_0 + 1);
      v18 = 1;
      sub_B88650(a5, 1);
    }
  }
LABEL_9:
  v23 = (__int64 *)(v73[0] & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *(_QWORD *)&byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v24 & 8) != 0 && (v24 &= 0xFFFFFFFFFFFFFFF0LL, v22 = *(_QWORD *)(v24 + 24), (v22 & 0xFFFFFE00) != 0)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 18
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(sub_ED7E80(*v23, (__int64)v20, v24, v22) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 18 )
  {
    sub_168B9F0((__int64)&v77, a1 + 1, a6, 0xEE7u, 0);
    sub_15F7200(&v77);
    sub_B88650(a5, 1);
    if ( (*(_BYTE *)(a1[29] + 47) & 0x20) == 0 )
      goto LABEL_12;
    v18 = 1;
  }
  else if ( (*(_BYTE *)(a1[29] + 47) & 0x20) == 0 )
  {
    goto LABEL_50;
  }
  v50 = *(_QWORD *)(v73[0] & 0xFFFFFFFFFFFFFFF0LL);
  v51 = *(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v51 + 16) == 13 )
  {
    if ( ((*(_WORD *)(v51 + 18) >> 3) & 0x1FF) == 0x1ED
      || (v71 = (*(_WORD *)(v51 + 18) >> 3) & 0x1FF, sub_E3A850(v50))
      || v71 == 492 )
    {
LABEL_47:
      sub_168B9F0((__int64)&v77, a1 + 1, a6, 0x1264u, 0);
      sub_1605D30((__int64)&v77, v73);
      v18 = 1;
      sub_15F7200(&v77);
      sub_B88650(a5, 1);
    }
  }
  else
  {
    v70 = *(_BYTE *)(v51 + 16);
    v64 = sub_E3A850(v50);
    if ( v70 == 11 || v64 )
      goto LABEL_47;
  }
  if ( a9 )
  {
    v68 = a1[29];
    v52 = j__strlen("__cl_clang_bitfields");
    if ( !sub_FF8450((__int64)(a1 + 25), (__int64)"__cl_clang_bitfields", v52, v68) )
    {
      v28 = a8;
      sub_168B9F0((__int64)&v77, a1 + 1, a6, 0x1238u, 0);
      sub_15F7200(&v77);
      v67 = 1;
      a9 = nullptr;
      goto LABEL_13;
    }
  }
LABEL_50:
  if ( v18 )
    goto LABEL_12;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 && (v53 = a9 != nullptr && v74 == 0) )
  {
    if ( v73[0] & 7 | (v73[0] >> 3) & 1
      || (v54 = v73[0] & 0xFFFFFFFFFFFFFFF0LL,
          *(_QWORD *)&byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL] & 7LL
        | (*(__int64 *)&byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) )
    {
      v28 = a8;
      sub_168B9F0((__int64)&v77, a1 + 1, a6, 0xBB7u, 0);
      sub_15F7200(&v77);
      v67 = v53;
      a9 = nullptr;
      goto LABEL_13;
    }
  }
  else
  {
    v54 = v73[0] & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v54 + 17LL) & 8) != 0
    && !(unsigned __int8)sub_17AF2A0((__int64)a1, &v72, v73, a6, 0x1497u) )
  {
    goto LABEL_12;
  }
  LODWORD(v76) = 3;
  v78 = 2872;
  v77 = off_2BC6948;
  v79 = &v76;
  if ( (unsigned __int8)sub_1866EA0(a1, a6, v73[0], &v77) )
    goto LABEL_12;
  if ( !a9 )
    goto LABEL_60;
  v55 = sub_B78D70(a5, a1[31]);
  v56 = (_DWORD *)(sub_17B22D0(a1, a6, v74, v73[0], v55, a9, a7) & 0xFFFFFFFFFFFFFFFELL);
  if ( !v56 )
  {
LABEL_12:
    a9 = nullptr;
    v28 = a8;
    v67 = 1;
    goto LABEL_13;
  }
  a9 = v56;
LABEL_60:
  if ( !a8 )
    goto LABEL_66;
  v25 = v73[0] & 0xFFFFFFFFFFFFFFF0LL;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
    if ( (v73[0] & 1) != 0 || (byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
    {
      v57 = a1 + 1;
      v58 = 4249;
      goto LABEL_63;
    }
    v67 = 0;
    v28 = 1;
  }
  else
  {
    v57 = a1 + 1;
    v58 = 4252;
    if ( (*(_BYTE *)a1[29] & 0x20) == 0 )
    {
LABEL_63:
      if ( a14 && (v59 = *(_DWORD *)(*(_QWORD *)a14 + 168LL)) != 0 )
      {
        sub_168B9F0((__int64)&v77, v57, v59, v58, 0);
        sub_15F7200(&v77);
      }
      else
      {
        sub_168B9F0((__int64)&v77, v57, a6, v58, 0);
        sub_15F7200(&v77);
      }
LABEL_66:
      v28 = 0;
      if ( !a10 )
        goto LABEL_14;
      goto LABEL_67;
    }
    if ( !a14 || (v65 = *(_DWORD *)(*(_QWORD *)a14 + 168LL)) == 0 )
      v65 = a6;
    v28 = 1;
    sub_168B9F0((__int64)&v77, v57, v65, 0x15F8u, 0);
    sub_15F7200(&v77);
    v67 = 0;
  }
LABEL_13:
  if ( !a10 )
    goto LABEL_14;
LABEL_67:
  sub_17AE280((__int64)a1, a5, a6, v25, v26, v27);
LABEL_14:
  v29 = a5 + 64;
  if ( !a5 )
    v29 = 0;
  v30 = sub_B7BC50(a1[31], v29, a11, a6, v74, v73[0], (__int64)v72, (__int64)a9, v28, a10);
  v35 = v30;
  if ( !v67 )
  {
    v36 = a1[29];
    if ( (*(_BYTE *)(v36 + 1) & 8) != 0 )
    {
      if ( !a13 || (*(_BYTE *)(a13 + 28) & 0x7Fu) - 58 <= 4 )
      {
LABEL_22:
        if ( *(_BYTE *)(a5 + 73) >> 5 == 2 )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v38 = *(unsigned __int8 *)(v37 + 16);
          if ( (_BYTE)v38 == 48 )
          {
            v41 = sub_F60F10(v37, v36, v31, v32, v33, v34);
            v44 = v41[16];
            if ( v44 || (sub_7052B0((__int64 *)(v41[13] + 96LL), v41[13], v39, v40, v42, v43), (v44 = v41[16]) != 0) )
            {
              if ( *(_QWORD *)(v44 + 88) && (unsigned __int8)sub_17B6850(a1, v35) )
                sub_B88650(v35, 1);
            }
            v38 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                     + 16LL);
          }
          if ( (unsigned int)(v38 - 43) <= 1 )
          {
            v45 = a1 + 1;
            v46 = *(_DWORD *)(v35 + 24);
            v47 = a1[29];
            if ( *(char *)v47 < 0 && *(_DWORD *)(v47 + 152) <= 0xB532B7Fu )
            {
              sub_168B9F0((__int64)&v77, v45, v46, 0x1656u, 0);
              v76 = *(_QWORD *)(v35 + 40);
              v66 = sub_15894B0((__int64)&v77, &v76);
              sub_1605D30(v66, (__int64 *)&v75);
              sub_15F7200(&v77);
              goto LABEL_35;
            }
            sub_168B9F0((__int64)&v77, v45, v46, 0x14F7u, 0);
            v76 = *(_QWORD *)(v35 + 40);
            v48 = sub_15894B0((__int64)&v77, &v76);
            sub_1605D30(v48, (__int64 *)&v75);
            goto LABEL_88;
          }
        }
        goto LABEL_35;
      }
    }
    else if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 26 > 0x1A )
    {
      if ( !a13 || (*(_BYTE *)(a13 + 28) & 0x7Fu) - 58 <= 4 )
        goto LABEL_35;
    }
    else
    {
      sub_17AE510((__int64)a1, v30, v31, v32, v33, v34);
      v36 = a1[29];
      if ( !a13 || (*(_BYTE *)(a13 + 28) & 0x7Fu) - 58 <= 4 )
        goto LABEL_21;
    }
    if ( !sub_B72A20(a13, v36) )
    {
      sub_168B9F0((__int64)&v77, a1 + 1, a6, 0xE83u, 0);
      sub_17AE460((__int64)&v77, (__int64 *)&v74);
      sub_15F7200(&v77);
      sub_168B9F0((__int64)&v77, a1 + 1, *(_DWORD *)(a13 + 24), 0x70u, 0);
      sub_15F7200(&v77);
      sub_B88650(v35, 1);
    }
    v36 = a1[29];
LABEL_21:
    if ( (*(_BYTE *)(v36 + 1) & 8) == 0 )
      goto LABEL_35;
    goto LABEL_22;
  }
  sub_B88650(v30, 1);
  if ( a13 && (*(_BYTE *)(a13 + 28) & 0x7Fu) - 58 > 4 && !sub_B72A20(a13, a1[29]) )
  {
    sub_168B9F0((__int64)&v77, a1 + 1, a6, 0xE83u, 0);
    sub_17AE460((__int64)&v77, (__int64 *)&v74);
    sub_15F7200(&v77);
    sub_168B9F0((__int64)&v77, a1 + 1, *(_DWORD *)(a13 + 24), 0x70u, 0);
LABEL_88:
    sub_15F7200(&v77);
    sub_B88650(v35, 1);
  }
LABEL_35:
  if ( a14 )
  {
    sub_1836CB0(a1, a1[76], v35, a14);
    if ( (*(_BYTE *)(v35 + 29) & 1) != 0 )
      sub_180FE80(a1, v35);
  }
  if ( (*(_BYTE *)(a1[29] + 107) & 4) != 0 && (unsigned __int8)sub_189F360(a1[92], v35) )
    sub_B88650(v35, 1);
  if ( (*(_QWORD *)&byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
    && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v73[0] & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 4)
      & 3) == 1 )
  {
    sub_168B9F0((__int64)&v77, a1 + 1, a6, 0x19C4u, 0);
    sub_15F7200(&v77);
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 248LL) - 23) <= 1
    && (unsigned __int8)sub_1C0D9F0(a1[96], v73[0], *(unsigned int *)(v35 + 24)) )
  {
    sub_B88650(v35, 1);
  }
  *(_BYTE *)(v35 + 29) = (32 * (a12 & 3)) | *(_BYTE *)(v35 + 29) & 0x9F;
  return v35;
}
