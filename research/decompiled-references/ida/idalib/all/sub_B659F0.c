__int64 __fastcall sub_B659F0(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD **v2; // rdi
  __int64 result; // rax
  char v4; // cl
  char v5; // dl
  char v6; // cl
  char v7; // bl
  int v8; // r11d
  int v9; // ecx
  int v10; // ebx

  v1 = (_QWORD **)(a1 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a1) >> 3) ^ 1) & 1) + 24);
  v2 = &v1[*(unsigned int *)(a1 + 4)];
  if ( v2 == v1 )
    return 0;
  LODWORD(result) = 0;
  do
  {
    while ( 1 )
    {
      v4 = *(_BYTE *)(*(_QWORD *)(**v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
      v6 = (2 * ((v4 & 2) != 0))
         | ((v4 & 4) != 0 ? 0xC : 0)
         | (16 * ((v4 & 0x10) != 0))
         | (32 * ((v4 & 8) != 0))
         | v4 & 1;
      v5 = v6;
      v7 = v6;
      v8 = v6 & 0x10;
      if ( (v6 & 0x10) != 0 )
        v8 = 16;
      v9 = v6 & 8;
      if ( v9 )
        v9 = 8;
      v10 = v7 & 4;
      if ( v10 )
        LOBYTE(v10) = 4;
      if ( (v5 & 2) != 0 )
        break;
      ++v1;
      result = v9 | v8 | v5 & 1 | (unsigned int)result;
      if ( v2 == v1 )
        return result;
    }
    ++v1;
    result = v10 & 0x1B | v9 & 0x1B | v8 & 0x1B | v5 & 1 | 2 | (unsigned int)result;
  }
  while ( v2 != v1 );
  return result;
}
