__int64 __fastcall sub_14959A0(__int64 a1, int a2, unsigned int a3, void *a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 **v8; // rax
  char v9; // dl
  __m128i v10; // xmm0
  bool v11; // zf
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *p_ptr; // rsi
  __int16 v18; // di
  __int64 **v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 *v25; // r8
  unsigned __int64 v26; // r13
  __int64 v27; // r12
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  __int64 *v31; // rsi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // r9d
  __int64 v35; // rdi
  __int64 v37; // rax
  __int64 **v38; // r8
  __int64 v39; // rdx
  _BYTE *v40; // r12
  _BYTE *v41; // r15
  _BYTE *v42; // rdi
  void *v43; // rdi
  __int16 v44; // ax
  size_t v45; // rax
  int v46; // eax
  __int64 *v47; // rdi
  __int64 *v48; // rdi
  size_t v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rdi
  size_t v53; // rax
  __int64 v54; // rax
  size_t v55; // rax
  void *v56; // [rsp+8h] [rbp-410h] BYREF
  void **v57; // [rsp+10h] [rbp-408h]
  _QWORD *v58; // [rsp+18h] [rbp-400h]
  unsigned int v59; // [rsp+20h] [rbp-3F8h]
  int v60; // [rsp+24h] [rbp-3F4h]
  __int64 *v61; // [rsp+28h] [rbp-3F0h]
  _QWORD *v62; // [rsp+30h] [rbp-3E8h]
  __int64 v63; // [rsp+38h] [rbp-3E0h] BYREF
  __int64 v64; // [rsp+48h] [rbp-3D0h] BYREF
  void *v65[2]; // [rsp+50h] [rbp-3C8h] BYREF
  char v66; // [rsp+60h] [rbp-3B8h] BYREF
  __int16 v67; // [rsp+70h] [rbp-3A8h]
  _QWORD v68[2]; // [rsp+80h] [rbp-398h] BYREF
  __m128i v69; // [rsp+90h] [rbp-388h]
  int v70; // [rsp+A0h] [rbp-378h]
  const char *v71; // [rsp+A8h] [rbp-370h]
  _BYTE *v72; // [rsp+B0h] [rbp-368h] BYREF
  char v73; // [rsp+B8h] [rbp-360h]
  __int64 v74; // [rsp+C0h] [rbp-358h]
  int v75; // [rsp+C8h] [rbp-350h]
  __int16 v76; // [rsp+CCh] [rbp-34Ch]
  __int64 (__fastcall *v77)(__int64); // [rsp+D0h] [rbp-348h]
  __int64 v78; // [rsp+D8h] [rbp-340h]
  __int64 v79; // [rsp+E0h] [rbp-338h]
  __int64 v80; // [rsp+F0h] [rbp-328h] BYREF
  __int64 *v81; // [rsp+F8h] [rbp-320h]
  __int64 v82; // [rsp+100h] [rbp-318h]
  _QWORD v83[5]; // [rsp+108h] [rbp-310h] BYREF
  __int64 v84; // [rsp+130h] [rbp-2E8h] BYREF
  void *ptr; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v86; // [rsp+148h] [rbp-2D0h]
  __int64 v87; // [rsp+150h] [rbp-2C8h] BYREF
  _BYTE v88[16]; // [rsp+158h] [rbp-2C0h] BYREF
  void *v89; // [rsp+168h] [rbp-2B0h]
  __int64 *v90; // [rsp+170h] [rbp-2A8h]
  __int64 v91; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v92; // [rsp+180h] [rbp-298h] BYREF
  __int64 v93; // [rsp+188h] [rbp-290h] BYREF
  void *v94; // [rsp+190h] [rbp-288h]
  __int64 v95; // [rsp+1A0h] [rbp-278h] BYREF
  void *v96; // [rsp+1C0h] [rbp-258h]
  int v97; // [rsp+1CCh] [rbp-24Ch]
  __int64 v98; // [rsp+268h] [rbp-1B0h]
  __int64 v99; // [rsp+270h] [rbp-1A8h] BYREF
  _BYTE *v100; // [rsp+278h] [rbp-1A0h]
  __int64 v101; // [rsp+280h] [rbp-198h]
  _BYTE v102[320]; // [rsp+288h] [rbp-190h] BYREF
  __int64 v103; // [rsp+3C8h] [rbp-50h]
  char v104; // [rsp+3D0h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 96);
  v59 = a3;
  v8 = *(__int64 ***)(v7 + 248);
  v63 = (__int64)a4;
  v56 = a4;
  v57 = (void **)v8;
  v58 = v68;
  v60 = a2;
  sub_2233820(v68);
  v9 = *(_BYTE *)(a1 + 1952);
  v70 = a2;
  v10 = (__m128i)_mm_loadh_ps((const double *)&v56);
  v11 = *(_WORD *)(a1 + 32) == 24;
  *(_BYTE *)(a1 + 1952) = 1;
  v68[0] = &off_2B4A628;
  v71 = "parsing struct/union body";
  v12 = (_BYTE *)(a1 + 1952);
  v69 = v10;
  v72 = (_BYTE *)(a1 + 1952);
  v73 = v9;
  v74 = a1;
  v75 = 1638424;
  v76 = 63;
  v77 = sub_1478A90;
  v78 = 0;
  v79 = 0;
  if ( v11 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 92) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
    {
      v62 = &v72;
      if ( (unsigned __int8)sub_1568800(&v72) )
      {
LABEL_41:
        v9 = v73;
        v12 = v72;
        goto LABEL_42;
      }
    }
    else
    {
      LODWORD(v79) = sub_1478A90(a1);
      v62 = &v72;
    }
    sub_146B5E0(&v64, a1, 0x28u, 1, 0);
    sub_17A6350(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v63);
    p_ptr = &qword_100 + 1;
    v65[1] = (void *)0x200000000LL;
    v57 = v65;
    v18 = *(_WORD *)(a1 + 32);
    v65[0] = &v66;
    v56 = (void *)(a1 + 504);
    v67 = 257;
    v61 = &v63;
    while ( 1 )
    {
LABEL_5:
      if ( (unsigned __int16)(v18 - 456) > 2u )
      {
LABEL_6:
        if ( v18 != 25 )
          goto LABEL_7;
        goto LABEL_17;
      }
      while ( 1 )
      {
        if ( (unsigned __int8)sub_15686D0(a1) )
          goto LABEL_17;
        v18 = *(_WORD *)(a1 + 32);
        if ( v18 == 25 )
          goto LABEL_17;
LABEL_7:
        switch ( v18 )
        {
          case 1:
            goto LABEL_17;
          case 63:
            p_ptr = (_QWORD *)(&dword_0 + 1);
            sub_156E1F0(a1, 1, v59);
            v18 = *(_WORD *)(a1 + 32);
            goto LABEL_5;
          case 119:
          case 166:
            p_ptr = (__int64 *)&ptr;
            LODWORD(ptr) = 0;
            sub_14A4C70(a1, &ptr);
            v18 = *(_WORD *)(a1 + 32);
            goto LABEL_5;
          case 428:
            sub_1526F60(a1);
            v18 = *(_WORD *)(a1 + 32);
            goto LABEL_5;
          case 433:
            sub_1527000(a1);
            v18 = *(_WORD *)(a1 + 32);
            goto LABEL_5;
        }
        if ( (unsigned __int16)(v18 - 447) > 1u )
          break;
        v86 = (__int64)v88;
        p_ptr = &v80;
        v87 = 0x200000000LL;
        v89 = v56;
        LODWORD(v80) = 3;
        ptr = nullptr;
        v90 = &v92;
        v91 = 0x200000000LL;
        sub_151C490(a1, &v80, &ptr, 0, 0, 0);
        sub_147A450(&ptr);
        v18 = *(_WORD *)(a1 + 32);
        if ( (unsigned __int16)(v18 - 456) > 2u )
          goto LABEL_6;
      }
      if ( v18 != 450 )
        break;
      v86 = (__int64)v88;
      p_ptr = &v80;
      LODWORD(v80) = 3;
      v89 = v56;
      ptr = nullptr;
      v87 = 0x200000000LL;
      v90 = &v92;
      v91 = 0x200000000LL;
      sub_157D480(a1, &v80, &ptr, v59, v63);
      sub_147A450(&ptr);
      v18 = *(_WORD *)(a1 + 32);
    }
    if ( sub_10CCDF0(v18) )
    {
      sub_1564820(&ptr, a1, *(unsigned int *)(a1 + 16), 1867);
      v54 = sub_15AC9B0(v59, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL);
      sub_1478320((unsigned __int8 **)&ptr, v54);
      sub_AEA040((__int64)&ptr);
      v46 = *(_DWORD *)(a1 + 20);
      if ( !v46 )
        v46 = *(_DWORD *)(a1 + 16);
    }
    else
    {
      if ( *(_WORD *)(a1 + 32) == 73 )
      {
        v47 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v47, (int *)(a1 + 16));
        if ( sub_13D0E90(a1 + 16, 3) )
        {
          v48 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v48, (int *)(a1 + 16));
          v49 = j__strlen(&byte_22F0C30);
          sub_1569A00(a1, 22, 14, &byte_22F0C30, v49);
          if ( *(_WORD *)(a1 + 32) == 5 )
          {
            v50 = *(unsigned int *)(a1 + 16);
            v51 = *(_QWORD *)(a1 + 24);
            ptr = &v87;
            v86 = 0x1000000000LL;
            sub_18A1910(
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
              v63,
              v50,
              v51,
              &ptr);
            v52 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v52, (int *)(a1 + 16));
            v53 = j__strlen(&byte_22F0C30);
            sub_1569A00(a1, 23, 14, &byte_22F0C30, v53);
            v43 = ptr;
            if ( ptr != &v87 )
              goto LABEL_61;
            goto LABEL_62;
          }
          sub_1564840(&ptr, a1, a1 + 16, 14);
          sub_AE9DF0((unsigned __int8 **)&ptr, 5, 4u);
        }
        else
        {
          sub_1564840(&ptr, a1, a1 + 16, 1909);
        }
        sub_AEA040((__int64)&ptr);
        p_ptr = (__int64 *)&ptr;
        LOWORD(ptr) = 63;
        sub_15680D0(a1, &ptr, 1, 0);
