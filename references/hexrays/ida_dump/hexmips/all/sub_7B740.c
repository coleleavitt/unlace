__int64 __fastcall sub_7B740(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  int v5; // r13d
  char v6; // si
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rsi
  __int64 result; // rax
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = 0xFF00000000000000LL;
  v3 = 0;
  if ( (unsigned __int64)a2 <= 0x7F )
    return sub_76580(a1, a2);
  while ( (v2 & a2) == 0 )
  {
    ++v3;
    v2 >>= 8;
    if ( v3 == 8 )
    {
      v5 = -1;
      v6 = 0x80;
      goto LABEL_5;
    }
  }
  v6 = 16 * v3;
  do
  {
    if ( (v2 & ~a2) != 0 )
    {
      v5 = 7 - v3;
      v6 |= 8 - v3;
      goto LABEL_5;
    }
    ++v3;
    v2 >>= 8;
  }
  while ( v3 != 8 );
  v5 = -1;
LABEL_5:
  v7 = a1[1];
  v8 = v6 | 0x80;
  v9 = *a1;
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v15 = qvector_reserve(a1, v9, v7 + 1, 1);
    *a1 = v15;
    v9 = v15;
    v7 = a1[1];
  }
  *(_BYTE *)(v9 + v7) = v8;
  result = a1[1];
  v11 = 8 * v5;
  v12 = result + 1;
  a1[1] = result + 1;
  if ( v5 != -1 )
  {
    do
    {
      v13 = *a1;
      if ( a1[2] < (unsigned __int64)(v12 + 1) )
      {
        v14 = qvector_reserve(a1, v13, v12 + 1, 1);
        v12 = a1[1];
        *a1 = v14;
        v13 = v14;
      }
      *(_BYTE *)(v13 + v12) = a2 >> v11;
      result = a1[1];
      v11 -= 8;
      v12 = result + 1;
      a1[1] = result + 1;
    }
    while ( v11 != -8 );
  }
  return result;
}
