/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400645E0
// Address: 0x00000001400645E0

//----- (00000001400645E0) ----------------------------------------------------
size_t __fastcall sub_1400645E0(FILE *Stream, void *Buffer, size_t a3)
{
  size_t v5; // rbx
  signed __int64 v6; // rax

  if ( Stream )
  {
    v5 = a3;
    if ( a3 )
    {
      v6 = fwrite(Buffer, 1u, a3, Stream);
      v5 = v6;
      if ( v6 != a3 )
        sub_1400640B0((v6 > 0) + 1);
    }
    return v5;
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 9;
    sub_1400640B0(1u);
    return -1;
  }
}
