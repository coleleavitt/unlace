unsigned __int16 *__fastcall sub_19E15D0(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        unsigned int *a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 *a13,
        __int64 a14,
        char a15)
{
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int *v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int16 *v37; // rbp
  __int64 v38; // r8
  unsigned __int16 *result; // rax
  size_t v40; // rax
  int v41; // r15d
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // dl
  char v50; // cl
  unsigned int v51; // r15d
  size_t v52; // rax
  char *v53; // rcx
  signed __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // rax
  signed __int64 v66; // rdx
  unsigned __int64 v67; // [rsp-8h] [rbp-1A0h]
  unsigned int v68; // [rsp+14h] [rbp-184h]
  _QWORD *v69; // [rsp+30h] [rbp-168h]
  __int64 v70; // [rsp+38h] [rbp-160h]
  unsigned __int64 v71; // [rsp+40h] [rbp-158h]
  unsigned int v72; // [rsp+4Ch] [rbp-14Ch]
  __int64 v73; // [rsp+50h] [rbp-148h]
  __int64 v74; // [rsp+58h] [rbp-140h]
  __int64 v75; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v76; // [rsp+68h] [rbp-130h] BYREF
  unsigned int v77; // [rsp+70h] [rbp-128h] BYREF
  int v78; // [rsp+74h] [rbp-124h] BYREF
  __int64 v79; // [rsp+78h] [rbp-120h] BYREF
  __int64 v80; // [rsp+80h] [rbp-118h] BYREF
  char v81; // [rsp+88h] [rbp-110h]
  __int64 v82[3]; // [rsp+90h] [rbp-108h] BYREF
  void *v83; // [rsp+A8h] [rbp-F0h]
  _BYTE v84[24]; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 (__fastcall **v85)(); // [rsp+D0h] [rbp-C8h] BYREF
  __int64 *v86; // [rsp+D8h] [rbp-C0h]
  __int64 *v87; // [rsp+E0h] [rbp-B8h]

  v76 = a3;
  v75 = a5;
  LODWORD(v70) = a12;
  v68 = a9;
  v69 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( a4 )
  {
    v77 = a4;
    if ( a9 )
      goto LABEL_3;
  }
  else
  {
    v85 = (__int64 (__fastcall **)())*a2;
    v86 = a2 + 1;
    sub_F6CE20((__int64 *)&v85);
    v77 = sub_F6CCB0((__int64 *)&v85, a7);
    if ( a9 )
      goto LABEL_3;
  }
  sub_168B9F0((__int64)&v85, a1, v77, 0x105Eu, 0);
  v40 = j__strlen("[");
  sub_9EC740((__int64)v82, v77, "[", v40, 0);
  sub_1589170((__int64)&v85, v82);
  if ( v83 != v84 )
    operator delete(v83);
  sub_15F7200(&v85);
  v68 = v77;
LABEL_3:
  if ( a11 && (v22 = a10, v20 = *a10, (_DWORD)v20) )
  {
    v71 = a11;
  }
  else
  {
    v71 = 1;
    v22 = &v77;
  }
  v72 = *v22;
  v23 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v23 + 17) & 4) != 0 )
    return (unsigned __int16 *)sub_C9B430(
                                 v69,
                                 v76,
                                 0,
                                 v68,
                                 (__int64)a2,
                                 v75,
                                 (__int64)a10,
                                 a11,
                                 0,
                                 (__int64)a13,
                                 (unsigned int)a14,
                                 a12,
                                 a15);
  if ( ((unsigned int)*(unsigned __int8 *)(v23 + 16) - 35 <= 1
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
     && (v23 = sub_F63050(v23, v76, v19, v20)) != 0)
    && (v73 = sub_9C7D40(v23, v76, v19, v20, v21)) != 0 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) == 0 )
      sub_18F5260(*a1, v73, (int *)v22, v71, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
    if ( a6 )
    {
LABEL_11:
      v79 = 0;
      v24 = 0;
      v78 = 0;
      if ( sub_19DDEC0(
             a1,
             0,
             v76,
             (__int64)a13,
             (unsigned int)a14,
             v75,
             a7,
             a8,
             a10,
             a11,
             a6,
             1u,
             a4 != 0,
             v68,
             0,
             (unsigned __int64 *)&v79,
             &v78) )
      {
        return (_WORD *)(&dword_0 + 1);
      }
      if ( a6 )
      {
        v28 = *(_QWORD *)(a6 + 80);
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v29 + 16) != 13 || ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          v24 = v68;
          if ( (unsigned __int8)sub_1E63CF0(*a1, v68, v28, 1, 3936) )
            return (_WORD *)(&dword_0 + 1);
        }
        if ( (unsigned __int8)sub_BA7E40(a6, v24, v28, v25, v26, v27) && a4 )
        {
          sub_168B9F0((__int64)&v85, a1, a4, 0x1046u, 0);
          if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
          {
            v52 = j__strlen("self");
            v53 = "self";
            v54 = v52;
          }
          else
          {
            v65 = sub_BA85D0(a6);
            v53 = (char *)sub_995750(v65);
            v54 = v66;
          }
          LODWORD(v80) = a4;
          HIDWORD(v80) = a4;
          v81 = 1;
          sub_19CF590((__int64)v82, v80, 1, v53, v54);
          sub_1589170((__int64)&v85, v82);
          if ( v83 != v84 )
            operator delete(v83);
          sub_15F7200(&v85);
          sub_168B9F0((__int64)&v85, a1, *(_DWORD *)(a6 + 24), 0x171Eu, 0);
          v24 = (__int64)v82;
          v82[0] = *(_QWORD *)(a6 + 40);
          sub_15894B0((__int64)&v85, v82);
          sub_15F7200(&v85);
          if ( (unsigned int)sub_BA8080(a6, (__int64)v82, v55, v56, v57, v58) != 13 )
            goto LABEL_63;
          goto LABEL_64;
        }
        if ( (unsigned int)sub_BA8080(a6, v24, v30, v31, v32, v33) == 13 )
        {
          if ( !a4 )
          {
            v34 = *(_QWORD *)(a6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a6 + 16) & 4) != 0 )
              v34 = *(_QWORD *)v34;
            if ( (*(_BYTE *)(v34 + 8) & 0x7F) == 0x14 && v73 == v34 - 48 )
            {
              sub_168B9F0((__int64)&v85, a1, v77, 0x1AC2u, 0);
              sub_15F7200(&v85);
              sub_168B9F0((__int64)&v85, a1, *(_DWORD *)(a6 + 24), 0x17CAu, 0);
              v82[0] = *(_QWORD *)(a6 + 40);
              sub_15894B0((__int64)&v85, v82);
              sub_15F7200(&v85);
            }
            sub_19D6D30(*a1, a6, v75, (__int64)a13, a14);
            v37 = (unsigned __int16 *)sub_C9B430(
                                        v69,
                                        v79,
                                        v78,
                                        v68,
                                        (__int64)a2,
                                        v75,
                                        (__int64)a10,
                                        a11,
                                        a6,
                                        (__int64)a13,
                                        (unsigned int)a14,
                                        a12,
                                        a15);
            if ( a15 )
            {
LABEL_25:
              sub_19D67E0(*a1, v72, a6, a13, (unsigned int)a14, v76, 1);
              v35 = v67;
              return sub_19A3E40(*a1, v37, v35, v36, v38, a7, a8);
            }
LABEL_52:
            sub_19DA280((_QWORD *)*a1, (unsigned __int64)v37, v35, v36, v38, *(double *)a7.m128_u64);
LABEL_48:
            if ( !a6 )
              return sub_19A3E40(*a1, v37, v35, v36, v38, a7, a8);
            goto LABEL_25;
          }
