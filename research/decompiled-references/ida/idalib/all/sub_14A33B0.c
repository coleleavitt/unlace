__int64 __fastcall sub_14A33B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v5; // r13d
  __int16 v6; // ax
  __int64 *v7; // rdi
  int *v8; // rsi
  __int16 v9; // dx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  __int64 *v15; // rdi
  bool v16; // zf
  int v17; // eax
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  _BYTE *v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 *v30; // rdi
  const __m128i *v31; // r15
  int v32; // r13d
  __int64 v33; // r12
  __int64 v34; // [rsp+0h] [rbp-308h]
  __int64 v35; // [rsp+0h] [rbp-308h]
  __int64 v36; // [rsp+10h] [rbp-2F8h]
  int v37; // [rsp+18h] [rbp-2F0h]
  void *v38; // [rsp+20h] [rbp-2E8h]
  __int64 v39; // [rsp+28h] [rbp-2E0h] BYREF
  __int64 v40; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-2C8h] BYREF
  bool v42; // [rsp+48h] [rbp-2C0h]
  __int128 v43; // [rsp+50h] [rbp-2B8h] BYREF
  void *v44[2]; // [rsp+60h] [rbp-2A8h]
  __int128 v45; // [rsp+70h] [rbp-298h]
  __int64 v46; // [rsp+80h] [rbp-288h] BYREF
  _QWORD v47[2]; // [rsp+88h] [rbp-280h] BYREF
  int v48; // [rsp+9Ch] [rbp-26Ch]
  __m128i v49; // [rsp+A0h] [rbp-268h]
  _BYTE *v50; // [rsp+B0h] [rbp-258h] BYREF
  char v51; // [rsp+B8h] [rbp-250h]
  __int64 v52; // [rsp+C0h] [rbp-248h]
  int v53; // [rsp+C8h] [rbp-240h]
  __int16 v54; // [rsp+CCh] [rbp-23Ch]
  __int64 (__fastcall *v55)(__int64); // [rsp+D0h] [rbp-238h]
  __int64 v56; // [rsp+D8h] [rbp-230h]
  __int64 v57; // [rsp+E0h] [rbp-228h]
  __int64 *v58; // [rsp+F0h] [rbp-218h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-210h]
  __int64 *v60; // [rsp+100h] [rbp-208h]
  const __m128i *v61; // [rsp+108h] [rbp-200h]
  void **v62; // [rsp+110h] [rbp-1F8h]
  __int64 *v63; // [rsp+118h] [rbp-1F0h]
  _BYTE **v64; // [rsp+120h] [rbp-1E8h]
  void *v65; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v66; // [rsp+138h] [rbp-1D0h]
  _BYTE v67[96]; // [rsp+140h] [rbp-1C8h] BYREF
  _DWORD v68[10]; // [rsp+1A0h] [rbp-168h] BYREF
  void *v69; // [rsp+1C8h] [rbp-140h]
  __int64 v70; // [rsp+1D8h] [rbp-130h] BYREF
  __int64 v71; // [rsp+1E8h] [rbp-120h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-118h]
  __int64 v73; // [rsp+200h] [rbp-108h] BYREF
  void *v74; // [rsp+220h] [rbp-E8h]
  int v75; // [rsp+22Ch] [rbp-DCh]

  v39 = a2;
  v43 = 0;
  *(_OWORD *)v44 = 0;
  v45 = 0;
  if ( (unsigned __int8)sub_14D0170(a1, (unsigned int)&v43, 0, 0, 0, 0, 0, 0, 0, 0, 0) )
  {
    v3 = 1;
    goto LABEL_3;
  }
  v5 = *(_DWORD *)(a1 + 16);
  v40 = 0;
  sub_147A4A0((__int64)v68, a1 + 504);
  v6 = *(_WORD *)(a1 + 32);
  v42 = 0;
  v41 = 0;
  switch ( v6 )
  {
    case 5:
      v7 = *(__int64 **)(a1 + 8);
      v8 = (int *)(a1 + 16);
      v40 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v7, (int *)(a1 + 16));
      break;
    case 424:
      v8 = v68;
      sub_14A27E0(a1, (__int64)v68);
      break;
    case 425:
      v8 = v68;
      sub_14A2C40(a1, v68);
      break;
    default:
      if ( v6 != 418
        || (v13 = sub_1565590(a1, a1 + 16)) == 0
        || (v14 = *(_DWORD *)(v13 + 32), (unsigned int)(v14 - 4) > 1) && (v14 & 0xFFFFFFFD) != 0 )
      {
        v3 = 1;
        sub_1564840(&v65, a1, a1 + 16, 1629);
        sub_AEA040((__int64)&v65);
        goto LABEL_10;
      }
      sub_154E5D0(a1, &v43, 0, 1);
      v15 = *(__int64 **)(a1 + 8);
      v8 = (int *)(a1 + 16);
      v16 = *(_QWORD *)(a1 + 24) == 0;
      v41 = *(_QWORD *)(a1 + 24);
      v17 = *(_DWORD *)(a1 + 20);
      v42 = v16;
      if ( !v17 )
        v17 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v17;
      sub_14634E0(v15, v8);
      break;
  }
  v9 = *(_WORD *)(a1 + 32);
  v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10;
  if ( v10 && v9 == 24 )
  {
    sub_1564840(&v65, a1, a1 + 16, 2118);
    sub_AEA040((__int64)&v65);
    v26 = sub_14EE310(a1);
    if ( v26 != 1 )
    {
      v27 = 0;
      if ( *(_WORD *)(a1 + 32) == 27 )
      {
        v30 = *(__int64 **)(a1 + 8);
        v34 = v26;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v30, (int *)(a1 + 16));
        v27 = *(_DWORD *)(a1 + 40);
        v26 = v34;
      }
      if ( !v42 )
      {
        v3 = sub_1859ED0(*(_QWORD *)(a1 + 96), v39, (__int64)v68, v5, v26 & 0xFFFFFFFFFFFFFFFELL, v27);
        goto LABEL_10;
      }
    }
    goto LABEL_25;
  }
  if ( v9 != 22 )
  {
    if ( !v42 )
    {
      v11 = a1 + 16;
      if ( v10 )
      {
        sub_1564840(&v65, a1, v11, 17);
        sub_AE9DF0((unsigned __int8 **)&v65, 22, 4u);
        v12 = 24;
      }
      else
      {
        sub_1564840(&v65, a1, v11, 14);
        v12 = 22;
      }
      v3 = 1;
      sub_AE9DF0((unsigned __int8 **)&v65, v12, 4u);
      sub_AEA040((__int64)&v65);
      goto LABEL_10;
    }
LABEL_25:
    v3 = 1;
    goto LABEL_10;
  }
  v52 = a1;
  v50 = (_BYTE *)(a1 + 1952);
  v18 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v51 = v18;
  v54 = 63;
  v53 = 1507350;
  v55 = sub_146A990;
  v56 = 0;
  v57 = 0;
  sub_149E920((__int64)&v50);
  v16 = *(_WORD *)(a1 + 32) == 23;
  v59 = a1;
  v65 = v67;
  v66 = 0xC00000000LL;
  v58 = &v41;
  v60 = &v39;
  v61 = (const __m128i *)&v43;
  v62 = &v65;
  v63 = &v40;
  v64 = &v50;
  if ( v16 || (v8 = (int *)&v65, v46 = a1, v47[0] = &v58, !(unsigned __int8)sub_14BDD40(a1, &v65, sub_149E900, &v46, 0)) )
  {
    sub_14808E0((__int64)&v50, (__int64 *)v8, v19, v20, v21, v22);
    v25 = 0;
    if ( *(_WORD *)(a1 + 32) == 27 )
    {
      v29 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v29, (int *)(a1 + 16));
      v25 = *(_DWORD *)(a1 + 40);
    }
    v24 = v65;
    if ( v42 )
    {
      v3 = 1;
    }
    else
    {
      v28 = sub_1859E30(
              *(_QWORD *)(a1 + 96),
              v39,
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
              (unsigned int)&v43,
              v40,
              v41,
              (__int64)v68,
              v5,
              (unsigned int)v57,
              (__int64)v65,
              (unsigned int)v66,
              HIDWORD(v57),
              v25);
      v24 = v65;
      v3 = v28;
    }
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 968LL) && !*(_BYTE *)(a1 + 368) && !*((_BYTE *)v58 + 8) )
    {
      v31 = v61;
      v32 = *((_DWORD *)v64 + 12);
      v35 = *(_QWORD *)(*(_QWORD *)(v59 + 96) + 656LL);
      v33 = *v63;
      v36 = *v58;
      v38 = *v62;
      v37 = *((_DWORD *)v62 + 2);
      v46 = v61->m128i_i64[0];
      sub_E90750((__int64)v47, &v61->m128i_i64[1]);
      v49 = _mm_loadu_si128(v31 + 2);
      sub_1740220(v35, *v60, (unsigned int)&v46, v36, (_DWORD)v38, v37, v33, v32, 0);
      if ( v48 )
        free((void *)v47[1]);
      *(_BYTE *)(v59 + 368) = 1;
    }
    v23 = a1;
    LOWORD(v46) = 23;
    v3 = 1;
    sub_15680D0(v23, &v46, 1, 1);
    v24 = v65;
  }
  if ( v24 != v67 )
    free(v24);
  *v50 = v51;
LABEL_10:
  if ( v75 )
    free(v74);
  sub_15DCED0(v71, &v71);
  if ( ptr != &v73 )
    free(ptr);
  if ( v69 != &v70 )
  {
    free(v69);
    if ( !HIDWORD(v44[1]) )
      return v3;
LABEL_16:
    free(v44[0]);
    return v3;
  }
LABEL_3:
  if ( HIDWORD(v44[1]) )
    goto LABEL_16;
  return v3;
}
