__int64 __fastcall sub_8B15E0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v5; // r12
  __int64 v7; // rax
  int *v8; // r14
  __int64 i; // rbp
  int *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned int v16; // eax
  _QWORD *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rsi
  __int64 v26; // rbp
  int *v27; // rsi
  __int64 v28; // rbp
  unsigned __int64 *v29; // r12
  unsigned int v30; // r15d
  __int64 *v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r15
  int *v44; // rsi
  int v45; // edx
  __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v53; // [rsp+0h] [rbp-218h]
  unsigned int v54; // [rsp+0h] [rbp-218h]
  __int64 v55; // [rsp+0h] [rbp-218h]
  unsigned int v56; // [rsp+8h] [rbp-210h]
  __int64 v59; // [rsp+10h] [rbp-208h]
  __int64 v60; // [rsp+10h] [rbp-208h]
  unsigned int v61; // [rsp+18h] [rbp-200h]
  __int64 v62; // [rsp+18h] [rbp-200h]
  unsigned int v63; // [rsp+18h] [rbp-200h]
  unsigned int v64; // [rsp+18h] [rbp-200h]
  unsigned int v66; // [rsp+20h] [rbp-1F8h]
  __int64 *v67; // [rsp+28h] [rbp-1F0h]
  unsigned int v68; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 *v69; // [rsp+48h] [rbp-1D0h]
  __int64 v70; // [rsp+50h] [rbp-1C8h]
  _QWORD v71[2]; // [rsp+58h] [rbp-1C0h] BYREF
  _QWORD v72[3]; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v73; // [rsp+80h] [rbp-198h]
  _QWORD v74[2]; // [rsp+88h] [rbp-190h] BYREF
  _QWORD v75[3]; // [rsp+98h] [rbp-180h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-168h]
  _QWORD v77[2]; // [rsp+B8h] [rbp-160h] BYREF
  _QWORD v78[3]; // [rsp+C8h] [rbp-150h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-138h]
  _QWORD v80[2]; // [rsp+E8h] [rbp-130h] BYREF
  _QWORD v81[3]; // [rsp+F8h] [rbp-120h] BYREF
  __int64 v82; // [rsp+110h] [rbp-108h]
  _QWORD v83[2]; // [rsp+118h] [rbp-100h] BYREF
  _QWORD v84[3]; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v85; // [rsp+140h] [rbp-D8h] BYREF
  _QWORD v86[2]; // [rsp+148h] [rbp-D0h] BYREF
  _QWORD v87[2]; // [rsp+158h] [rbp-C0h] BYREF
  _QWORD v88[2]; // [rsp+168h] [rbp-B0h] BYREF
  _QWORD v89[3]; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v90; // [rsp+190h] [rbp-88h] BYREF
  _QWORD v91[2]; // [rsp+198h] [rbp-80h] BYREF
  _QWORD v92[2]; // [rsp+1A8h] [rbp-70h] BYREF
  _QWORD v93[2]; // [rsp+1B8h] [rbp-60h] BYREF
  _QWORD v94[10]; // [rsp+1C8h] [rbp-50h] BYREF

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 1640);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v67 = (__int64 *)(a1 + 1472);
  v56 = sub_48E8C0(a1 + 1472);
  if ( (_DWORD)v5 )
  {
    v8 = a5;
    for ( i = 0; i != v5; ++i )
    {
      while ( !*v8 )
      {
LABEL_9:
        ++i;
        v8 += 8;
        if ( i == v5 )
          goto LABEL_18;
      }
      v11 = *(unsigned int *)(a4 + 4 * i);
      v12 = *(_DWORD *)(a4 + 4 * i);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1592) + 232 * v11 + 3) & 0x20) == 0 )
        goto LABEL_12;
      v21 = *(_QWORD *)(a1 + 1640);
      if ( !v21 || (v22 = *(unsigned int *)(v21 - 4), (_DWORD)v22 == *(_DWORD *)(v21 - 8)) )
      {
        v64 = *(_DWORD *)(a4 + 4 * i);
        sub_2FD3F0((unsigned int **)(a1 + 1640));
        v21 = *(_QWORD *)(a1 + 1640);
        v12 = v64;
        v11 = v64;
        v22 = *(unsigned int *)(v21 - 4);
      }
      *(_DWORD *)(v21 + 4 * v22) = i;
      ++*(_DWORD *)(v21 - 4);
      if ( *v8 )
      {
LABEL_12:
        v19 = *(_QWORD *)(a1 + 1480) + 16LL * v56;
        v13 = *(_DWORD *)(v19 + 12);
        v20 = *(_QWORD *)(a1 + 1496);
        ++*(_DWORD *)(v19 + 8);
        if ( v13 == -1 )
        {
          v61 = v12;
          v53 = v11;
          v10 = sub_893240((int **)v19, &v85);
          v11 = v53;
          v12 = v61;
          v13 = v85;
          v14 = (__int64)v10;
        }
        else
        {
          LODWORD(v85) = v13;
          v14 = *(_QWORD *)v19 + 40LL * v13;
          *(_DWORD *)(v19 + 12) = *(_DWORD *)(v14 + 36);
        }
        v15 = v20 + 24 * v11;
        v16 = *(_DWORD *)(v15 + 12);
        ++*(_DWORD *)(v15 + 8);
        if ( v16 == -1 )
        {
          v62 = v14;
          v54 = v12;
          v17 = sub_892F70((_QWORD *)v15, &v90);
          v12 = v54;
          v14 = v62;
          v18 = (__int64)v17;
          v16 = v90;
        }
        else
        {
          v18 = *(_QWORD *)v15 + 8LL * v16;
          *(_DWORD *)(v15 + 12) = *(_DWORD *)(v18 + 4);
        }
        *(_DWORD *)(v14 + 32) = v12;
        v63 = v16;
        v55 = v14;
        sub_8ADE80(*(_QWORD *)(a1 + 1472), v14, v8);
        *(_DWORD *)(v55 + 36) = v63;
        *(_QWORD *)v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v56), _mm_cvtsi32_si128(v13)).m128i_u64[0];
        goto LABEL_9;
      }
      v8 += 8;
    }
  }
