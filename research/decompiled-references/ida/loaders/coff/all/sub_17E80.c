__int64 __fastcall sub_17E80(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, double a5, double a6)
{
  int v7; // eax
  __int64 v10; // rax
  char *v11; // rdi
  bool v12; // cf
  char *v13; // rax
  char *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r13
  char *v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v30; // r8
  unsigned int *v31; // r14
  char v32; // dl
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // rax
  char *v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // r11
  int v41; // edx
  __int64 v42; // r13
  char v43; // al
  unsigned __int8 v44; // al
  unsigned __int64 v45; // r15
  signed int j; // r14d
  __int16 v47; // ax
  __int16 v48; // cx
  __int16 v49; // dx
  unsigned __int32 v50; // esi
  unsigned __int32 v51; // edi
  __int64 v52; // rax
  __int64 segm_name; // rax
  char *v54; // rbx
  unsigned int dword; // eax
  unsigned int v56; // eax
  unsigned __int64 v57; // [rsp+0h] [rbp-560h]
  __int64 v59; // [rsp+18h] [rbp-548h]
  __int64 *i; // [rsp+28h] [rbp-538h]
  unsigned int v61; // [rsp+28h] [rbp-538h]
  __int64 v62; // [rsp+30h] [rbp-530h] BYREF
  __int64 v63; // [rsp+38h] [rbp-528h] BYREF
  __int64 v64; // [rsp+40h] [rbp-520h] BYREF
  unsigned __int32 v65; // [rsp+48h] [rbp-518h]
  __int16 v66; // [rsp+4Ch] [rbp-514h]
  char v67; // [rsp+4Eh] [rbp-512h]
  __int16 v68; // [rsp+4Fh] [rbp-511h]
  char v69; // [rsp+51h] [rbp-50Fh]
  char *s1; // [rsp+60h] [rbp-500h] BYREF
  __int128 v71; // [rsp+68h] [rbp-4F8h]
  _BYTE v72[128]; // [rsp+80h] [rbp-4E0h] BYREF
  char v73[8]; // [rsp+100h] [rbp-460h] BYREF
  __int64 v74; // [rsp+108h] [rbp-458h]
  int v75; // [rsp+110h] [rbp-450h]
  char v76[1032]; // [rsp+120h] [rbp-440h] BYREF
  unsigned __int64 v77; // [rsp+528h] [rbp-38h]

  v77 = __readfsqword(0x28u);
  if ( a4 <= 0x1F )
    return sub_5A70((__int64)"Bad XCOFF .loader section");
  v7 = _byteswap_ulong(*a3);
  *a3 = v7;
  a3[1] = _byteswap_ulong(a3[1]);
  a3[2] = _byteswap_ulong(a3[2]);
  a3[3] = _byteswap_ulong(a3[3]);
  a3[4] = _byteswap_ulong(a3[4]);
  a3[5] = _byteswap_ulong(a3[5]);
  a3[6] = _byteswap_ulong(a3[6]);
  a3[7] = _byteswap_ulong(a3[7]);
  if ( v7 > 1 )
    return sub_5CC0((__int64)"Unknown version of .loader section, skipping.\n");
  sub_5CC0((__int64)"Using .loader section of XCOFF file...\n");
  v10 = a3[7];
  v11 = (char *)a3 + a4;
  v12 = __CFADD__(a3, v10);
  v13 = (char *)a3 + v10;
  v14 = v13;
  if ( v12
    || v13 >= v11
    || (v15 = a3[6], v12 = __CFADD__(v14, v15), v16 = (unsigned __int64)&v14[v15], v12)
    || (unsigned __int64)v11 < v16
    || (v17 = (int)a3[1], v18 = (unsigned __int64)&a3[6 * v17 + 8], v18 < (unsigned __int64)(a3 + 8))
    || (unsigned __int64)v11 < v18
    || (v57 = (unsigned __int64)&a3[6 * (unsigned int)v17 + 8], v19 = (int)a3[2], v20 = v57 + 12 * v19, v20 < v57)
    || (unsigned __int64)v11 < v20
    || (unsigned int)v19 > 0x15555555
    || (unsigned int)v17 > 0xAAAAAAA )
  {
    sub_6000((__int64)"Corrupted file");
  }
  s1 = nullptr;
  v71 = 0;
  for ( i = (__int64 *)get_last_seg(); i; i = (__int64 *)get_prev_seg(v24) )
  {
    get_segm_name(&s1, i, 0);
    if ( !(_QWORD)v71 )
    {
      v24 = *i;
      continue;
    }
    v25 = s1;
    if ( !strcmp(s1, ".text") )
    {
      v26 = *(_QWORD *)(a1 + 32);
      v62 = *i + 1;
      netnode_supset(v26, 0, &v62, 8, 65);
      v24 = *i;
      if ( !(_QWORD)v71 )
        continue;
      v25 = s1;
    }
    else
    {
      v24 = *i;
    }
    if ( !strcmp(v25, ".data") )
    {
      v27 = *(_QWORD *)(a1 + 32);
      v63 = v24 + 1;
      netnode_supset(v27, 1, &v63, 8, 65);
      v25 = s1;
      v24 = *i;
      if ( !(_QWORD)v71 )
        continue;
    }
    if ( !strcmp(v25, ".bss") )
    {
      v28 = *(_QWORD *)(a1 + 32);
      v64 = v24 + 1;
      netnode_supset(v28, 2, &v64, 8, 65);
      v24 = *i;
    }
  }
  v30 = a3[1];
  if ( (int)v30 > 0 )
  {
    v31 = a3 + 8;
    v61 = 3;
    v59 = -1;
    while ( 1 )
    {
      v35 = *v31;
      if ( !*v31 )
        v31[1] = _byteswap_ulong(v31[1]);
      v36 = v31[2];
      *((_WORD *)v31 + 6) = __ROL2__(*((_WORD *)v31 + 6), 8);
      v31[2] = _byteswap_ulong(v36);
      v31[4] = _byteswap_ulong(v31[4]);
      v31[5] = _byteswap_ulong(v31[5]);
      if ( v35 )
      {
        qstrncpy(v76, v31);
      }
      else
      {
        v37 = (int)v31[1];
        v38 = &v14[v37];
        if ( &v14[v37] >= &v14[a3[6]] || v38 < v14 )
        {
          sub_5A70((__int64)"Bad XCOFF .loader symbol");
          v76[0] = 0;
        }
        else
        {
          qstrncpy(v76, v38);
        }
      }
      v39 = v31[2];
      v40 = *(_QWORD *)a1;
      if ( (*((_BYTE *)v31 + 14) & 0x40) == 0 )
        break;
      v32 = *((_BYTE *)v31 + 15);
      v33 = 3;
      if ( v32 != 5 )
        v33 = 2LL * (v32 == 7);
      v34 = v39;
      if ( !v39 )
        v34 = -1;
      (*(void (__fastcall **)(__int64, _QWORD, char *, _QWORD, __int64, __int64))(v40 + 16))(a1, v61, v76, 0, v33, v34);
LABEL_35:
      v22 = v61;
      v31 += 6;
      if ( (int)a3[1] <= (int)(v61 - 2) )
        goto LABEL_55;
      ++v61;
    }
    v41 = *((__int16 *)v31 + 6);
    v74 = v31[2];
    v75 = v41;
    v42 = (*(__int64 (__fastcall **)(__int64, char *))(v40 + 32))(a1, v73);
    if ( v42 == -1 )
      v42 = v31[2];
    sub_11E40(a1, v61, v42, v76, *((char *)v31 + 15), 0, 1);
    v43 = *((_BYTE *)v31 + 14);
    if ( (v43 & 0x10) != 0 )
    {
      sub_5740(v42, 1u, (__int64)"EXPORTED SYMBOL");
      if ( (*((_BYTE *)v31 + 14) & 0x20) == 0 )
        goto LABEL_49;
    }
    else if ( (v43 & 0x20) == 0 )
    {
      goto LABEL_35;
    }
    sub_5740(v42, 1u, (__int64)"ENTRY POINT");
    v59 = v42;
LABEL_49:
    add_entry(v42, v42, v76, 0, 1);
    goto LABEL_35;
  }
  v59 = -1;
LABEL_55:
  sub_F6E0(a1, a2, v21, v22, v30, v23);
  v44 = getinf_flag(3, 32);
  sub_1B020(v72, a1, a2, *(unsigned __int16 *)(a1 + 57), 0, v44);
  v45 = v57;
  for ( j = 0; (int)a3[2] > j; v45 += 12LL )
  {
    v47 = *(_WORD *)(v45 + 8);
    v48 = __ROL2__(*(_WORD *)(v45 + 10), 8);
    v49 = __ROL2__(v47, 8);
    v50 = _byteswap_ulong(*(_DWORD *)(v45 + 4));
    v51 = _byteswap_ulong(*(_DWORD *)v45);
    *(_DWORD *)(v45 + 4) = v50;
    *(_WORD *)(v45 + 8) = v49;
    v66 = (unsigned __int8)v49;
    *(_DWORD *)v45 = v51;
    *(_WORD *)(v45 + 10) = v48;
    v67 = v47 & 0x3F;
    v69 = 0;
    v64 = v51;
    v65 = v50;
    v68 = (unsigned __int8)v47 >> 7;
    sub_D0C0(a1, &v64, (__int64)v72, v48, -1, 0.0, a6);
    ++j;
  }
  v52 = getseg(v59);
  segm_name = get_segm_name(&s1, v52, 0);
  v54 = s1;
  if ( segm_name > 0 && (_QWORD)v71 && !strcmp(s1, ".data") )
  {
    dword = get_dword(v59);
    add_entry(dword, dword, "___start", 1, 0);
    v56 = get_dword(v59 + 4);
    v54 = s1;
    *(_QWORD *)(a1 + 48) = v56;
  }
  if ( v54 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v54);
  }
  return v77 - __readfsqword(0x28u);
}

