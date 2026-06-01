__int64 __fastcall sub_1B38B60(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  __int64 v10; // r14
  __int64 v11; // rax
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _WORD *v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r12
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  char *v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // edx
  unsigned int v33; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // cf
  __int64 v39; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  int v46; // ebp
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 *v49; // rsi
  __int64 v50; // rax
  bool v51; // cc
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rbp
  unsigned __int64 v67; // rbp
  unsigned __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r13
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned __int64 *i; // [rsp+0h] [rbp-218h]
  int v77; // [rsp+0h] [rbp-218h]
  unsigned int v79; // [rsp+10h] [rbp-208h]
  unsigned __int64 v80; // [rsp+10h] [rbp-208h]
  unsigned int v81; // [rsp+18h] [rbp-200h]
  __int64 v82; // [rsp+18h] [rbp-200h]
  __int64 v83; // [rsp+18h] [rbp-200h]
  __int64 v84; // [rsp+20h] [rbp-1F8h]
  __int64 v85; // [rsp+20h] [rbp-1F8h]
  unsigned __int64 v86; // [rsp+20h] [rbp-1F8h]
  unsigned __int64 v91; // [rsp+68h] [rbp-1B0h]
  unsigned int v92; // [rsp+70h] [rbp-1A8h] BYREF
  int v93; // [rsp+74h] [rbp-1A4h] BYREF
  unsigned __int64 v94; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v95; // [rsp+80h] [rbp-198h] BYREF
  __int64 v96; // [rsp+88h] [rbp-190h] BYREF
  void *v97; // [rsp+90h] [rbp-188h] BYREF
  unsigned int v98; // [rsp+98h] [rbp-180h]
  char v99; // [rsp+9Ch] [rbp-17Ch]
  void *v100; // [rsp+A0h] [rbp-178h] BYREF
  unsigned __int32 v101; // [rsp+A8h] [rbp-170h]
  char v102; // [rsp+ACh] [rbp-16Ch]
  void *v103; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-160h]
  _BYTE v105[64]; // [rsp+C0h] [rbp-158h] BYREF
  void *ptr; // [rsp+100h] [rbp-118h] BYREF
  __int64 v107; // [rsp+108h] [rbp-110h]
  _BYTE v108[64]; // [rsp+110h] [rbp-108h] BYREF
  __m128 v109[12]; // [rsp+150h] [rbp-C8h] BYREF

  v10 = a2;
  v103 = v105;
  v104 = 0x800000000LL;
  ptr = v108;
  v107 = 0x400000000LL;
  v98 = 32;
  v97 = nullptr;
  v99 = 1;
  v101 = 32;
  v100 = nullptr;
  v102 = 1;
  v11 = sub_1AE6050(a6);
  if ( v11 )
  {
    if ( *(_BYTE *)(v11 + 1072) )
    {
      a2 = *(_QWORD *)(v11 + 1056);
      if ( a2 )
      {
        sub_C3DC60((__int64)v109, a2, *(_QWORD *)(v10 + 248), 0, v14, v15);
        v102 = 1;
        v100 = (void *)v109[0].m128_u64[0];
        v101 = v109[0].m128_u32[2];
      }
    }
  }
  for ( i = &a4[a5]; i != a4; ++a4 )
  {
    v16 = (_WORD *)*a4;
    if ( (*(_WORD *)*a4 & 0x1FF) == 0x45 )
      goto LABEL_43;
    v17 = sub_C00A40(*a4, a2, (__int64)v12, v13, v14);
    if ( a3 )
      goto LABEL_23;
    v18 = *(unsigned int *)(a6 + 344);
    if ( (_DWORD)v18 )
    {
      v19 = *(_QWORD *)(a6 + 336) + 6776 * v18 - 6776;
      if ( *(_QWORD *)(v19 + 6768) == *(_QWORD *)(a6 + 328) )
      {
        v35 = *(unsigned int *)(v19 + 8);
        v36 = *(unsigned int *)(a6 + 27504);
        if ( (unsigned int)v35 > (unsigned int)v36 )
        {
          v38 = v35 == v36;
          v37 = v35 - v36;
          if ( !v38 && v37 != 1 )
          {
            v39 = *(_QWORD *)v19 + 1688 * (v37 - 2);
            if ( v39 )
            {
              if ( *(_BYTE *)(v39 + 1072) && *(_QWORD *)(v39 + 1056) )
              {
                a2 = (unsigned __int64)&v100;
                if ( v99 ? (int)sub_2205DB0(&v97, &v100) >= 0 : (int)sub_2205E20(&v97, &v100) >= 0 )
                {
                  a2 = v10 + 8;
                  sub_168B9F0((__int64)v109, (__int64 *)(v10 + 8), v17, 0x1178u, 0);
                  sub_15F7200(v109);
                  continue;
                }
              }
            }
          }
        }
      }
    }
    v20 = sub_BFD550((unsigned __int64)v16);
    sub_2205900(&v97);
    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(v10 + 544)) )
    {
LABEL_43:
      a2 = (unsigned __int64)v16;
      sub_14B7B40((__int64)&v103, (__int64)v16);
      continue;
    }
    v81 = 0;
    v21 = sub_BFB900(v20);
    v94 = v21;
    v22 = *(_WORD *)v21 & 0x1FF;
    if ( v22 <= 0x75u )
    {
      if ( v22 != 91 )
      {
        if ( v22 == 92 )
        {
          v79 = 0;
          v52 = *(_QWORD *)(sub_C946E0(v21) + 40);
          v55 = v52 & 7;
          if ( (_DWORD)v55 == 6 )
            v79 = *(_DWORD *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
          v81 = sub_C00A40(*(_QWORD *)(v21 + 32), a2, v55, v53, v54);
          v56 = sub_C94680(v21);
          v94 = sub_BFBAE0(v56);
          v25 = sub_BFBAE0(*(_QWORD *)(v21 + 8 * (((*(_BYTE *)(v21 + 2) & 8) != 0) + 1LL) + 32));
          goto LABEL_12;
        }
LABEL_50:
        v25 = 0;
        v79 = 0;
        goto LABEL_12;
      }
      v79 = (*(_BYTE *)(v21 + 3) >> 1) & 0x3F;
      v81 = *(_DWORD *)(v21 + 20);
      v94 = sub_BFBAE0(*(_QWORD *)(v21 + 8 * (((*(_BYTE *)(v21 + 2) & 8) != 0) + 1LL) + 32));
      v25 = sub_BFBAE0(*(_QWORD *)(v21 + 8 * (((*(_BYTE *)(v21 + 2) & 8) != 0) + 1LL) + 40));
    }
    else
    {
      if ( v22 > 0x77u )
        goto LABEL_50;
      v79 = sub_BFAD70((*(_WORD *)(v21 + 2) >> 3) & 0x3F);
      v81 = *(_DWORD *)(v21 + 4);
      v23 = sub_BFBAE0(*(_QWORD *)(v21 + 16));
      v24 = *(_QWORD *)(v21 + 24);
      v94 = v23;
      v25 = sub_BFBAE0(v24);
    }
LABEL_12:
    a2 = (unsigned __int64)&v94;
    v92 = 0;
    v96 = 0;
    v84 = sub_1B31D70(v10, &v94, &v92, &v96, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
    if ( (_BYTE)v12 )
    {
      a2 = (unsigned __int64)v16;
      sub_14B7B40((__int64)&v103, (__int64)v16);
    }
    if ( !v84 )
      continue;
    if ( v79 - 5 <= 1 )
    {
      if ( v25 )
      {
        a2 = v25;
        if ( sub_1B11600(*(__int64 **)(v10 + 760), v25, 0x16u, 0, 0, a7, a8) == 1 )
          continue;
      }
    }
    else if ( v25 || v79 )
    {
      a2 = v10 + 8;
      sub_168B9F0((__int64)v109, (__int64 *)(v10 + 8), v81, 0x1176u, 0);
      sub_15F7200(v109);
      continue;
    }
    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(v10 + 544)) )
      goto LABEL_21;
    v26 = sub_1AE6050(a6);
    if ( !v26 )
      goto LABEL_21;
    if ( !*(_BYTE *)(v26 + 1072) )
      goto LABEL_21;
    v82 = v26;
    if ( !*(_QWORD *)(v26 + 1056) )
      goto LABEL_21;
    v41 = sub_1AEE450(v84);
    v85 = v82;
    v83 = v82 + 728;
    v42 = sub_1AFA610(v83, v41);
    if ( (*(_BYTE *)(v85 + 728) & 1) != 0 )
    {
      v43 = v85 + 736;
      v44 = 192;
    }
    else
    {
      v43 = *(_QWORD *)(v85 + 736);
      v44 = 24LL * *(unsigned int *)(v85 + 744);
    }
    v86 = v42;
    sub_1AF9650(v109, (_QWORD *)(v44 + v43), (_QWORD *)(v44 + v43), v83, 1);
    v45 = 0;
    if ( v86 != v109[0].m128_u64[0] )
      v45 = *(unsigned int *)(v86 + 8);
    v109[0].m128_i32[2] = 64;
    v109[0].m128_u64[0] = v45;
    v109[0].m128_i8[12] = 0;
    v46 = sub_98E2D0((__int64 *)&v97, (__int64 *)v109);
    if ( v109[0].m128_i32[2] > 0x40u && v109[0].m128_u64[0] )
      operator delete[]((void *)v109[0].m128_u64[0]);
    if ( !v46 )
    {
LABEL_21:
      v27 = (unsigned int)v107;
      v28 = v107;
      if ( (unsigned int)v107 >= (unsigned __int64)HIDWORD(v107) )
      {
        v67 = v79 | v91 & 0xFFFFFFFF00000000LL;
        v91 = v67;
        if ( HIDWORD(v107) < (unsigned __int64)(unsigned int)v107 + 1 )
        {
          sub_2237220(&ptr, v108, (unsigned int)v107 + 1LL, 16);
          v27 = (unsigned int)v107;
        }
        v68 = (unsigned __int64 *)((char *)ptr + 16 * v27);
        *v68 = v25;
        v68[1] = v67;
        LODWORD(v107) = v107 + 1;
      }
      else
      {
        v29 = (char *)ptr + 16 * (unsigned int)v107;
        *(_QWORD *)v29 = v25;
        *((_DWORD *)v29 + 2) = v79;
        LODWORD(v107) = v28 + 1;
      }
LABEL_23:
      v30 = sub_BFBAE0((unsigned __int64)v16);
      v13 = (unsigned int)v104;
      a2 = HIDWORD(v104);
      v31 = (unsigned int)v104 + 1LL;
      if ( v31 > HIDWORD(v104) )
      {
        v80 = v30;
        a2 = (unsigned __int64)v105;
        sub_2237220(&v103, v105, v31, 8);
        v13 = (unsigned int)v104;
        v30 = v80;
      }
      v12 = v103;
      *((_QWORD *)v103 + v13) = v30;
      LODWORD(v104) = v104 + 1;
      continue;
    }
    LODWORD(v47) = (_DWORD)v97;
    if ( v98 > 0x40 )
      v47 = *(_QWORD *)v97;
    v48 = sub_1AFA180(a6, v47);
    v49 = (__int64 *)(v10 + 8);
    v95 = v48;
    if ( v48 )
    {
      sub_168B9F0((__int64)v109, v49, v92, 0x1175u, 0);
      v93 = 1;
      v50 = sub_1587D10((__int64)v109, &v93);
      a2 = (unsigned __int64)&v95;
      sub_18DA350(v50, &v95);
    }
    else
    {
      sub_168B9F0((__int64)v109, v49, v92, 0x1175u, 0);
      a2 = (unsigned __int64)&v93;
      v93 = 0;
      sub_1587D10((__int64)v109, &v93);
    }
    sub_15F7200(v109);
  }
  if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(v10 + 544)) && !a3 )
  {
    v109[0].m128_i32[2] = 64;
    v109[0].m128_i8[12] = 0;
    v109[0].m128_u64[0] = a5;
    v57 = sub_98E2D0((__int64 *)&v100, (__int64 *)v109);
    if ( v109[0].m128_i32[2] > 0x40u && v109[0].m128_u64[0] )
    {
      v77 = v57;
      operator delete[]((void *)v109[0].m128_u64[0]);
      v57 = v77;
    }
    if ( v57 > 0 )
    {
      v58 = *(unsigned int *)(a6 + 344);
      if ( (_DWORD)v58 )
      {
        v59 = *(_QWORD *)(a6 + 336) + 6776 * v58 - 6776;
        if ( *(_QWORD *)(v59 + 6768) == *(_QWORD *)(a6 + 328) )
        {
          v60 = *(unsigned int *)(v59 + 8);
          v61 = *(unsigned int *)(a6 + 27504);
          if ( (unsigned int)v60 > (unsigned int)v61 )
          {
            v38 = v60 == v61;
            v62 = v60 - v61;
            if ( !v38 && v62 != 1 )
            {
              v63 = *(_QWORD *)v59 + 1688 * (v62 - 2);
              if ( v63 )
              {
                if ( *(_BYTE *)(v63 + 1072) && *(_QWORD *)(v63 + 1056) && sub_1AFA180(a6, (int)a5 + 1) )
                {
                  sub_168B9F0((__int64)v109, (__int64 *)(v10 + 8), a9, 0x1175u, 0);
                  LODWORD(v95) = 1;
                  v64 = sub_1587D10((__int64)v109, (int *)&v95);
                  v65 = sub_1AFA180(a6, (int)a5 + 1);
                  v66 = v65;
                  if ( *(_BYTE *)(v64 + 120) )
                  {
                    sub_AE9DF0((unsigned __int8 **)(v64 + 32), v65, 0xAu);
                  }
                  else if ( *(_BYTE *)(v64 + 132) )
                  {
                    v73 = sub_168B9E0((_QWORD *)v64);
                    v74 = *(_QWORD *)(v64 + 16);
                    if ( v74 )
                      v74 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v74 + 32LL))(*(_QWORD *)(v64 + 16));
                    v96 = v74;
                    v75 = sub_1587BC0(v73, &v96, v69, v70, v71, v72);
                    sub_AE9DF0((unsigned __int8 **)(*v75 + 32LL * *(unsigned int *)(v64 + 128) + 8), v66, 0xAu);
                  }
                  sub_15F7200(v109);
                }
              }
            }
          }
        }
      }
    }
  }
  v32 = v104;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x800000000LL;
  if ( v32 )
    sub_1AC2FD0((void **)a1, (char **)&v103);
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)(a1 + 88) = 0x400000000LL;
  if ( (_DWORD)v107 )
    sub_1AF7EA0((__int64 **)(a1 + 80), (__int64 **)&ptr);
  v33 = v101;
  *(_DWORD *)(a1 + 168) = v101;
  if ( v33 > 0x40 )
  {
    sub_2205510(a1 + 160);
    v51 = v101 <= 0x40;
    *(_BYTE *)(a1 + 172) = v102;
    if ( !v51 && v100 )
      operator delete[](v100);
  }
  else
  {
    *(_QWORD *)(a1 + 160) = v100;
    *(_BYTE *)(a1 + 172) = v102;
  }
  if ( v98 > 0x40 && v97 )
    operator delete[](v97);
  if ( ptr != v108 )
    free(ptr);
  if ( v103 != v105 )
    free(v103);
  return a1;
}
