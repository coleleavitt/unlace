__int64 __fastcall sub_18660(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, double a5, double a6)
{
  __int64 v7; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  bool v17; // cc
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  bool v22; // cf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r15
  char *v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v34; // r8
  __int64 v35; // r15
  char v36; // dl
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned __int64 v42; // rsi
  __int64 v43; // r11
  int v44; // edx
  __int64 v45; // r14
  char v46; // al
  unsigned __int8 v47; // al
  __int64 v48; // r15
  int j; // r13d
  __int64 v50; // rax
  __int16 v51; // dx
  __int16 v52; // cx
  unsigned int v53; // edi
  __int16 v54; // cx
  __int16 v55; // si
  unsigned __int32 v56; // edi
  __int64 v57; // rax
  __int64 segm_name; // rax
  char *v59; // rbx
  __int64 qword; // rax
  __int64 v61; // [rsp+0h] [rbp-560h]
  __int64 v62; // [rsp+10h] [rbp-550h]
  __int64 v63; // [rsp+18h] [rbp-548h]
  __int64 *i; // [rsp+28h] [rbp-538h]
  unsigned int v65; // [rsp+28h] [rbp-538h]
  __int64 v66; // [rsp+30h] [rbp-530h] BYREF
  __int64 v67; // [rsp+38h] [rbp-528h] BYREF
  __int64 v68; // [rsp+40h] [rbp-520h] BYREF
  unsigned __int32 v69; // [rsp+48h] [rbp-518h]
  __int16 v70; // [rsp+4Ch] [rbp-514h]
  char v71; // [rsp+4Eh] [rbp-512h]
  char v72; // [rsp+4Fh] [rbp-511h]
  __int16 v73; // [rsp+50h] [rbp-510h]
  char *s1; // [rsp+60h] [rbp-500h] BYREF
  __int128 v75; // [rsp+68h] [rbp-4F8h]
  _BYTE v76[128]; // [rsp+80h] [rbp-4E0h] BYREF
  char v77[8]; // [rsp+100h] [rbp-460h] BYREF
  __int64 v78; // [rsp+108h] [rbp-458h]
  int v79; // [rsp+110h] [rbp-450h]
  char v80[1032]; // [rsp+120h] [rbp-440h] BYREF
  unsigned __int64 v81; // [rsp+528h] [rbp-38h]

  v62 = a2;
  v81 = __readfsqword(0x28u);
  if ( a4 <= 0x37 )
    return sub_5A70((__int64)"Bad XCOFF .loader section");
  v7 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)a3 = _byteswap_ulong(*(_DWORD *)a3);
  *(_DWORD *)(a3 + 4) = _byteswap_ulong(*(_DWORD *)(a3 + 4));
  *(_DWORD *)(a3 + 8) = _byteswap_ulong(*(_DWORD *)(a3 + 8));
  *(_DWORD *)(a3 + 12) = _byteswap_ulong(*(_DWORD *)(a3 + 12));
  *(_DWORD *)(a3 + 16) = _byteswap_ulong(*(_DWORD *)(a3 + 16));
  *(_DWORD *)(a3 + 20) = _byteswap_ulong(*(_DWORD *)(a3 + 20));
  v10 = swap64(v7);
  v11 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 24) = v10;
  v12 = swap64(v11);
  v13 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 32) = v12;
  v14 = swap64(v13);
  v15 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 40) = v14;
  v16 = swap64(v15);
  v17 = *(_DWORD *)a3 <= 2;
  *(_QWORD *)(a3 + 48) = v16;
  if ( !v17 )
    return sub_5CC0((__int64)"Unknown version of .loader section, skipping.\n");
  sub_5CC0((__int64)"Using .loader section of XCOFF file...\n");
  v19 = a3 + a4;
  v20 = *(_QWORD *)(a3 + 32) + a3;
  if ( __CFADD__(*(_QWORD *)(a3 + 32), a3)
    || v20 >= v19
    || (v21 = *(unsigned int *)(a3 + 20), v22 = __CFADD__(v20, v21), v23 = v20 + v21, v22)
    || v19 < v23
    || (a2 = a3 + 56, v18 = *(int *)(a3 + 4), v24 = a3 + 56 + 24 * v18, v24 < a3 + 56)
    || (a2 = a3 + a4, v19 < v24)
    || (v19 = *(int *)(a3 + 8), v61 = a3 + *(_QWORD *)(a3 + 48), __CFADD__(v61, 16 * v19))
    || a2 < v61 + 16 * v19
    || (unsigned int)v19 > 0xFFFFFFF
    || (unsigned int)v18 > 0xAAAAAAA )
  {
    sub_6000((__int64)"Corrupted file", a2, v18, v19);
  }
  s1 = nullptr;
  v75 = 0;
  for ( i = (__int64 *)get_last_seg(); i; i = (__int64 *)get_prev_seg(v28) )
  {
    get_segm_name(&s1, i, 0);
    if ( !(_QWORD)v75 )
    {
      v28 = *i;
      continue;
    }
    v29 = s1;
    if ( !strcmp(s1, ".text") )
    {
      v30 = *(_QWORD *)(a1 + 32);
      v66 = *i + 1;
      netnode_supset(v30, 0, &v66, 8, 65);
      v28 = *i;
      if ( !(_QWORD)v75 )
        continue;
      v29 = s1;
    }
    else
    {
      v28 = *i;
    }
    if ( !strcmp(v29, ".data") )
    {
      v31 = *(_QWORD *)(a1 + 32);
      v67 = v28 + 1;
      netnode_supset(v31, 1, &v67, 8, 65);
      v29 = s1;
      v28 = *i;
      if ( !(_QWORD)v75 )
        continue;
    }
    if ( !strcmp(v29, ".bss") )
    {
      v32 = *(_QWORD *)(a1 + 32);
      v68 = v28 + 1;
      netnode_supset(v32, 2, &v68, 8, 65);
      v28 = *i;
    }
  }
  v34 = *(unsigned int *)(a3 + 4);
  if ( (int)v34 > 0 )
  {
    v35 = a3 + 56;
    v65 = 3;
    v63 = -1;
    while ( 1 )
    {
      v39 = swap64(*(_QWORD *)v35);
      v40 = *(_DWORD *)(v35 + 16);
      *(_QWORD *)v35 = v39;
      LODWORD(v39) = *(_DWORD *)(v35 + 8);
      *(_WORD *)(v35 + 12) = __ROL2__(*(_WORD *)(v35 + 12), 8);
      *(_DWORD *)(v35 + 16) = _byteswap_ulong(v40);
      v41 = *(_DWORD *)(v35 + 20);
      LODWORD(v39) = _byteswap_ulong(v39);
      *(_DWORD *)(v35 + 8) = v39;
      *(_DWORD *)(v35 + 20) = _byteswap_ulong(v41);
      v42 = v20 + (int)v39;
      if ( v42 >= v20 + *(unsigned int *)(a3 + 20) || v42 < v20 )
      {
        sub_5A70((__int64)"Bad XCOFF .loader symbol");
        v80[0] = 0;
      }
      else
      {
        qstrncpy(v80, v42);
      }
      v43 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(v35 + 14) & 0x40) == 0 )
        break;
      v36 = *(_BYTE *)(v35 + 15);
      v37 = 3;
      if ( v36 != 5 )
        v37 = 2LL * (v36 == 7);
      v38 = -1;
      if ( *(_QWORD *)v35 )
        v38 = *(_QWORD *)v35;
      (*(void (__fastcall **)(__int64, _QWORD, char *, _QWORD, __int64, __int64))(v43 + 16))(a1, v65, v80, 0, v37, v38);
