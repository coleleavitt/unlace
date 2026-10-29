__int64 __fastcall sub_FF77C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  _DWORD *v11; // rax
  unsigned int v12; // r14d
  unsigned int *v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // r15
  char v20; // dl
  __int64 *v21; // rdi
  __int64 v22; // rcx
  _DWORD *v23; // rax
  _DWORD *v24; // rdx
  _BYTE v25[57]; // [rsp+Fh] [rbp-39h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v9 >= *(_DWORD *)(v8 + 476) && v9 < *(_DWORD *)(v8 + 480) )
  {
    v10 = *(_DWORD *)(v8 + 472);
    v25[0] = 0;
    if ( (unsigned int)(v10 + 1) <= 1 )
      goto LABEL_13;
  }
  else
  {
    v10 = sub_FF9850(*(_QWORD *)(a1 + 8));
    v25[0] = 0;
    if ( (unsigned int)(v10 + 1) <= 1 )
      goto LABEL_13;
  }
  if ( v10 >= 0 )
  {
    v11 = (_DWORD *)(*(_QWORD *)(v8 + 184) + 24LL * (unsigned int)v10);
    goto LABEL_6;
  }
  v17 = (unsigned int)(-2 - v10);
  v18 = *(_QWORD *)(*(_QWORD *)(v8 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
  if ( _bittest64(&v18, v17) )
  {
    v19 = (_QWORD *)(*(_QWORD *)(v8 + 272) + 8 * ((unsigned __int64)(int)v17 >> 5));
    if ( *v19 )
    {
      v11 = (_DWORD *)(*v19 + 24 * (v17 & 0x1F));
      goto LABEL_6;
    }
    v21 = (__int64 *)(*(_QWORD *)(v8 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v22 = *v21;
    v21[10] += 768;
    v23 = (_DWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v21[1] >= (unsigned __int64)(v23 + 192) && v22 )
      *v21 = (__int64)(v23 + 192);
    else
      v23 = (_DWORD *)sub_962430((__int64)v21, 768, 768, 3, a5, a6);
    *v19 = v23;
    v24 = v23 + 192;
    do
    {
      *v23 = 0;
      v23 += 6;
      *((_OWORD *)v23 - 1) = 0;
      *((_QWORD *)v23 - 1) = 0;
    }
    while ( v23 != v24 );
    v20 = v25[0];
    v11 = (_DWORD *)(*v19 + 24 * (v17 & 0x1F));
  }
  else
  {
    v11 = (_DWORD *)sub_FFBBF0(v8, (unsigned int)v17, v25);
    v20 = v25[0];
  }
  if ( v20 )
  {
LABEL_13:
    v12 = 0;
    goto LABEL_8;
  }
LABEL_6:
  v12 = 0;
  if ( v11 )
    v12 = v9 - (*v11 & 0x7FFFFFFF);
LABEL_8:
  v13 = *(unsigned int **)(a1 + 8);
  v14 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v14 < v13[119] || v14 >= v13[120] )
    v15 = (unsigned int)sub_FF9850(v13);
  else
    v15 = v13[118];
  return sub_FFE8F0(v8, v15, v12, a2);
}

