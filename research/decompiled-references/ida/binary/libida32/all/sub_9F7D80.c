__int64 __fastcall sub_9F7D80(__int64 a1, __int64 *a2, int a3, unsigned __int8 *a4, size_t a5)
{
  __int64 v5; // rbx
  _DWORD *v6; // rax
  unsigned __int64 v9; // rax
  char v10; // dl
  unsigned int v12; // r13d
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _WORD *v16; // rcx
  _WORD *v17; // rdx
  int v18; // edi
  __int64 v19; // r10
  _WORD *v20; // rsi
  unsigned __int16 *v21; // rsi
  int v22; // ecx
  int v23; // ebx
  unsigned __int64 i; // rax
  __int64 v25; // rdx
  unsigned __int16 **v26; // r11
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __m128i *v29; // rdx
  __m128i *v30; // r14
  __m128i *v31; // r13
  __int64 v32; // r14
  __int64 v33; // r15
  unsigned __int16 *v34; // rax
  char v35; // r13
  __int8 v36; // al
  __int8 v37; // al
  __int8 v38; // al
  __int8 v39; // al
  __int8 v40; // dl
  _DWORD *v41; // r13
  __m128i v42; // xmm1
  __m128i *v43; // r12
  __m128i *v44; // rbp
  __m128i *v45; // r13
  unsigned int v46; // eax
  int v47; // r14d
  __int64 v48; // rbp
  int v49; // r15d
  unsigned int v50; // [rsp+0h] [rbp-458h]
  _DWORD *v51; // [rsp+10h] [rbp-448h]
  int v52; // [rsp+24h] [rbp-434h]
  __int64 v53; // [rsp+40h] [rbp-418h]
  __int64 v54; // [rsp+48h] [rbp-410h]
  unsigned __int16 *v55; // [rsp+58h] [rbp-400h] BYREF
  _QWORD v56[2]; // [rsp+60h] [rbp-3F8h] BYREF
  char v57; // [rsp+70h] [rbp-3E8h] BYREF
  char v58; // [rsp+80h] [rbp-3D8h]
  char *v59; // [rsp+88h] [rbp-3D0h]
  __int64 v60; // [rsp+90h] [rbp-3C8h]
  char v61; // [rsp+98h] [rbp-3C0h] BYREF
  __int16 v62; // [rsp+A8h] [rbp-3B0h]
  __int64 v63; // [rsp+B0h] [rbp-3A8h]
  char *v64; // [rsp+B8h] [rbp-3A0h]
  __int64 v65; // [rsp+C0h] [rbp-398h]
  char v66; // [rsp+C8h] [rbp-390h] BYREF
  char *v67; // [rsp+D8h] [rbp-380h]
  __int64 v68; // [rsp+E0h] [rbp-378h]
  char v69; // [rsp+E8h] [rbp-370h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-360h]
  __int64 v71; // [rsp+100h] [rbp-358h]
  __int64 v72; // [rsp+108h] [rbp-350h]
  __m128i v73[7]; // [rsp+110h] [rbp-348h] BYREF
  char v74; // [rsp+180h] [rbp-2D8h]
  char v75; // [rsp+188h] [rbp-2D0h]
  __m128i v76; // [rsp+190h] [rbp-2C8h] BYREF
  _BYTE v77[16]; // [rsp+1A0h] [rbp-2B8h] BYREF
  char v78; // [rsp+1B0h] [rbp-2A8h]
  char *v79; // [rsp+1B8h] [rbp-2A0h]
  __int64 v80; // [rsp+1C0h] [rbp-298h]
  char v81; // [rsp+1C8h] [rbp-290h] BYREF
  char v82; // [rsp+1D8h] [rbp-280h]
  char *v83; // [rsp+1E0h] [rbp-278h]
  __int64 v84; // [rsp+1E8h] [rbp-270h]
  char v85; // [rsp+1F0h] [rbp-268h] BYREF
  char v86; // [rsp+200h] [rbp-258h]
  _BYTE v87[128]; // [rsp+250h] [rbp-208h] BYREF
  __m128i *v88; // [rsp+2D0h] [rbp-188h] BYREF
  __int64 v89; // [rsp+2D8h] [rbp-180h]
  _BYTE v90[376]; // [rsp+2E0h] [rbp-178h] BYREF

  v5 = a1;
  v6 = (_DWORD *)(a1 + 16);
  v51 = (_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 128) )
    goto LABEL_4;
  v9 = sub_9E6AE0(*a2, a4, a5);
  if ( !v10 )
    goto LABEL_3;
  v12 = v9 >> 33;
  v13 = *(_QWORD *)(*a2 + 128);
  v88 = (__m128i *)__PAIR64__(v12, a3);
  v14 = sub_9EA1B0(a3, (int *)&v88 + 1);
  v15 = *(unsigned int *)(*(_QWORD *)(v13 + 8) + 4LL * ((unsigned int)v14 & (*(_DWORD *)v13 - 1)));
  if ( !(_DWORD)v15 )
    goto LABEL_3;
  v16 = (_WORD *)(v15 + *(_QWORD *)(v13 + 16));
  v17 = v16 + 1;
  if ( !*v16 )
    goto LABEL_3;
  v18 = 0;
  while ( 1 )
  {
    v19 = (unsigned __int16)v17[4];
    v20 = v17 + 6;
    if ( v14 == *(_QWORD *)v17 && *((_DWORD *)v17 + 3) == a3 && *((_DWORD *)v17 + 4) == v12 )
      break;
    ++v18;
    v17 = (_WORD *)((char *)v20 + (unsigned int)v19 + (unsigned __int16)v17[5]);
    if ( (unsigned __int16)*v16 == v18 )
      goto LABEL_3;
  }
  v53 = *a2;
  v21 = (_WORD *)((char *)v20 + v19);
  if ( !v21 )
  {
LABEL_3:
    v6 = v51;
LABEL_4:
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + 8) = 0x100000000LL;
    *(_BYTE *)(v5 + 340) = 0;
    return v5;
  }
  v55 = v21;
  v22 = *v21;
  v55 = v21 + 1;
  v52 = v22;
  v88 = (__m128i *)v90;
  v89 = 0x100000000LL;
  if ( (unsigned __int16)v22 > 1uLL )
    sub_9F3700((__int64)&v88, (unsigned __int16)v22);
  if ( v52 )
  {
    v54 = v5;
    v23 = 0;
    for ( i = sub_9E5B00((__int64 *)&v55); ; i = sub_9E5B00((__int64 *)&v55) )
    {
      v58 &= 0xF0u;
      v32 = i;
      v33 = v25;
      v57 = 0;
      v62 &= 0xF000u;
      v56[0] = &v57;
      v56[1] = 0;
      v59 = &v61;
      v64 = &v66;
      v67 = &v69;
      v34 = v55;
      v60 = 0;
      v61 = 0;
      v63 = 0;
      v65 = 0;
      v66 = 0;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v75 = 0;
      v55 = (unsigned __int16 *)((char *)v55 + 1);
      v35 = *(_BYTE *)v34 & 1;
      sub_9EE560(v26, (__int64)v56);
      if ( v35 )
      {
        v78 &= 0xF0u;
        v82 &= 0xF8u;
        v76 = (__m128i)(unsigned __int64)v77;
        v79 = &v81;
        v86 &= 0x80u;
        v77[0] = 0;
        v80 = 0;
        v81 = 0;
        v83 = &v85;
        v84 = 0;
        v85 = 0;
        if ( v75 )
        {
          sub_9E7350((__int64)v73, (__int64)&v76);
        }
        else
        {
          sub_9E6480(v73, &v76);
          v75 = 1;
        }
        v74 = v86 & 0x7F | v74 & 0x80;
        sub_9E5FA0((__int64)&v76);
        sub_9E8490(&v55, (__int64)v73);
      }
      v76.m128i_i64[0] = v32;
      v76.m128i_i64[1] = v33;
      sub_9F0070((__int64)v77, (__int64)v56);
      sub_9F03A0((__int64)v87, (__int64)v73);
      v27 = (unsigned int)v89;
      v28 = (unsigned int)v89 + 1LL;
      if ( v28 > HIDWORD(v89) )
      {
        v45 = v88;
        if ( v88 > &v76 )
        {
          v30 = &v76;
          sub_9F3700((__int64)&v88, v28);
          v29 = v88;
          v27 = (unsigned int)v89;
        }
        else if ( &v76 < &v88[20 * (unsigned int)v89] )
        {
          sub_9F3700((__int64)&v88, v28);
          v29 = v88;
          v27 = (unsigned int)v89;
          v30 = (__m128i *)((char *)v88 + (char *)&v76 - (char *)v45);
        }
        else
        {
          sub_9F3700((__int64)&v88, v28);
          v30 = &v76;
          v29 = v88;
          v27 = (unsigned int)v89;
        }
      }
      else
      {
        v29 = v88;
        v30 = &v76;
      }
      v31 = &v29[20 * v27];
      *v31 = _mm_loadu_si128(v30);
      sub_9E6510((__int64)v31[1].m128i_i64, (__int64)v30[1].m128i_i64);
      v31[19].m128i_i8[8] = 0;
      if ( v30[19].m128i_i8[8] )
      {
        sub_9E6480(v31 + 12, v30 + 12);
        v36 = v30[19].m128i_i8[0] & 1 | v31[19].m128i_i8[0] & 0xFE;
        v31[19].m128i_i8[0] = v36;
        v37 = v30[19].m128i_i8[0] & 2 | v36 & 0xFD;
        v31[19].m128i_i8[0] = v37;
        v38 = v30[19].m128i_i8[0] & 4 | v37 & 0xFB;
        v31[19].m128i_i8[0] = v38;
        v39 = v30[19].m128i_i8[0] & 8 | v38 & 0xF7;
        v31[19].m128i_i8[0] = v39;
        v40 = v30[19].m128i_i8[0];
        v31[19].m128i_i8[8] = 1;
        v31[19].m128i_i8[0] = v40 & 0x70 | v39 & 0x8F;
      }
      LODWORD(v89) = v89 + 1;
      if ( v87[120] )
        sub_9E5FA0((__int64)v87);
      sub_9E5FF0((__int64)v77);
      if ( v75 )
        sub_9E5FA0((__int64)v73);
      ++v23;
      sub_9E5FF0((__int64)v56);
      if ( v52 == v23 )
        break;
    }
    v5 = v54;
  }
  v41 = v51;
  v42 = _mm_loadu_si128((const __m128i *)(v53 + 8));
  *(_QWORD *)v5 = v51;
  *(_QWORD *)(v5 + 8) = 0x100000000LL;
  v76 = v42;
  v50 = v89;
  if ( (_DWORD)v89 )
  {
    sub_9F7940(v5, (__int64)&v88);
    v46 = v89;
    v47 = *(_DWORD *)(v5 + 8);
    *(_BYTE *)(v5 + 340) = 0;
    v50 = v46;
    if ( v47 )
    {
      v41 = *(_DWORD **)v5;
      if ( (v76.m128i_i32[2] | v76.m128i_i32[1]) & 0x7FFFFFFF | v76.m128i_i32[0] | v76.m128i_i32[3] & 0x7FFFFFFF )
      {
        v48 = 0;
        v49 = 0;
        while ( (unsigned __int8)sub_9E60E0(&v41[v48], (unsigned int *)&v76) )
        {
          ++v49;
          v48 += 80;
          if ( v49 == v47 )
            goto LABEL_36;
        }
        *(_DWORD *)(v5 + 336) = v49;
        *(_BYTE *)(v5 + 340) = 1;
        goto LABEL_41;
      }
    }
    else
    {
      v41 = *(_DWORD **)v5;
    }
  }
  else
  {
    *(_BYTE *)(v5 + 340) = 0;
  }
LABEL_36:
  if ( !*v41 && (v41[1] & 0x7FFFFFFF) == 0 && (v41[2] & 0x7FFFFFFF) == 0 && (v41[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(v5 + 336) = 0;
    *(_BYTE *)(v5 + 340) = 1;
  }
LABEL_41:
  v43 = v88;
  v44 = &v88[20 * v50];
  if ( v88 != v44 )
  {
    do
    {
      while ( 1 )
      {
        v44 -= 20;
        if ( v44[19].m128i_i8[8] )
          break;
        sub_9E5FF0((__int64)v44[1].m128i_i64);
        if ( v43 == v44 )
          goto LABEL_44;
      }
      sub_9E5FA0((__int64)v44[12].m128i_i64);
      sub_9E5FF0((__int64)v44[1].m128i_i64);
    }
    while ( v43 != v44 );
LABEL_44:
    v44 = v88;
  }
  if ( v44 != (__m128i *)v90 )
    free(v44);
  return v5;
}

