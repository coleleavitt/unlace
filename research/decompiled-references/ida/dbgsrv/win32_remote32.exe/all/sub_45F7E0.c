/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F7E0
// Address: 0x0045F7E0

//----- (0045F7E0) --------------------------------------------------------
int __stdcall sub_45F7E0(_WORD *a1, int a2)
{
  int v2; // esi
  __int16 v4; // bx
  int v5; // esi
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11; // [esp+10h] [ebp+8h]

  v2 = a2;
  if ( !a2 )
    return 1;
  if ( a2 >= 0 )
  {
    if ( a2 >= 16 )
    {
      v9 = (unsigned int)a2 >> 4;
      v11 = -16 * ((unsigned int)a2 >> 4) + a2;
      do
      {
        sub_464310((unsigned int)(a1 + 2), (unsigned int)(a1 + 3), 0x10u);
        a1[10] = 0;
        --v9;
      }
      while ( v9 );
      v2 = v11;
    }
    if ( v2 >= 8 )
    {
      v10 = (unsigned int)v2 >> 3;
      v2 -= 8 * ((unsigned int)v2 >> 3);
      do
      {
        sub_45E470(a1);
        --v10;
      }
      while ( v10 );
    }
    for ( ; v2 > 0; --v2 )
      sub_45E2E0(a1);
    v4 = 0;
    return (v4 != 0) + 1;
  }
  v4 = 0;
  v5 = -a2;
  if ( -a2 >= 16 )
  {
    v6 = (unsigned int)(a1 + 3);
    v7 = (unsigned int)v5 >> 4;
    do
    {
      v4 |= a1[10];
      sub_464310(v6, (unsigned int)(a1 + 2), 0x10u);
      v6 = (unsigned int)(a1 + 3);
      a1[2] = 0;
      --v7;
    }
    while ( v7 );
    v5 = -16 * ((unsigned int)-a2 >> 4) - a2;
  }
  if ( v5 >= 8 )
  {
    v8 = (unsigned int)v5 >> 3;
    do
    {
      v4 |= (unsigned __int8)a1[10];
      sub_45E220((int)a1);
      --v8;
    }
    while ( v8 );
    v5 -= 8 * ((unsigned int)v5 >> 3);
  }
  if ( v5 <= 0 )
    return (v4 != 0) + 1;
  do
  {
    v4 |= a1[10] & 1;
    sub_45E090(a1);
    --v5;
  }
  while ( v5 > 0 );
  return (v4 != 0) + 1;
}
