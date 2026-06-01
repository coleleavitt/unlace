/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70558
// Address: 0x00070558

//----- (00070558) --------------------------------------------------------
int __fastcall sub_70558(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r2
  unsigned __int8 *v4; // r3
  int v5; // t1
  unsigned __int8 *v6; // r5
  char v8; // r2
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r5
  int v11; // r2
  char v13; // t1
  _BOOL4 v14; // r3
  unsigned __int8 *v15; // [sp+0h] [bp-8h] BYREF

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_78C64(1225);
LABEL_9:
    __und(0xFFu);
  }
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_78C64(1538);
    goto LABEL_9;
  }
  v3 = &a1[a3];
  v4 = a1;
  do
  {
    v5 = *a2++;
    v6 = v4;
    *v4++ = v5;
    if ( !v5 )
      return 1;
  }
  while ( v3 != v4 );
  *v6 = 0;
  if ( v6 > a1 )
  {
    v8 = *(v6 - 1);
    if ( (v8 & 0x80) == 0 )
      return 0;
    v9 = v6 - 3;
    v10 = v6 - 1;
    v11 = v8 & 0xC0;
    if ( a1 < v9 )
      a1 = v9;
    if ( v11 == 128 && v10 > a1 )
    {
      do
      {
        v13 = *--v10;
        v14 = v10 <= a1;
        if ( (v13 & 0xC0) != 0x80 )
          v14 = 1;
      }
      while ( !v14 );
    }
    v15 = v10;
    if ( sub_70290(&v15) == -1 )
      *v10 = 0;
  }
  return 0;
}
// D6C20: using guessed type char under_debugger;
