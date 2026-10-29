__int64 __fastcall sub_D75230(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  int v8; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rdi
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  int v27; // r15d
  __int64 v28; // rsi
  int v29; // edx
  bool v30; // r15
  bool v31; // zf
  unsigned int v32; // ebp
  bool v33; // r15
  unsigned __int8 v34; // r12
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  unsigned int v46; // edx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  unsigned int v55; // [rsp+10h] [rbp-E8h]
  void *v56; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v57; // [rsp+28h] [rbp-D0h]
  void *v58; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+38h] [rbp-C0h]
  void *v60; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-B0h]
  void *v62; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-A0h]
  void *v64; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-90h]
  void *v66; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-80h]
  char v68; // [rsp+7Ch] [rbp-7Ch]
  void *v69; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v70; // [rsp+88h] [rbp-70h]
  char v71; // [rsp+8Ch] [rbp-6Ch]
  _BYTE v72[104]; // [rsp+90h] [rbp-68h] BYREF

  if ( *(_DWORD *)(a2 + 16) == 4
    && (v8 = a3,
        sub_9C8B50(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5))
    && sub_9C8B50(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         v10,
         v11,
         v12)
    && (LOBYTE(v16) = sub_9C8B50(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL),
                        a2,
                        v13,
                        v14,
                        v15),
        v5 = v16,
        (_BYTE)v16) )
  {
    v17 = a1[22];
    sub_DFDA20(v17, 48);
    sub_DFF520(v72);
    v18 = v17;
    v19 = 13;
    sub_DFDA50(v18, 48);
    v23 = a1[23];
    v24 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    v25 = *(_QWORD *)(a2 + v24 + 32);
    if ( (*(_BYTE *)(v25 + 1) & 6) == 0 )
    {
      v54 = sub_D66A20(v23, v25, v20, v21, v22);
      v23 = a1[23];
      v19 = v54;
      v24 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    }
    v26 = *(_QWORD *)(a2 + v24 + 40);
    v27 = 13;
    if ( (*(_BYTE *)(v26 + 1) & 6) == 0 )
    {
      v53 = sub_D66A20(v23, v26, v20, v21, v22);
      v23 = a1[23];
      v27 = v53;
      v24 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    }
    v28 = *(_QWORD *)(a2 + v24 + 48);
    v29 = 13;
    if ( (*(_BYTE *)(v28 + 1) & 6) == 0 )
      v29 = sub_D66A20(v23, v28, 13, v21, v22);
    sub_D67460((__int64)&v56, a1[22], v29);
    sub_D67460((__int64)&v58, a1[22], v27);
    sub_D67460((__int64)&v60, a1[22], v19);
    v30 = v8 == 1543;
    v31 = v8 == 3490;
    v32 = v59;
    v33 = v31 || v30;
    v34 = sub_9C8900((__int64)&v60, 0);
    v35 = v32 + 1;
    v55 = v32 + 1;
    if ( v33 )
    {
      sub_21E2F90(&v66, &v56, v35);
      sub_21E1CE0(&v66, v34);
      v36 = v67;
      v67 = 0;
      v70 = v36;
      v69 = v66;
      sub_21E2F90(&v64, &v58, v55);
    }
    else
    {
      sub_21E2F90(&v66, &v56, v35);
      sub_21E1CE0(&v66, v34);
      v51 = v67;
      v67 = 0;
      v70 = v51;
      v69 = v66;
      sub_21E2F90(&v64, &v58, v55);
      if ( v70 > 0x40 )
      {
        sub_21E2280(&v69, &v58);
      }
      else
      {
        v52 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v70;
        if ( !v70 )
          v52 = 0;
        v69 = (void *)(v52 & ~(unsigned __int64)v69);
      }
      sub_21E1BC0(&v69);
    }
    sub_21E1C60(&v69, &v64);
    v37 = v70;
    v70 = 0;
    v63 = v37;
    v62 = v69;
    if ( v65 > 0x40 )
    {
      if ( v64 )
      {
        operator delete[](v64);
        if ( v70 > 0x40 )
        {
          if ( v69 )
            operator delete[](v69);
        }
      }
    }
    if ( v67 > 0x40 && v66 )
      operator delete[](v66);
    sub_21E2540(&v64, &v62, v32, 0);
    sub_21E2540(&v69, &v62, 1, v32);
    v68 = 1;
    v67 = v70;
    v66 = v69;
    v41 = sub_F44710(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 56) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
            &v62,
            v38,
            v39,
            v40);
    v45 = sub_CC2440(a1[23], v41, v42, v43, v44);
    v46 = v65;
    v65 = 0;
    v70 = v46;
    v71 = 1;
    v69 = v64;
    sub_D741C0(a1, (__int64)v72, v45, (__int64)&v69, v47, v48);
    if ( v70 > 0x40 && v69 )
      operator delete[](v69);
    sub_D6C2A0(a1, (__int64)&v66, *(_QWORD *)(a2 + 8), v49, v50);
    if ( v67 > 0x40 && v66 )
      operator delete[](v66);
    if ( v65 > 0x40 && v64 )
      operator delete[](v64);
    if ( v63 > 0x40 && v62 )
      operator delete[](v62);
    if ( v61 > 0x40 && v60 )
      operator delete[](v60);
    if ( v59 > 0x40 && v58 )
      operator delete[](v58);
    if ( v57 > 0x40 && v56 )
      operator delete[](v56);
    sub_DFF560(v72);
  }
  else
  {
    return 0;
  }
  return v5;
}

