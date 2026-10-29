__int64 __fastcall sub_27B9B0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( !(_DWORD)v2 )
      goto LABEL_6;
    v3 = 8 * v2;
    v4 = 0;
    do
    {
      v5 = v4 + v1;
      v4 += 8;
      result = sub_17B1E70(a1[1], v5);
      v1 = *a1;
    }
    while ( v3 != v4 );
    if ( v1 )
    {
LABEL_6:
      *(_DWORD *)(v1 - 4) = 0;
      return sub_186B220((void *)(v1 - 8));
    }
  }
  return result;
}

