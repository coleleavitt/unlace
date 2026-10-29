__int64 __fastcall sub_19ACF90(__int64 a1, unsigned __int64 a2, unsigned __int8 a3, unsigned int **a4, double a5)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  char *v14; // rsi
  char v15; // al
  __int64 v16; // r12
  __int64 v17; // r12
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned int v24; // edx
  char *v25; // r13
  int i; // r12d
  unsigned __int8 v27; // dl
  int v28; // eax
  size_t v29; // r14
  unsigned int v30; // r12d
  char *v31; // r14
  char *v32; // rbp
  _BYTE *j; // rax
  __int64 v34; // rsi
  unsigned int v35; // ecx
  __int64 v36; // rdi
  __int64 *v37; // rbp
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // r13
  _QWORD *v42; // r14
  _QWORD *v43; // rdi
  _QWORD *v44; // r15
  _QWORD *v45; // rbp
  char *v46; // rdi
  unsigned __int64 v48; // rdi
  unsigned int *v49; // r13
  unsigned int v50; // eax
  __int64 *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rbp
  size_t v54; // r14
  char *v55; // [rsp+8h] [rbp-2100h]
  unsigned int v56; // [rsp+8h] [rbp-2100h]
  int v57; // [rsp+8h] [rbp-2100h]
  int v58; // [rsp+8h] [rbp-2100h]
  int v60; // [rsp+10h] [rbp-20F8h]
  int v61; // [rsp+10h] [rbp-20F8h]
  __int64 *v64; // [rsp+48h] [rbp-20C0h] BYREF
  unsigned __int64 v65; // [rsp+50h] [rbp-20B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-20B0h] BYREF
  _BYTE *v67; // [rsp+60h] [rbp-20A8h] BYREF
  unsigned __int64 v68; // [rsp+68h] [rbp-20A0h]
  void *v69; // [rsp+80h] [rbp-2088h] BYREF
  __int64 v70; // [rsp+88h] [rbp-2080h]
  _BYTE v71[64]; // [rsp+90h] [rbp-2078h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-2038h] BYREF
  unsigned __int64 v73; // [rsp+D8h] [rbp-2030h] BYREF
  unsigned __int64 v74; // [rsp+E0h] [rbp-2028h]
  __int64 v75; // [rsp+160h] [rbp-1FA8h] BYREF
  char *v76; // [rsp+168h] [rbp-1FA0h]
  __int64 v77; // [rsp+170h] [rbp-1F98h]
  char v78; // [rsp+178h] [rbp-1F90h] BYREF
  __int128 v79; // [rsp+1B8h] [rbp-1F50h]
  __int64 v80; // [rsp+1C8h] [rbp-1F40h]
  __int64 v81; // [rsp+1D0h] [rbp-1F38h]
  unsigned __int64 v82; // [rsp+1D8h] [rbp-1F30h]
  unsigned int v83; // [rsp+1E0h] [rbp-1F28h]
  __int64 v84; // [rsp+1E8h] [rbp-1F20h] BYREF
  __int128 v85; // [rsp+1F0h] [rbp-1F18h]
  __int64 v86; // [rsp+200h] [rbp-1F08h]
  _BYTE *v87; // [rsp+210h] [rbp-1EF8h] BYREF
  __int64 v88; // [rsp+218h] [rbp-1EF0h]
  _BYTE v89[2688]; // [rsp+220h] [rbp-1EE8h] BYREF
  void *v90; // [rsp+CA0h] [rbp-1468h]
  __int64 v91; // [rsp+CA8h] [rbp-1460h]
  int v92; // [rsp+CB0h] [rbp-1458h]
  char v93; // [rsp+CB4h] [rbp-1454h]
  _QWORD v94[17]; // [rsp+CB8h] [rbp-1450h] BYREF
  int v95; // [rsp+D40h] [rbp-13C8h]
  __int64 v96; // [rsp+D48h] [rbp-13C0h]
  __int64 v97; // [rsp+D50h] [rbp-13B8h]
  void *ptr; // [rsp+D58h] [rbp-13B0h]
  __int64 v99; // [rsp+D60h] [rbp-13A8h]
  _BYTE v100[32]; // [rsp+D68h] [rbp-13A0h] BYREF
  __int64 *v101; // [rsp+D88h] [rbp-1380h]
  __int64 v102; // [rsp+D90h] [rbp-1378h]
  _QWORD v103[2]; // [rsp+D98h] [rbp-1370h] BYREF
  unsigned int v104; // [rsp+DA8h] [rbp-1360h]
  int v105; // [rsp+DACh] [rbp-135Ch]
  __int64 v106; // [rsp+DB0h] [rbp-1358h]
  char v107; // [rsp+DB8h] [rbp-1350h]
  int v108; // [rsp+DBCh] [rbp-134Ch]
  int v109; // [rsp+20C0h] [rbp-48h]

  v6 = (*(_QWORD *)(a1 + 248) + (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFF0LL) + 17624) | 6;
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 24);
  }
  else if ( *(char *)(a2 + 2) >= 0
         || (v7 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a5)) == 0 )
  {
    v7 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a5);
    if ( !v7 )
    {
      if ( *(_DWORD *)(a2 + 16) )
      {
        v48 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( v48 )
          v7 = sub_EEB7E0(v48, a2, a5);
      }
    }
  }
  v76 = &v78;
  v79 = 0;
  v82 = v6;
  v83 = v7;
  v75 = 0;
  v77 = 0x800000000LL;
  v80 = 0;
  v81 = a1;
  sub_B85890(&v84, v6);
  v85 = 0;
  v86 = 0x101010000LL;
  sub_1A395A0(&v75);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v13 = sub_704780((__int64 *)(v8 + 72), v8, v9, v10, v11, v12);
  if ( v13 )
    v13 += 5;
  sub_1A48440(a1, &v75, v13, 0);
  v14 = v71;
  *(_WORD *)((char *)&v86 + 3) = 0;
  v15 = *(_BYTE *)(a2 + 2);
  v16 = *(unsigned int *)(a2 + 16);
  v69 = v71;
  v70 = 0x800000000LL;
  v17 = 8 * v16;
  v18 = (_QWORD *)(a2 + 8 * (((v15 & 8) != 0) + 1LL) + 32);
  v19 = v17 >> 3;
  v20 = v17 >> 3;
  if ( v17 > 64 )
  {
    sub_2237220(&v69, v71, v17 >> 3, 8);
    v19 = v17 >> 3;
    v14 = (char *)v69 + 8 * (unsigned int)v70;
    LODWORD(v20) = (v17 >> 3) + v70;
  }
  if ( v17 )
  {
    v21 = 1;
    if ( v17 > 0 )
      v21 = v19;
    if ( v17 <= 8 )
      goto LABEL_14;
    v22 = 0;
    do
    {
      *(__m128i *)&v14[v22 * 8] = _mm_loadu_si128((const __m128i *)&v18[v22]);
      v22 += 2;
    }
    while ( v22 != 2 * (v21 >> 1) );
    v23 = 8 * (v21 & 0xFFFFFFFFFFFFFFFELL);
    v18 = (_QWORD *)((char *)v18 + v23);
    v14 += v23;
    if ( v21 != (v21 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_14:
      *(_QWORD *)v14 = *v18;
  }
  v24 = v83;
  LODWORD(v70) = v20;
  v93 = 1;
  v87 = v89;
  v88 = 0x1000000000LL;
  v90 = v94;
  ptr = v100;
  v99 = 0x400000000LL;
  v101 = v103;
  v91 = 16;
  v92 = 0;
  v94[16] = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v102 = 0;
  v103[0] = 0;
  v103[1] = 1;
  v104 = v83;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v55 = &v76[8 * (unsigned int)v77];
  if ( v76 != v55 )
  {
    v25 = v76;
    for ( i = v20; ; i = v70 )
    {
      v14 = (char *)(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFF8LL);
      v27 = v14[28] & 0x7F;
      if ( (unsigned int)v27 - 53 <= 1 || ((v27 + 52) & 0x7Fu) <= 1 )
      {
        v14 = (char *)sub_B72ED0(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFF8LL);
        v27 = v14[28] & 0x7F;
      }
      if ( v27 == 71 )
      {
        v25 += 8;
        sub_1BF2330(a1, (_DWORD)v14, *((_QWORD *)v25 - 1), 0, (_DWORD)v69, i, (__int64)&v87, 0, 0, 1, 0, 0, 0);
        if ( v55 == v25 )
          goto LABEL_24;
      }
      else
      {
        v25 += 8;
        sub_1BF10B0(
          a1,
          (_DWORD)v14,
          *((_QWORD *)v25 - 1),
          (_DWORD)v69,
          i,
          (unsigned int)&v87,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          0,
          0,
          0);
        if ( v55 == v25 )
        {
LABEL_24:
          v24 = v83;
          break;
        }
      }
    }
  }
  v56 = v24;
  v66 = sub_EEC8C0(a2, (__int64)v14, 0.0);
  v28 = sub_1BF27B0(&v87, a1, v56, &v64);
  switch ( v28 )
  {
    case 1:
      v54 = j__strlen(&byte_22F0C30);
      v61 = (int)v69;
      v58 = v70;
      sub_168B9B0((__int64)&v67, a1 + 8, 4762);
      sub_AE9DF0(&v67, v82, 9u);
      LOBYTE(v73) = 1;
      v72 = v66;
      sub_AEC610((__int64 *)&v67, &v72);
      LODWORD(v72) = v83;
      sub_1582CA0((__int64)&v73, &v67);
      sub_1C022A0(
        (unsigned int)&v87,
        (unsigned int)&v72,
        a1,
        0,
        v61,
        v58,
        (__int64)&byte_22F0C30,
        v54,
        0,
        (__int64)sub_16A7620,
        (__int64)&v65);
      break;
    case 0:
      v49 = (unsigned int *)*v64;
      LOBYTE(v50) = sub_B74C70(*v64);
      v30 = v50;
      if ( (_BYTE)v50 || !sub_B760E0((__int64)v49, nullptr, nullptr) )
      {
        v51 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)&v72, v51, v83, 0xD24u, 0);
        LODWORD(v67) = a3;
        v52 = sub_1587D10((__int64)&v72, (int *)&v67);
        sub_15884C0(v52, &v66);
        sub_15F7200(&v72);
        sub_168B9F0((__int64)&v72, v51, v49[6], 0x17EEu, 0);
        v65 = v82;
        v53 = sub_15894B0((__int64)&v72, (__int64 *)&v65);
        v67 = (_BYTE *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v49 + 16LL))(v49);
        sub_1587DB0(v53, (__int64 *)&v67);
        v30 = 1;
        sub_15F7200(&v72);
      }
      else
      {
        *a4 = v49;
      }
      goto LABEL_37;
    case 2:
      v29 = j__strlen(&byte_22F0C30);
      v60 = (int)v69;
      v57 = v70;
      sub_168B9B0((__int64)&v67, a1 + 8, 4742);
      sub_AE9DF0(&v67, v82, 9u);
      LOBYTE(v73) = 1;
      v72 = v66;
      sub_AEC610((__int64 *)&v67, &v72);
      LODWORD(v72) = v83;
      sub_1582CA0((__int64)&v73, &v67);
      sub_1C022A0(
        (unsigned int)&v87,
        (unsigned int)&v72,
        a1,
        2,
        v60,
        v57,
        (__int64)&byte_22F0C30,
        v29,
        0,
        (__int64)sub_16A7620,
        (__int64)&v65);
      break;
    default:
      v30 = 1;
      sub_1C026E0(a1, v83, v66, v82, (unsigned int)&v87, *v64, (__int64)v69, (unsigned int)v70, 0);
      goto LABEL_37;
  }
  if ( v73 && v74 )
    sub_1580C40(v74, v73);
  if ( v67 && v68 )
    sub_1580C40(v68, (unsigned __int64)v67);
  v30 = 1;
