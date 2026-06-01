unsigned __int64 __fastcall sub_55AB80(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(_QWORD *, char); // rax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  unsigned int tinfo_property; // eax
  size_t v12; // r14
  unsigned int v13; // r12d
  __int64 (__fastcall *v14)(_QWORD *, char); // rax
  __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(_QWORD *, char); // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  _BYTE *v22; // rax
  __int64 v24; // rax
  _BYTE *v25; // r15
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rsi
  size_t v32; // r9
  __int64 v33; // r12
  size_t v34; // r10
  __int64 v35; // rsi
  __int64 v36; // r12
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // [rsp+8h] [rbp-70h]
  unsigned __int64 v50; // [rsp+10h] [rbp-68h]
  unsigned __int64 v51; // [rsp+10h] [rbp-68h]
  unsigned __int64 v52; // [rsp+10h] [rbp-68h]
  unsigned __int64 v53; // [rsp+10h] [rbp-68h]
  size_t v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+18h] [rbp-60h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  size_t v57; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v60; // [rsp+38h] [rbp-40h]

  v3 = *a1;
  v60 = __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *, char *, __int64))(v3 + 56))(a1, "struct", 32);
  v5 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v5 == sub_35CB90 )
  {
    v6 = a1[4];
    if ( v6 )
    {
      v9 = v6 + 1;
      v8 = a1[4];
      v7 = a1[3];
      --v6;
      if ( a1[5] >= v9 )
        goto LABEL_4;
    }
    else
    {
      v7 = a1[3];
      v8 = 1;
      v9 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_4:
        a1[4] = v9;
        *(_BYTE *)(v7 + v6) = 32;
        *(_BYTE *)(a1[3] + v8) = 0;
        goto LABEL_5;
      }
    }
    v24 = qvector_reserve(a1 + 3, v7, v9, 1);
    a1[3] = v24;
    v7 = v24;
    goto LABEL_4;
  }
  v5(a1, 32);
LABEL_5:
  v10 = a2[8];
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( (v10 & 0x100) != 0 )
  {
    get_tinfo_pdata(&src, v10, 8);
    v10 = a2[8];
  }
  tinfo_property = get_tinfo_property(v10, 7);
  v12 = n[0];
  v13 = tinfo_property;
  if ( n[0] )
  {
    v25 = (_BYTE *)qalloc_or_throw(n[0]);
    memcpy(v25, src, v12);
    v49 = a1 + 3;
    if ( !*v25 )
      goto LABEL_27;
  }
  else
  {
    v49 = a1 + 3;
    if ( !byte_2CCB1E1 )
      goto LABEL_9;
    v25 = nullptr;
  }
  v26 = a1[4];
  v27 = 2;
  if ( v26 )
  {
    v27 = v26 + 1;
    v28 = a1[3];
    --v26;
    if ( a1[5] >= v27 )
      goto LABEL_33;
  }
  else
  {
    v28 = a1[3];
    if ( a1[5] >= 2u )
      goto LABEL_33;
  }
  v56 = v26;
  v53 = v27;
  v47 = qvector_reserve(v49, v28, v27, 1);
  a1[3] = v47;
  v26 = v56;
  v28 = v47;
  v27 = v53;
LABEL_33:
  a1[4] = v27;
  v29 = 2;
  *(_BYTE *)(v28 + v26) = 1;
  *(_BYTE *)(a1[3] + v26 + 1) = 0;
  v30 = a1[4];
  if ( v30 )
  {
    v29 = v30 + 1;
    v31 = a1[3];
    --v30;
    if ( a1[5] >= v29 )
      goto LABEL_35;
  }
  else
  {
    v31 = a1[3];
    if ( a1[5] >= 2u )
      goto LABEL_35;
  }
  v55 = v30;
  v52 = v29;
  v46 = qvector_reserve(v49, v31, v29, 1);
  a1[3] = v46;
  v30 = v55;
  v31 = v46;
  v29 = v52;
