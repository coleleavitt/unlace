__int64 __fastcall sub_1513940(__int64 a1, char a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  size_t v15; // rax
  __int64 result; // rax
  __int64 v17; // r12
  size_t v18; // r14
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 *v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rbx
  char *v31; // rdx
  _QWORD *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  char v42; // r12
  __int64 v43; // rax
  unsigned int v44; // r15d
  __int64 v45; // rax
  __int64 v46; // rax
  __int16 v47; // di
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned int v50; // r15d
  __int64 *v51; // rdi
  __int64 *v52; // rdi
  size_t v53; // rax
  int v54; // edx
  _QWORD *v55; // rax
  unsigned int v56; // eax
  _QWORD *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // rax
  _BYTE *v61; // rax
  signed __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v65; // [rsp+0h] [rbp-188h]
  __int64 v66; // [rsp+0h] [rbp-188h]
  __int64 v67; // [rsp+8h] [rbp-180h]
  int v68; // [rsp+8h] [rbp-180h]
  int v69; // [rsp+8h] [rbp-180h]
  __int64 v70; // [rsp+8h] [rbp-180h]
  __int64 *v71; // [rsp+10h] [rbp-178h]
  __int64 *v72; // [rsp+10h] [rbp-178h]
  int v73; // [rsp+18h] [rbp-170h]
  __int64 v74; // [rsp+20h] [rbp-168h]
  __int64 v75; // [rsp+28h] [rbp-160h]
  __int64 v76; // [rsp+38h] [rbp-150h] BYREF
  __int64 v77; // [rsp+40h] [rbp-148h] BYREF
  __int64 v78; // [rsp+4Ch] [rbp-13Ch] BYREF
  __int64 v79; // [rsp+54h] [rbp-134h]
  int v80; // [rsp+5Ch] [rbp-12Ch]
  __int64 v81; // [rsp+60h] [rbp-128h] BYREF
  int v82; // [rsp+68h] [rbp-120h]
  __int64 v83; // [rsp+70h] [rbp-118h]
  _BYTE *v84; // [rsp+80h] [rbp-108h] BYREF
  char v85; // [rsp+88h] [rbp-100h]
  __int64 v86; // [rsp+90h] [rbp-F8h]
  int v87; // [rsp+98h] [rbp-F0h]
  __int16 v88; // [rsp+9Ch] [rbp-ECh]
  __int64 (__fastcall *v89)(__int64); // [rsp+A0h] [rbp-E8h]
  __int64 v90; // [rsp+A8h] [rbp-E0h]
  __int64 v91; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-C0h]
  _BYTE v94[48]; // [rsp+D0h] [rbp-B8h] BYREF
  void *v95[2]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v96; // [rsp+110h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL);
  v86 = a1;
  v88 = 449;
  v87 = 1507350;
  v6 = *(_DWORD *)(v5 + 64);
  v84 = (_BYTE *)(a1 + 1952);
  LOBYTE(v5) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v85 = v5;
  v89 = sub_146A990;
  v90 = 0;
  v91 = 0;
  v7 = sub_20EAB70(12, v6);
  if ( (unsigned __int8)sub_156A040(&v84, 1625, v7, 0) )
    goto LABEL_7;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = *(_QWORD *)(v8 + 2944);
  if ( *(unsigned int *)(v8 + 2912) <= v11 )
  {
    if ( *(_WORD *)(sub_14180A0(v8, 1u) + 16) == 62 )
      goto LABEL_4;
LABEL_10:
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17504LL);
    v18 = j__strlen("default");
    v19 = sub_2244B30("default", v18);
    v20 = (unsigned int)sub_2244CB0(v17, "default", v18, v19);
    v21 = (__int64 *)(*(_QWORD *)v17 + 8 * v20);
    if ( *v21 )
    {
      if ( *v21 != -8 )
      {
        sub_989490((__int64 **)v95, v21, 0);
        v23 = *(_QWORD *)v95[0];
        v10 = *(_QWORD *)(*(_QWORD *)v95[0] + 8LL);
        if ( v10 )
        {
LABEL_26:
          v9 = 1;
          goto LABEL_27;
        }
LABEL_13:
        v24 = *(_QWORD *)(v17 + 120);
        if ( !v24
          || (v67 = v23,
              v25 = (*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v24 + 16LL))(v24, "default", v18),
              v23 = v67,
              LODWORD(v10) = v25,
              (*(_QWORD *)(v67 + 8) = v25) == 0) )
        {
          v26 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 104) += 24LL;
          v10 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v17 + 32) >= v10 + 24 && v26 )
          {
            *(_QWORD *)(v17 + 24) = v10 + 24;
            v27 = (_QWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            v70 = v23;
            v27 = (_QWORD *)sub_986170(v17 + 24, 24, 24, 3, v23, v22);
            v23 = v70;
            LODWORD(v10) = (_DWORD)v27;
          }
          v28 = *v27 & 0xFFFFF80000000000LL;
          v27[1] = 0;
          *v27 = v28 | 0x1FFFC05;
          *(_QWORD *)(v23 + 8) = v27;
          v27[2] = v23;
        }
        goto LABEL_26;
      }
      --*(_DWORD *)(v17 + 16);
    }
    v29 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(v17 + 104) += v18 + 17;
    v30 = (_QWORD *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v31 = (char *)v30 + v18 + 17;
    if ( *(_QWORD *)(v17 + 32) >= (unsigned __int64)v31 && v29 )
    {
      *(_QWORD *)(v17 + 24) = v31;
    }
    else
    {
      v72 = v21;
      v69 = v20;
      v60 = sub_986170(v17 + 24, v18 + 17, v18 + 17, 3, (__int64)v21, v20);
      v21 = v72;
      LODWORD(v20) = v69;
      v30 = (_QWORD *)v60;
    }
    v32 = v30 + 2;
    if ( v18 )
    {
      v71 = v21;
      v68 = v20;
      v55 = memcpy(v30 + 2, "default", v18);
      v21 = v71;
      LODWORD(v20) = v68;
      v32 = v55;
    }
    *((_BYTE *)v32 + v18) = 0;
    *v30 = v18;
    v30[1] = 0;
    *v21 = (__int64)v30;
    ++*(_DWORD *)(v17 + 12);
    v33 = sub_22450D0(v17, (unsigned int)v20);
    sub_989490((__int64 **)v95, (__int64 *)(*(_QWORD *)v17 + 8LL * v33), 0);
    v23 = *(_QWORD *)v95[0];
    v10 = *(_QWORD *)(*(_QWORD *)v95[0] + 8LL);
    if ( v10 )
      goto LABEL_26;
    goto LABEL_13;
  }
  if ( *(_WORD *)(*(_QWORD *)(v8 + 2904) + 24 * v11 + 16) != 62 )
    goto LABEL_10;
