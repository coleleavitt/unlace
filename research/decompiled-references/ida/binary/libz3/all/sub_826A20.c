bool __fastcall sub_826A20(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned int v5; // ecx

  v2 = a1 + 16;
  v3 = a1[8];
  if ( !(v3 * 4) )
    return a1[15] == 0;
  v4 = *(_QWORD *)(a2 + 96);
  v5 = 0;
  do
    v5 -= (*(_BYTE *)(v4 + (*v2++ ^ 1)) == 0) - 1;
  while ( &a1[v3 + 16] != v2 );
  return v5 >= a1[15];
}

