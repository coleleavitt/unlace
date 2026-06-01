__int64 __fastcall sub_1EA7420(__int64 a1)
{
  unsigned int v1; // r12d
  int v2; // ebx
  unsigned int v3; // r13d
  unsigned __int64 v4; // rax
  unsigned int *v5; // rdx
  unsigned __int8 *v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = 5381;
  v10[0] = a1;
  v2 = sub_FDE930(v10);
  if ( !v2 )
    v2 = 1;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v4 = sub_FDE960(v10, v3);
      if ( v4 )
      {
        v5 = *(unsigned int **)(v4 + 16);
        v6 = (unsigned __int8 *)(v5 + 4);
        v7 = (__int64)v5 + *v5 + 16;
        if ( (unsigned int *)v7 != v5 + 4 )
          break;
      }
      if ( v2 == ++v3 )
        return v1;
    }
    do
    {
      v8 = *v6++;
      v1 += v8 + 32 * v1;
    }
    while ( (unsigned __int8 *)v7 != v6 );
    ++v3;
  }
  while ( v2 != v3 );
  return v1;
}