LABEL_4:
  v12 = *(_WORD *)(a1 + 32);
  v13 = *(unsigned int *)(a1 + 16);
  if ( v12 == 5 || v12 == 82 )
  {
    v14 = *(__int64 **)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = v13;
    v9 = 1;
    sub_14634E0(v14, (int *)(a1 + 16));
    v15 = j__strlen(&byte_22F0C30);
    sub_1569A00(a1, 62, 14, &byte_22F0C30, v15);
  }
  else
  {
    sub_1564820(v95, a1, v13, 1813);
    sub_AEA040((__int64)v95);
    v52 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v52, (int *)(a1 + 16));
    v53 = j__strlen(&byte_22F0C30);
    sub_1569A00(a1, 62, 14, &byte_22F0C30, v53);
    result = 0;
    if ( *(_WORD *)(a1 + 32) == 449 )
      goto LABEL_8;
  }
LABEL_27:
  v76 = 0;
  v78 = 0;
  v34 = sub_1505250(a1, &v78, &v76, a2, a3, a4);
  if ( (_BYTE)v35
    || !v34
    || (v36 = (__int64 *)(unsigned int)v78,
        v41 = sub_1AF5A60(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), (unsigned int)v78, v34, v35),
        (v42 = ((v41 & 0xFFFFFFFFFFFFFFF0LL) != 0) & v9) == 0)
    || (unsigned __int8)sub_14808E0((__int64)&v84, v36, v37, v38, v39, v40) )
  {
LABEL_7:
    LOWORD(v95[0]) = 449;
    sub_15680D0(a1, v95, 1, 2);
    result = 0;
    goto LABEL_8;
  }
  v43 = *(_QWORD *)(a1 + 96);
  v44 = *(_DWORD *)(a1 + 16);
  v81 = 0;
  v45 = *(_QWORD *)(v43 + 608);
  v82 = 0;
  v83 = 0;
  v73 = v45;
  sub_146B5E0(&v77, a1, 0x408009u, 1, 0);
  sub_1B5B570(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), 12, &v81, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v44);
  v46 = sub_1AF8CA0(
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
          v41,
          (unsigned int)v78,
          v76);
  v47 = *(_WORD *)(a1 + 32);
  v74 = v46;
  ptr = v94;
  v93 = 0x600000000LL;
  if ( v47 != 449 )
  {
    while ( 1 )
    {
      v50 = 106;
      if ( !sub_10CCDE0(v47) )
      {
        sub_13D35F0(
          (__int64)v95,
          a1 + 16,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
          nullptr);
        v79 = sub_20EF010(v95[0], v95[1]);
        v50 = v79;
        v80 = v54;
        if ( v95[0] != &v96 )
          operator delete(v95[0]);
      }
      sub_1AF3B20(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v50);
      v63 = sub_1511350(a1, 0xCu, v50, (_DWORD)v93 == 0, a3, a4);
      if ( v63 )
        break;
      v42 = 0;
      if ( *(_WORD *)(a1 + 32) == 66 )
        goto LABEL_40;
LABEL_36:
      sub_1AF3B30(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL));
      v47 = *(_WORD *)(a1 + 32);
      if ( v47 == 449 )
      {
        v56 = v93;
        if ( (_DWORD)v93 )
          goto LABEL_46;
        goto LABEL_57;
      }
    }
    v48 = (unsigned int)v93;
    v49 = (unsigned int)v93 + 1LL;
    if ( v49 > HIDWORD(v93) )
    {
      v75 = v63;
      sub_2237220(&ptr, v94, v49, 8);
      v48 = (unsigned int)v93;
      v63 = v75;
    }
    *((_QWORD *)ptr + v48) = v63;
    LODWORD(v93) = v93 + 1;
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_36;
LABEL_40:
    v51 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v51, (int *)(a1 + 16));
    goto LABEL_36;
  }
LABEL_57:
  sub_1564840(v95, a1, a1 + 16, 1795);
  v61 = (_BYTE *)sub_20EAB70(12, v6);
  sub_AEC220((unsigned __int8 **)v95, v61, v62);
  v42 = 0;
  sub_AEA040((__int64)v95);
  v56 = v93;
LABEL_46:
  v57 = *(_QWORD **)(a1 + 96);
  v58 = v57[379];
  if ( !v58 )
    v58 = v57[68];
  v59 = sub_1B630D0(v57[95], v73, v58, v10, v41, v78, v76, a2, v74 & 0xFFFFFFFFFFFFFFFELL, (__int64)ptr, v56, 0);
  sub_1B335B0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), 0);
  if ( v77 )
  {
    sub_1564F70(v77);
    v77 = 0;
  }
  result = 0;
  if ( v42 )
    result = v59;
  if ( ptr != v94 )
  {
    v65 = result;
    free(ptr);
    result = v65;
  }
  if ( v77 )
  {
    v66 = result;
    sub_1564F70(v77);
    result = v66;
  }
LABEL_8:
  *v84 = v85;
  return result;
}
