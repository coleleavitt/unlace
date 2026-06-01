__int64 __fastcall sub_7B4DE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // r8d
  unsigned int v7; // edx
  _QWORD *v8; // rsi
  __int64 v9; // r9
  __int64 result; // rax
  int v11; // edx
  int v12; // r11d
  _QWORD *v13; // r10

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v5 = a1 + 8;
    v6 = 7;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 16);
    if ( !v11 )
    {
      *a3 = 0;
      return 0;
    }
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v11 - 1;
  }
  v7 = v6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v8 = (_QWORD *)(v5 + 8LL * v7);
  v9 = *v8;
  if ( a2 == *v8 )
  {
    result = 1;
LABEL_5:
    *a3 = v8;
    return result;
  }
  v12 = 1;
  v13 = nullptr;
  if ( v9 == -4096 )
  {
    result = 0;
    goto LABEL_5;
  }
  do
  {
    if ( v9 == -8192 && !v13 )
      v13 = v8;
    v7 = v6 & (v12 + v7);
    v8 = (_QWORD *)(v5 + 8LL * v7);
    v9 = *v8;
    if ( *v8 == a2 )
    {
      result = 1;
      goto LABEL_16;
    }
    ++v12;
  }
  while ( v9 != -4096 );
  if ( v13 )
    v8 = v13;
  result = 0;
LABEL_16:
  *a3 = v8;
  return result;
}

