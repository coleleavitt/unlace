_DWORD *__fastcall sub_FFB800(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rsi
  int v14; // [rsp+Ch] [rbp-1Ch] BYREF
  int *v15; // [rsp+18h] [rbp-10h] BYREF

  v4 = a1 + 152;
  v5 = *(_QWORD *)(a1 + 160);
  v14 = a2;
  if ( !v5 )
    goto LABEL_10;
  do
  {
    while ( *(_DWORD *)(v5 + 32) >= a2 )
    {
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 152 == v4 || a2 < *(_DWORD *)(v4 + 32) )
  {
LABEL_10:
    v15 = &v14;
    v4 = sub_FFB550((_QWORD *)(a1 + 144), v4, &v15);
    v6 = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(v6 - 20) <= a3 )
      return (_DWORD *)(v6 - 20);
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(v6 - 20) <= a3 )
      return (_DWORD *)(v6 - 20);
  }
  v8 = *(_DWORD **)(v4 + 40);
  v9 = v6 - (_QWORD)v8;
  v10 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - (__int64)v8) >> 2);
  if ( v9 <= 0 )
    return nullptr;
  v11 = v8;
  do
  {
    while ( 1 )
    {
      v12 = v10 >> 1;
      v13 = &v11[5 * (v10 >> 1)];
      if ( *v13 > a3 )
        break;
      v11 = v13 + 5;
      v10 = v10 - v12 - 1;
      if ( v10 <= 0 )
        goto LABEL_15;
    }
    v10 >>= 1;
  }
  while ( v12 );
LABEL_15:
  if ( v8 == v11 )
    return nullptr;
  else
    return v11 - 5;
}

