__int64 __fastcall sub_55A480(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int32 a5, unsigned int *a6)
{
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  char v12; // al
  char v13; // dl
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  __m128 v17; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  _BYTE *v20; // rax
  const __m128i *v21; // rdx
  __int8 v22; // al
  __int64 v23; // rsi
  __m128i v24; // xmm1
  void *v25; // rax
  __m128i v26; // xmm0
  unsigned int v27; // r13d
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // edx
  int v33; // edx
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // eax
  _QWORD *v37; // r15
  char v38; // r13
  __int32 v39; // ecx
  unsigned int v40; // eax
  __m128i v41; // [rsp+0h] [rbp-298h] BYREF
  __m128i v42; // [rsp+10h] [rbp-288h] BYREF
  _QWORD *v43; // [rsp+28h] [rbp-270h]
  __int64 v44; // [rsp+30h] [rbp-268h]
  unsigned int v45; // [rsp+38h] [rbp-260h]
  __int32 v46; // [rsp+3Ch] [rbp-25Ch]
  _QWORD v47[3]; // [rsp+40h] [rbp-258h] BYREF
  void *v48; // [rsp+58h] [rbp-240h]
  __m128i v49; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v50; // [rsp+78h] [rbp-220h]
  __int64 v51; // [rsp+80h] [rbp-218h]
  __int32 v52; // [rsp+88h] [rbp-210h]
  __int128 v53; // [rsp+90h] [rbp-208h]
  __int64 v54; // [rsp+A0h] [rbp-1F8h]
  void *v55; // [rsp+B0h] [rbp-1E8h]
  __int64 v56; // [rsp+B8h] [rbp-1E0h]
  unsigned int v57; // [rsp+D0h] [rbp-1C8h]
  void *v58; // [rsp+E0h] [rbp-1B8h]
  __int64 v59; // [rsp+E8h] [rbp-1B0h]
  __int64 v60; // [rsp+F8h] [rbp-1A0h]
  unsigned int v61; // [rsp+104h] [rbp-194h]
  char v62; // [rsp+108h] [rbp-190h]
  __int64 v63; // [rsp+10Ch] [rbp-18Ch]
  _QWORD v64[3]; // [rsp+114h] [rbp-184h] BYREF
  _BYTE v65[192]; // [rsp+12Ch] [rbp-16Ch] BYREF
  _BYTE v66[4]; // [rsp+1ECh] [rbp-ACh] BYREF
  void *ptr; // [rsp+1F0h] [rbp-A8h]
  __int128 v68; // [rsp+1F8h] [rbp-A0h]
  __m128i v69; // [rsp+208h] [rbp-90h]
  __m128i v70; // [rsp+218h] [rbp-80h]
  __int128 v71; // [rsp+228h] [rbp-70h]
  __int128 v72; // [rsp+238h] [rbp-60h]
  __int64 v73; // [rsp+248h] [rbp-50h]
  __int64 v74; // [rsp+250h] [rbp-48h]
  unsigned __int64 v75; // [rsp+258h] [rbp-40h]

  v44 = a2;
  v46 = a5;
  v75 = __readfsqword(0x28u);
  v10 = sub_3B9AA0(a1, a3, 0);
  v11 = v10;
  if ( !a6 )
  {
    v45 = 0;
    v16 = v10;
    goto LABEL_8;
  }
  v12 = *((_BYTE *)a6 + 140);
  v13 = v12 & 2;
  if ( a4 > 7 )
  {
    if ( !v13 )
    {
      v45 = 0;
      v14 = 0;
      goto LABEL_5;
    }
    v40 = sub_3C0CC0(a1, a3);
    v32 = 2228864;
    v30 = 393216;
    v45 = v40;
    v31 = -2228865;
LABEL_34:
    v33 = a6[37] & v32;
    v41.m128i_i64[0] = v30;
    sub_3CB100((__int64 *)a1, a3, v45 & v31 | v33);
    v14 = v41.m128i_i64[0];
    if ( (a6[35] & 4) != 0 )
      goto LABEL_6;
LABEL_35:
    v34 = *a6;
    v41.m128i_i64[0] = v14;
    v35 = sub_55A400(v34, 1u, a4);
    v14 = v41.m128i_i64[0];
    v15 = v35;
    goto LABEL_7;
  }
  v45 = 0;
  v14 = 15LL << (4 * ((unsigned __int8)a4 + (a4 > 1) + 5));
  if ( v13 )
  {
    v41.m128i_i64[0] = v14 | 0x60000;
    v29 = sub_3C0CC0(a1, a3);
    v30 = v41.m128i_i64[0];
    v45 = v29;
    if ( a4 )
    {
      v31 = -2228865;
      v32 = 2228864;
    }
    else
    {
      v31 = -1114497;
      v32 = 1114496;
    }
    goto LABEL_34;
  }
LABEL_5:
  if ( (v12 & 4) == 0 )
    goto LABEL_35;
LABEL_6:
  v15 = *((_QWORD *)a6 + 19);
LABEL_7:
  v16 = v11 ^ v14 & (v11 ^ v15);
  sub_3CAE70((_QWORD *)a1, a3, v16);
LABEL_8:
  v17 = _mm_loadh_ps((const double *)(*(_QWORD *)a1 + 544LL));
  v43 = v47;
  v42 = (__m128i)_mm_loadh_ps((const double *)(a1 + 32));
  v41 = (__m128i)v17;
  sub_559580((__int64)v47, a3, v16, 0);
  v18 = _mm_load_si128(&v42);
  v19 = _mm_load_si128(&v41);
  v61 = a3;
  v63 = 0;
  v64[2] = 0;
  v64[0] = -1;
  v47[0] = &off_2BCF860;
  v64[1] = 0xFFFFFFFFLL;
  v20 = v65;
  do
  {
    *(_WORD *)v20 = 0;
    v20 += 24;
    *((_WORD *)v20 - 11) = 0;
    *((_WORD *)v20 - 10) = 0;
    *((_DWORD *)v20 - 1) = 0;
    *((_WORD *)v20 - 9) = 0;
    *((_QWORD *)v20 - 2) = 0;
    *((_DWORD *)v20 - 2) = 0;
  }
  while ( v66 != v20 );
  v70 = v18;
  ptr = nullptr;
  v73 = -1;
  v74 = v16;
  v62 = 2;
  v57 = v57 & 0xFFF2FFFF | 0x90000;
  v68 = 0;
  v69 = v19;
  v71 = 0;
  v72 = 0;
  if ( (~(_WORD)v16 & 0x600) != 0 )
  {
    v21 = nullptr;
    if ( a6 && (a6[35] & 1) != 0 )
      v21 = (const __m128i *)(a6 + 1);
    v22 = sub_363CC0(*(_QWORD *)a1, (__int64)v43, v21, (__int64)v66);
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
  v36 = sub_55A0B0((_QWORD *)a1, (__int64)v64, a3);
  if ( v36 < 0 )
  {
    v41.m128i_i32[0] = v36;
    if ( (unsigned int)sub_39CC50(a1) != 25 )
      sub_4DB6D0((_QWORD *)a1, -v41.m128i_i8[0], a3, 0);
    goto LABEL_37;
  }
  if ( !v36 )
    goto LABEL_37;
  if ( !v65[24 * a4 + 1] )
    goto LABEL_16;
  v37 = v43;
  v41.m128i_i64[0] = (int)a4;
  v38 = a4 + 41;
  sub_558200(v43, v38);
  v39 = v52;
  v52 = v46;
  v42.m128i_i32[0] = v39;
  v41.m128i_i8[0] = sub_375980(0x13u, v37, (char *)&v37[3 * v41.m128i_i64[0] + 29] + 4) == 1;
  v52 = v42.m128i_i32[0];
  sub_558800((__int64)v37, v38);
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
  a6[36] = v50;
LABEL_20:
  sub_3CAE70((_QWORD *)a1, a3, v11);
  if ( (a6[35] & 2) != 0 )
    sub_3CB100((__int64 *)a1, a3, v45);
LABEL_22:
  v47[0] = &off_2BCF860;
  if ( ptr )
  {
    *(_QWORD *)&v68 = 0;
    qfree(ptr);
  }
  v54 = 0;
  v47[0] = &off_2BD10E8;
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

