__int64 __fastcall sub_12D6D10(__int64 *a1, __int64 a2, unsigned int a3, int *a4, _DWORD *a5)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // r14d
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdi
  char v17; // al
  int v18; // r15d
  _DWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // eax
  char v26; // dl
  char v27; // dl
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  _QWORD *v30; // r11
  unsigned __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // r10
  __int64 *v34; // rdi
  __int64 v35; // rcx
  _DWORD *v36; // rax
  _DWORD *v37; // rdx
  __int64 *v38; // rdi
  __int64 v39; // rcx
  _DWORD *v40; // rax
  _DWORD *v41; // rdx
  unsigned int v42; // [rsp+8h] [rbp-70h]
  unsigned int v43; // [rsp+8h] [rbp-70h]
  unsigned int v44; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+8h] [rbp-70h]
  int v46; // [rsp+8h] [rbp-70h]
  int v47; // [rsp+8h] [rbp-70h]
  int v48; // [rsp+8h] [rbp-70h]
  int v49; // [rsp+Ch] [rbp-6Ch]
  int v50; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v51; // [rsp+10h] [rbp-68h]
  char v52; // [rsp+10h] [rbp-68h]
  _QWORD *v53; // [rsp+18h] [rbp-60h]
  unsigned __int64 v54; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v55; // [rsp+3Ch] [rbp-3Ch]

  v7 = *a1;
  v8 = sub_13DCDE0(a2, a3, *a1, a1[1]);
  v54 = v8;
  v55 = v10;
  v9 = HIDWORD(v8);
  LOBYTE(v10) = (int)v8 > 0 && SHIDWORD(v8) > 0;
  if ( !(_BYTE)v10 )
    return 0;
  v42 = v8;
  v11 = v10;
  v13 = sub_1021680(v7, v8);
  if ( v13 )
  {
    if ( v13 != 3 )
      return 0;
  }
  v14 = sub_1021680(v7, v9);
  v15 = v42;
  if ( v14 )
  {
    if ( v14 != 3 )
      return 0;
  }
  v16 = a1[2];
  if ( v16 )
  {
    v17 = sub_1419E50(v16, (v9 << 32) | v42);
    v15 = v42;
    if ( v17 )
      return 0;
  }
  if ( (unsigned int)v15 < *(_DWORD *)(v7 + 476) || (unsigned int)v15 >= *(_DWORD *)(v7 + 480) )
  {
    v43 = v15;
    v24 = sub_101D590(v7, v15);
    v15 = v43;
    v18 = v24;
  }
  else
  {
    v18 = *(_DWORD *)(v7 + 472);
  }
  LOBYTE(v54) = 0;
  if ( (unsigned int)(v18 + 1) <= 1 )
    goto LABEL_36;
  if ( v18 >= 0 )
  {
    v19 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * (unsigned int)v18);
    goto LABEL_16;
  }
  v31 = (unsigned int)(-2 - v18);
  v32 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v18) >> 6));
  if ( _bittest64(&v32, v31) )
  {
    v33 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v31 >> 5));
    if ( *v33 )
    {
      v19 = (_DWORD *)(*v33 + 24LL * ((-2 - (_BYTE)v18) & 0x1F));
      goto LABEL_16;
    }
    v38 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v39 = *v38;
    v38[10] += 768;
    v40 = (_DWORD *)((v39 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v38[1] >= (unsigned __int64)(v40 + 192) && v39 )
    {
      *v38 = (__int64)(v40 + 192);
    }
    else
    {
      v51 = v33;
      v47 = v15;
      v40 = (_DWORD *)sub_986170((__int64)v38, 768, 768, 3, v15, v31);
      v33 = v51;
      LOBYTE(v31) = -2 - v18;
      LODWORD(v15) = v47;
    }
    *v33 = v40;
    v41 = v40 + 192;
    do
    {
      *v40 = 0;
      v40 += 6;
      *((_OWORD *)v40 - 1) = 0;
      *((_QWORD *)v40 - 1) = 0;
    }
    while ( v40 != v41 );
    v27 = v54;
    v19 = (_DWORD *)(*v33 + 24 * (v31 & 0x1F));
  }
  else
  {
    v46 = v15;
    v19 = (_DWORD *)sub_101F930(v7, v31, &v54);
    v27 = v54;
    LODWORD(v15) = v46;
  }
  if ( v27 )
    goto LABEL_36;
LABEL_16:
  if ( !v19 )
  {
LABEL_36:
    v20 = 0;
    v18 = 0;
    goto LABEL_18;
  }
  v20 = (unsigned int)v15 - (*v19 & 0x7FFFFFFF);
LABEL_18:
  if ( (unsigned int)v9 < *(_DWORD *)(v7 + 476) || (unsigned int)v9 >= *(_DWORD *)(v7 + 480) )
  {
    v44 = v20;
    v25 = sub_101D590(v7, v9);
    v20 = v44;
    v21 = v25;
  }
  else
  {
    v21 = *(unsigned int *)(v7 + 472);
  }
  LOBYTE(v54) = 0;
  if ( (unsigned int)(v21 + 1) <= 1 )
    goto LABEL_33;
  if ( (int)v21 >= 0 )
  {
    v22 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * (unsigned int)v21);
    goto LABEL_24;
  }
  v28 = (unsigned int)(-2 - v21);
  v29 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v21) >> 6));
  if ( _bittest64(&v29, v28) )
  {
    v30 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v28 >> 5));
    if ( *v30 )
    {
      v22 = (_DWORD *)(*v30 + 24LL * ((-2 - (_BYTE)v21) & 0x1F));
      goto LABEL_24;
    }
    v34 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v35 = *v34;
    v34[10] += 768;
    v36 = (_DWORD *)((v35 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v34[1] >= (unsigned __int64)(v36 + 192) && v35 )
    {
      *v34 = (__int64)(v36 + 192);
    }
    else
    {
      v53 = v30;
      v52 = -2 - v21;
      v50 = v20;
      v48 = v21;
      v36 = (_DWORD *)sub_986170((__int64)v34, 768, 768, 3, v20, v21);
      v30 = v53;
      LOBYTE(v28) = v52;
      LODWORD(v20) = v50;
      LODWORD(v21) = v48;
    }
    *v30 = v36;
    v37 = v36 + 192;
    do
    {
      *v36 = 0;
      v36 += 6;
      *((_OWORD *)v36 - 1) = 0;
      *((_QWORD *)v36 - 1) = 0;
    }
    while ( v36 != v37 );
    v26 = v54;
    v22 = (_DWORD *)(*v30 + 24 * (v28 & 0x1F));
  }
  else
  {
    v49 = v20;
    v45 = v21;
    v22 = (_DWORD *)sub_101F930(v7, v28, &v54);
    v26 = v54;
    LODWORD(v21) = v45;
    LODWORD(v20) = v49;
  }
  if ( v26 )
    goto LABEL_33;
LABEL_24:
  if ( !v22 )
  {
LABEL_33:
    v23 = 0;
    LODWORD(v21) = 0;
    goto LABEL_26;
  }
  v23 = v9 - (*v22 & 0x7FFFFFFF);
LABEL_26:
  if ( (_DWORD)v21 == v18 && v23 >= (unsigned int)v20 )
  {
    *a4 = v18;
    a4[1] = v20;
    *a5 = v23 - v20;
    return v11;
  }
  return 0;
}
