__int64 __fastcall sub_1F4CB60(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 *v4; // r12
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  char v11; // dl
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  char v16; // al
  __int64 v17; // r14
  bool v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 *v40; // rax
  _QWORD *v41; // rbp
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  char v48; // al
  _QWORD *v49; // r14
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // r15
  unsigned int v60; // eax
  __int64 v61; // r9
  int v62; // r10d
  __int64 v63; // r11
  int v64; // edi
  __int64 v65; // rdi
  bool v66; // zf
  __int64 v67; // [rsp+10h] [rbp-58h]
  __int64 v68; // [rsp+18h] [rbp-50h]
  __int64 v69; // [rsp+20h] [rbp-48h] BYREF
  __int64 v70[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (unsigned __int64 *)(a3 + 72);
  if ( !a3 )
    v4 = nullptr;
  sub_1F1ECA0(a1, a2, v4);
  sub_1F4BCD0(a2, a3);
  v8 = a2[2];
  v9 = *(unsigned int *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9);
  *(_BYTE *)(a3 + 96) = ((unsigned __int8)((unsigned int)v10 >> 11) << 7)
                      | (32 * (((unsigned int)v10 >> 9) & 3))
                      | ((unsigned int)v10 >> 4) & 7
                      | (8 * (((unsigned int)v10 >> 7) & 3));
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B
    && (v11 = (4 * (((unsigned int)v10 >> 23) & 7)) & 0x7F
            | (32 * ((v10 & 0x200000) != 0)) & 0x7F
            | (2 * ((v10 & 0x100000) != 0)) & 0x43
            | ((v10 & 0x80000) != 0)
            | *(_BYTE *)(a3 + 98) & 0x40,
        v12 = 16 * (((unsigned int)v10 >> 26) & 1),
        *(_BYTE *)(a3 + 97) = (16 * ((v10 & 0x4000000) != 0))
                            | ((unsigned __int8)((unsigned int)v10 >> 18) << 7)
                            | (((v10 & 0x20000) != 0) << 6) & 0x6F
                            | (32 * (BYTE2(v10) & 1)) & 0x6F
                            | (8 * ((v10 & 0x8000) != 0)) & 0xF
                            | (4 * ((v10 & 0x4000) != 0)) & 0xF
                            | (2 * ((v10 & 0x2000) != 0)) & 3
                            | ((v10 & 0x1000) != 0),
        *(_BYTE *)(a3 + 98) = ((unsigned int)v10 >> 27 << 7) | v11,
        (v10 & 0x400000) != 0) )
  {
    v15 = *a2;
    v38 = a2[7];
    v39 = *(unsigned int *)(*a2 + 10760);
    v14 = *(unsigned int *)(*a2 + 10764);
    v13 = v39 + 1;
    if ( v39 + 1 > v14 )
    {
      v12 = v15 + 10768;
      v68 = a2[7];
      v67 = *a2;
      sub_2237220(v15 + 10752, v15 + 10768, v13, 16);
      v15 = v67;
      v38 = v68;
      v39 = *(unsigned int *)(v67 + 10760);
    }
    v40 = (__int64 *)(*(_QWORD *)(v15 + 10752) + 16 * v39);
    *v40 = a3;
    v40[1] = v38;
    ++*(_DWORD *)(v15 + 10760);
  }
  else
  {
    v12 = a2[7];
    *(_QWORD *)(a3 + 48) = sub_1F0CF20((_QWORD *)*a2, v12);
  }
  a2[7] = 0;
  v16 = *(_BYTE *)(a3 + 96);
  *(_BYTE *)(a3 + 32) = *(_BYTE *)(a3 + 32) & 0xF8 | v10 & 7;
  if ( (v16 & 7) == 1 && (v10 & 7) != 1 )
  {
    v25 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v13 = *(_QWORD *)(a3 + 16) & 4LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    {
      v14 = *(_BYTE *)(*(_QWORD *)(v25 + 8) + 8LL) & 0x7F;
      if ( (unsigned __int8)v14 <= 0x12u )
      {
LABEL_21:
        if ( ((1LL << v14) & 0x40182) == 0 )
          goto LABEL_8;
LABEL_22:
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3);
        v27 = *(unsigned __int16 *)(a3 + 30);
        LOWORD(v27) = v27 & 0xC000;
        v14 = *(_WORD *)(a3 + 30) & 0x3FDF;
        v12 = *(_WORD *)(a3 + 30) & 0x37DF | 0x800u;
        v13 = (unsigned int)v12 | v27;
        *(_WORD *)(a3 + 30) = v13;
        if ( v26 && (*(_BYTE *)(v26 + 30) & 0x20) != 0 )
        {
          LOWORD(v14) = v14 | 0x820;
          LOWORD(v13) = v13 & 0xC000;
          v13 = (unsigned int)v14 | (unsigned int)v13;
          *(_WORD *)(a3 + 30) = v13;
        }
        goto LABEL_8;
      }
    }
    else
    {
      v14 = *(_BYTE *)(v25 + 8) & 0x7F;
      if ( (unsigned __int8)v14 <= 0x12u )
        goto LABEL_21;
    }
    v14 = ((_BYTE)v14 + 94) & 0x7F;
    if ( (unsigned __int8)v14 > 5u )
      goto LABEL_8;
    goto LABEL_22;
  }
