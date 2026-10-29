/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400647A0
// Address: 0x00000001400647A0

//----- (00000001400647A0) ----------------------------------------------------
__int64 __fastcall sub_1400647A0(FILE *a1, _BYTE *a2, int a3, int a4)
{
  __int64 v4; // rbx
  _BYTE *v8; // rdx
  __int64 i; // rcx
  char v10; // al
  _BYTE *v11; // rax
  _BYTE Buffer[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a3;
  if ( sub_140064450(a1, Buffer, a3) != a3 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    v8 = &a2[v4];
    if ( v4 > 0 )
    {
      for ( i = 0; i < v4; ++i )
      {
        v10 = Buffer[i];
        *--v8 = v10;
      }
    }
  }
  else if ( v4 > 0 )
  {
    v11 = a2;
    do
    {
      *v11 = v11[Buffer - a2];
      ++v11;
    }
    while ( v11 - a2 < v4 );
  }
  return 0;
}
