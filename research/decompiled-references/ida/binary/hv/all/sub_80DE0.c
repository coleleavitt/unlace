__int64 sub_80DE0()
{
  __int64 *v0; // rax
  int v1; // edx
  __int64 *v2; // rsi
  char v3; // cl
  __int64 *v4; // rdx
  int v5; // eax
  int *v6; // r10
  unsigned __int8 i; // bl
  int *v8; // r8
  char v9; // cl
  __int64 v10; // r11
  int *v11; // rax
  int v12; // edx
  __int64 result; // rax

  v0 = qword_165D08;
  v1 = 1;
  byte_165D00 = 2;
  byte_165D04 = 1;
  do
  {
    *((_BYTE *)v0 + 1) = v1;
    v0 = (__int64 *)((char *)v0 + 4);
    ++v1;
    *((_BYTE *)v0 - 4) = 1;
  }
  while ( v0 != (__int64 *)((char *)&qword_165D08[8] + 4) );
  v2 = qword_165D50;
  v3 = 3;
  do
  {
    *((_BYTE *)v2 - 4) = v3;
    v4 = v2;
    v5 = 4;
    do
    {
      *((_BYTE *)v4 + 1) = v5++;
      v4 = (__int64 *)((char *)v4 + 4);
      *((_BYTE *)v4 - 4) = v3;
    }
    while ( (_BYTE)v5 != 19 );
    v2 += 8;
    ++v3;
  }
  while ( v2 != qword_165F90 );
  v6 = &dword_165F8C;
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
        *((_BYTE *)v11++ + 3) = v12++;
        *((_BYTE *)v11 - 4) = 1;
        *((_BYTE *)v11 - 3) = v9;
        *((_BYTE *)v11 - 2) = i + 3;
      }
      while ( (unsigned __int8)(i < 6u ? 6 : 4) >= (unsigned __int8)v12 );
      ++v9;
      v8 += v10 + 1;
    }
    while ( v9 != 5 );
    v6 += 3 * v10 + v10 + 4;
  }
  LODWORD(result) = 3;
  do
  {
    *(_BYTE *)v6 = result;
    result = (unsigned int)(result + 1);
    *((_BYTE *)++v6 - 3) = 4;
    *((_BYTE *)v6 - 2) = 1;
    *((_BYTE *)v6 - 1) = 1;
  }
  while ( (_BYTE)result != 12 );
  return result;
}