LABEL_18:
  v74[0] = 0;
  v70 = a1 + 8;
  v73 = a1 + 8;
  v74[1] = 0;
  v75[0] = 1;
  v75[1] = 0;
  v76 = a1 + 8;
  v77[0] = 0;
  v77[1] = 0;
  v78[0] = 1;
  v78[1] = 0;
  v79 = a1 + 8;
  v80[0] = 0;
  v80[1] = 0;
  v81[0] = 1;
  v81[1] = 0;
  v71[0] = 1;
  v71[1] = 0;
  v72[0] = 1;
  v72[1] = 0;
  sub_182EF00(a1 + 8, v72);
  v23 = *(_QWORD *)(a1 + 1640);
  BYTE4(v72[0]) &= ~1u;
  v24 = 0;
  for ( LODWORD(v72[0]) = 1; v23; ++v24 )
  {
    if ( v24 >= *(_DWORD *)(v23 - 4) )
      break;
    v25 = *(unsigned int *)(v23 + 4LL * v24);
    v26 = *(unsigned int *)(a4 + 4 * v25);
    v27 = &a5[8 * v25];
    if ( (v27[5] & 1) != 0 || v27[4] != 1 || (v72[0] & 0x100000000LL) != 0 || LODWORD(v72[0]) != 1 )
    {
      sub_184C880(a1 + 8, v27, v71, v74);
    }
    else
    {
      sub_1839230(a1 + 8, v27, v71, v74);
      sub_182EF00(a1 + 8, v75);
      BYTE4(v75[0]) &= ~1u;
      LODWORD(v75[0]) = 1;
    }
    v28 = 232 * v26;
    sub_8ADE80(a1 + 8, (__int64)v77, (int *)(v28 + *(_QWORD *)(a1 + 1592) + 200));
    sub_183BAF0(a1 + 8, v74, v77, v80);
    sub_182EF00(a1 + 8, v81);
    BYTE4(v81[0]) &= ~1u;
    LODWORD(v81[0]) = 1;
    sub_1839270(a1 + 8, v80);
    sub_8AE7F0(a1 + 8, (int *)v80, (__int64)v74, (__int64)v77);
    sub_8AE7F0(a1 + 8, (int *)v80, v28 + *(_QWORD *)(a1 + 1592) + 200, (__int64)v74);
    if ( (v72[0] & 0x100000000LL) != 0 || LODWORD(v72[0]) != 1 || (v78[0] & 0x100000000LL) != 0 || LODWORD(v78[0]) != 1 )
    {
      sub_184C880(a1 + 8, v71, v77, v71);
    }
    else
    {
      sub_1839230(a1 + 8, v71, v77, v71);
      sub_182EF00(a1 + 8, v72);
      BYTE4(v72[0]) &= ~1u;
      LODWORD(v72[0]) = 1;
    }
    sub_899320(v67, v56, (__int64)v77);
    sub_1839100(a1 + 8, v74);
    sub_48EFC0((__int64)v67, v56, (__int64)v74, *(_DWORD *)(*(_QWORD *)(a1 + 1592) + v28) & 0x1FFFFFFF);
    v23 = *(_QWORD *)(a1 + 1640);
  }
  v29 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1480) + 16LL * v56);
  v82 = a1 + 8;
  v83[0] = 0;
  v83[1] = 0;
  v84[0] = 1;
  v84[1] = 0;
  v85 = a1 + 736;
  v86[0] = 0;
  v86[1] = 0;
  v87[0] = 1;
  v87[1] = 0;
  v88[0] = 0;
  v88[1] = 0;
  v89[0] = 1;
  v89[1] = 0;
  v90 = a1 + 736;
  v91[0] = 0;
  v91[1] = 0;
  v92[0] = 1;
  v92[1] = 0;
  v93[0] = 0;
  v93[1] = 0;
  v94[0] = 1;
  v94[1] = 0;
  sub_89A080((__int64)&v68, v29, 1);
  v30 = v68;
  v31 = v69;
  sub_89A080((__int64)&v68, v29, 0);
  v66 = v68;
  if ( v68 != v30 )
  {
    v32 = *v31;
    do
    {
      v33 = v32 + 40LL * v30;
      v34 = *(unsigned int *)(v33 + 32);
      if ( a2 == (_DWORD)v34 )
      {
        sub_8ADE80(a1 + 8, (__int64)v83, (int *)v33);
      }
      else
      {
        v35 = *(_QWORD *)(a1 + 1592) + 232 * v34;
        v36 = v35 + 8;
        if ( (*(_BYTE *)(v35 + 28) & 1) != 0
          || *(_DWORD *)(v35 + 24) != 1
          || (*(_BYTE *)(v33 + 20) & 1) != 0
          || *(_DWORD *)(v33 + 16) != 1 )
        {
          v59 = v33;
          sub_184C880(a1 + 736, v36, v33, v91);
          v37 = v59;
        }
        else
        {
          v60 = v33;
          sub_1839230(a1 + 736, v36, v33, v91);
          sub_182EF00(a1 + 736, v92);
          BYTE4(v92[0]) &= ~1u;
          v37 = v60;
          LODWORD(v92[0]) = 1;
        }
        v38 = v35 + 40;
        if ( (*(_BYTE *)(v35 + 60) & 1) != 0
          || *(_DWORD *)(v35 + 56) != 1
          || (*(_BYTE *)(v37 + 20) & 1) != 0
          || *(_DWORD *)(v37 + 16) != 1 )
        {
          sub_184C880(a1 + 736, v38, v37, v93);
        }
        else
        {
          sub_1839230(a1 + 736, v38, v37, v93);
          sub_182EF00(a1 + 736, v94);
          BYTE4(v94[0]) &= ~1u;
          LODWORD(v94[0]) = 1;
        }
        if ( LODWORD(v91[0]) )
        {
          if ( LODWORD(v86[0]) )
          {
            if ( (v87[0] & 0x100000000LL) != 0
              || LODWORD(v87[0]) != 1
              || (v92[0] & 0x100000000LL) != 0
              || LODWORD(v92[0]) != 1 )
            {
              sub_18540F0(a1 + 736, v86, v91, v86);
            }
            else
            {
              sub_1839610(a1 + 736, v86, v91);
              sub_182EF00(a1 + 736, v87);
              BYTE4(v87[0]) &= ~1u;
              LODWORD(v87[0]) = 1;
            }
          }
          else
          {
            sub_8ADE80(a1 + 736, (__int64)v86, (int *)v91);
          }
          if ( LODWORD(v93[0]) )
          {
LABEL_42:
            if ( LODWORD(v88[0]) )
            {
              if ( (v89[0] & 0x100000000LL) != 0
                || LODWORD(v89[0]) != 1
                || (v94[0] & 0x100000000LL) != 0
                || LODWORD(v94[0]) != 1 )
              {
                sub_18540F0(a1 + 736, v88, v93, v88);
              }
              else
              {
                sub_1839610(a1 + 736, v88, v93);
                sub_182EF00(a1 + 736, v89);
                BYTE4(v89[0]) &= ~1u;
                LODWORD(v89[0]) = 1;
              }
            }
            else
            {
              sub_8ADE80(a1 + 736, (__int64)v88, (int *)v93);
            }
            goto LABEL_46;
          }
        }
        else
        {
          sub_8ADE80(a1 + 736, (__int64)v86, (int *)v86);
          if ( LODWORD(v93[0]) )
            goto LABEL_42;
        }
        sub_8ADE80(a1 + 736, (__int64)v88, (int *)v88);
      }
LABEL_46:
      v32 = *v31;
      ++v30;
      if ( *v31 )
      {
        v39 = v32 + 40LL * v30;
        while ( v30 < *(_DWORD *)(v32 - 4) )
        {
          v40 = *(_DWORD *)(v39 + 32);
          v39 += 40;
          if ( v40 != -1 )
            break;
          ++v30;
        }
      }
    }
    while ( v66 != v30 );
  }
  sub_1839100(a1 + 736, v86);
  sub_1839100(a1 + 736, v88);
  sub_8AE7F0(a1 + 736, (int *)v86, (__int64)v83, (__int64)v86);
  sub_8AE7F0(a1 + 736, (int *)v88, (__int64)v83, (__int64)v88);
  v41 = *(_QWORD *)(a1 + 1600);
  if ( v41 )
    goto LABEL_55;
