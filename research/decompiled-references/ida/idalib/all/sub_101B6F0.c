unsigned __int64 __fastcall sub_101B6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v7; // r12
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  _DWORD *v10; // rsi
  unsigned __int64 v11; // rax
  char v12; // al
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // r15
  unsigned __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  char v22[57]; // [rsp+Fh] [rbp-39h] BYREF

  v6 = *(_DWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v8 >= *(_DWORD *)(v7 + 476) && v8 < *(_DWORD *)(v7 + 480) )
    v9 = *(_DWORD *)(v7 + 472);
  else
    v9 = sub_101D590(*(_QWORD *)(a1 + 8));
  v22[0] = 0;
  if ( v9 + 1 <= 1 )
    goto LABEL_12;
  if ( (v9 & 0x80000000) == 0 )
  {
    v10 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * v9);
    goto LABEL_7;
  }
  v14 = -2 - v9;
  v15 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((-2 - v9) >> 6));
  if ( _bittest64(&v15, v14) )
  {
    v16 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v14 >> 5));
    if ( *v16 )
    {
      v10 = (_DWORD *)(*v16 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
      goto LABEL_7;
    }
    v18 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v19 = *v18;
    v18[10] += 768;
    v20 = (_DWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v18[1] >= (unsigned __int64)(v20 + 192) && v19 )
      *v18 = (__int64)(v20 + 192);
    else
      v20 = (_DWORD *)sub_986170((__int64)v18, 768, 768, 3, a5, a6);
    *v16 = v20;
    v21 = v20 + 192;
    do
    {
      *v20 = 0;
      v20 += 6;
      *((_OWORD *)v20 - 1) = 0;
      *((_QWORD *)v20 - 1) = 0;
    }
    while ( v20 != v21 );
    v12 = v22[0];
    v10 = (_DWORD *)(*v16 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
  }
  else
  {
    v10 = (_DWORD *)sub_101F930(v7, (unsigned int)v14, v22);
    v12 = v22[0];
  }
  if ( v12 )
    goto LABEL_12;
LABEL_7:
  if ( !v10 )
  {
LABEL_12:
    v11 = 0;
    v9 = 0;
    return (v11 << 32) | v9;
  }
  if ( v6 < 0 )
  {
    v17 = sub_1021390(v7);
    v9 = v17;
    v11 = HIDWORD(v17);
  }
  else
  {
    v11 = v8 - (*v10 & 0x7FFFFFFF);
  }
  return (v11 << 32) | v9;
}