LABEL_67:
        v18 = *(_WORD *)(a1 + 32);
        goto LABEL_5;
      }
      v80 = a1;
      v81 = v61;
      sub_147A4A0((__int64)&ptr, (__int64)v56);
      v37 = *(_QWORD *)(a1 + 96);
      v103 = 0;
      v38 = (__int64 **)v57;
      v101 = 0x400000000LL;
      v98 = v37;
      v99 = 0;
      v100 = v102;
      v39 = *(_QWORD *)(v37 + 512);
      *(_QWORD *)(v37 + 512) = &v99;
      v103 = v39;
      v104 = 0;
      sub_1494F10(
        a1,
        (__int64)&ptr,
        (__int64 (__fastcall *)(__int64, unsigned __int8 *))sub_1477B00,
        (__int64)&v80,
        (__int64)v38,
        v10,
        a6);
      if ( !v104 )
      {
        sub_1818070(v98, v103, 0);
        v104 = 1;
      }
      v40 = v100;
      v41 = &v100[80 * (unsigned int)v101];
      if ( v100 != v41 )
      {
        do
        {
          v42 = v40;
          v40 += 80;
          sub_15B6850(v42);
        }
        while ( v41 != v40 );
        v41 = v100;
      }
      if ( v41 != v102 )
        free(v41);
      if ( v97 )
        free(v96);
      sub_15DCED0(v93, &v93);
      if ( v94 != &v95 )
        free(v94);
      v43 = v89;
      if ( v89 != &v91 )
