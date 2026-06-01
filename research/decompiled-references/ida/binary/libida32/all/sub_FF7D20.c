__int64 __fastcall sub_FF7D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v7; // ebx
  int v8; // eax
  _DWORD *v9; // rdx
  __int64 result; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // r13
  char v14; // al
  __int64 *v15; // rdi
  __int64 v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  _BYTE v19[41]; // [rsp+Fh] [rbp-29h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v7 < *(_DWORD *)(v6 + 476) || v7 >= *(_DWORD *)(v6 + 480) )
  {
    v8 = sub_FF9850(*(_QWORD *)(a1 + 8));
    v19[0] = 0;
    if ( (unsigned int)(v8 + 1) > 1 )
      goto LABEL_4;
    return 0;
  }
  v8 = *(_DWORD *)(v6 + 472);
  v19[0] = 0;
  if ( (unsigned int)(v8 + 1) <= 1 )
    return 0;
LABEL_4:
  if ( v8 >= 0 )
  {
    v9 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 24LL * (unsigned int)v8);
    goto LABEL_6;
  }
  v11 = (unsigned int)(-2 - v8);
  v12 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
  if ( _bittest64(&v12, v11) )
  {
    v13 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v11 >> 5));
    if ( *v13 )
    {
      v9 = (_DWORD *)(*v13 + 24 * (v11 & 0x1F));
      goto LABEL_6;
    }
    v15 = (__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v16 = *v15;
    v15[10] += 768;
    v17 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v15[1] >= (unsigned __int64)(v17 + 192) && v16 )
      *v15 = (__int64)(v17 + 192);
    else
      v17 = (_DWORD *)sub_962430((__int64)v15, 768, 768, 3, a5, a6);
    *v13 = v17;
    v18 = v17 + 192;
    do
    {
      *v17 = 0;
      v17 += 6;
      *((_OWORD *)v17 - 1) = 0;
      *((_QWORD *)v17 - 1) = 0;
    }
    while ( v17 != v18 );
    v14 = v19[0];
    v9 = (_DWORD *)(*v13 + 24 * (v11 & 0x1F));
  }
  else
  {
    v9 = (_DWORD *)sub_FFBBF0(v6, (unsigned int)v11, v19);
    v14 = v19[0];
  }
  if ( v14 )
    return 0;
LABEL_6:
  result = 0;
  if ( v9 )
    return v7 - (*v9 & 0x7FFFFFFF);
  return result;
}

