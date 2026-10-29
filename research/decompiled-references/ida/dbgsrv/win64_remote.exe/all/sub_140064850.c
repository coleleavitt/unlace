/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064850
// Address: 0x0000000140064850

//----- (0000000140064850) ----------------------------------------------------
__int64 __fastcall sub_140064850(FILE *Stream, char *a2, int a3, int a4)
{
  size_t v4; // rbx
  char *v6; // rdx
  __int64 i; // rax
  char v8; // cl
  _BYTE Buffer[32]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  if ( (unsigned __int64)a3 > 0x20 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    v6 = &a2[a3];
    if ( a3 > 0 )
    {
      for ( i = 0; i < a3; Buffer[i++] = v8 )
        v8 = *--v6;
    }
  }
  else if ( a3 > 0 )
  {
    memcpy(Buffer, a2, a3);
  }
  return (unsigned int)-(v4 != sub_1400645E0(Stream, Buffer, v4));
}