LABEL_8:
  if ( (v10 & 8) == 0 )
    goto LABEL_14;
  v17 = *a2;
  v18 = 1;
  if ( *(_DWORD *)(a2[3] + 4) != 4 )
    v18 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 144) + 2320LL) + 21LL) & 0x40) != 0;
  v12 = *(unsigned int *)(v17 + 13264);
  v7 = v17 + 13248;
  v69 = a3;
  if ( !(_DWORD)v12 )
  {
    v70[0] = 0;
    goto LABEL_57;
  }
  v15 = (unsigned int)(v12 - 1);
  v19 = *(_QWORD *)(v17 + 13248);
  v13 = (unsigned int)v15 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v20 = v19 + 16 * v13;
  v14 = *(_QWORD *)v20;
  if ( a3 != *(_QWORD *)v20 )
  {
    v62 = 1;
    v63 = 0;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !v63 && v14 == -8192 )
          v63 = v20;
        v13 = (unsigned int)v15 & (v62 + (_DWORD)v13);
        v20 = v19 + 16LL * (unsigned int)v13;
        v14 = *(_QWORD *)v20;
        if ( a3 == *(_QWORD *)v20 )
          goto LABEL_13;
        if ( v14 == -4096 )
        {
          if ( v63 )
            v20 = v63;
          break;
        }
        ++v62;
      }
    }
    v64 = *(_DWORD *)(v17 + 13256);
    v14 = (unsigned int)(3 * v12);
    v70[0] = v20;
    v13 = (unsigned int)(v64 + 1);
    if ( 4 * (int)v13 < (unsigned int)v14 )
    {
      v65 = a3;
      v14 = (unsigned int)(v12 - *(_DWORD *)(v17 + 13260) - v13);
      v15 = (unsigned int)v12 >> 3;
      if ( (unsigned int)v14 > (unsigned int)v15 )
      {
LABEL_53:
        v66 = *(_QWORD *)v20 == -4096;
        *(_DWORD *)(v17 + 13256) = v13;
        if ( !v66 )
          --*(_DWORD *)(v17 + 13260);
        *(_QWORD *)v20 = v65;
        *(_BYTE *)(v20 + 8) = 0;
        goto LABEL_13;
      }
LABEL_58:
      sub_1F36030((__int64 *)(v17 + 13248), v12, v13, v14, v7, v15);
      v12 = (unsigned __int64)&v69;
      sub_1F20B50((__int64 *)(v17 + 13248), &v69, v70);
      v65 = v69;
      v13 = (unsigned int)(*(_DWORD *)(v17 + 13256) + 1);
      v20 = v70[0];
      goto LABEL_53;
    }
LABEL_57:
    LODWORD(v12) = 2 * v12;
    goto LABEL_58;
  }
LABEL_13:
  *(_BYTE *)(v20 + 8) = v18;
LABEL_14:
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_15;
  v28 = sub_B8C3D0(a3, v12, v13, v14, v7, v15);
  v29 = *v28;
  v30 = *v28 + 8LL * *((unsigned int *)v28 + 2);
  if ( *v28 >= v30 )
  {
    if ( v29 == v30 )
      goto LABEL_15;
    while ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 148 )
    {
      v30 += 8LL;
      if ( v29 == v30 )
        goto LABEL_15;
    }
    goto LABEL_30;
  }
  v31 = *v28;
  while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 148 )
  {
    v31 += 8LL;
    if ( v30 == v31 )
      goto LABEL_15;
  }
  if ( v30 != v31 )
  {
LABEL_30:
    v32 = sub_1F6A0A0(*(_QWORD *)(a2[2] + 8), *(_QWORD *)(a2[2] + 16));
    if ( v32 )
    {
      v35 = a2[2];
      v36 = *(_QWORD *)(*a2 + 144);
      v37 = *(unsigned int *)(v35 + 24);
      *(_DWORD *)(v35 + 24) = v37 + 1;
      sub_AB1F40(v36, a3, v32, *(_QWORD *)(*(_QWORD *)(v35 + 32) + 8 * v37) != 0, v33, v34);
    }
  }
LABEL_15:
  v21 = a2[2];
  v22 = *(unsigned int *)(v21 + 24);
  *(_DWORD *)(v21 + 24) = v22 + 1;
  v23 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 8 * v22);
  switch ( (_DWORD)v23 )
  {
    case 1:
      v41 = *(_QWORD **)(v21 + 8);
      v42 = sub_1EE13A0((__int64)v41, *(_QWORD *)(v21 + 16), (__int64 *)(v21 + 32), (_DWORD *)(v21 + 24));
      v47 = sub_1EDB980(v41, v42, v43, v44, v45, v46);
      sub_B73C10(a3, v47);
      break;
    case 2:
      v49 = *(_QWORD **)(v21 + 8);
      v50 = sub_1EE13A0((__int64)v49, *(_QWORD *)(v21 + 16), (__int64 *)(v21 + 32), (_DWORD *)(v21 + 24));
      v55 = sub_1EDB980(v49, v50, v51, v52, v53, v54);
      v56 = a2[2];
      v57 = v55;
      v58 = *(unsigned int *)(v56 + 24);
      *(_DWORD *)(v56 + 24) = v58 + 1;
      v59 = *(_QWORD *)(*(_QWORD *)(v56 + 32) + 8 * v58);
      v60 = sub_1EE7490(v56);
      sub_A95CC0(*(_QWORD *)(*a2 + 144), a3, v57, v59, v60, v61);
LABEL_40:
      sub_1F43EA0(a2, v4, a1);
      return a1;
    case 0:
      v48 = *(_BYTE *)(a3 + 28) & 0x7F;
      if ( v48 != 45 && ((v48 + 87) & 0x7Fu) > 2 )
        goto LABEL_40;
      break;
  }
  return a1;
}
