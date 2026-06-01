_BYTE *__fastcall sub_E50400(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7)
{
  __int64 v9; // r13
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdi
  _BOOL8 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // cl
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r9
  char v27; // al
  __int64 v28; // rdi
  _BYTE *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  __int64 v33; // rdi
  _BYTE *result; // rax
  _DWORD *v35; // rbp
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  _BYTE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rdi
  _BYTE *v44; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r9
  unsigned __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+8h] [rbp-50h]
  _DWORD *v52; // [rsp+10h] [rbp-48h] BYREF
  __int64 v53[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a2;
  v12 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = a1[1];
  v14 = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
  {
    a2 = 78;
    sub_227BA10(v13, 78);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = v14 + 1;
    *v14 = 78;
  }
  if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_11;
  v15 = (__int64 *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *v15;
  if ( *(_BYTE *)(*v15 + 16) == 26 )
  {
    v17 = *(_QWORD *)(v16 + 16);
    v18 = v17 >> 24;
    if ( (v17 & 0x1000000) != 0 )
    {
LABEL_6:
      v19 = v18;
      v20 = *(unsigned __int16 *)(v16 + 22);
      v21 = (v18 & 0x40) != 0;
      v22 = 8 * v20 + 48;
      v23 = v16 + v22 + ((v19 >> 5) & 4) + 7;
      v24 = *(_BYTE *)(v16 + 19);
      v25 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v24 & 0x40) != 0 )
      {
        v26 = v25 + 8 * (((*(_BYTE *)(((v16 + v22 + ((v24 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v21);
        v27 = ((unsigned __int8)v24 >> 1) & 0xF;
        if ( v27 != 2 )
LABEL_8:
          __asm { jmp     rdx }
      }
      else
      {
        v26 = v25 + 8 * v21;
        v27 = ((unsigned __int8)v24 >> 1) & 0xF;
        if ( v27 != 2 )
          goto LABEL_8;
      }
      v45 = v26 + 8LL * (*(_WORD *)((v16 + ((v24 >> 5) & 4) + v22 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      v46 = v45;
      v48 = v20 + v45;
      if ( (v17 & 0x20000000) != 0 )
        v46 = v48;
      v50 = *(_QWORD *)((v46 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFFDLL;
      goto LABEL_21;
    }
  }
  else
  {
    v16 = sub_F63050(*v15, a2, v16, a4);
    v17 = *(_QWORD *)(v16 + 16);
    v18 = v17 >> 24;
    if ( (v17 & 0x1000000) != 0 )
      goto LABEL_6;
  }
  if ( *(_BYTE *)(v16 + 16) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && (v51 = v16, v47 = sub_F63050(v16, v17, v16, a4), v16 = v51, v47) )
  {
    v50 = (*(_BYTE *)(v16 + 18) >> 5) & 5;
  }
  else
  {
    v50 = 0;
  }
LABEL_21:
  if ( (unsigned __int8)sub_B981D0((_QWORD *)v12, v17) )
  {
    v37 = a1[1];
    v38 = *(_BYTE **)(v37 + 32);
    if ( (unsigned __int64)v38 >= *(_QWORD *)(v37 + 24) )
    {
      sub_227BA10(v37, 72);
    }
    else
    {
      *(_QWORD *)(v37 + 32) = v38 + 1;
      *v38 = 72;
    }
  }
  sub_E4B380(a1, v50, 0);
  v41 = *(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v41 + 16) != 26 )
    v41 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL), v50, v39, v40);
  v42 = (*(_BYTE *)(v41 + 18) >> 3) & 3;
  if ( v42 == 1 )
  {
    v28 = a1[1];
    v29 = *(_BYTE **)(v28 + 32);
    if ( (unsigned __int64)v29 >= *(_QWORD *)(v28 + 24) )
    {
      sub_227BA10(v28, 82);
    }
    else
    {
      *(_QWORD *)(v28 + 32) = v29 + 1;
      *v29 = 82;
    }
  }
  else if ( v42 == 2 )
  {
    v43 = a1[1];
    v44 = *(_BYTE **)(v43 + 32);
    if ( (unsigned __int64)v44 >= *(_QWORD *)(v43 + 24) )
    {
      sub_227BA10(v43, 79);
    }
    else
    {
      *(_QWORD *)(v43 + 32) = v44 + 1;
      *v44 = 79;
    }
  }
LABEL_11:
  v52 = nullptr;
  v30 = sub_E38B70(v9, a3, (__int64 *)&v52);
  v32 = v30;
  if ( v30 )
  {
    sub_E502E0((__int64)a1, v30, a7, v31, a6);
    v35 = v52;
    v36 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v32 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v36 + 28) & 0x7Fu) - 68 >= 7 )
      v36 = 0;
    sub_F22AA0(v53, v36);
    sub_E4FC20(a1, v53[0], v35);
    v33 = a1[1];
    result = *(_BYTE **)(v33 + 32);
    if ( (unsigned __int64)result < *(_QWORD *)(v33 + 24) )
      goto LABEL_13;
  }
  else
  {
    sub_E50130((__int64)a1, a4, a6, a7);
    sub_E4D010(a1, v9, *(_QWORD *)(v12 + 40), a4, a5, a7);
    v33 = a1[1];
    result = *(_BYTE **)(v33 + 32);
    if ( (unsigned __int64)result < *(_QWORD *)(v33 + 24) )
    {
LABEL_13:
      *(_QWORD *)(v33 + 32) = result + 1;
      *result = 69;
      return result;
    }
  }
  return (_BYTE *)sub_227BA10(v33, 69);
}
