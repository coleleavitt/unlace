__int64 __fastcall sub_184D750(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6,
        double a7)
{
  int v10; // r13d
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rdi
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rdi
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r14
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r13
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r14
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // r15
  __int64 v63; // r14
  __int64 v64; // r12
  unsigned __int8 v65; // al
  unsigned __int64 v66; // r14
  __int64 v67; // rdx
  unsigned __int64 v68; // r15
  int v70; // [rsp+20h] [rbp-2138h]
  __int64 v71; // [rsp+28h] [rbp-2130h]
  unsigned __int64 v72; // [rsp+28h] [rbp-2130h]
  __int64 v73; // [rsp+30h] [rbp-2128h]
  unsigned __int64 v74; // [rsp+30h] [rbp-2128h]
  unsigned __int64 v75; // [rsp+48h] [rbp-2110h] BYREF
  int v76[2]; // [rsp+50h] [rbp-2108h] BYREF
  __int64 v77; // [rsp+58h] [rbp-2100h]
  __int128 v78; // [rsp+60h] [rbp-20F8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-20E8h]
  __int128 v80; // [rsp+80h] [rbp-20D8h]
  __int64 v81; // [rsp+90h] [rbp-20C8h] BYREF
  __int64 v82; // [rsp+98h] [rbp-20C0h]
  __int64 v83; // [rsp+A0h] [rbp-20B8h]
  int v84; // [rsp+A8h] [rbp-20B0h]
  __int64 v85; // [rsp+B0h] [rbp-20A8h]
  __int16 v86; // [rsp+B8h] [rbp-20A0h]
  unsigned __int64 v87; // [rsp+C0h] [rbp-2098h] BYREF
  __int64 v88; // [rsp+C8h] [rbp-2090h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-2088h]
  int v90; // [rsp+D8h] [rbp-2080h]
  __int64 v91; // [rsp+E0h] [rbp-2078h]
  __int16 v92; // [rsp+E8h] [rbp-2070h]
  _QWORD v93[1021]; // [rsp+170h] [rbp-1FE8h] BYREF

  if ( *(char *)(a4 + 28) < 0 )
    return 1;
  v10 = *(_DWORD *)(a2 + 24);
  v70 = a3;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v11 = sub_A71450(*(_QWORD *)(a1 + 248), *(_QWORD *)(a4 + 48));
    v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    if ( (_BYTE)v12 != 48 )
    {
      v13 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
        v13 = *(_QWORD *)v13;
      if ( (*(_BYTE *)(v13 + 8) & 0x7Fu) - 58 > 3 )
        BUG();
      if ( *(_BYTE *)(v13 + 9) >> 5 == 2 )
      {
        v39 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
      }
      else
      {
        if ( (unsigned int)(v12 - 43) <= 1 )
        {
          v14 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v93, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x14F5u, 0);
          LODWORD(v78) = (*(_BYTE *)(a2 + 29) & 2) != 0;
          v15 = sub_1587D10((__int64)v93, (int *)&v78);
          v16 = *(_QWORD *)(a1 + 248);
          v17 = v15;
          v18 = sub_B72690(a2 + 72);
          v22 = v18 - 64;
          if ( v18 )
            v18 -= 64LL;
          v87 = sub_A7AC20(v16, v18, v22, v19, v20, v21);
          v23 = sub_162B6D0(v17, (__int64 *)&v87);
          v76[0] = 0;
LABEL_12:
          v24 = sub_1587D10(v23, v76);
          v81 = *(_QWORD *)(a4 + 40);
          sub_15894B0(v24, &v81);
          sub_15F7200(v93);
          sub_168B9F0((__int64)v93, v14, *(_DWORD *)(a4 + 24), 0x67u, 0);
          sub_15F7200(v93);
          return 1;
        }
        if ( (v11 & 1) != 0 || (v39 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL], (v39 & 1) != 0) )
        {
          v14 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v93, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x14F5u, 0);
          LODWORD(v78) = (*(_BYTE *)(a2 + 29) & 2) != 0;
          v48 = sub_1587D10((__int64)v93, (int *)&v78);
          v49 = *(_QWORD *)(a1 + 248);
          v50 = v48;
          v51 = sub_B72690(a2 + 72);
          v55 = v51 - 64;
          if ( v51 )
            v51 -= 64LL;
          v87 = sub_A7AC20(v49, v51, v55, v52, v53, v54);
          v23 = sub_162B6D0(v50, (__int64 *)&v87);
          v76[0] = 1;
          goto LABEL_12;
        }
      }
      if ( (v39 & 8) != 0
        && (((*(__int64 *)((char *)&qword_18 + (v39 & 0xFFFFFFFFFFFFFFF0LL))
            | (unsigned __int64)(((unsigned __int8)v39 | (unsigned __int8)v11) & 7)) >> 6)
          & 6) != 0 )
      {
        v63 = *(_QWORD *)(a4 + 48);
        v64 = sub_EEE9A0(16, *(_QWORD **)(a1 + 248), 8u);
        *(_WORD *)v64 = *(_WORD *)v64 & 0xFE00 | 0x36;
        if ( unk_2CD7484 )
          sub_EE9B50(54);
        *(_WORD *)(v64 + 1) &= 0xF801u;
        *(_QWORD *)(v64 + 8) = v63;
        v65 = sub_B63130(v64);
        *(_BYTE *)(v64 + 1) = (v65 << 6) | *(_BYTE *)(v64 + 1) & 0x3F;
        *(_BYTE *)(v64 + 2) = *(_BYTE *)(v64 + 2) & 0xF8 | (v65 >> 2) & 7;
        v66 = sub_18406C0((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 32, 3u);
        sub_B98A40(v66, *(_QWORD *)(a1 + 248), a4, v10, v10, v64, v10);
        *a6 = v66;
        return 0;
      }
      *a6 = 0;
      return 0;
    }
    if ( a5 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)(a5 + 56) + 8LL * *(unsigned int *)(a5 + 64) - 8);
      LODWORD(v87) = 6;
      v88 = 0;
      v41 = *(_QWORD *)(v40 + 48);
      v91 = v40;
      v92 = 1;
      v89 = v41;
      LOWORD(v81) = 3;
      v90 = 0;
      HIDWORD(v81) = v10;
      LODWORD(v82) = v10;
      HIDWORD(v82) = v10;
      sub_1A19220((unsigned int)v93, a1, (unsigned int)&v87, (unsigned int)&v81, 0, 0, 0, 1);
      v42 = sub_1A1D600((unsigned int)v93, a1, (unsigned int)&v87, (unsigned int)&v81, 0, 0, 0);
      v44 = sub_19A3E60(a1, v42, v43);
      if ( v44 != 1 )
      {
        v45 = sub_18406C0((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 32, 3u);
        v46 = v44 & 0xFFFFFFFFFFFFFFFELL;
        v47 = v45;
        v25 = 0;
        sub_B98A70(v45, *(_QWORD *)(a1 + 248), a5, v10, v10, v46, v10);
        *a6 = v47;
LABEL_38:
        sub_1A0BB10(v93);
        return v25;
      }
    }
    else
    {
      v56 = *(_QWORD *)(a4 + 48);
      LOWORD(v81) = 3;
      v89 = v56;
      v92 = 1;
      LODWORD(v87) = 6;
      v88 = 0;
      v90 = 0;
      v91 = a4;
      HIDWORD(v81) = v10;
      LODWORD(v82) = v10;
      HIDWORD(v82) = v10;
      sub_1A19220((unsigned int)v93, a1, (unsigned int)&v87, (unsigned int)&v81, 0, 0, 0, 1);
      v57 = sub_1A1D600((unsigned int)v93, a1, (unsigned int)&v87, (unsigned int)&v81, 0, 0, 0);
      v59 = sub_19A3E60(a1, v57, v58);
      if ( v59 != 1 )
      {
        v60 = sub_18406C0((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 32, 3u);
        v61 = v59 & 0xFFFFFFFFFFFFFFFELL;
        v62 = v60;
        v25 = 0;
        sub_B98A40(v60, *(_QWORD *)(a1 + 248), a4, v10, v10, v61, v10);
        *a6 = v62;
        goto LABEL_38;
      }
    }
    v25 = 1;
    goto LABEL_38;
  }
  v73 = **(_QWORD **)(a2 + 120);
  v93[0] = *(_QWORD *)(v73 + 48);
  v71 = sub_C1BEF0((__int64)v93, a2, a3, a4);
  LOBYTE(v26) = sub_B781F0(a4);
  v25 = v26;
  if ( (_BYTE)v26 )
    return 0;
  v74 = sub_C09130(*(_QWORD **)(a1 + 248), 0, 0, 0, v73, 0, v10, v71, 1, 0, 0, 0);
  sub_1911920(a1, v74, 0);
  if ( v70 == 2 )
    LODWORD(v74) = sub_1837920(a1, v74, a7);
  v28 = *(_QWORD *)(a4 + 40);
  v78 = 0;
  *(_OWORD *)ptr = 0;
  v80 = 0;
  sub_1838550((__int64)&v87, a1, v28, v10, 3);
  v29 = a4;
  if ( a5 )
    v29 = a5;
  v93[0] = v29;
  sub_1743080((__int64)&v88, v29);
  LODWORD(v87) = 2;
  sub_1A43500(&v87);
  v30 = sub_19CB370(a1, v74, v71, v10, 0, (unsigned int)&v78, 0, 0, (__int64)&v87, 0, 0, 0, 0);
  if ( v30 == 1 )
  {
    v25 = 1;
  }
  else
  {
    v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) + 48LL) & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 44 )
      v31 = sub_1837920(a1, v31, 0.0) & 0xFFFFFFFFFFFFFFFELL;
    if ( a5 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(a5 + 56) + 8LL * *(unsigned int *)(a5 + 64) - 8);
      LODWORD(v81) = 6;
      v82 = 0;
      v33 = *(_QWORD *)(v32 + 48);
      v85 = v32;
      v84 = 0;
      v83 = v33;
    }
    else
    {
      v67 = *(_QWORD *)(a4 + 48);
      LODWORD(v81) = 6;
      v82 = 0;
      v83 = v67;
      v84 = 0;
      v85 = a4;
    }
    v86 = 1;
    v75 = v31;
    LOWORD(v76[0]) = 0;
    v76[1] = v10;
    v77 = 0;
    sub_1A19220((unsigned int)v93, a1, (unsigned int)&v81, (unsigned int)v76, (unsigned int)&v75, 1, 0, 1);
    v34 = sub_1A1D600((unsigned int)v93, a1, (unsigned int)&v81, (unsigned int)v76, (unsigned int)&v75, 1, 0);
    v36 = sub_19A3E60(a1, v34, v35);
    if ( v36 == 1 )
    {
      v25 = 1;
    }
    else
    {
      v72 = v36 & 0xFFFFFFFFFFFFFFFELL;
      v37 = (__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL);
      if ( a5 )
      {
        v38 = sub_18406C0(v37, 32, 3u);
        sub_B98A70(v38, *(_QWORD *)(a1 + 248), a5, v10, v10, v72, v10);
        *a6 = v38;
      }
      else
      {
        v68 = sub_18406C0(v37, 32, 3u);
        sub_B98A40(v68, *(_QWORD *)(a1 + 248), a4, v10, v10, v72, v10);
        *a6 = v68;
      }
    }
    sub_1A0BB10(v93);
  }
  sub_169D230((__int64)&v87);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return v25;
}