LABEL_61:
        free(v43);
LABEL_62:
      v44 = *(_WORD *)(a1 + 32);
      if ( v44 != 63 )
      {
        if ( v44 != 25 )
        {
          v45 = j__strlen(&byte_22F0C30);
          sub_1569A00(a1, 63, 1647, &byte_22F0C30, v45);
          p_ptr = (__int64 *)&ptr;
          LOWORD(ptr) = 25;
          sub_15680D0(a1, &ptr, 1, 3);
          v18 = *(_WORD *)(a1 + 32);
          if ( v18 != 63 )
            goto LABEL_5;
          goto LABEL_65;
        }
        v55 = j__strlen(&byte_22F0C30);
        p_ptr = (_QWORD *)(&word_3E + 1);
        sub_1569A00(a1, 63, 1977, &byte_22F0C30, v55);
LABEL_17:
        sub_14808E0((__int64)v62, p_ptr, v13, v14, v15, v16);
        v81 = v83;
        v11 = *(_WORD *)(a1 + 32) == 189;
        v80 = 0;
        v82 = 0x200000000LL;
        v83[2] = v56;
        v83[3] = &v84;
        v83[4] = 0x200000000LL;
        if ( v11 )
          sub_1490230((const __m128i *)a1, (__int64)&v80, (__int64)v57, 0, v10, a6);
        v19 = (__int64 **)v57;
        sub_1493980(a1, (__int64 **)v57, v10, 0, 0);
        v24 = sub_B7E900(v63, (__int64)v19, v20, v21, v22, v23);
        v25 = &v87;
        v26 = v24;
        ptr = &v87;
        v86 = 0x2000000000LL;
        if ( v24 )
        {
          v27 = 0;
          v28 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v28 )
          {
            while ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 <= 2 )
            {
LABEL_71:
              ++v27;
              v28 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v28 )
                goto LABEL_25;
            }
            while ( 1 )
            {
              v29 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v28 = v29;
              if ( !v29 )
                break;
              if ( (*(_BYTE *)(v29 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_71;
            }
          }
LABEL_25:
          v30 = v27 + 1;
          v31 = &v87;
          if ( v30 > 32 )
          {
            sub_2237220(&ptr, &v87, v30, 8);
            LODWORD(v30) = v86 + v30;
            v31 = (__int64 *)((char *)ptr + 8 * (unsigned int)v86);
          }
          *v31 = v26;
          v32 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v32 )
          {
            while ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 49 <= 2 )
            {
LABEL_69:
              *++v31 = v32;
              v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v32 )
                goto LABEL_32;
            }
            while ( 1 )
            {
              v33 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v32 = v33;
              if ( !v33 )
                break;
              if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_69;
            }
          }
LABEL_32:
          LODWORD(v25) = (_DWORD)ptr;
          v34 = v30;
        }
        else
        {
          LODWORD(v30) = 0;
          v34 = 0;
        }
        v35 = *(_QWORD *)(a1 + 96);
        LODWORD(v86) = v30;
        sub_17CC930(v35, *(_QWORD *)(v35 + 608), v60, v63, (_DWORD)v25, v34, v79, HIDWORD(v79), (__int64)&v80);
        if ( v64 )
        {
          sub_1564F70(v64);
          v64 = 0;
        }
        sub_17AB6E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v63, v79);
        if ( ptr != &v87 )
          free(ptr);
        sub_147A450(&v80);
        if ( v65[0] != v57 + 2 )
          free(v65[0]);
        if ( v64 )
          sub_1564F70(v64);
        goto LABEL_41;
      }
LABEL_65:
      v46 = *(_DWORD *)(a1 + 16);
    }
    *(_DWORD *)(a1 + 40) = v46;
    p_ptr = (__int64 *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    goto LABEL_67;
  }
LABEL_42:
  *v12 = v9;
  v68[0] = &off_2B4A628;
  return sub_22338A0(v58);
}
