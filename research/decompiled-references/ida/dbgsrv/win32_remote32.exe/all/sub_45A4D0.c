/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A4D0
// Address: 0x0045A4D0

//----- (0045A4D0) --------------------------------------------------------
char __stdcall sub_45A4D0(char *a1, char *a2, int a3)
{
  char *v3; // edi
  char *v4; // ecx
  char *v5; // ebx
  char v6; // al
  char *v7; // edx
  char *v8; // esi
  char v9; // al
  char v11; // cl
  char *v12; // esi
  char v13; // al

  if ( a3 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( !a3 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1538);
  }
  v3 = a1;
  v4 = a1;
  v5 = &a1[a3];
  v6 = *a2;
  v7 = a2 + 1;
  *a1 = *a2;
  if ( !v6 )
    return 1;
  while ( 1 )
  {
    v8 = v4++;
    if ( v4 == v5 )
      break;
    v9 = *v7++;
    *v4 = v9;
    if ( !v9 )
      return 1;
  }
  *v8 = 0;
  if ( v8 > a1 )
  {
    v11 = *(v8 - 1);
    v12 = v8 - 1;
    if ( v11 < 0 )
    {
      if ( v5 - 4 > a1 )
        v3 = v5 - 4;
      if ( (v11 & 0xC0) == 0x80 )
      {
        do
        {
          if ( v12 <= v3 )
            break;
          v13 = *--v12;
        }
        while ( (v13 & 0xC0) == 0x80 );
      }
      a3 = (int)v12;
      if ( sub_45A040(&a3) == -1 )
        *v12 = 0;
    }
  }
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
