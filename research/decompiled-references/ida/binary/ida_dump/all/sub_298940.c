__int64 __fastcall sub_298940(_QWORD *a1, __int64 a2)
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
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __m128d v37; // xmm0
  unsigned int v38; // edi
  int v39; // eax
  unsigned int v40; // [rsp+10h] [rbp-168h]
  int v41; // [rsp+10h] [rbp-168h]
  char v42; // [rsp+17h] [rbp-161h]
  int v43; // [rsp+20h] [rbp-158h]
  int v44; // [rsp+24h] [rbp-154h]
  unsigned __int64 v45; // [rsp+28h] [rbp-150h]
  __int64 v46; // [rsp+30h] [rbp-148h]
  __int64 v47; // [rsp+38h] [rbp-140h]
  int v48; // [rsp+48h] [rbp-130h] BYREF
  int v49; // [rsp+4Ch] [rbp-12Ch] BYREF
  __int64 v50; // [rsp+50h] [rbp-128h] BYREF
  __int64 *v51; // [rsp+58h] [rbp-120h] BYREF
  __int64 **v52; // [rsp+60h] [rbp-118h] BYREF
  __int64 *v53; // [rsp+68h] [rbp-110h]
  __int64 v54; // [rsp+70h] [rbp-108h] BYREF
  char v55; // [rsp+78h] [rbp-100h]
  __int64 v56; // [rsp+80h] [rbp-F8h] BYREF
  char v57; // [rsp+88h] [rbp-F0h]
  __int64 v58[6]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-B8h]
  _DWORD v60[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+D8h] [rbp-A0h]
  __int64 v62; // [rsp+E8h] [rbp-90h]
  _DWORD v63[2]; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-80h]
  __int64 v65; // [rsp+108h] [rbp-70h]
  int v66; // [rsp+110h] [rbp-68h] BYREF
  int v67; // [rsp+114h] [rbp-64h]
  __int128 v68; // [rsp+118h] [rbp-60h]
  __int64 v69; // [rsp+128h] [rbp-50h]
  unsigned __int64 v70; // [rsp+138h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  sub_283C00(&v52, a1, a2);
  if ( v53 == *v52 )
    return 0;
  v6 = v53[1];
  v7 = *(_DWORD *)(v6 + 24) == 72;
  v53 = (__int64 *)v6;
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 8) - 2) > 0xD )
    return 0;
  if ( (unsigned __int8)sub_285160(*(_QWORD *)(v6 + 40), 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v8) )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 24LL);
  if ( *(_DWORD *)(v9 + 8) != 65 )
    return 0;
  v10 = *(int *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 24);
  v55 = 0;
  v54 = 0;
  v12 = sub_1E0010((__int64)&v54, &v48, (_DWORD *)(*(_QWORD *)(v11 + 432) + 104 * v10));
  if ( !v12 )
    return 0;
  v13 = *(_QWORD *)(a2 + 24);
  v42 = sub_285230(v13);
  if ( v42 )
    return 0;
  switch ( *(_DWORD *)(v13 + 8) )
  {
    case 0x16:
      v40 = 44;
      break;
    case 0x17:
    case 0x41:
      v40 = 43;
      break;
    case 0x18:
      v40 = 50;
      break;
    case 0x19:
      v40 = 45;
      break;
    case 0x1A:
      v40 = 52;
      break;
    case 0x1B:
      v40 = 48;
      break;
    case 0x1C:
      v40 = 49;
      break;
    case 0x1D:
      v40 = 47;
      break;
    case 0x1E:
      v40 = 51;
      break;
    case 0x1F:
      v40 = 46;
      break;
    default:
      return 0;
  }
  v57 = 0;
  v7 = *(_DWORD *)(v13 + 8) == 65;
  v56 = 0;
  v14 = *(_QWORD *)(v13 + 24);
  v49 = 8;
  if ( v7 )
  {
    v20 = nullptr;
    if ( sub_259AA0(v14, v9) )
      return 0;
  }
  else
  {
    v15 = sub_254FE0(v14);
    v16 = sub_259AA0(v15, v9);
    v17 = *(_QWORD *)(v13 + 32);
    if ( v16 )
    {
      v34 = sub_254FE0(v17);
      if ( sub_259AA0(v34, v9) )
        return 0;
      v42 = v12;
      v17 = *(_QWORD *)(v13 + 24);
    }
    v18 = sub_254FE0(v17);
    v19 = *(_DWORD *)(v18 + 8);
    if ( v19 == 65 )
    {
      v20 = nullptr;
      if ( !(unsigned __int8)sub_1E0010(
                               (__int64)&v56,
                               &v49,
                               (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 432LL) + 104LL * *(int *)(v18 + 32))) )
        return 0;
    }
    else
    {
      if ( v19 != 61 )
        return 0;
      v20 = (__int64 *)sub_255A30(*(__int64 **)(v18 + 24));
    }
  }
  v45 = **(_QWORD **)(v6 + 40);
  if ( v45 == -1 )
    v45 = *(_QWORD *)(v6 + 16);
  v21 = *(_QWORD *)(a2 + 24);
  v50 = 0;
  v46 = *(_QWORD *)(v21 + 64);
  v22 = sub_2968B0(&v50, v46, v9);
  if ( !v22 )
    return 0;
  v47 = v50;
  v23 = *(_QWORD *)(a1[8] + 8LL);
  v24 = sub_670B0(v23, v45);
  v26 = (int)v24;
  if ( v24 && *((_DWORD *)v24 + 19) == 3 && (v35 = v24[6]) != 0 )
  {
    while ( v45 != *(_QWORD *)(v35 + 24) )
    {
      v35 = *(_QWORD *)(v35 + 8);
      if ( !v35 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v58[0] = (__int64)off_4E0DD0;
    memset(&v58[1], 0, 32);
    v58[5] = v45;
    v59 = 0;
    if ( !(unsigned int)sub_11F9E0(v23, v58) )
      return 0;
    v26 = v59;
    if ( !v59 )
      return 0;
  }
  v27 = 0;
  v28 = v26 + 448;
  v43 = v49;
  v60[1] = v49;
  v44 = v48;
  v51 = v20;
  v60[0] = 0;
  v62 = 0;
  v63[0] = 0;
  v63[1] = v48;
  v65 = 0;
  v61 = 0;
  v64 = 0;
  if ( v57 )
  {
    if ( !(unsigned __int8)sub_1E0180(v28, (unsigned int)v60, (unsigned int)&v56, 0, 0, v25) )
      goto LABEL_62;
    v22 = sub_312AF0(v60, &v51);
  }
  v2 = sub_1E0180(v28, (unsigned int)v63, (unsigned int)&v54, 0, v27, v25);
  if ( !(_BYTE)v2 )
  {
LABEL_62:
    sub_312B80(v63);
    sub_312B80(v60);
    return 0;
  }
  if ( v22 )
  {
    if ( v43 <= v44 )
    {
      if ( v43 < v44 )
      {
        v7 = v40 == (unsigned int)sub_32EAF0(v40);
        v51 = (__int64 *)sub_32ABC0(v51, (unsigned int)v44, !v7);
        v43 = v44;
      }
      goto LABEL_32;
    }
    v36 = sub_32EAF0(v40);
    if ( (unsigned __int8)sub_313BB0(v63, (unsigned int)v43, v40 != v36) )
    {
LABEL_32:
      v68 = 0;
      v67 = v43;
      v66 = 0;
      v69 = 0;
      sub_312D90(v60, &v66);
      sub_312B80(&v66);
      sub_313200(v60, v40 - 43, v51);
      sub_3147B0(v60, v63);
      goto LABEL_33;
    }
    goto LABEL_62;
  }
  if ( !(unsigned __int8)sub_312AF0(v63, v58) )
    goto LABEL_62;
  if ( v42 != 1 && v40 != 44 && v40 != 43 )
    v40 = sub_32EA00(v40);
  if ( v43 < v44 )
  {
    v39 = sub_32EAF0(v40);
    if ( !(unsigned __int8)sub_313BB0(v60, (unsigned int)v44, v40 != v39) )
      goto LABEL_62;
  }
  else if ( v43 > v44 )
  {
    v7 = v40 == (unsigned int)sub_32EAF0(v40);
    v58[0] = sub_32ABC0(v58[0], (unsigned int)v43, !v7);
    v44 = v43;
  }
  v68 = 0;
  v67 = v44;
  v66 = 0;
  v69 = 0;
  sub_312D90(v63, &v66);
  sub_312B80(&v66);
  sub_313200(v63, v40 - 43, v58[0]);
  sub_3147B0(v63, v60);
LABEL_33:
  v29 = sub_312DC0(v63, v60);
  sub_312B80(v63);
  sub_312B80(v60);
  if ( v29 )
    return 0;
  v41 = *(_DWORD *)(v6 + 28);
  v30 = j__qalloc_or_throw();
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
  if ( v42 )
  {
    v37 = (__m128d)_mm_loadu_si128((const __m128i *)(v13 + 24));
    v38 = *(_DWORD *)(v13 + 8);
    *(__m128d *)(v13 + 24) = _mm_shuffle_pd(v37, v37, 1);
    *(_DWORD *)(v13 + 8) = sub_254C90(v38);
  }
  sub_2819E0(v31, (__int64 *)v13);
  sub_2819E0(v31 + 9, *(__int64 **)(v6 + 40));
  sub_2819E0(v31 + 17, *(__int64 **)(v47 + 40));
  v32 = (__int64)v52;
  v31[8] = v46;
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = 0;
  v51 = v53;
  sub_298400(v58, v32, &v51);
  sub_296C20(v46, (__int64 *)v47);
  v33 = *(_QWORD *)(a2 + 24);
  if ( v33 )
  {
    if ( *(_QWORD *)(v33 + 64) )
    {
      sub_255050(*(_QWORD *)(v33 + 64));
      j__qfree();
    }
    sub_255630(v33);
    clear_tinfo_t();
    j__qfree();
  }
  *(_QWORD *)(a2 + 24) = v31;
  *(_DWORD *)(a2 + 8) = 74;
  *(_DWORD *)(a2 + 12) = v41;
  *(_QWORD *)a2 = v45;
  return v2;
}