LABEL_35:
  a1[4] = v29;
  *(_BYTE *)(v31 + v30) = 23;
  *(_BYTE *)(a1[3] + v30 + 1) = 0;
  if ( v13 )
    tag_addr(v49, v13, 0);
  if ( v12 )
  {
    v32 = v12 - 1;
    if ( v12 != 1 )
    {
      v33 = a1[4];
      v34 = v12 - 1;
      if ( v33 )
      {
        --v33;
        v34 = v32 + v33;
        v12 += v33;
      }
      v35 = a1[3];
      if ( a1[5] < v12 )
      {
        v57 = v32;
        v54 = v34;
        v48 = qvector_reserve(v49, v35, v12, 1);
        a1[3] = v48;
        v32 = v57;
        v35 = v48;
        v34 = v54;
      }
      a1[4] = v12;
      *(_BYTE *)(v35 + v34) = 0;
      memcpy((void *)(v33 + a1[3]), v25, v32);
    }
  }
  v36 = a1[4];
  v37 = 2;
  if ( v36 )
  {
    v37 = v36 + 1;
    v38 = a1[3];
    --v36;
    if ( a1[5] >= v37 )
      goto LABEL_46;
  }
  else
  {
    v38 = a1[3];
    if ( a1[5] >= 2u )
      goto LABEL_46;
  }
  v51 = v37;
  v45 = qvector_reserve(v49, v38, v37, 1);
  a1[3] = v45;
  v37 = v51;
  v38 = v45;
LABEL_46:
  a1[4] = v37;
  v39 = 2;
  *(_BYTE *)(v38 + v36) = 2;
  *(_BYTE *)(a1[3] + v36 + 1) = 0;
  v40 = a1[4];
  if ( v40 )
  {
    v39 = v40 + 1;
    v41 = a1[3];
    --v40;
    if ( a1[5] >= v39 )
      goto LABEL_48;
LABEL_52:
    v50 = v39;
    v44 = qvector_reserve(v49, v41, v39, 1);
    a1[3] = v44;
    v39 = v50;
    v41 = v44;
    goto LABEL_48;
  }
  v41 = a1[3];
  if ( a1[5] < 2u )
    goto LABEL_52;
LABEL_48:
  a1[4] = v39;
  *(_BYTE *)(v41 + v40) = 23;
  *(_BYTE *)(a1[3] + v40 + 1) = 0;
LABEL_27:
  if ( v25 )
  {
    qfree(v25);
    v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v14 == sub_35CB90 )
      goto LABEL_10;
LABEL_29:
    v14(a1, 32);
    goto LABEL_15;
  }
LABEL_9:
  v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v14 != sub_35CB90 )
    goto LABEL_29;
LABEL_10:
  v15 = a1[4];
  v16 = 2;
  if ( v15 )
    v16 = v15-- + 1;
  v17 = a1[3];
  if ( a1[5] < v16 )
  {
    v42 = qvector_reserve(v49, v17, v16, 1);
    a1[3] = v42;
    v17 = v42;
  }
  a1[4] = v16;
  *(_BYTE *)(v17 + v15) = 32;
  *(_BYTE *)(a1[3] + v15 + 1) = 0;
LABEL_15:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 63);
  v18 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v18 == sub_35CB90 )
  {
    v19 = a1[4];
    v20 = 2;
    if ( v19 )
      v20 = v19-- + 1;
    v21 = a1[3];
    if ( a1[5] < v20 )
    {
      v43 = qvector_reserve(v49, v21, v20, 1);
      a1[3] = v43;
      v21 = v43;
    }
    a1[4] = v20;
    *(_BYTE *)(v21 + v19) = 32;
    *(_BYTE *)(a1[3] + v19 + 1) = 0;
  }
  else
  {
    v18(a1, 32);
  }
  v22 = sub_39CE40(*(_QWORD **)(a1[25] + 1672LL));
  sub_35CD40((__int64)a1, (__int64)&unk_23409B0, *(_QWORD *)(a1[25] + 1120LL), *a2 >> 3, a2[1] >> 3, v22);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v60 - __readfsqword(0x28u);
}
