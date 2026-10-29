unsigned __int64 __fastcall sub_530100(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbp
  __int64 *v5; // r12
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // edx

  v2 = (unsigned __int64 *)sub_52EA70(a1, a2);
  if ( v2 != (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * *(_QWORD *)(a1 + 16)) )
  {
    result = *v2;
    if ( *(_QWORD *)result == a2 )
    {
      if ( result )
      {
        v4 = *(int *)(result + 36);
        v5 = (__int64 *)(a1 + 32);
        if ( !*(_BYTE *)(a1 + 64) )
          goto LABEL_5;
LABEL_8:
        result = sub_52F980(v5, 0);
        if ( v4 >= *(_QWORD *)(a1 + 48) )
          return result;
        goto LABEL_9;
      }
    }
  }
  v5 = (__int64 *)(a1 + 32);
  result = sub_52FF20(a1 + 32, a2);
  v4 = (int)result;
  if ( *(_BYTE *)(a1 + 64) )
    goto LABEL_8;
LABEL_5:
  if ( v4 >= *(_QWORD *)(a1 + 48) )
    return result;
LABEL_9:
  result = sub_52FE90((__int64)v5, v4);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7);
      v9 = *(_DWORD *)(v8 + 36);
      if ( v9 != -1 && v9 >= (unsigned int)v4 )
        *(_DWORD *)(v8 + 36) = v9 - 1;
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 16) );
  }
  return result;
}
