__int64 __fastcall sub_574040(__int64 a1, __int64 a2, void *a3, unsigned int a4, __int32 a5, unsigned int *a6)
{
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  char v12; // al
  char v13; // dl
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  __m128 v17; // xmm2
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  void **v20; // rax
  const void *v21; // rdx
  __int8 v22; // al
  __int64 v23; // rsi
  __m128i v24; // xmm1
  void *v25; // rax
  __m128i v26; // xmm0
  unsigned int v27; // r13d
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  Elf64_Rela *v32; // rdx
  unsigned int v33; // edx
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // eax
  _QWORD *v37; // r15
  char v38; // r13
  __int32 v39; // ecx
  unsigned int v40; // eax
  __m128i v41; // [rsp+0h] [rbp-358h] BYREF
  __m128i v42; // [rsp+10h] [rbp-348h] BYREF
  _QWORD *v43; // [rsp+28h] [rbp-330h]
  __int64 v44; // [rsp+30h] [rbp-328h]
  unsigned int v45; // [rsp+38h] [rbp-320h]
  __int32 v46; // [rsp+3Ch] [rbp-31Ch]
  _QWORD v47[3]; // [rsp+40h] [rbp-318h] BYREF
  void *v48; // [rsp+58h] [rbp-300h]
  __m128i v49; // [rsp+60h] [rbp-2F8h] BYREF
  unsigned int v50; // [rsp+78h] [rbp-2E0h]
  __int64 v51; // [rsp+80h] [rbp-2D8h]
  __int32 v52; // [rsp+88h] [rbp-2D0h]
  __int128 v53; // [rsp+90h] [rbp-2C8h]
  __int64 v54; // [rsp+A0h] [rbp-2B8h]
  void *v55; // [rsp+B0h] [rbp-2A8h]
  __int64 v56; // [rsp+B8h] [rbp-2A0h]
  unsigned int v57; // [rsp+D0h] [rbp-288h]
  void *v58; // [rsp+E0h] [rbp-278h]
  __int64 v59; // [rsp+E8h] [rbp-270h]
  __int64 v60; // [rsp+F8h] [rbp-260h]
  void *v61; // [rsp+108h] [rbp-250h]
  char v62; // [rsp+110h] [rbp-248h]
  __int64 v63; // [rsp+114h] [rbp-244h]
  __int128 v64; // [rsp+120h] [rbp-238h] BYREF
  __int64 v65; // [rsp+130h] [rbp-228h]
  __int64 v66; // [rsp+138h] [rbp-220h]
  __int64 v67; // [rsp+140h] [rbp-218h]
  _BYTE v68[320]; // [rsp+148h] [rbp-210h] BYREF
  void *ptr; // [rsp+288h] [rbp-D0h] BYREF
  __int128 v70; // [rsp+290h] [rbp-C8h]
  __m128i v71; // [rsp+2A0h] [rbp-B8h]
  __m128i v72; // [rsp+2B0h] [rbp-A8h]
  __int128 v73; // [rsp+2C0h] [rbp-98h]
  __int128 v74; // [rsp+2D0h] [rbp-88h]
  __int128 v75; // [rsp+2E0h] [rbp-78h]
  __int128 v76; // [rsp+2F0h] [rbp-68h]
  __int128 v77; // [rsp+300h] [rbp-58h]
  __int64 v78; // [rsp+310h] [rbp-48h]
  unsigned __int64 v79; // [rsp+318h] [rbp-40h]

  v44 = a2;
  v46 = a5;
  v79 = __readfsqword(0x28u);
  v10 = sub_3BE900((_QWORD *)a1, (unsigned __int64)a3, 0);
  v11 = v10;
  if ( !a6 )
  {
    v45 = 0;
    v16 = v10;
    goto LABEL_8;
  }
  v12 = *((_BYTE *)a6 + 280);
  v13 = v12 & 2;
  if ( a4 > 7 )
  {
    if ( !v13 )
    {
      v45 = 0;
      v14 = 0;
      goto LABEL_5;
    }
    v40 = (unsigned int)sub_3C5DC0(a1, (unsigned __int64)a3);
    v32 = &stru_220280;
    v30 = 393216;
    v45 = v40;
    v31 = -2228865;
LABEL_34:
    v33 = a6[72] & (unsigned int)v32;
    v41.m128i_i64[0] = v30;
    sub_3D0A60((__int64 *)a1, a3, v45 & v31 | v33);
    v14 = v41.m128i_i64[0];
    if ( (a6[70] & 4) != 0 )
      goto LABEL_6;
LABEL_35:
    v34 = *a6;
    v41.m128i_i64[0] = v14;
    v35 = sub_573FA0(v34, 1u, a4);
    v14 = v41.m128i_i64[0];
    v15 = v35;
    goto LABEL_7;
  }
  v45 = 0;
  v14 = 15LL << (4 * ((unsigned __int8)a4 + (a4 > 1) + 5));
  if ( v13 )
  {
    v41.m128i_i64[0] = v14 | 0x60000;
    v29 = (unsigned int)sub_3C5DC0(a1, (unsigned __int64)a3);
    v30 = v41.m128i_i64[0];
    v45 = v29;
    if ( a4 )
    {
      v31 = -2228865;
      v32 = &stru_220280;
    }
    else
    {
      v31 = -1114497;
      v32 = &stru_110180;
    }
    goto LABEL_34;
  }
LABEL_5:
  if ( (v12 & 4) == 0 )
    goto LABEL_35;
LABEL_6:
  v15 = *((_QWORD *)a6 + 37);
LABEL_7:
  v16 = v11 ^ v14 & (v11 ^ v15);
  sub_3D07C0((_QWORD *)a1, a3, v16);
LABEL_8:
  v17 = _mm_loadh_ps((const double *)(*(_QWORD *)a1 + 632LL));
  v43 = v47;
  v42 = (__m128i)_mm_loadh_ps((const double *)(a1 + 32));
  v41 = (__m128i)v17;
  sub_573090((__int64)v47, (__int64)a3, v16, 0);
  v61 = a3;
  v63 = 0;
  v18 = _mm_load_si128(&v42);
  v65 = -1;
  v19 = _mm_load_si128(&v41);
  v66 = 0;
  v67 = 0;
  v47[0] = &off_2BF9800;
  v20 = (void **)v68;
  v64 = -1;
  do
  {
    *(_WORD *)v20 = 0;
    v20 += 5;
    *((_WORD *)v20 - 19) = 0;
    *((_WORD *)v20 - 18) = 0;
    *((_DWORD *)v20 - 2) = 0;
    *((_WORD *)v20 - 17) = 0;
    *((_OWORD *)v20 - 2) = 0;
    *(v20 - 2) = nullptr;
  }
  while ( &ptr != v20 );
  v70 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  ptr = nullptr;
  v78 = v16;
  v62 = 2;
  v57 = v57 & 0xFFF2FFFF | 0x90000;
  v71 = v19;
  v72 = v18;
  v77 = -1;
  if ( (~(_WORD)v16 & 0x600) != 0 )
  {
    v21 = nullptr;
    if ( a6 && (a6[70] & 1) != 0 )
      v21 = a6 + 2;
    v22 = sub_3671A0(*(_QWORD *)a1, v43, v21, (__int64)&ptr);
    goto LABEL_15;
  }
  if ( a4 > 7 )
  {
LABEL_37:
    v27 = 0;
    if ( !a6 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v36 = sub_573C40((__int64 *)a1, (__int64)&v64, a3);
  if ( v36 < 0 )
  {
    v41.m128i_i32[0] = v36;
    if ( (unsigned int)sub_3A1820(a1) != 25 )
      sub_4F2EF0((_QWORD *)a1, -v41.m128i_i8[0], (__int64)a3, 0);
    goto LABEL_37;
  }
  if ( !v36 )
    goto LABEL_37;
  if ( !v68[40 * a4 + 1] )
    goto LABEL_16;
  v37 = v43;
  v41.m128i_i64[0] = (int)a4;
  v38 = a4 + 41;
  sub_571D10(v43, v38);
  v39 = v52;
  v52 = v46;
  v42.m128i_i32[0] = v39;
  v41.m128i_i8[0] = sub_3792E0(0x13u, v37, &v37[5 * v41.m128i_i64[0] + 33]) == 1;
  v52 = v42.m128i_i32[0];
  sub_572310(v37, v38);
  v22 = v41.m128i_i8[0];
LABEL_15:
  if ( !v22 )
    goto LABEL_37;
LABEL_16:
  if ( v44 )
  {
    v23 = v44;
    v24 = _mm_load_si128(&v49);
    v25 = *(void **)v44;
    v26 = _mm_loadu_si128((const __m128i *)(v44 + 8));
    *(_QWORD *)v44 = v48;
    *(__m128i *)(v23 + 8) = v24;
    v48 = v25;
    v49 = v26;
  }
  if ( !a6 )
  {
    v27 = 1;
    goto LABEL_22;
  }
  v27 = 1;
  a6[71] = v50;
LABEL_20:
  sub_3D07C0((_QWORD *)a1, a3, v11);
  if ( (a6[70] & 2) != 0 )
    sub_3D0A60((__int64 *)a1, a3, v45);
LABEL_22:
  v47[0] = &off_2BF9800;
  if ( ptr )
  {
    *(_QWORD *)&v70 = 0;
    qfree(ptr);
  }
  v54 = 0;
  v47[0] = &off_2BFB0E8;
  v60 = 0;
  v51 = 0;
  v53 = 0;
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
  }
  if ( v55 )
  {
    v56 = 0;
    qfree(v55);
  }
  if ( v48 )
  {
    v49.m128i_i64[0] = 0;
    qfree(v48);
  }
  return v27;
}
