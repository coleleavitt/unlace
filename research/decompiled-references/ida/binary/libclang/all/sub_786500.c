__int64 __fastcall sub_786500(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  int v5; // r8d
  unsigned __int64 v6; // rsi
  unsigned int v7; // edx
  _QWORD *v8; // rax
  __int64 v9; // r9
  unsigned int v10; // edx
  int v12; // eax
  int v13; // r11d
  _QWORD *v14; // r10
  unsigned int v15; // edx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v4 = a1 + 8;
    v5 = 7;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 16);
    if ( !v12 )
    {
      *a3 = 0;
      return 0;
    }
    v4 = *(_QWORD *)(a1 + 8);
    v5 = v12 - 1;
  }
  v6 = *a2;
  v7 = v5 & (v6 ^ (v6 >> 9));
  v8 = (_QWORD *)(v4 + 16LL * v7);
  v9 = *v8;
  if ( v6 == *v8 )
  {
    v10 = 1;
LABEL_5:
    *a3 = v8;
    return v10;
  }
  v13 = 1;
  v14 = nullptr;
  if ( v9 == -1 )
  {
    v10 = 0;
    goto LABEL_5;
  }
  do
  {
    if ( v9 == -16 && !v14 )
      v14 = v8;
    v7 = v5 & (v13 + v7);
    v8 = (_QWORD *)(v4 + 16LL * v7);
    v9 = *v8;
    if ( v6 == *v8 )
    {
      v15 = 1;
      goto LABEL_16;
    }
    ++v13;
  }
  while ( v9 != -1 );
  if ( v14 )
    v8 = v14;
  v15 = 0;
LABEL_16:
  *a3 = v8;
  return v15;
}

