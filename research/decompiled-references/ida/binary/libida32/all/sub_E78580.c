__int64 __fastcall sub_E78580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned int *v15; // rdi
  _DWORD *v16; // rsi
  size_t v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22; // al
  unsigned __int8 v23; // r13
  unsigned int v24; // r14d
  unsigned __int8 v25; // r12
  unsigned __int8 v26; // r13
  __int64 v27; // rsi
  unsigned __int8 v28; // dl
  __int64 v29; // rsi
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // r13d
  char v50; // al
  __int64 v51; // rdi
  char v52; // al
  __int64 v53; // rdi
  char v54; // al
  __int64 v55; // rdi
  __int64 v56; // rax
  int v57; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v58; // [rsp+8h] [rbp-F0h]
  __int64 v59; // [rsp+14h] [rbp-E4h] BYREF
  char v60; // [rsp+1Ch] [rbp-DCh]
  _QWORD v61[4]; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v62; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-A8h]
  __int64 v64; // [rsp+58h] [rbp-A0h]
  __int64 v65; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v66[17]; // [rsp+70h] [rbp-88h] BYREF

  v8 = a8;
  v63 = a3;
  v9 = *(_QWORD *)(a7 + 40);
  v64 = a4;
  v65 = a1;
  v62 = _mm_loadh_ps((const double *)&a7);
  v61[0] = a8;
  v61[1] = a5;
  v61[2] = a6;
  v61[3] = a1;
  if ( (v9 & 7) != 0 )
  {
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = v10;
  }
  v12 = *(_QWORD *)(a8 + 40);
  if ( (v12 & 7) != 0 )
    BUG();
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = *(unsigned int **)(v11 + 16);
  v16 = *(_DWORD **)(v13 + 16);
  v17 = *v15;
  if ( v17 != *v16 || *v15 && (v16 += 4, memcmp(v15 + 4, v16, v17)) )
  {
    sub_E74C60((__int64)v66, (__int64)&v62, 0);
    sub_AC60B0(v66, v10, 5u);
    sub_AC6300((__int64)v66);
    sub_E74D10((__int64)v66, v61, 0);
    v28 = 5;
    v29 = v13;
LABEL_15:
    v24 = 1;
    sub_AC60B0(v66, v29, v28);
    sub_AC6300((__int64)v66);
    return v24;
  }
  v18 = *(_QWORD *)(v8 + 48);
  v19 = *(_QWORD *)(a7 + 48);
  v57 = sub_E747C0(v19);
  if ( v57 != (unsigned int)sub_E747C0(v18) )
  {
    sub_E74C60((__int64)v66, (__int64)&v62, 1u);
    sub_AC60B0(v66, v10, 5u);
    sub_AC60B0(v66, v19, 8u);
    sub_AC6300((__int64)v66);
    sub_E74D10((__int64)v66, v61, 1u);
    sub_AC60B0(v66, v13, 5u);
    v28 = 8;
    v29 = v18;
    goto LABEL_15;
  }
  v22 = *(_BYTE *)(a7 + 68);
  v23 = v22 & 1;
  if ( (*(_BYTE *)(v8 + 68) & 1) != (v22 & 1) )
  {
    v58 = *(_BYTE *)(v8 + 68) & 1;
    v24 = 1;
    sub_E74C60((__int64)v66, (__int64)&v62, 2u);
    sub_AC60B0(v66, v10, 5u);
    sub_E74100(v66, v23);
    sub_AC6300((__int64)v66);
    sub_E74D10((__int64)v66, v61, 2u);
    sub_AC60B0(v66, v13, 5u);
    sub_E74100(v66, v58);
    sub_AC6300((__int64)v66);
    return v24;
  }
  v24 = v22 & *(_BYTE *)(v8 + 68) & 1;
  if ( (v22 & *(_BYTE *)(v8 + 68) & 1) == 0 )
    goto LABEL_10;
  v43 = v22 & 0xC;
  v44 = *(_QWORD *)(a7 + 72);
  if ( (_BYTE)v43 != 12 && (v22 & 0xC) != 0 )
    v44 = *(_QWORD *)(v44 + 8);
  v49 = sub_E74880(v44, (__int64)v16, v43, a7, v20, v21);
  v50 = *(_BYTE *)(v8 + 68);
  if ( (v50 & 1) != 0 )
  {
    v51 = *(_QWORD *)(v8 + 72);
    v45 = v50 & 0xC;
    if ( (_BYTE)v45 != 12 && (v50 & 0xC) != 0 )
      v51 = *(_QWORD *)(v51 + 8);
  }
  else
  {
    v51 = 0;
  }
  if ( v49 == (unsigned int)sub_E74880(v51, (__int64)v16, v45, v46, v47, v48) )
  {
LABEL_10:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL) & 8) != 0 )
    {
      v25 = (*(_BYTE *)(v8 + 68) & 2) != 0;
      v26 = (*(_BYTE *)(a7 + 68) & 2) != 0;
      if ( v25 != v26 )
      {
        sub_E74C60((__int64)v66, (__int64)&v62, 4u);
        sub_AC60B0(v66, v10, 5u);
        sub_E74100(v66, v26);
        sub_AC6300((__int64)v66);
        sub_E74D10((__int64)v66, v61, 4u);
        sub_AC60B0(v66, v13, 5u);
        v27 = v25;
LABEL_13:
        sub_E74100(v66, v27);
        v24 = 1;
        sub_AC6300((__int64)v66);
        return v24;
      }
      v31 = sub_B54370(a7);
      v36 = sub_B54370(v8);
      if ( (v31 == 0) != (v36 == 0) )
      {
        sub_E74C60((__int64)v66, (__int64)&v62, 5u);
        sub_AC60B0(v66, v10, 5u);
        sub_E74100(v66, v31 != 0);
        sub_AC6300((__int64)v66);
        sub_E74D10((__int64)v66, v61, 5u);
        sub_AC60B0(v66, v13, 5u);
        v27 = v36 != 0;
        goto LABEL_13;
      }
      LOBYTE(v24) = v36 != 0 && v31 != 0;
      if ( (_BYTE)v24 )
      {
        LOBYTE(v32) = v31 == 0;
        v37 = sub_E74880(v31, (__int64)v16, v32, v33, v34, v35);
        if ( v37 != (unsigned int)sub_E74880(v36, (__int64)v16, v38, v39, v40, v41) )
        {
          sub_E74C60((__int64)v66, (__int64)&v62, 6u);
          sub_AC60B0(v66, v10, 5u);
          v60 = 1;
          v59 = sub_EC8B80(v31);
          sub_AC88D0((__int64 *)v66, &v59);
          sub_AC6300((__int64)v66);
          sub_E74D10((__int64)v66, v61, 6u);
          sub_AC60B0(v66, v13, 5u);
          v42 = sub_EC8B80(v36);
          v60 = 1;
          v59 = v42;
          sub_AC88D0((__int64 *)v66, &v59);
          sub_AC6300((__int64)v66);
          return v24;
        }
      }
    }
    return 0;
  }
  sub_E74C60((__int64)v66, (__int64)&v62, 3u);
  sub_AC60B0(v66, v10, 5u);
  v52 = *(_BYTE *)(a7 + 68);
  if ( (v52 & 1) != 0 )
  {
    v53 = *(_QWORD *)(a7 + 72);
    if ( (v52 & 0xC) != 0xC && (v52 & 0xC) != 0 )
      v53 = *(_QWORD *)(v53 + 8);
  }
  else
  {
    v53 = 0;
  }
  v60 = 1;
  v59 = sub_EC8B80(v53);
  sub_AC88D0((__int64 *)v66, &v59);
  sub_AC6300((__int64)v66);
  sub_E74D10((__int64)v66, v61, 3u);
  sub_AC60B0(v66, v13, 5u);
  v54 = *(_BYTE *)(v8 + 68);
  if ( (v54 & 1) != 0 )
  {
    v55 = *(_QWORD *)(v8 + 72);
    if ( (v54 & 0xC) != 0xC && (v54 & 0xC) != 0 )
      v55 = *(_QWORD *)(v55 + 8);
  }
  else
  {
    v55 = 0;
  }
  v56 = sub_EC8B80(v55);
  v60 = 1;
  v59 = v56;
  sub_AC88D0((__int64 *)v66, &v59);
  sub_AC6300((__int64)v66);
  return v24;
}

