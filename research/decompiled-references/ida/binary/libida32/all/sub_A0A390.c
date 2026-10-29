void __fastcall sub_A0A390(
        __int64 *a1,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned __int64 a9)
{
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // r8
  int *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  const __m128i *v26; // rsi
  __m128i *v27; // rdi
  __int64 v28; // rdx
  int *v29; // rcx
  int v30; // eax
  int v31; // esi
  __int64 v32; // r9
  __int64 v33; // rcx
  int *v34; // rdx
  int v35; // eax
  __int64 v36; // r8
  int v37; // r13d
  _DWORD *v38; // rax
  __int64 v39; // rbp
  __int64 *v40; // rbp
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rax
  char v50; // al
  __int128 v51; // [rsp+10h] [rbp-278h]
  __int64 *v53; // [rsp+20h] [rbp-268h]
  __int64 v54; // [rsp+20h] [rbp-268h]
  __int64 v55; // [rsp+28h] [rbp-260h]
  int *v56; // [rsp+30h] [rbp-258h]
  int *v57; // [rsp+30h] [rbp-258h]
  int v58; // [rsp+3Ch] [rbp-24Ch] BYREF
  int *v59; // [rsp+40h] [rbp-248h] BYREF
  int v60; // [rsp+48h] [rbp-240h]
  int *v61; // [rsp+50h] [rbp-238h] BYREF
  int v62; // [rsp+58h] [rbp-230h]
  __int64 *v63; // [rsp+60h] [rbp-228h] BYREF
  void *ptr; // [rsp+68h] [rbp-220h] BYREF
  __int64 v65; // [rsp+70h] [rbp-218h] BYREF
  __int64 v66; // [rsp+78h] [rbp-210h] BYREF
  char v67; // [rsp+80h] [rbp-208h]
  _BYTE *v68; // [rsp+88h] [rbp-200h]
  __int64 v69; // [rsp+90h] [rbp-1F8h]
  _BYTE v70[96]; // [rsp+98h] [rbp-1F0h] BYREF
  char v71; // [rsp+F8h] [rbp-190h]
  __int128 v72; // [rsp+100h] [rbp-188h] BYREF
  __int64 v73; // [rsp+110h] [rbp-178h] BYREF
  _BYTE v74[168]; // [rsp+118h] [rbp-170h] BYREF
  char v75; // [rsp+1C0h] [rbp-C8h]
  __int64 v76; // [rsp+1C8h] [rbp-C0h] BYREF

  v11 = *a1;
  v65 = 0x200000000LL;
  v58 = a2;
  v12 = a8;
  *(_QWORD *)&v51 = a5;
  *((_QWORD *)&v51 + 1) = a6;
  ptr = &v66;
  LODWORD(v63) = a7;
  if ( a9 > 2 )
    sub_22134E0(&ptr, &v66, a9, 8);
  v13 = a8 + 16 * a9;
  if ( v13 != a8 )
  {
    do
    {
      v14 = sub_A00840(v11, *(const void **)v12, *(_QWORD *)(v12 + 8));
      v15 = (unsigned int)v65;
      v16 = (unsigned int)v65 + 1LL;
      if ( v16 > HIDWORD(v65) )
      {
        v55 = v14;
        sub_22134E0(&ptr, &v66, v16, 8);
        v15 = (unsigned int)v65;
        v17 = ptr;
        v14 = v55;
      }
      else
      {
        v17 = ptr;
      }
      v12 += 16;
      v17[v15] = v14;
      LODWORD(v65) = v65 + 1;
    }
    while ( v13 != v12 );
  }
  LODWORD(v55) = *(_DWORD *)(v11 + 768);
  if ( (unsigned __int8)sub_9FFB80((__int64 *)(v11 + 760), (unsigned int *)&v63, &v59) )
  {
    v19 = *((_QWORD *)v59 + 5);
    goto LABEL_9;
  }
  v33 = *(unsigned int *)(v11 + 776);
  v34 = v59;
  v35 = *(_DWORD *)(v11 + 768) + 1;
  v36 = (unsigned int)(4 * v35);
  v61 = v59;
  if ( (unsigned int)v36 >= 3 * (int)v33 )
  {
    sub_A02530(v11 + 760, 2 * v33, (__int64)v59, v33, v36, v18);
  }
  else
  {
    if ( (int)v33 - *(_DWORD *)(v11 + 772) - v35 > (unsigned int)v33 >> 3 )
      goto LABEL_25;
    sub_A02530(v11 + 760, v33, (__int64)v59, v33, v36, v18);
  }
  sub_9FFB80((__int64 *)(v11 + 760), (unsigned int *)&v63, &v61);
  v34 = v61;
  v35 = *(_DWORD *)(v11 + 768) + 1;
LABEL_25:
  *(_DWORD *)(v11 + 768) = v35;
  LODWORD(v72) = -1;
  *((_QWORD *)&v72 + 1) = v74;
  v73 = 0x200000000LL;
  if ( *v34 != -1 || (v57 = v34, v50 = sub_9FAEC0((__int64)v34, (__int64)&v72), v34 = v57, !v50) )
    --*(_DWORD *)(v11 + 772);
  v56 = v34;
  *v34 = (int)v63;
  sub_9EEAD0((__int64 *)v34 + 1, (__int64 *)&ptr);
  v19 = v55 << 33;
  *((_QWORD *)v56 + 5) = v55 << 33;
LABEL_9:
  if ( ptr != &v66 )
    free(ptr);
  HIDWORD(v59) = v19 >> 33;
  v20 = *a1;
  LOBYTE(v59) = a3;
  v60 = v58;
  v53 = (__int64 *)(v20 + 712);
  if ( sub_9FDB50((__int64 *)(v20 + 712), (char *)&v59, &v61) )
  {
    v22 = v61 + 4;
    goto LABEL_13;
  }
  v28 = *(unsigned int *)(v20 + 728);
  v29 = v61;
  v30 = *(_DWORD *)(v20 + 720) + 1;
  v31 = 2 * v28;
  v32 = (unsigned int)(4 * v30);
  v63 = (__int64 *)v61;
  if ( (unsigned int)v32 < 3 * (int)v28 )
  {
    if ( (int)v28 - *(_DWORD *)(v20 + 724) - v30 > (unsigned int)v28 >> 3 )
      goto LABEL_20;
    v31 = v28;
  }
  sub_A0A0E0((__int64)v53, v31, v28, (__int64)v61, v21, v32);
  sub_9FDB50(v53, (char *)&v59, &v63);
  v29 = (int *)v63;
  v30 = *(_DWORD *)(v20 + 720) + 1;
LABEL_20:
  *(_DWORD *)(v20 + 720) = v30;
  LOBYTE(v72) = -1;
  *(_QWORD *)((char *)&v72 + 4) = -1;
  if ( v29[2] != -1 || !sub_9FAF30((__int64)v29, (__int64)&v72) )
    --*(_DWORD *)(v20 + 724);
  v22 = v29 + 4;
  v29[2] = v60;
  v29[1] = HIDWORD(v59);
  *(_BYTE *)v29 = (_BYTE)v59;
  *((_QWORD *)v29 + 2) = v29 + 8;
  *((_QWORD *)v29 + 3) = 0x100000000LL;
LABEL_13:
  v72 = v51;
  sub_9F0070((__int64)&v73, a4);
  v75 = *(_BYTE *)(a4 + 176) & 3 | v75 & 0xFC;
  sub_9F03A0((__int64)&v76, a4 + 184);
  v23 = (unsigned int)v22[2];
  v24 = v23 + 1;
  if ( v23 + 1 > (unsigned __int64)(unsigned int)v22[3] )
  {
    if ( *(_QWORD *)v22 > (unsigned __int64)&v72 || (unsigned __int64)&v72 >= *(_QWORD *)v22 + 328 * v23 )
    {
      sub_9F2580((__int64)v22, v24);
      v25 = *(_QWORD *)v22;
      v23 = (unsigned int)v22[2];
      v26 = (const __m128i *)&v72;
    }
    else
    {
      v54 = *(_QWORD *)v22;
      sub_9F2580((__int64)v22, v24);
      v23 = (unsigned int)v22[2];
      v25 = *(_QWORD *)v22;
      v26 = (const __m128i *)((char *)&v72 + *(_QWORD *)v22 - v54);
    }
  }
  else
  {
    v25 = *(_QWORD *)v22;
    v26 = (const __m128i *)&v72;
  }
  v27 = (__m128i *)(v25 + 328 * v23);
  *v27 = _mm_loadu_si128(v26);
  sub_9FD300((__int64)v27[1].m128i_i64, (__int64)v26[1].m128i_i64);
  ++v22[2];
  sub_9FC040((__int64)&v73);
  if ( (*(_BYTE *)(a4 + 176) & 1) == 0 )
    return;
  v37 = *sub_A021A0(*a1 + 616, &v58);
  v38 = sub_A021A0(*a1 + 640, &v58);
  v39 = *a1;
  LODWORD(v38) = *v38;
  LODWORD(v61) = v37;
  v40 = (__int64 *)(v39 + 592);
  BYTE4(v61) = 0;
  v62 = (int)v38;
  if ( !(unsigned __int8)sub_9FE290(v40, (__int64)&v61, &v72) )
  {
    v47 = sub_A05BF0((__int64)v40, (__int64)&v61, v72, v41, v42, v43);
    v45 = v47 + 16;
    *(_QWORD *)v47 = v61;
    v48 = v62;
    *(_DWORD *)(v47 + 16) = 0;
    *(_DWORD *)(v47 + 8) = v48;
    *(_QWORD *)(v47 + 24) = v47 + 40;
    *(_QWORD *)(v47 + 32) = 0x100000000LL;
    goto LABEL_38;
  }
  v44 = *(_QWORD *)(v72 + 24);
  v45 = v72 + 16;
  v46 = v44 + 176LL * *(unsigned int *)(v72 + 32);
  if ( v44 == v46 )
  {
LABEL_38:
    ptr = nullptr;
    v63 = &v65;
    v68 = v70;
    LOBYTE(v65) = 0;
    v72 = v51;
    v67 &= 0xF0u;
    v69 = 0;
    v70[0] = 0;
    v70[48] = 0;
    v70[88] = 0;
    v71 = 0;
    sub_9E62C0((__int64)&v73, (__int64)&v63);
    v74[144] = v71;
    sub_A013A0(v45 + 8, (unsigned __int64)&v72);
    sub_9E5F30((__int64)&v73);
    sub_9E5F30((__int64)&v63);
    v49 = *(_QWORD *)(v45 + 8) + 176LL * *(unsigned int *)(v45 + 16);
    *(_BYTE *)(v49 - 8) |= 8u;
    return;
  }
  while ( *(_DWORD *)v44 != (_DWORD)v51
       || ((DWORD1(v51) ^ *(_DWORD *)(v44 + 4)) & 0x7FFFFFFF) != 0
       || ((DWORD2(v51) ^ *(_DWORD *)(v44 + 8)) & 0x7FFFFFFF) != 0
       || ((HIDWORD(v51) ^ *(_DWORD *)(v44 + 12)) & 0x7FFFFFFF) != 0 )
  {
    v44 += 176;
    if ( v46 == v44 )
      goto LABEL_38;
  }
  *(_BYTE *)(v44 + 168) |= 8u;
}

