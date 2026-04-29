__int64 __fastcall sub_298D00(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  char v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edx
  __int64 *v20; // r14
  __int64 v21; // rax
  char v22; // r13
  __int64 v23; // r15
  _QWORD *v24; // rax
  int v25; // r9d
  int v26; // edx
  int v27; // r8d
  int v28; // r15d
  int v29; // r13d
  __int64 v30; // rax
  __int64 *v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __m128d v38; // xmm0
  unsigned int v39; // edi
  int v40; // eax
  unsigned int v41; // [rsp+10h] [rbp-168h]
  int v42; // [rsp+10h] [rbp-168h]
  char v43; // [rsp+17h] [rbp-161h]
  int v44; // [rsp+20h] [rbp-158h]
  int v45; // [rsp+24h] [rbp-154h]
  unsigned __int64 v46; // [rsp+28h] [rbp-150h]
  __int64 v47; // [rsp+30h] [rbp-148h]
  __int64 v48; // [rsp+38h] [rbp-140h]
  int v49; // [rsp+48h] [rbp-130h] BYREF
  int v50; // [rsp+4Ch] [rbp-12Ch] BYREF
  __int64 v51; // [rsp+50h] [rbp-128h] BYREF
  __int64 *v52; // [rsp+58h] [rbp-120h] BYREF
  __int64 **v53; // [rsp+60h] [rbp-118h] BYREF
  __int64 *v54; // [rsp+68h] [rbp-110h]
  __int64 v55; // [rsp+70h] [rbp-108h] BYREF
  char v56; // [rsp+78h] [rbp-100h]
  __int64 v57; // [rsp+80h] [rbp-F8h] BYREF
  char v58; // [rsp+88h] [rbp-F0h]
  __int64 v59[6]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-B8h]
  _DWORD v61[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+D8h] [rbp-A0h]
  __int64 v63; // [rsp+E8h] [rbp-90h]
  _DWORD v64[2]; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v65; // [rsp+F8h] [rbp-80h]
  __int64 v66; // [rsp+108h] [rbp-70h]
  int v67; // [rsp+110h] [rbp-68h] BYREF
  int v68; // [rsp+114h] [rbp-64h]
  __int128 v69; // [rsp+118h] [rbp-60h]
  __int64 v70; // [rsp+128h] [rbp-50h]
  unsigned __int64 v71; // [rsp+138h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  sub_283FC0(&v53, a1, a2);
  if ( v54 == *v53 )
    return 0;
  v6 = v54[1];
  v7 = *(_DWORD *)(v6 + 24) == 72;
  v54 = (__int64 *)v6;
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 8) - 2) > 0xD )
    return 0;
  if ( (unsigned __int8)sub_285520(*(_QWORD *)(v6 + 40), 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_2855F0(v8) )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 24LL);
  if ( *(_DWORD *)(v9 + 8) != 65 )
    return 0;
  v10 = *(int *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 24);
  v56 = 0;
  v55 = 0;
  v12 = sub_1E03D0((__int64)&v55, &v49, (_DWORD *)(*(_QWORD *)(v11 + 432) + 104 * v10));
  if ( !v12 )
    return 0;
  v13 = *(_QWORD *)(a2 + 24);
  v43 = sub_2855F0(v13);
  if ( v43 )
    return 0;
  switch ( *(_DWORD *)(v13 + 8) )
  {
    case 0x16:
      v41 = 44;
      break;
    case 0x17:
    case 0x41:
      v41 = 43;
      break;
    case 0x18:
      v41 = 50;
      break;
    case 0x19:
      v41 = 45;
      break;
    case 0x1A:
      v41 = 52;
      break;
    case 0x1B:
      v41 = 48;
      break;
    case 0x1C:
      v41 = 49;
      break;
    case 0x1D:
      v41 = 47;
      break;
    case 0x1E:
      v41 = 51;
      break;
    case 0x1F:
      v41 = 46;
      break;
    default:
      return 0;
  }
  v58 = 0;
  v7 = *(_DWORD *)(v13 + 8) == 65;
  v57 = 0;
  v14 = *(_QWORD *)(v13 + 24);
  v50 = 8;
  if ( v7 )
  {
    v20 = nullptr;
    if ( sub_259E60(v14, v9) )
      return 0;
  }
  else
  {
    v15 = sub_2553A0(v14);
    v16 = sub_259E60(v15, v9);
    v17 = *(_QWORD *)(v13 + 32);
    if ( v16 )
    {
      v35 = sub_2553A0(v17);
      if ( sub_259E60(v35, v9) )
        return 0;
      v43 = v12;
      v17 = *(_QWORD *)(v13 + 24);
    }
    v18 = sub_2553A0(v17);
    v19 = *(_DWORD *)(v18 + 8);
    if ( v19 == 65 )
    {
      v20 = nullptr;
      if ( !(unsigned __int8)sub_1E03D0(
                               (__int64)&v57,
                               &v50,
                               (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 432LL) + 104LL * *(int *)(v18 + 32))) )
        return 0;
    }
    else
    {
      if ( v19 != 61 )
        return 0;
      v20 = (__int64 *)sub_255DF0(*(__int64 **)(v18 + 24), (_QWORD *)(v18 + 48));
    }
  }
  v46 = **(_QWORD **)(v6 + 40);
  if ( v46 == -1 )
    v46 = *(_QWORD *)(v6 + 16);
  v21 = *(_QWORD *)(a2 + 24);
  v51 = 0;
  v47 = *(_QWORD *)(v21 + 64);
  v22 = sub_296C70(&v51, v47, v9);
  if ( !v22 )
    return 0;
  v48 = v51;
  v23 = *(_QWORD *)(a1[8] + 8LL);
  v24 = sub_66AB0(v23, v46);
  v26 = (int)v24;
  if ( v24 && *((_DWORD *)v24 + 19) == 3 && (v36 = v24[6]) != 0 )
  {
    while ( v46 != *(_QWORD *)(v36 + 24) )
    {
      v36 = *(_QWORD *)(v36 + 8);
      if ( !v36 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v59[0] = (__int64)&off_4DB490;
    memset(&v59[1], 0, 32);
    v59[5] = v46;
    v60 = 0;
    if ( !(unsigned int)sub_11F420(v23, v59) )
      return 0;
    v26 = v60;
    if ( !v60 )
      return 0;
  }
  v27 = 0;
  v28 = v26 + 448;
  v44 = v50;
  v61[1] = v50;
  v45 = v49;
  v52 = v20;
  v61[0] = 0;
  v63 = 0;
  v64[0] = 0;
  v64[1] = v49;
  v66 = 0;
  v62 = 0;
  v65 = 0;
  if ( v58 )
  {
    if ( !(unsigned __int8)sub_1E0540(v28, (unsigned int)v61, (unsigned int)&v57, 0, 0, v25) )
      goto LABEL_62;
    v22 = sub_312EB0(v61, &v52);
  }
  v2 = sub_1E0540(v28, (unsigned int)v64, (unsigned int)&v55, 0, v27, v25);
  if ( !(_BYTE)v2 )
  {
LABEL_62:
    sub_312F40(v64);
    sub_312F40(v61);
    return 0;
  }
  if ( v22 )
  {
    if ( v44 <= v45 )
    {
      if ( v44 < v45 )
      {
        v7 = v41 == (unsigned int)sub_32EE10(v41);
        v52 = (__int64 *)sub_32AEF0(v52, (unsigned int)v45, !v7);
        v44 = v45;
      }
      goto LABEL_32;
    }
    v37 = sub_32EE10(v41);
    if ( (unsigned __int8)sub_313F70(v64, (unsigned int)v44, v41 != v37) )
    {
LABEL_32:
      v69 = 0;
      v68 = v44;
      v67 = 0;
      v70 = 0;
      sub_313150(v61, &v67);
      sub_312F40(&v67);
      sub_3135C0(v61, v41 - 43, v52);
      sub_314B70(v61, v64);
      goto LABEL_33;
    }
    goto LABEL_62;
  }
  if ( !(unsigned __int8)sub_312EB0(v64, v59) )
    goto LABEL_62;
  if ( v43 != 1 && v41 != 44 && v41 != 43 )
    v41 = sub_32ED20(v41);
  if ( v44 < v45 )
  {
    v40 = sub_32EE10(v41);
    if ( !(unsigned __int8)sub_313F70(v61, (unsigned int)v45, v41 != v40) )
      goto LABEL_62;
  }
  else if ( v44 > v45 )
  {
    v7 = v41 == (unsigned int)sub_32EE10(v41);
    v59[0] = sub_32AEF0(v59[0], (unsigned int)v44, !v7);
    v45 = v44;
  }
  v69 = 0;
  v68 = v45;
  v67 = 0;
  v70 = 0;
  sub_313150(v64, &v67);
  sub_312F40(&v67);
  sub_3135C0(v64, v41 - 43, v59[0]);
  sub_314B70(v64, v61);
LABEL_33:
  v29 = sub_313180(v64, v61);
  sub_312F40(v64);
  sub_312F40(v61);
  if ( v29 )
    return 0;
  v42 = *(_DWORD *)(v6 + 28);
  v30 = j__qalloc_or_throw(200);
  *(_QWORD *)v30 = -1;
  v31 = (__int64 *)v30;
  *(_DWORD *)(v30 + 8) = 0;
  *(_QWORD *)(v30 + 40) = 0;
  *(_QWORD *)(v30 + 12) = -1;
  *(_QWORD *)(v30 + 84) = -1;
  *(_QWORD *)(v30 + 48) = 0;
  *(_QWORD *)(v30 + 144) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v30 + 152) = 0xFFFFFFFFLL;
  *(_DWORD *)(v30 + 56) = 0;
  *(_QWORD *)(v30 + 64) = 0;
  *(_QWORD *)(v30 + 72) = -1;
  *(_DWORD *)(v30 + 80) = 0;
  *(_QWORD *)(v30 + 112) = 0;
  *(_QWORD *)(v30 + 120) = 0;
  *(_DWORD *)(v30 + 128) = 0;
  *(_QWORD *)(v30 + 136) = -1;
  *(_QWORD *)(v30 + 176) = 0;
  *(_QWORD *)(v30 + 184) = 0;
  *(_DWORD *)(v30 + 192) = 0;
  *(_OWORD *)(v30 + 24) = 0;
  *(_OWORD *)(v30 + 96) = 0;
  *(_OWORD *)(v30 + 160) = 0;
  if ( v43 )
  {
    v38 = (__m128d)_mm_loadu_si128((const __m128i *)(v13 + 24));
    v39 = *(_DWORD *)(v13 + 8);
    *(__m128d *)(v13 + 24) = _mm_shuffle_pd(v38, v38, 1);
    *(_DWORD *)(v13 + 8) = sub_255050(v39);
  }
  sub_281DA0(v31, (__int64 *)v13);
  sub_281DA0(v31 + 9, *(__int64 **)(v6 + 40));
  sub_281DA0(v31 + 17, *(__int64 **)(v48 + 40));
  v32 = (__int64)v53;
  v31[8] = v47;
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = 0;
  v52 = v54;
  sub_2987C0(v59, v32, &v52);
  sub_296FE0(v47, (__int64 *)v48);
  v33 = *(_QWORD *)(a2 + 24);
  if ( v33 )
  {
    v34 = *(_QWORD *)(v33 + 64);
    if ( v34 )
    {
      sub_255410(*(_QWORD *)(v33 + 64));
      j__qfree(v34);
    }
    sub_2559F0(v33);
    clear_tinfo_t(v33 + 48);
    j__qfree(v33);
  }
  *(_QWORD *)(a2 + 24) = v31;
  *(_DWORD *)(a2 + 8) = 74;
  *(_DWORD *)(a2 + 12) = v42;
  *(_QWORD *)a2 = v46;
  return v2;
}
