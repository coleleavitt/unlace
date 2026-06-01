__int64 sub_7F4DE0()
{
  char *v0; // rax
  int v1; // edx
  char *v2; // rsi
  char v3; // cl
  char *v4; // rdx
  int v5; // eax
  _BYTE *v6; // r10
  unsigned __int8 i; // bl
  _BYTE *v8; // r8
  char v9; // cl
  __int64 v10; // r11
  _BYTE *v11; // rax
  int v12; // edx
  __int64 result; // rax

  v0 = (char *)&unk_2CAAB28;
  v1 = 1;
  byte_2CAAB20 = 2;
  byte_2CAAB24 = 1;
  do
  {
    v0[1] = v1;
    v0 += 4;
    ++v1;
    *(v0 - 4) = 1;
  }
  while ( v0 != (char *)&unk_2CAAB6C );
  v2 = (char *)&unk_2CAAB70;
  v3 = 3;
  do
  {
    *(v2 - 4) = v3;
    v4 = v2;
    v5 = 4;
    do
    {
      v4[1] = v5++;
      v4 += 4;
      *(v4 - 4) = v3;
    }
    while ( (_BYTE)v5 != 19 );
    v2 += 64;
    ++v3;
  }
  while ( v2 != (char *)&unk_2CAADB0 );
  v6 = &unk_2CAADAC;
  for ( i = 0; i != 9; ++i )
  {
    v8 = v6;
    v9 = 1;
    v10 = i < 6u ? 2 : 0;
    do
    {
      v11 = v8;
      v12 = 4;
      do
      {
        v11[3] = v12++;
        v11 += 4;
        *(v11 - 4) = 1;
        *(v11 - 3) = v9;
        *(v11 - 2) = i + 3;
      }
      while ( (unsigned __int8)(i < 6u ? 6 : 4) >= (unsigned __int8)v12 );
      ++v9;
      v8 += 4 * v10 + 4;
    }
    while ( v9 != 5 );
    v6 += 12 * v10 + 4 * v10 + 16;
  }
  LODWORD(result) = 3;
  do
  {
    *v6 = result;
    result = (unsigned int)(result + 1);
    v6 += 4;
    *(v6 - 3) = 4;
    *(v6 - 2) = 1;
    *(v6 - 1) = 1;
  }
  while ( (_BYTE)result != 12 );
  return result;
}