LABEL_35:
      v26 = v65;
      v35 += 24;
      if ( *(_DWORD *)(a3 + 4) <= (signed int)(v65 - 2) )
        goto LABEL_51;
      ++v65;
    }
    v44 = *(__int16 *)(v35 + 12);
    v78 = *(_QWORD *)v35;
    v79 = v44;
    v45 = (*(__int64 (__fastcall **)(__int64, char *))(v43 + 32))(a1, v77);
    if ( v45 == -1 )
      v45 = *(_QWORD *)v35;
    sub_11E40(a1, v65, v45, v80, *(char *)(v35 + 15), 0, 1);
    v46 = *(_BYTE *)(v35 + 14);
    if ( (v46 & 0x10) != 0 )
    {
      sub_5740(v45, 1u, (__int64)"EXPORTED SYMBOL");
      if ( (*(_BYTE *)(v35 + 14) & 0x20) == 0 )
        goto LABEL_46;
    }
    else if ( (v46 & 0x20) == 0 )
    {
      goto LABEL_35;
    }
    sub_5740(v45, 1u, (__int64)"ENTRY POINT");
    v63 = v45;
LABEL_46:
    add_entry(v45, v45, v80, 0, 1);
    goto LABEL_35;
  }
  v63 = -1;
LABEL_51:
  sub_F6E0(a1, v62, v25, v26, v34, v27);
  v47 = getinf_flag(3, 32);
  sub_1B020(v76, a1, v62, *(unsigned __int16 *)(a1 + 57), 0, v47);
  v48 = v61;
  for ( j = 0; *(_DWORD *)(a3 + 8) > j; v48 += 16 )
  {
    v50 = swap64(*(_QWORD *)v48);
    v51 = *(_WORD *)(v48 + 8);
    v52 = *(_WORD *)(v48 + 10);
    *(_QWORD *)v48 = v50;
    v53 = *(_DWORD *)(v48 + 12);
    v68 = v50;
    v54 = __ROL2__(v52, 8);
    v55 = __ROL2__(v51, 8);
    v56 = _byteswap_ulong(v53);
    *(_WORD *)(v48 + 10) = v54;
    *(_DWORD *)(v48 + 12) = v56;
    *(_WORD *)(v48 + 8) = v55;
    v72 = (unsigned __int8)v51 >> 7;
    v73 = 0;
    v69 = v56;
    v70 = (unsigned __int8)v55;
    v71 = v51 & 0x3F;
    sub_D0C0(a1, &v68, (__int64)v76, v54, -1, 0.0, a6);
    ++j;
  }
  v57 = getseg(v63);
  segm_name = get_segm_name(&s1, v57, 0);
  v59 = s1;
  if ( segm_name > 0 && (_QWORD)v75 && !strcmp(s1, ".data") )
  {
    qword = get_qword(v63);
    add_entry(qword, qword, "___start", 1, 0);
    *(_QWORD *)(a1 + 48) = get_qword(v63 + 8);
    v59 = s1;
  }
  if ( v59 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v59);
  }
  return v81 - __readfsqword(0x28u);
}
