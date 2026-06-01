__int64 __fastcall sub_C13EA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // r13
  bool v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  bool v17; // r10
  char v18; // r9
  void *v19; // rcx
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 result; // rax
  void *v24; // rdi
  __int64 v25; // rsi
  char v26; // bl
  unsigned int v27; // eax
  char v28; // r12
  unsigned int v29; // r13d
  void *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r8
  void *v33; // rdi
  void *v34; // r15
  char v35; // al
  void *v36; // [rsp+0h] [rbp-68h]
  int v37; // [rsp+0h] [rbp-68h]
  unsigned int v38; // [rsp+0h] [rbp-68h]
  int v39; // [rsp+0h] [rbp-68h]
  int v40; // [rsp+0h] [rbp-68h]
  char v41; // [rsp+8h] [rbp-60h]
  unsigned __int8 v42; // [rsp+8h] [rbp-60h]
  char v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+8h] [rbp-60h]
  char v46; // [rsp+8h] [rbp-60h]
  int v47; // [rsp+8h] [rbp-60h]
  bool v48; // [rsp+Fh] [rbp-59h]
  char v49; // [rsp+Fh] [rbp-59h]
  char v50; // [rsp+Fh] [rbp-59h]
  void *v51; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v52; // [rsp+18h] [rbp-50h]
  char v53; // [rsp+1Ch] [rbp-4Ch]
  void *v54; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v55; // [rsp+28h] [rbp-40h]
  char v56; // [rsp+2Ch] [rbp-3Ch]

  v6 = *(_QWORD *)(a3 + 56);
  v7 = *(unsigned int *)(a3 + 64);
  v8 = (unsigned __int64)(v7 + 63) >> 6;
  v41 = *(_BYTE *)(a3 + 80) ^ 1;
  if ( v8 > 1 )
  {
    sub_2205610(&v54, v7, v8, v6);
  }
  else
  {
    v55 = v7;
    if ( (unsigned int)v7 <= 0x40 )
    {
      v10 = sub_F65240(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v11 = v10 == v41;
      goto LABEL_4;
    }
    sub_2205470(&v54, v6, 0);
  }
  v34 = v54;
  v38 = v55;
  v35 = sub_F65240(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v35 == v41;
  v10 = v35;
  if ( v38 > 0x40 && v34 )
    operator delete[](v34);
LABEL_4:
  v12 = *(_QWORD *)(a3 + 56);
  v13 = *(unsigned int *)(a3 + 64);
  v14 = (unsigned __int64)(v13 + 63) >> 6;
  if ( v14 > 1 )
  {
    sub_2205610(&v54, (unsigned int)v13, v14, v12);
  }
  else
  {
    v55 = *(_DWORD *)(a3 + 64);
    if ( (unsigned int)v13 <= 0x40 )
    {
      v15 = sub_AAC1F0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8), v14, v12, v9);
      v17 = (_DWORD)v13 == v15;
      goto LABEL_7;
    }
    sub_2205470(&v54, v12, 0);
  }
  LODWORD(v13) = v55;
  v36 = v54;
  v15 = sub_AAC1F0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8), (__int64)v54, v31, v32);
  v17 = (_DWORD)v13 == v15;
  if ( (unsigned int)v13 > 0x40 && v36 )
  {
    v33 = v36;
    v48 = (_DWORD)v13 == v15;
    v37 = v15;
    operator delete[](v33);
    v17 = v48;
    v15 = v37;
  }
LABEL_7:
  v18 = *(_BYTE *)(a3 + 80);
  v19 = *(void **)(a3 + 56);
  v20 = *(unsigned int *)(a3 + 64);
  v21 = (unsigned __int64)(v20 + 63) >> 6;
  if ( !v11 || !v17 )
  {
    if ( v21 > 1 )
    {
      v49 = *(_BYTE *)(a3 + 80);
      v39 = v15;
      sub_2205610(&v54, v20, v21, v19);
      LODWORD(v20) = v55;
      v19 = v54;
      v15 = v39;
      v18 = v49;
    }
    else
    {
      v55 = *(_DWORD *)(a3 + 64);
      if ( (unsigned int)v20 > 0x40 )
      {
        v50 = v18;
        v40 = v15;
        sub_2205470(&v54, v19, 0);
        LODWORD(v20) = v55;
        v19 = v54;
        v18 = v50;
        v15 = v40;
      }
    }
    v52 = v20;
    v51 = v19;
    v53 = v18;
    if ( v10 != v41 )
    {
      v19 = *(void **)(a3 + 56);
      v25 = *(unsigned int *)(a3 + 64);
      v21 = (unsigned __int64)(v25 + 63) >> 6;
      v26 = *(_BYTE *)(a3 + 80) ^ 1;
      if ( v21 > 1 )
      {
        v44 = v15;
        sub_2205610(&v54, v25, v21, v19);
        v15 = v44;
      }
      else
      {
        v55 = v25;
        if ( (unsigned int)v25 <= 0x40 )
        {
          v53 = v26;
          goto LABEL_23;
        }
        v47 = v15;
        sub_2205470(&v54, v19, 0);
        v15 = v47;
      }
      v53 = v26;
      if ( v55 > 0x40 && v54 )
      {
        v45 = v15;
        operator delete[](v54);
        v15 = v45;
      }
    }
LABEL_23:
    if ( (_DWORD)v13 != v15 )
    {
      v27 = sub_AAC1F0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8), v21, (__int64)v19, v16);
      v28 = v53;
      if ( v53 )
        sub_2206D90(&v54, &v51, v27);
      else
        sub_2206DE0(&v54, &v51, v27);
      v29 = v55;
      v30 = v54;
      if ( v52 > 0x40 && v51 )
        operator delete[](v51);
      v51 = v30;
      v52 = v29;
      v53 = v28;
    }
    result = sub_C12770((__int64)&v51, a1[1]);
    if ( v52 > 0x40 )
    {
      v24 = v51;
      if ( v51 )
        goto LABEL_14;
    }
    return result;
  }
  if ( v21 > 1 )
  {
    v43 = *(_BYTE *)(a3 + 80);
    sub_2205610(&v51, v20, v21, v19);
    LODWORD(v20) = v52;
    v19 = v51;
    v18 = v43;
  }
  else
  {
    v52 = *(_DWORD *)(a3 + 64);
    if ( (unsigned int)v20 > 0x40 )
    {
      v46 = v18;
      sub_2205470(&v51, v19, 0);
      LODWORD(v20) = v52;
      v19 = v51;
      v18 = v46;
    }
  }
  v55 = v20;
  v22 = a1[1];
  v54 = v19;
  v56 = v18;
  result = sub_C12770((__int64)&v54, v22);
  if ( v55 > 0x40 )
  {
    v24 = v54;
    if ( v54 )
    {
LABEL_14:
      v42 = result;
      operator delete[](v24);
      return v42;
    }
  }
  return result;
}
