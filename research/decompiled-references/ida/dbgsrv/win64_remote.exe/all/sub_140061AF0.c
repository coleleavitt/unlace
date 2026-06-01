/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061AF0
// Address: 0x0000000140061AF0

//----- (0000000140061AF0) ----------------------------------------------------
char __fastcall sub_140061AF0(_BYTE *a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  char v4; // al
  _BYTE *v5; // r8
  char *v6; // rdx
  _BYTE *v7; // rbx
  char v8; // al
  char v10; // cl
  unsigned __int8 *v11; // rbx
  char v12; // al
  unsigned __int8 *v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = (unsigned __int64)a1;
  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( !a3 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1538);
  }
  v4 = *a2;
  v5 = &a1[a3];
  v6 = a2 + 1;
  *a1 = v4;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v7 = a1++;
    if ( a1 == v5 )
      break;
    v8 = *v6++;
    *a1 = v8;
    if ( !v8 )
      return 1;
  }
  *v7 = 0;
  if ( (unsigned __int64)v7 > v3 )
  {
    v10 = *(v7 - 1);
    v11 = v7 - 1;
    if ( v10 < 0 )
    {
      if ( (unsigned __int64)(v5 - 4) > v3 )
        v3 = (unsigned __int64)(v5 - 4);
      if ( (v10 & 0xC0) == 0x80 )
      {
        do
        {
          if ( (unsigned __int64)v11 <= v3 )
            break;
          v12 = *--v11;
        }
        while ( (v12 & 0xC0) == 0x80 );
      }
      v13 = v11;
      if ( (unsigned int)sub_1400615C0(&v13) == -1 )
        *v11 = 0;
    }
  }
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
