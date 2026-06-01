_DWORD *__fastcall sub_517D00(__int64 a1, unsigned int a2)
{
  _DWORD **v2; // rax
  _DWORD *result; // rax
  unsigned int v4; // ebp
  __int64 *v5; // r13
  unsigned __int64 v6; // r12
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // edx

  v2 = sub_516630(a1, a2);
  if ( v2 != (_DWORD **)(*(_QWORD *)(a1 + 8) + 8LL * *(_QWORD *)(a1 + 16)) )
  {
    result = *v2;
    if ( *result == a2 )
    {
      if ( result )
      {
        v4 = result[7];
        v5 = (__int64 *)(a1 + 32);
        v6 = v4;
        if ( !*(_BYTE *)(a1 + 64) )
          goto LABEL_5;
LABEL_8:
        result = (_DWORD *)sub_517580(v5, 0);
        if ( v6 >= *(_QWORD *)(a1 + 48) )
          return result;
        goto LABEL_9;
      }
    }
  }
  v5 = (__int64 *)(a1 + 32);
  result = (_DWORD *)sub_517B20(a1 + 32, a2);
  v4 = (unsigned int)result;
  v6 = (unsigned int)result;
  if ( *(_BYTE *)(a1 + 64) )
    goto LABEL_8;
LABEL_5:
  if ( v6 >= *(_QWORD *)(a1 + 48) )
    return result;
LABEL_9:
  result = (_DWORD *)sub_517A90((__int64)v5, v4);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
      v10 = *(_DWORD *)(v9 + 28);
      if ( v10 != -1 && v10 >= v4 )
        *(_DWORD *)(v9 + 28) = v10 - 1;
      v8 = ++v7;
    }
    while ( (unsigned __int64)v7 < *(_QWORD *)(a1 + 16) );
  }
  return result;
}