LABEL_37:
  sub_1BD27A0(&v87);
  v31 = (char *)ptr;
  v32 = (char *)ptr + 8 * (unsigned int)v99;
  if ( ptr != v32 )
  {
    for ( j = ptr; ; j = ptr )
    {
      v34 = 0x40000000000LL;
      v35 = (unsigned int)((v31 - j) >> 3) >> 7;
      if ( v35 <= 0x1D )
        v34 = 4096LL << v35;
      v36 = *(_QWORD *)v31;
      v31 += 8;
      operator delete(v36, v34, 16);
      if ( v32 == v31 )
        break;
    }
  }
  v37 = v101;
  v38 = &v101[2 * (unsigned int)v102];
  if ( v101 != v38 )
  {
    do
    {
      v39 = v37[1];
      v40 = *v37;
      v37 += 2;
      operator delete(v40, v39, 16);
    }
    while ( v38 != v37 );
    v38 = v101;
  }
  if ( v38 != v103 )
    free(v38);
  if ( ptr != v100 )
    free(ptr);
  if ( !v93 )
    free(v90);
  v41 = v87;
  v42 = &v87[168 * (unsigned int)v88];
  if ( v87 != (_BYTE *)v42 )
  {
    do
    {
      while ( 1 )
      {
        v42 -= 21;
        v43 = (_QWORD *)v42[8];
        v44 = (_QWORD *)v42[9];
        v45 = v43;
        if ( v44 != v43 )
        {
          do
          {
            while ( 1 )
            {
              v46 = (char *)v45[3];
              if ( v46 == (char *)(v45 + 5) )
                break;
              operator delete(v46);
              v45 += 8;
              if ( v44 == v45 )
                goto LABEL_56;
            }
            v45 += 8;
          }
          while ( v44 != v45 );
LABEL_56:
          v43 = (_QWORD *)v42[8];
        }
        if ( !v43 )
          break;
        operator delete(v43);
        if ( v41 == v42 )
          goto LABEL_59;
      }
    }
    while ( v41 != v42 );
LABEL_59:
    v42 = v87;
  }
  if ( v42 != (_QWORD *)v89 )
    free(v42);
  if ( v69 != v71 )
    free(v69);
  sub_169D230((__int64)&v75);
  return v30;
}