LABEL_64:
          v59 = sub_15F1670(*a1);
          v64 = v59;
          if ( v59 && (unsigned int)sub_BA8080(v59, v24, v60, v61, v62, v63) != 13 )
          {
            sub_168B9F0((__int64)&v85, a1, v77, 0x1AC4u, 0);
            sub_15F7200(&v85);
            sub_168B9F0((__int64)&v85, a1, *(_DWORD *)(a6 + 24), 0x17CAu, 0);
            v82[0] = *(_QWORD *)(a6 + 40);
            sub_15894B0((__int64)&v85, v82);
            sub_15F7200(&v85);
            sub_168B9F0((__int64)&v85, a1, *(_DWORD *)(v64 + 24), 0x17CAu, 0);
            v82[0] = *(_QWORD *)(v64 + 40);
            sub_15894B0((__int64)&v85, v82);
            sub_15F7200(&v85);
          }
LABEL_63:
          sub_19D6D30(*a1, a6, v75, (__int64)a13, a14);
          v50 = a15;
          goto LABEL_47;
        }
      }
      sub_19D6D30(*a1, a6, v75, (__int64)a13, a14);
      v50 = a15;
      if ( !a4 )
      {
        v37 = (unsigned __int16 *)sub_C9B430(
                                    v69,
                                    v79,
                                    v78,
                                    v68,
                                    (__int64)a2,
                                    v75,
                                    (__int64)a10,
                                    a11,
                                    a6,
                                    (__int64)a13,
                                    (unsigned int)a14,
                                    a12,
                                    a15);
        if ( a15 )
          goto LABEL_48;
        goto LABEL_52;
      }