LABEL_57:
  sub_2FD3F0((unsigned int **)(a1 + 1600));
  v41 = *(_QWORD *)(a1 + 1600);
  v42 = *(unsigned int *)(v41 - 4);
  while ( 1 )
  {
    *(_DWORD *)(v41 + 4 * v42) = -1;
    ++*(_DWORD *)(v41 - 4);
LABEL_55:
    v42 = *(unsigned int *)(v41 - 4);
    if ( v56 < (unsigned int)v42 )
      break;
    if ( (_DWORD)v42 == *(_DWORD *)(v41 - 8) )
      goto LABEL_57;
  }
  *(_DWORD *)(v41 + 4LL * v56) = a2;
  v43 = 232LL * a2;
  v44 = (int *)(v43 + *(_QWORD *)(a1 + 1592));
  v45 = *v44;
  v44 += 50;
  *(v44 - 50) = v45 & 0xC0000000 | v56 & 0x1FFFFFFF | 0x20000000;
  sub_8ADE80(a1 + 8, (__int64)v44, (int *)v83);
  v46 = *(_QWORD *)(a1 + 1592) + v43;
  sub_8ADE80(a1 + 736, v46 + 8, (int *)v86);
  sub_8ADE80(a1 + 736, v46 + 40, (int *)v88);
  sub_8B12A0(a1, a2);
  sub_8AD4E0(v90, (__int64)v91);
  sub_8AD4E0(v85, (__int64)v86);
  v47 = v82;
  sub_182EF00(v82, v83);
  sub_182EF00(v47, v84);
  v48 = v79;
  sub_182EF00(v79, v80);
  sub_182EF00(v48, v81);
  v49 = v76;
  sub_182EF00(v76, v77);
  sub_182EF00(v49, v78);
  v50 = v73;
  sub_182EF00(v73, v74);
  sub_182EF00(v50, v75);
  v51 = v70;
  sub_182EF00(v70, v71);
  sub_182EF00(v51, v72);
  return v56;
}

