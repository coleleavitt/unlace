/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064450
// Address: 0x0000000140064450

//----- (0000000140064450) ----------------------------------------------------
size_t __fastcall sub_140064450(FILE *Stream, void *Buffer, signed __int64 a3)
{
  size_t v6; // rsi
  unsigned int v7; // ebx

  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( Stream )
  {
    v6 = a3;
    if ( a3 )
    {
      v7 = 1;
      v6 = fread(Buffer, 1u, a3, Stream);
      if ( v6 != a3 )
      {
        if ( feof(Stream) )
          v7 = 3;
        sub_1400640B0(v7);
      }
    }
    return v6;
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 9;
    sub_1400640B0(1u);
    return -1;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