LABEL_47:
      v37 = (unsigned __int16 *)sub_C9BAE0(
                                  v69,
                                  v79,
                                  v78,
                                  v68,
                                  a4,
                                  0,
                                  v76,
                                  v75,
                                  (__int64)a10,
                                  a11,
                                  a6,
                                  (__int64)a13,
                                  (unsigned int)a14,
                                  a12,
                                  v50);
      goto LABEL_48;
    }
    if ( a4 )
    {
      LODWORD(v82[0]) = a4;
      HIDWORD(v82[0]) = a4;
    }
    else
    {
      v85 = (__int64 (__fastcall **)())*a2;
      v86 = a2 + 1;
      v51 = sub_F6CE20((__int64 *)&v85);
      v82[0] = __PAIR64__(v51, sub_F6CCB0((__int64 *)&v85, a7));
    }
    v74 = *a1;
    v41 = -((*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0);
    v45 = sub_A82070((__int64)v69, v73, 0, v42, v43, v44);
    LODWORD(v86) = (v41 & 0x10B3) + 3040;
    v85 = off_2BC64B0;
    v87 = v82;
    if ( (unsigned __int8)sub_1E63C20(v74, v77, v45, 1, &v85)
      && (a6 = sub_1897840((__int64)a1, v75, (v70 << 32) | v68, 0, 0)) != 0 )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
      {
        sub_168B9F0((__int64)&v85, a1, *(_DWORD *)(a6 + 24), 0x17CCu, 0);
        v80 = *(_QWORD *)(a6 + 40);
        sub_15894B0((__int64)&v85, &v80);
        sub_15F7200(&v85);
      }
    }
    else
    {
      a6 = sub_BAD910(v73, v75, 0, 0, 1, 0);
      if ( !a6 )
      {
        a6 = sub_BADBA0(v73, (__int64)&v75, 0, v46, v47, v48);
        if ( !a6 )
          goto LABEL_11;
      }
    }
    v49 = sub_18F5260(*a1, a6, (int *)v22, v71, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, v73, 0);
    result = (_WORD *)(&dword_0 + 1);
    if ( !v49 )
      goto LABEL_11;
  }
  else
  {
    sub_168B9F0((__int64)&v85, a1, v77, 0xFD9u, 0);
    sub_1605D30((__int64)&v85, (__int64 *)&v76);
    sub_15F7200(&v85);
    return (_WORD *)(&dword_0 + 1);
  }
  return result;
}
