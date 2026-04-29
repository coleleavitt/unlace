__int64 __fastcall sub_7A70(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  __int64 fileregion_ea; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebp
  unsigned __int16 v22; // r12
  unsigned __int16 v23; // r13
  __int16 v24; // ax
  unsigned __int16 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  const char *v34; // rsi
  __int64 v35; // rax
  const char *v36; // rdx
  unsigned __int16 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int16 i; // bp
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  char v46; // [rsp+0h] [rbp-168h]
  char v47; // [rsp+0h] [rbp-168h]
  __int64 v48; // [rsp+10h] [rbp-158h]
  unsigned __int16 v50; // [rsp+20h] [rbp-148h] BYREF
  unsigned __int16 v51; // [rsp+22h] [rbp-146h]
  __int16 v52; // [rsp+24h] [rbp-144h]
  unsigned __int16 v53; // [rsp+26h] [rbp-142h]
  _WORD v54[2]; // [rsp+28h] [rbp-140h] BYREF
  char v55; // [rsp+2Ch] [rbp-13Ch]
  _BYTE v56[4]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v57; // [rsp+34h] [rbp-134h]
  unsigned int v58; // [rsp+38h] [rbp-130h]
  int v59; // [rsp+3Ch] [rbp-12Ch]
  __int128 v60; // [rsp+40h] [rbp-128h] BYREF
  __int128 v61; // [rsp+50h] [rbp-118h]
  __int64 v62; // [rsp+60h] [rbp-108h]
  __int64 v63; // [rsp+68h] [rbp-100h]
  __int64 v64; // [rsp+70h] [rbp-F8h]
  __int128 v65; // [rsp+78h] [rbp-F0h]
  __int128 v66; // [rsp+88h] [rbp-E0h]
  __int128 v67; // [rsp+98h] [rbp-D0h]
  __int128 v68; // [rsp+A8h] [rbp-C0h]
  __int128 v69; // [rsp+B8h] [rbp-B0h]
  __int128 v70; // [rsp+C8h] [rbp-A0h]
  __int128 v71; // [rsp+D8h] [rbp-90h]
  __int128 v72; // [rsp+E8h] [rbp-80h]
  unsigned __int64 v73; // [rsp+F8h] [rbp-70h]
  _BYTE v74[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v75; // [rsp+128h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( sub_4EE0(a1, dword_B490, (__int64)v56, 16) )
    goto LABEL_38;
  sub_2F80(
    (__int64)"Overlays: base=%08X, size=%08X, EXEinfo=%08X",
    (unsigned int)dword_B490,
    v57,
    v58,
    v9,
    v10,
    a2,
    a3,
    a4,
    a5,
    v11,
    v12,
    a8,
    a9,
    v46);
  dword_B490 += 16;
  if ( !v59 )
    goto LABEL_38;
  fileregion_ea = get_fileregion_ea(v58);
  v14 = fileregion_ea;
  if ( fileregion_ea == -1 )
    goto LABEL_38;
  v15 = 8;
  v16 = (const char *)v54;
  if ( get_bytes(v54, 8, fileregion_ea, 0, 0) != 8 )
    goto LABEL_38;
  if ( (v55 & 2) != 0 )
  {
    v38 = v54[0];
    if ( v54[0] )
    {
      sub_31F0((__int64)"Probbly the input file was truncated by 'unp -h'. Searching the base...\n");
      for ( i = v54[0]; ; i = v54[0] )
      {
        if ( v38 < i )
          goto LABEL_38;
        if ( v14 < getinf(21, 8, v39, v40, v41, v42) + 8 )
          goto LABEL_38;
        v14 -= 8LL;
        if ( get_bytes(v54, 8, v14, 0, 0) != 8 )
          goto LABEL_38;
        v58 -= 8;
        v38 = i;
        sub_3490();
        if ( !v54[0] )
          break;
      }
      v15 = v58;
      v16 = "Real (before unp -h) EXEinfo=%08X";
      sub_2F80(
        (__int64)"Real (before unp -h) EXEinfo=%08X",
        v58,
        v39,
        v40,
        v41,
        v42,
        a2,
        a3,
        a4,
        a5,
        v44,
        v45,
        a8,
        a9,
        v47);
    }
  }
  if ( v59 > 0 )
  {
    v48 = -1;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v15 = 8;
      v16 = (const char *)&v50;
      if ( get_bytes(&v50, 8, v14, 0, 0) != 8 )
        break;
      v14 += 8LL;
      if ( v51 != 0xFFFF && v53 < v51 )
      {
        v23 = v50;
        if ( v50 < v22 )
          break;
        v24 = getinf(12, 8, v17, v18, v19, v20);
        a3.m128_u64[0] = -1;
        a2.m128_u64[0] = 0;
        v60 = 0;
        v50 += v24;
        v25 = v50;
        v62 = 0;
        v64 = 0;
        v73 = 0xFFFFFFFF00000000LL;
        v63 = 513;
        v61 = 0;
        v65 = -1;
        v66 = -1;
        v67 = -1;
        v68 = -1;
        v69 = -1;
        v70 = -1;
        v71 = -1;
        v72 = -1;
        v34 = nullptr;
        if ( v25 == getinf(13, 8, v26, v27, v28, v29) )
        {
          LOBYTE(v73) = 3;
          v34 = "STACK";
          BYTE1(v63) = 5;
        }
        if ( (v52 & 1) != 0 )
        {
          LOBYTE(v73) = 2;
          v34 = "CODE";
        }
        if ( (v52 & 4) != 0 )
        {
          v31 = v50;
          LOBYTE(v73) = 3;
          v34 = "BSS";
          v48 = v50;
        }
        *(_QWORD *)&v61 = 0;
        if ( (v52 & 2) != 0 )
        {
          LOBYTE(v63) = 3;
          *(_QWORD *)&v60 = (getinf(20, v34, v30, v31, v32, v33) + 15) & 0xFFFFFFFFFFFFFFF0LL;
          v64 = setup_selector((unsigned __int64)v60 >> 4);
          sub_56E0(a1, v58, 16LL * v50, (__int64 *)&v60, (unsigned int)dword_B490, 0.0, NAN);
          if ( (_BYTE)v73 != 7 )
            LOBYTE(v73) = 2;
          qsnprintf(v74, 32, "ovr%03d", v21);
          if ( !(unsigned __int8)add_segm_ex(&v60, v74, "OVERLAY", 33) )
LABEL_39:
            sub_33A0(0);
          *(_QWORD *)&v61 = 0;
          v34 = "STUBSEG";
          LOBYTE(v73) = 0;
        }
        v16 = (const char *)&v60;
        v64 = v50;
        v35 = 16LL * v50;
        *(_QWORD *)&v60 = v35 + v53;
        v36 = v34;
        v15 = 0;
        *((_QWORD *)&v60 + 1) = v51 + v35;
        if ( !(unsigned __int8)add_segm_ex(&v60, 0, v36, 33) )
          goto LABEL_39;
        if ( (v52 & 2) != 0 )
        {
          sub_7430(v60, 0);
          qsnprintf(v74, 32, "stub%03d", v21);
          v15 = (unsigned __int64)v74;
          v16 = (const char *)&v60;
          set_segm_name(&v60, v74, 0);
        }
        sub_3490();
        v22 = v23;
      }
      if ( v59 <= ++v21 )
        goto LABEL_29;
    }
LABEL_38:
    sub_3450();
  }
  v48 = -1;
LABEL_29:
  sub_5130(*(double *)a2.m128_u64, *(double *)a3.m128_u64, (__int64)v16, v15, v17, v18, v19, v20);
  return v48;
}
