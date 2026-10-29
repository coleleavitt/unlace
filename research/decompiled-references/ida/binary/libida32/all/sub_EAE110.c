__int64 __fastcall sub_EAE110(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  int v9; // r12d
  _DWORD *v10; // rax
  __int64 v11; // rbx
  char v12; // dl
  unsigned int v13; // esi
  int v14; // eax
  _DWORD *v15; // rax
  unsigned int v16; // edx
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // r15
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // r15
  char v25; // dl
  __int64 *v26; // rdi
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rcx
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  _BYTE v34[57]; // [rsp+Fh] [rbp-39h] BYREF

  v8 = *a1 & 0x7FFFFFFF;
  if ( v8 >= *(_DWORD *)(a2 + 476) && v8 < *(_DWORD *)(a2 + 480) )
    v9 = *(_DWORD *)(a2 + 472);
  else
    v9 = sub_FF9850(a2);
  v34[0] = 0;
  if ( (unsigned int)(v9 + 1) <= 1 )
    goto LABEL_11;
  if ( v9 >= 0 )
  {
    v10 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v9);
    goto LABEL_7;
  }
  v19 = (unsigned int)(-2 - v9);
  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v9) >> 6));
  if ( _bittest64(&v20, v19) )
  {
    v21 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v19 >> 5));
    if ( *v21 )
    {
      v10 = (_DWORD *)(*v21 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
      goto LABEL_7;
    }
    v26 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v27 = *v26;
    v26[10] += 768;
    v28 = (_DWORD *)((v27 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v26[1] >= (unsigned __int64)(v28 + 192) && v27 )
      *v26 = (__int64)(v28 + 192);
    else
      v28 = (_DWORD *)sub_962430((__int64)v26, 768, 768, 3, a5, a6);
    *v21 = v28;
    v29 = v28 + 192;
    do
    {
      *v28 = 0;
      v28 += 6;
      *((_OWORD *)v28 - 1) = 0;
      *((_QWORD *)v28 - 1) = 0;
    }
    while ( v29 != v28 );
    v12 = v34[0];
    v10 = (_DWORD *)(*v21 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
  }
  else
  {
    v10 = (_DWORD *)sub_FFBBF0(a2, (unsigned int)v19, v34);
    v12 = v34[0];
  }
  if ( v12 )
    goto LABEL_11;
LABEL_7:
  if ( !v10 )
  {
LABEL_11:
    v11 = 0;
    v9 = 0;
    goto LABEL_12;
  }
  v11 = v8 - (*v10 & 0x7FFFFFFF);
LABEL_12:
  v13 = a1[1] & 0x7FFFFFFF;
  if ( v13 >= *(_DWORD *)(a2 + 476) && v13 < *(_DWORD *)(a2 + 480) )
  {
    v14 = *(_DWORD *)(a2 + 472);
    v34[0] = 0;
    if ( (unsigned int)(v14 + 1) <= 1 )
      goto LABEL_23;
  }
  else
  {
    v14 = sub_FF9850(a2);
    v34[0] = 0;
    if ( (unsigned int)(v14 + 1) <= 1 )
      goto LABEL_23;
  }
  if ( v14 >= 0 )
  {
    v15 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v14);
    goto LABEL_17;
  }
  v22 = (unsigned int)(-2 - v14);
  v23 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v14) >> 6));
  if ( _bittest64(&v23, v22) )
  {
    v24 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v22 >> 5));
    if ( *v24 )
    {
      v15 = (_DWORD *)(*v24 + 24 * (v22 & 0x1F));
      goto LABEL_17;
    }
    v30 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v31 = *v30;
    v30[10] += 768;
    v32 = (_DWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v30[1] >= (unsigned __int64)(v32 + 192) && v31 )
      *v30 = (__int64)(v32 + 192);
    else
      v32 = (_DWORD *)sub_962430((__int64)v30, 768, 768, 3, a5, a6);
    *v24 = v32;
    v33 = v32 + 192;
    do
    {
      *v32 = 0;
      v32 += 6;
      *((_OWORD *)v32 - 1) = 0;
      *((_QWORD *)v32 - 1) = 0;
    }
    while ( v33 != v32 );
    v25 = v34[0];
    v15 = (_DWORD *)(*v24 + 24 * (v22 & 0x1F));
  }
  else
  {
    v15 = (_DWORD *)sub_FFBBF0(a2, (unsigned int)v22, v34);
    v25 = v34[0];
  }
  if ( !v25 )
  {
LABEL_17:
    v16 = 0;
    if ( v15 )
      v16 = v13 - (*v15 & 0x7FFFFFFF);
    if ( v16 - (unsigned int)v11 <= 1 )
      return 0;
    goto LABEL_24;
  }
LABEL_23:
  if ( (unsigned int)-(int)v11 <= 1 )
    return 0;
LABEL_24:
  v34[0] = 0;
  v18 = sub_FFC570(a2, (unsigned int)v9, v34);
  if ( v34[0] )
    return 0;
  return v11 + v18;
}

