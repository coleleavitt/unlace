__int64 __fastcall sub_1867010(_QWORD *a1, __int64 a2, unsigned __int64 *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  char v14; // r14
  char v15; // cl
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  unsigned __int64 v36; // rax
  _QWORD *v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r12
  __int16 v41; // ax
  __int16 v42; // ax
  unsigned __int8 v43; // al
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // [rsp+10h] [rbp-2058h]
  int v49; // [rsp+1Ch] [rbp-204Ch]
  unsigned __int64 v50; // [rsp+28h] [rbp-2040h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-2038h] BYREF
  __int64 v52; // [rsp+38h] [rbp-2030h] BYREF
  _WORD v53[2]; // [rsp+40h] [rbp-2028h] BYREF
  unsigned int v54; // [rsp+44h] [rbp-2024h]
  __int64 v55; // [rsp+48h] [rbp-2020h]
  int v56; // [rsp+50h] [rbp-2018h] BYREF
  __int64 v57; // [rsp+58h] [rbp-2010h]
  __int64 v58; // [rsp+60h] [rbp-2008h]
  int v59; // [rsp+68h] [rbp-2000h]
  __int64 v60; // [rsp+70h] [rbp-1FF8h]
  __int16 v61; // [rsp+78h] [rbp-1FF0h]
  __int64 (__fastcall **v62)(); // [rsp+80h] [rbp-1FE8h] BYREF
  int v63; // [rsp+88h] [rbp-1FE0h]
  int *v64; // [rsp+90h] [rbp-1FD8h]

  v10 = a5;
  v50 = *a3;
  v11 = v50;
  v12 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v13 - 2) > 4u )
  {
    if ( (unsigned int)(v13 - 25) <= 1 )
    {
      v50 = sub_A70010(a1[31], v50);
      v12 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  else
  {
    v50 = sub_A72210((_QWORD *)a1[31], v50);
    v12 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v14 = 0;
  v15 = *(_BYTE *)(v12 + 17) & 0x1F;
  if ( (*(_BYTE *)(v12 + 17) & 4) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44 )
  {
    v11 = (__int64)(a1 + 1);
    sub_168B9F0((__int64)&v62, a1 + 1, v10, 0xD60u, 0);
    v14 = 1;
    sub_15F7200(&v62);
    v15 = *(_BYTE *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  }
  v16 = v15 & 8;
  if ( (_DWORD)v16 )
  {
    sub_168B9F0((__int64)&v62, a1 + 1, v10, 0xD62u, 0);
    v11 = (__int64)&v50;
    sub_1605D30((__int64)&v62, (__int64 *)&v50);
    v14 = 1;
    sub_15F7200(&v62);
  }
  v51 = v50;
  v17 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(unsigned __int8 *)(v17 + 16);
  if ( (_BYTE)v18 == 42 )
    goto LABEL_9;
  v31 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v31 + 16) == 42 )
  {
    v17 = sub_F63050(v17, v11, v31, v16);
    if ( v17 )
    {
LABEL_9:
      v51 = *(_QWORD *)(v17 + 32);
      if ( v14 )
        goto LABEL_23;
      v49 = 0;
      v19 = 3421;
      v48 = 1;
      goto LABEL_11;
    }
    v17 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(unsigned __int8 *)(v17 + 16);
  }
  if ( (unsigned int)(v18 - 43) <= 1 || (v17 = sub_1838000(v17, v11, v31, v16)) != 0 )
  {
    v51 = sub_9B4870(v17, v11, v31, v16, a5);
    if ( v14 )
      goto LABEL_23;
    v49 = 1;
    v19 = 3422;
    v48 = 2;
LABEL_11:
    v20 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v21 + 16) != 13 || ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) != 0x1B3)
      && (*(_BYTE *)(v20 + 17) & 4) == 0 )
    {
      v11 = v10;
      if ( (unsigned __int8)sub_1E63CF0(a1, v10, v51, 1, v19) )
        goto LABEL_23;
    }
    if ( !sub_F65EB0(&v51) )
    {
      if ( v48 == 1 )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_38:
    sub_168B9F0((__int64)&v62, a1 + 1, v10, 0x155Fu, 0);
    v56 = 1;
    sub_1587D10((__int64)&v62, &v56);
    sub_15F7200(&v62);
    goto LABEL_23;
  }
  if ( v14
    || (*(_BYTE *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
    && (v11 = v10, (unsigned __int8)sub_1E63CF0(a1, v10, v51, 1, 3420)) )
  {
LABEL_23:
    v28 = sub_B731A0(a1[31], a1[68], a4, v10, a6, v50, (__int64)a3, 0);
    *(_BYTE *)(v28 + 97) |= 2u;
    v29 = v28;
    if ( (*(_BYTE *)(a1[29] + 107LL) & 4) != 0 )
      sub_189F360(a1[92], v28);
    goto LABEL_25;
  }
  if ( sub_F65EB0(&v51) )
    goto LABEL_38;
  v49 = 0;
LABEL_16:
  if ( sub_F582C0(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_168B9F0((__int64)&v62, a1 + 1, v10, 0xD61u, 0);
    v56 = v49;
    v46 = sub_1587D10((__int64)&v62, &v56);
    sub_1605D30(v46, (__int64 *)&v51);
    sub_15F7200(&v62);
    goto LABEL_23;
  }
LABEL_17:
  if ( (*(_BYTE *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v11 = v10;
    v56 = 2;
    v63 = 2872;
    v62 = off_2BC6948;
    v64 = &v56;
    if ( (unsigned __int8)sub_1866EA0(
                            a1,
                            v10,
                            v50,
                            (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v62) )
      goto LABEL_23;
  }
  if ( (*(_BYTE *)(a1[29] + 2LL) & 4) != 0 )
  {
    v24 = v50 & 0xFFFFFFFFFFFFFFF0LL;
    v25 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    v26 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 43;
    if ( (unsigned int)v26 <= 1 || (v25 = sub_1838000(v25, v11, v26, v22)) != 0 )
      v24 = sub_9B4870(v25, v11, v26, v22, v23) & 0xFFFFFFFFFFFFFFF0LL;
    v27 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v27 - 35) <= 1 )
    {
      sub_168B9F0((__int64)&v62, a1 + 1, v10, 0x1114u, 0);
      sub_15F7200(&v62);
      goto LABEL_23;
    }
    if ( (_BYTE)v27 == 34 && !byte_2642F50[*(unsigned int *)(a1[29] + 368LL)] )
    {
      sub_168B9F0((__int64)&v62, a1 + 1, v10, 0x1C16u, 0);
      sub_15F7200(&v62);
    }
  }
  v32 = sub_B731A0(a1[31], a1[68], a4, v10, a6, v50, (__int64)a3, 0);
  *(_BYTE *)(v32 + 97) |= 2u;
  v29 = v32;
  if ( (*(_BYTE *)(a1[29] + 107LL) & 4) != 0 && (unsigned __int8)sub_189F360(a1[92], v32) )
  {
LABEL_25:
    sub_B88650(v29, 1);
    return v29;
  }
  v33 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v33 + 17) & 4) == 0 )
  {
    v34 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v35 = *(_QWORD *)v34;
    if ( *(_BYTE *)(*(_QWORD *)v34 + 16LL) == 48 )
    {
      sub_18C74E0(a1, 6, 0, 4);
      v36 = sub_A75E00((_QWORD *)a1[31], v50);
      v56 = 0;
      v37 = (_QWORD *)a1[31];
      v38 = v36;
      v57 = 0;
      v39 = *(_QWORD *)(v29 + 48);
      v54 = v10;
      v59 = 0;
      v58 = v39;
      v60 = v29;
      v61 = 0;
      v53[0] = 2;
      v55 = 0;
      v40 = sub_EEE9A0(24, v37, 8u);
      *(_WORD *)v40 = *(_WORD *)v40 & 0xFE00 | 0x1A;
      if ( unk_2CD7484 )
        sub_EE9B50(26);
      v41 = *(_WORD *)(v40 + 1);
      *(_QWORD *)(v40 + 8) = v38;
      *(_DWORD *)(v40 + 4) = v10;
      *(_QWORD *)(v40 + 16) = 0;
      v42 = v41 & 0xF801 | 2;
      *(_WORD *)(v40 + 1) = v42;
      *(_BYTE *)(v40 + 2) = HIBYTE(v42) & 0xF7;
      v43 = sub_B62360(v40);
      *(_BYTE *)(v40 + 1) = (v43 << 6) | *(_BYTE *)(v40 + 1) & 0x3F;
      *(_BYTE *)(v40 + 2) = *(_BYTE *)(v40 + 2) & 0xF8 | (v43 >> 2) & 7;
      v52 = v40;
      sub_1A19220((unsigned int)&v62, (_DWORD)a1, (unsigned int)&v56, (unsigned int)v53, (unsigned int)&v52, 1, 0, 1);
      v44 = sub_1A1D600((unsigned int)&v62, (_DWORD)a1, (unsigned int)&v56, (unsigned int)v53, (unsigned int)&v52, 1, 0);
      if ( v44 == 1 )
      {
        sub_1A0BB10(&v62);
        sub_190D5E0(a1);
        goto LABEL_25;
      }
      v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(*(_QWORD *)(v45 + 16) + 82LL) >= 0 )
      {
        v47 = sub_19A3EF0(a1, v45);
        sub_B73850(v29, v47);
      }
      sub_185A590(a1, v29, v35);
      sub_1A0BB10(&v62);
      sub_190D5E0(a1);
    }
  }
  return v29;
}
