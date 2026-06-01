__int64 __fastcall sub_9FA4D0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  _DWORD *v10; // r15
  int v12; // r14d
  __int8 v13; // bp
  unsigned __int64 v14; // rax
  char v15; // dl
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _WORD *v20; // rcx
  _WORD *v21; // rdx
  int v22; // edi
  _WORD *v23; // rsi
  __int64 v24; // r9
  unsigned __int16 *v25; // rsi
  int v26; // ecx
  int v27; // ebx
  unsigned __int64 i; // rax
  __int64 v29; // rdx
  unsigned __int16 **v30; // r10
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  __m128i *v34; // r14
  __int64 v35; // r13
  char v36; // al
  __int8 v37; // dl
  __int64 v38; // r13
  __int64 v39; // r14
  unsigned __int16 *v40; // rdx
  char v41; // r15
  char v42; // al
  char v43; // al
  char v44; // al
  char v45; // al
  __int8 v46; // dl
  __m128i v47; // xmm1
  __int64 v48; // r12
  __m128i *v49; // rbp
  __int64 v50; // r13
  unsigned int v51; // eax
  int v52; // r13d
  __int64 v53; // rbp
  int v54; // r14d
  int v55; // [rsp+0h] [rbp-498h]
  unsigned int v56; // [rsp+0h] [rbp-498h]
  int v57; // [rsp+1Ch] [rbp-47Ch]
  __int64 v58; // [rsp+38h] [rbp-460h]
  _DWORD *v59; // [rsp+40h] [rbp-458h]
  __int64 v60; // [rsp+48h] [rbp-450h]
  unsigned __int16 *v61; // [rsp+58h] [rbp-440h] BYREF
  __int8 v62[4]; // [rsp+64h] [rbp-434h] BYREF
  int v63[2]; // [rsp+68h] [rbp-430h] BYREF
  _QWORD v64[2]; // [rsp+70h] [rbp-428h] BYREF
  char v65; // [rsp+80h] [rbp-418h] BYREF
  char v66; // [rsp+90h] [rbp-408h]
  char *v67; // [rsp+98h] [rbp-400h]
  __int64 v68; // [rsp+A0h] [rbp-3F8h]
  char v69; // [rsp+A8h] [rbp-3F0h] BYREF
  __int16 v70; // [rsp+B8h] [rbp-3E0h]
  __int64 v71; // [rsp+C0h] [rbp-3D8h]
  char *v72; // [rsp+C8h] [rbp-3D0h]
  __int64 v73; // [rsp+D0h] [rbp-3C8h]
  char v74; // [rsp+D8h] [rbp-3C0h] BYREF
  char *v75; // [rsp+E8h] [rbp-3B0h]
  __int64 v76; // [rsp+F0h] [rbp-3A8h]
  char v77; // [rsp+F8h] [rbp-3A0h] BYREF
  __int64 v78; // [rsp+108h] [rbp-390h]
  __int64 v79; // [rsp+110h] [rbp-388h]
  __int64 v80; // [rsp+118h] [rbp-380h]
  char v81; // [rsp+120h] [rbp-378h]
  __m128i v82[7]; // [rsp+128h] [rbp-370h] BYREF
  char v83; // [rsp+198h] [rbp-300h]
  char v84; // [rsp+1A0h] [rbp-2F8h]
  __m128i v85; // [rsp+1B0h] [rbp-2E8h] BYREF
  _BYTE v86[16]; // [rsp+1C0h] [rbp-2D8h] BYREF
  char v87; // [rsp+1D0h] [rbp-2C8h]
  char *v88; // [rsp+1D8h] [rbp-2C0h]
  __int64 v89; // [rsp+1E0h] [rbp-2B8h]
  char v90; // [rsp+1E8h] [rbp-2B0h] BYREF
  char v91; // [rsp+1F8h] [rbp-2A0h]
  char *v92; // [rsp+200h] [rbp-298h]
  __int64 v93; // [rsp+208h] [rbp-290h]
  char v94; // [rsp+210h] [rbp-288h] BYREF
  char v95; // [rsp+220h] [rbp-278h]
  char v96; // [rsp+270h] [rbp-228h]
  _BYTE v97[136]; // [rsp+278h] [rbp-220h] BYREF
  __m128i *v98; // [rsp+300h] [rbp-198h] BYREF
  __int64 v99; // [rsp+308h] [rbp-190h]
  _BYTE v100[392]; // [rsp+310h] [rbp-188h] BYREF

  v9 = a1;
  v10 = (_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 120) )
    goto LABEL_3;
  v12 = a3;
  v13 = a4;
  v14 = sub_9EEBC0(*a2, (__int64)a2, a3, a4, a5, a6, a7, a8, a9);
  if ( !v15 )
    goto LABEL_3;
  v55 = v14 >> 33;
  v17 = *(_QWORD *)(*a2 + 120);
  v62[0] = v13;
  v63[0] = v55;
  v63[1] = v12;
  v18 = sub_9E96C0(v12, v63, v62);
  v19 = *(unsigned int *)(*(_QWORD *)(v17 + 8) + 4LL * ((unsigned int)v18 & (*(_DWORD *)v17 - 1)));
  if ( !(_DWORD)v19 )
    goto LABEL_3;
  v20 = (_WORD *)(v19 + *(_QWORD *)(v17 + 16));
  v21 = v20 + 1;
  if ( !*v20 )
    goto LABEL_3;
  v22 = 0;
  while ( 1 )
  {
    v23 = v21 + 6;
    v24 = (unsigned __int16)v21[4];
    if ( v18 == *(_QWORD *)v21
      && v12 == *((_DWORD *)v21 + 3)
      && v55 == *((_DWORD *)v21 + 4)
      && v13 == *((_BYTE *)v21 + 20) )
    {
      break;
    }
    ++v22;
    v21 = (_WORD *)((char *)v23 + (unsigned int)v24 + (unsigned __int16)v21[5]);
    if ( (unsigned __int16)*v20 == v22 )
      goto LABEL_3;
  }
  v58 = *a2;
  v25 = (_WORD *)((char *)v23 + v24);
  if ( !v25 )
  {
LABEL_3:
    *(_QWORD *)v9 = v10;
    *(_QWORD *)(v9 + 8) = 0x100000000LL;
    *(_BYTE *)(v9 + 348) = 0;
    return v9;
  }
  v61 = v25;
  v26 = *v25;
  v61 = v25 + 1;
  v57 = v26;
  v98 = (__m128i *)v100;
  v99 = 0x100000000LL;
  if ( (unsigned __int16)v26 > 1uLL )
    sub_9F2580((__int64)&v98, (unsigned __int16)v26);
  if ( v57 )
  {
    v60 = v9;
    v27 = 0;
    v59 = v10;
    for ( i = sub_9E5B00((__int64 *)&v61); ; i = sub_9E5B00((__int64 *)&v61) )
    {
      v66 &= 0xF0u;
      v38 = i;
      v39 = v29;
      v40 = v61;
      v65 = 0;
      v64[0] = &v65;
      v70 &= 0xF000u;
      v67 = &v69;
      v72 = &v74;
      v75 = &v77;
      v61 = (unsigned __int16 *)((char *)v61 + 1);
      v69 = 0;
      v81 &= 0xFCu;
      v64[1] = 0;
      v68 = 0;
      v71 = 0;
      v73 = 0;
      v74 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v84 = 0;
      v41 = *(_BYTE *)v40;
      v81 |= ((*(_BYTE *)v40 & 4) != 0) | *(_BYTE *)v40 & 2;
      sub_9EE560(v30, (__int64)v64);
      if ( (v41 & 1) != 0 )
      {
        v87 &= 0xF0u;
        v91 &= 0xF8u;
        v85 = (__m128i)(unsigned __int64)v86;
        v88 = &v90;
        v95 &= 0x80u;
        v86[0] = 0;
        v89 = 0;
        v90 = 0;
        v92 = &v94;
        v93 = 0;
        v94 = 0;
        if ( v84 )
        {
          sub_9E7350((__int64)v82, (__int64)&v85);
        }
        else
        {
          sub_9E6480(v82, &v85);
          v84 = 1;
        }
        v83 = v95 & 0x7F | v83 & 0x80;
        sub_9E5FA0((__int64)&v85);
        sub_9E8490(&v61, (__int64)v82);
      }
      v85.m128i_i64[0] = v38;
      v85.m128i_i64[1] = v39;
      sub_9F0070((__int64)v86, (__int64)v64);
      v96 = v81 & 3 | v96 & 0xFC;
      sub_9F03A0((__int64)v97, (__int64)v82);
      v31 = (unsigned int)v99;
      v32 = (unsigned int)v99 + 1LL;
      if ( v32 > HIDWORD(v99) )
      {
        v50 = (__int64)v98;
        if ( v98 > &v85 || &v85 >= (__m128i *)((char *)v98 + 328 * (unsigned int)v99) )
        {
          sub_9F2580((__int64)&v98, v32);
          v34 = &v85;
          v33 = (__int64)v98;
          v31 = (unsigned int)v99;
        }
        else
        {
          sub_9F2580((__int64)&v98, v32);
          v33 = (__int64)v98;
          v31 = (unsigned int)v99;
          v34 = (__m128i *)((char *)&v85 + (_QWORD)v98 - v50);
        }
      }
      else
      {
        v33 = (__int64)v98;
        v34 = &v85;
      }
      v35 = v33 + 328 * v31;
      *(__m128i *)v35 = _mm_loadu_si128(v34);
      sub_9E6510(v35 + 16, (__int64)v34[1].m128i_i64);
      v36 = v34[12].m128i_i8[0] & 1 | *(_BYTE *)(v35 + 192) & 0xFE;
      *(_BYTE *)(v35 + 192) = v36;
      v37 = v34[12].m128i_i8[0];
      *(_BYTE *)(v35 + 320) = 0;
      *(_BYTE *)(v35 + 192) = v37 & 2 | v36 & 0xFD;
      if ( v34[20].m128i_i8[0] )
      {
        sub_9E6480((__m128i *)(v35 + 200), (__m128i *)((char *)v34 + 200));
        v42 = v34[19].m128i_i8[8] & 1 | *(_BYTE *)(v35 + 312) & 0xFE;
        *(_BYTE *)(v35 + 312) = v42;
        v43 = v34[19].m128i_i8[8] & 2 | v42 & 0xFD;
        *(_BYTE *)(v35 + 312) = v43;
        v44 = v34[19].m128i_i8[8] & 4 | v43 & 0xFB;
        *(_BYTE *)(v35 + 312) = v44;
        v45 = v34[19].m128i_i8[8] & 8 | v44 & 0xF7;
        *(_BYTE *)(v35 + 312) = v45;
        v46 = v34[19].m128i_i8[8];
        *(_BYTE *)(v35 + 320) = 1;
        *(_BYTE *)(v35 + 312) = v46 & 0x70 | v45 & 0x8F;
      }
      LODWORD(v99) = v99 + 1;
      if ( v97[120] )
        sub_9E5FA0((__int64)v97);
      sub_9E5FF0((__int64)v86);
      if ( v84 )
        sub_9E5FA0((__int64)v82);
      ++v27;
      sub_9E5FF0((__int64)v64);
      if ( v57 == v27 )
        break;
    }
    v10 = v59;
    v9 = v60;
  }
  v47 = _mm_loadu_si128((const __m128i *)(v58 + 8));
  *(_QWORD *)v9 = v10;
  *(_QWORD *)(v9 + 8) = 0x100000000LL;
  v85 = v47;
  v56 = v99;
  if ( (_DWORD)v99 )
  {
    sub_9F9CF0(v9, (__int64 *)&v98);
    v51 = v99;
    v52 = *(_DWORD *)(v9 + 8);
    *(_BYTE *)(v9 + 348) = 0;
    v56 = v51;
    if ( v52 )
    {
      v10 = *(_DWORD **)v9;
      if ( (v85.m128i_i32[2] | v85.m128i_i32[1]) & 0x7FFFFFFF | v85.m128i_i32[0] | v85.m128i_i32[3] & 0x7FFFFFFF )
      {
        v53 = 0;
        v54 = 0;
        while ( (unsigned __int8)sub_9E60E0(&v10[v53], (unsigned int *)&v85) )
        {
          ++v54;
          v53 += 82;
          if ( v52 == v54 )
            goto LABEL_36;
        }
        *(_DWORD *)(v9 + 344) = v54;
        *(_BYTE *)(v9 + 348) = 1;
        goto LABEL_41;
      }
    }
    else
    {
      v10 = *(_DWORD **)v9;
    }
  }
  else
  {
    *(_BYTE *)(v9 + 348) = 0;
  }
LABEL_36:
  if ( !*v10 && (v10[1] & 0x7FFFFFFF) == 0 && (v10[2] & 0x7FFFFFFF) == 0 && (v10[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(v9 + 344) = 0;
    *(_BYTE *)(v9 + 348) = 1;
  }
LABEL_41:
  v48 = (__int64)v98;
  v49 = (__m128i *)((char *)v98 + 328 * v56);
  if ( v98 != v49 )
  {
    do
    {
      while ( 1 )
      {
        v49 = (__m128i *)((char *)v49 - 328);
        if ( v49[20].m128i_i8[0] )
          break;
        sub_9E5FF0((__int64)v49[1].m128i_i64);
        if ( (__m128i *)v48 == v49 )
          goto LABEL_44;
      }
      sub_9E5FA0((__int64)&v49[12].m128i_i64[1]);
      sub_9E5FF0((__int64)v49[1].m128i_i64);
    }
    while ( (__m128i *)v48 != v49 );
LABEL_44:
    v49 = v98;
  }
  if ( v49 != (__m128i *)v100 )
    free(v49);
  return v9;
}

