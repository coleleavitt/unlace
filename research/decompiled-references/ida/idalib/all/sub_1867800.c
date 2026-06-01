__int64 __fastcall sub_1867800(_QWORD *a1, __int64 *a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // edx
  char v13; // r14
  char v14; // cl
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rdx
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // rax
  _QWORD *v36; // rsi
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r12
  __int16 v40; // ax
  __int16 v41; // ax
  unsigned __int8 v42; // al
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // [rsp+10h] [rbp-2058h]
  int v48; // [rsp+1Ch] [rbp-204Ch]
  unsigned __int64 v49; // [rsp+28h] [rbp-2040h] BYREF
  unsigned __int64 v50; // [rsp+30h] [rbp-2038h] BYREF
  __int64 v51; // [rsp+38h] [rbp-2030h] BYREF
  _WORD v52[2]; // [rsp+40h] [rbp-2028h] BYREF
  unsigned int v53; // [rsp+44h] [rbp-2024h]
  __int64 v54; // [rsp+48h] [rbp-2020h]
  int v55; // [rsp+50h] [rbp-2018h] BYREF
  __int64 v56; // [rsp+58h] [rbp-2010h]
  __int64 v57; // [rsp+60h] [rbp-2008h]
  int v58; // [rsp+68h] [rbp-2000h]
  __int64 v59; // [rsp+70h] [rbp-1FF8h]
  __int16 v60; // [rsp+78h] [rbp-1FF0h]
  __int64 (__fastcall **v61)(); // [rsp+80h] [rbp-1FE8h] BYREF
  int v62; // [rsp+88h] [rbp-1FE0h]
  int *v63; // [rsp+90h] [rbp-1FD8h]

  v10 = *a2;
  v49 = v10;
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v12 - 2) > 4u )
  {
    if ( (unsigned int)(v12 - 25) <= 1 )
    {
      v49 = sub_A70010(a1[31], v10);
      v11 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  else
  {
    v49 = sub_A72210((_QWORD *)a1[31], v10);
    v11 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v13 = 0;
  v14 = *(_BYTE *)(v11 + 17) & 0x1F;
  if ( (*(_BYTE *)(v11 + 17) & 4) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44 )
  {
    v10 = (__int64)(a1 + 1);
    sub_168B9F0((__int64)&v61, a1 + 1, a4, 0xD60u, 0);
    v13 = 1;
    sub_15F7200(&v61);
    v14 = *(_BYTE *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  }
  v15 = v14 & 8;
  if ( (_DWORD)v15 )
  {
    sub_168B9F0((__int64)&v61, a1 + 1, a4, 0xD62u, 0);
    v10 = (__int64)&v49;
    sub_1605D30((__int64)&v61, (__int64 *)&v49);
    v13 = 1;
    sub_15F7200(&v61);
  }
  v50 = v49;
  v16 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (_BYTE)v17 == 42 )
    goto LABEL_9;
  v30 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v30 + 16) == 42 )
  {
    v16 = sub_F63050(v16, v10, v30, v15);
    if ( v16 )
    {
LABEL_9:
      v50 = *(_QWORD *)(v16 + 32);
      if ( v13 )
        goto LABEL_23;
      v48 = 0;
      v18 = 3421;
      v47 = 1;
      goto LABEL_11;
    }
    v16 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(v16 + 16);
  }
  if ( (unsigned int)(v17 - 43) <= 1 || (v16 = sub_1838000(v16, v10, v30, v15)) != 0 )
  {
    v50 = sub_9B4870(v16, v10, v30, v15, a5);
    if ( v13 )
      goto LABEL_23;
    v48 = 1;
    v18 = 3422;
    v47 = 2;
LABEL_11:
    v19 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v20 + 16) != 13 || ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) != 0x1B3)
      && (*(_BYTE *)(v19 + 17) & 4) == 0 )
    {
      v10 = a4;
      if ( (unsigned __int8)sub_1E63CF0(a1, a4, v50, 1, v18) )
        goto LABEL_23;
    }
    if ( !sub_F65EB0(&v50) )
    {
      if ( v47 == 1 )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_38:
    sub_168B9F0((__int64)&v61, a1 + 1, a4, 0x155Fu, 0);
    v55 = 1;
    sub_1587D10((__int64)&v61, &v55);
    sub_15F7200(&v61);
    goto LABEL_23;
  }
  if ( v13
    || (*(_BYTE *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
    && (v10 = a4, (unsigned __int8)sub_1E63CF0(a1, a4, v50, 1, 3420)) )
  {
LABEL_23:
    v27 = sub_B731A0(a1[31], a1[68], a3, a4, a5, v49, (__int64)a2, 0);
    *(_BYTE *)(v27 + 97) |= 2u;
    v28 = v27;
    if ( (*(_BYTE *)(a1[29] + 107LL) & 4) != 0 )
      sub_189F360(a1[92], v27);
    goto LABEL_25;
  }
  if ( sub_F65EB0(&v50) )
    goto LABEL_38;
  v48 = 0;
LABEL_16:
  if ( sub_F582C0(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_168B9F0((__int64)&v61, a1 + 1, a4, 0xD61u, 0);
    v55 = v48;
    v45 = sub_1587D10((__int64)&v61, &v55);
    sub_1605D30(v45, (__int64 *)&v50);
    sub_15F7200(&v61);
    goto LABEL_23;
  }
LABEL_17:
  if ( (*(_BYTE *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v10 = a4;
    v55 = 2;
    v62 = 2872;
    v61 = off_2BC6948;
    v63 = &v55;
    if ( (unsigned __int8)sub_1866EA0(
                            a1,
                            a4,
                            v49,
                            (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v61) )
      goto LABEL_23;
  }
  if ( (*(_BYTE *)(a1[29] + 2LL) & 4) != 0 )
  {
    v23 = v49 & 0xFFFFFFFFFFFFFFF0LL;
    v24 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
    v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 43;
    if ( (unsigned int)v25 <= 1 || (v24 = sub_1838000(v24, v10, v25, v21)) != 0 )
      v23 = sub_9B4870(v24, v10, v25, v21, v22) & 0xFFFFFFFFFFFFFFF0LL;
    v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v26 - 35) <= 1 )
    {
      sub_168B9F0((__int64)&v61, a1 + 1, a4, 0x1114u, 0);
      sub_15F7200(&v61);
      goto LABEL_23;
    }
    if ( (_BYTE)v26 == 34 && !byte_2642F50[*(unsigned int *)(a1[29] + 368LL)] )
    {
      sub_168B9F0((__int64)&v61, a1 + 1, a4, 0x1C16u, 0);
      sub_15F7200(&v61);
    }
  }
  v31 = sub_B731A0(a1[31], a1[68], a3, a4, a5, v49, (__int64)a2, 0);
  *(_BYTE *)(v31 + 97) |= 2u;
  v28 = v31;
  if ( (*(_BYTE *)(a1[29] + 107LL) & 4) != 0 && (unsigned __int8)sub_189F360(a1[92], v31) )
  {
LABEL_25:
    sub_B88650(v28, 1);
    return v28;
  }
  v32 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v32 + 17) & 4) == 0 )
  {
    v33 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v34 = *(_QWORD *)v33;
    if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) == 48 )
    {
      sub_18C74E0(a1, 6, 0, 4);
      v35 = sub_A75E00((_QWORD *)a1[31], v49);
      v55 = 0;
      v36 = (_QWORD *)a1[31];
      v37 = v35;
      v56 = 0;
      v38 = *(_QWORD *)(v28 + 48);
      v53 = a4;
      v58 = 0;
      v57 = v38;
      v59 = v28;
      v60 = 0;
      v52[0] = 2;
      v54 = 0;
      v39 = sub_EEE9A0(24, v36, 8u);
      *(_WORD *)v39 = *(_WORD *)v39 & 0xFE00 | 0x1A;
      if ( unk_2CD7484 )
        sub_EE9B50(26);
      v40 = *(_WORD *)(v39 + 1);
      *(_QWORD *)(v39 + 8) = v37;
      *(_DWORD *)(v39 + 4) = a4;
      *(_QWORD *)(v39 + 16) = 0;
      v41 = v40 & 0xF801 | 2;
      *(_WORD *)(v39 + 1) = v41;
      *(_BYTE *)(v39 + 2) = HIBYTE(v41) & 0xF7;
      v42 = sub_B62360(v39);
      *(_BYTE *)(v39 + 1) = (v42 << 6) | *(_BYTE *)(v39 + 1) & 0x3F;
      *(_BYTE *)(v39 + 2) = *(_BYTE *)(v39 + 2) & 0xF8 | (v42 >> 2) & 7;
      v51 = v39;
      sub_1A19220((unsigned int)&v61, (_DWORD)a1, (unsigned int)&v55, (unsigned int)v52, (unsigned int)&v51, 1, 0, 1);
      v43 = sub_1A1D600((unsigned int)&v61, (_DWORD)a1, (unsigned int)&v55, (unsigned int)v52, (unsigned int)&v51, 1, 0);
      if ( v43 == 1 )
      {
        sub_1A0BB10(&v61);
        sub_190D5E0(a1);
        goto LABEL_25;
      }
      v44 = v43 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(*(_QWORD *)(v44 + 16) + 82LL) >= 0 )
      {
        v46 = sub_19A3EF0(a1, v44);
        sub_B73850(v28, v46);
      }
      sub_185A590(a1, v28, v34);
      sub_1A0BB10(&v61);
      sub_190D5E0(a1);
    }
  }
  return v28;
}
