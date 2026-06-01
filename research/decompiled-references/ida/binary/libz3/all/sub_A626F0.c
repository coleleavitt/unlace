__int64 __fastcall sub_A626F0(__int64 a1, unsigned int **a2, double a3)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // r14
  int v5; // r13d
  _BYTE v7[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *a2;
  v7[0] = 0;
  if ( !v3 )
    return 1;
  v4 = &v3[*(v3 - 1)];
  if ( v4 == v3 )
    return 1;
  v5 = 0;
  do
  {
    if ( (unsigned int)sub_A18860(a1, *v3, 1u, 0, v7) == 2 )
      v5 |= v7[0] ^ 1;
    if ( (unsigned int)sub_A18860(a1, *v3, 0, 0, v7) == 2 )
      v5 |= v7[0] ^ 1;
    ++v3;
  }
  while ( v3 != v4 );
  if ( (_BYTE)v5 )
    return sub_A62500(a1, a3);
  else
    return 1;
}

