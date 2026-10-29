__int64 __fastcall sub_E79880(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rdi
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 result; // rax
  bool v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // al
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  unsigned int v50; // ebp
  unsigned int v51; // r12d
  __int64 v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // r15
  __int64 v55; // r14
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r14
  __int64 v59; // r12
  __int64 v60; // rsi
  unsigned __int8 v61; // dl
  __int64 v62; // rbp
  __int64 v63; // rbx
  __int64 v64; // r12
  __int64 v65; // rbp
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v73; // [rsp+0h] [rbp-168h]
  __int64 v74; // [rsp+0h] [rbp-168h]
  __int64 v75; // [rsp+0h] [rbp-168h]
  __int64 v76; // [rsp+0h] [rbp-168h]
  __int64 v77; // [rsp+0h] [rbp-168h]
  __int64 v78; // [rsp+0h] [rbp-168h]
  __int64 v80; // [rsp+8h] [rbp-160h]
  __int64 v81; // [rsp+8h] [rbp-160h]
  int v83; // [rsp+10h] [rbp-158h]
  __int64 v84; // [rsp+18h] [rbp-150h]
  char v85; // [rsp+2Fh] [rbp-139h] BYREF
  _QWORD v86[4]; // [rsp+30h] [rbp-138h] BYREF
  _QWORD v87[6]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v88[6]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v89[6]; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int8 *v90[17]; // [rsp+E0h] [rbp-88h] BYREF

  v87[4] = a1;
  v86[3] = a1;
  v10 = *(_QWORD *)(a7 + 80);
  v86[0] = a5;
  v86[1] = a6;
  v87[0] = a2;
  v87[1] = a3;
  v87[2] = a4;
  v87[3] = a7;
  v86[2] = a8;
  v11 = sub_E747C0(v10);
  v12 = sub_E747C0(*(_QWORD *)(a8 + 80));
  v14 = a6;
  v15 = a5;
  if ( v11 != v12 )
  {
    sub_E74F00((__int64)v90, (__int64)v87, 0);
    sub_E74340(v90, a7);
    sub_AC60B0(v90, *(_QWORD *)(a7 + 80), 8u);
    sub_AC6300((__int64)v90);
    sub_E74FE0((__int64)v90, (__int64)v86, 0);
    sub_E74340(v90, a8);
    sub_AC60B0(v90, *(_QWORD *)(a8 + 80), 8u);
    sub_AC6300((__int64)v90);
    return 1;
  }
  if ( ((*(_QWORD *)(a8 + 56) & 0x20000LL) != 0) != ((*(_QWORD *)(a7 + 56) & 0x20000LL) != 0) )
  {
    sub_E74F00((__int64)v90, (__int64)v87, 1u);
    sub_E74340(v90, a7);
    sub_E74100(v90, (*(_QWORD *)(a7 + 56) >> 17) & 1LL);
    sub_AC6300((__int64)v90);
    sub_E74FE0((__int64)v90, (__int64)v86, 1u);
    sub_E74340(v90, a8);
    v17 = (*(_QWORD *)(a8 + 56) >> 17) & 1LL;
    goto LABEL_5;
  }
  v16 = *(_BYTE *)(a8 + 59) & 3;
  if ( (_BYTE)v16 != (*(_BYTE *)(a7 + 59) & 3) )
  {
    sub_E74F00((__int64)v90, (__int64)v87, 2u);
    sub_E74100(v90, *(_BYTE *)(a7 + 59) & 3);
    sub_AC6300((__int64)v90);
    sub_E74FE0((__int64)v90, (__int64)v86, 2u);
    v17 = *(_BYTE *)(a8 + 59) & 3;
LABEL_5:
    sub_E74100(v90, v17);
    sub_AC6300((__int64)v90);
    return 1;
  }
  v80 = a6;
  v73 = v15;
  v19 = sub_B84610(a7, a2, v16, v13, v15, v14);
  if ( v19 != sub_B84610(a8, a2, v20, v21, v22, v23) )
  {
    sub_E74F00((__int64)v90, (__int64)v87, 3u);
    sub_E74340(v90, a7);
    v44 = sub_B84610(a7, a7, v40, v41, v42, v43);
    sub_E74100(v90, v44);
    sub_AC6300((__int64)v90);
    sub_E74FE0((__int64)v90, (__int64)v86, 3u);
    sub_E74340(v90, a8);
    v17 = sub_B84610(a8, a8, v45, v46, v47, v48);
    goto LABEL_5;
  }
  v26 = sub_B84100(a7, a2, v24, v25, v73, v80);
  if ( v26 != (unsigned __int8)sub_B84100(a8, a2, v27, v28, v29, v30) )
  {
    sub_E74F00((__int64)v90, (__int64)v87, 4u);
    sub_E74340(v90, a7);
    v35 = sub_B84100(a7, a7, v31, v32, v33, v34);
    sub_E74100(v90, v35);
    sub_AC6300((__int64)v90);
    sub_E74FE0((__int64)v90, (__int64)v86, 4u);
    sub_E74340(v90, a8);
    v17 = (unsigned __int8)sub_B84100(a8, a8, v36, v37, v38, v39);
    goto LABEL_5;
  }
  v49 = *a1;
  v89[4] = a4;
  v50 = *(_DWORD *)(a8 + 104);
  v51 = *(_DWORD *)(a7 + 104);
  v89[1] = &v85;
  v89[0] = v49;
  v89[2] = a2;
  v89[3] = a3;
  v89[5] = a7;
  v88[0] = v49;
  v88[1] = &v85;
  v88[2] = v73;
  v88[3] = v80;
  v88[4] = a8;
  if ( v51 != v50 )
  {
    sub_E75F40((__int64)v90, (__int64)v89, 0);
    sub_AC60B0(v90, v51, 3u);
    sub_AC6300((__int64)v90);
    sub_E76060((__int64)v90, (__int64)v88, 0);
    v60 = v50;
    v61 = 3;
    goto LABEL_23;
  }
  v52 = 0;
  v81 = v51 - 1;
  if ( v51 )
  {
    while ( 1 )
    {
      v53 = *(_QWORD *)(*(_QWORD *)(a7 + 96) + 8 * v52);
      v54 = *(_QWORD *)(*(_QWORD *)(a8 + 96) + 8 * v52);
      v55 = *(_QWORD *)(v53 + 48);
      v74 = *(_QWORD *)(v54 + 48);
      if ( v74 != v55 )
      {
        v84 = *(_QWORD *)(*(_QWORD *)(a7 + 96) + 8 * v52);
        v83 = sub_E747C0(v55);
        v56 = sub_E747C0(v74);
        v57 = v74;
        v53 = v84;
        if ( v83 != v56 )
          break;
      }
      v58 = *(_QWORD *)(v54 + 40);
      v59 = (unsigned int)(v52 + 1);
      if ( *(_QWORD *)(v53 + 40) != v58 )
      {
        v75 = *(_QWORD *)(v53 + 40);
        sub_E75F40((__int64)v90, (__int64)v89, 2u);
        sub_AC60B0(v90, v59, 3u);
        sub_E74580(v90, v75);
        sub_AC6300((__int64)v90);
        sub_E76060((__int64)v90, (__int64)v88, 2u);
        sub_AC60B0(v90, v59, 3u);
        sub_E74580(v90, v58);
        sub_AC6300((__int64)v90);
        return 1;
      }
      if ( v81 == v52 )
        goto LABEL_24;
      ++v52;
    }
    v64 = (unsigned int)(v52 + 1);
    v65 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v65 + 16) == 1
      || (v70 = sub_E73EC0(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL), a2, v84, v74), v57 = v74, (v65 = v70) != 0) )
    {
      v76 = v57;
      sub_E75F40((__int64)v90, (__int64)v89, 1u);
      sub_AC60B0(v90, v64, 3u);
      sub_AC60B0(v90, v55, 8u);
      sub_E74100(v90, 1);
      v66 = *(_QWORD *)(v65 + 32);
      sub_AC60B0(v90, v66, 8u);
      sub_AC6300((__int64)v90);
      v68 = v76;
    }
    else
    {
      sub_E75F40((__int64)v90, (__int64)v89, 1u);
      sub_AC60B0(v90, v64, 3u);
      sub_AC60B0(v90, v55, 8u);
      v66 = 0;
      sub_E74100(v90, 0);
      sub_AC6300((__int64)v90);
      v68 = v74;
    }
    v69 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v69 + 16) != 1 )
    {
      v78 = v68;
      v71 = sub_E73EC0(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL), v66, v67, v68);
      v68 = v78;
      v69 = v71;
      if ( !v71 )
      {
        sub_E76060((__int64)v90, (__int64)v88, 1u);
        sub_AC60B0(v90, v64, 3u);
        sub_AC60B0(v90, v78, 8u);
        sub_E74100(v90, 0);
        sub_AC6300((__int64)v90);
        return 1;
      }
    }
    v77 = v68;
    sub_E76060((__int64)v90, (__int64)v88, 1u);
    sub_AC60B0(v90, v64, 3u);
    sub_AC60B0(v90, v77, 8u);
    sub_E74100(v90, 1);
    v60 = *(_QWORD *)(v69 + 32);
    v61 = 8;
LABEL_23:
    sub_AC60B0(v90, v60, v61);
    sub_AC6300((__int64)v90);
    return 1;
  }
LABEL_24:
  v62 = *(_QWORD *)(a7 + 40);
  v63 = *(_QWORD *)(a8 + 40);
  result = 0;
  if ( v63 != v62 )
  {
    sub_E74F00((__int64)v90, (__int64)v87, 5u);
    sub_E74580(v90, v62);
    sub_AC6300((__int64)v90);
    sub_E74FE0((__int64)v90, (__int64)v86, 5u);
    sub_E74580(v90, v63);
    sub_AC6300((__int64)v90);
    return 1;
  }
  return result;
}

