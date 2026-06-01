/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480C40
// Address: 0x0000000000480C40

//----- (0000000000480C40) ----------------------------------------------------
__int64 __fastcall sub_480C40(FILE *s, void *ptr, size_t a3)
{
  __int64 v4; // rbp
  signed __int64 v6; // rax

  if ( !s )
  {
    v4 = -1;
    sub_479EB0(1u);
    *__errno_location() = 9;
    sub_479EB0(1u);
    return v4;
  }
  v4 = 0;
  if ( !a3 )
    return v4;
  v6 = fwrite(ptr, 1u, a3, s);
  v4 = v6;
  if ( a3 == v6 )
    return v4;
  sub_479EB0((v6 > 0) + 1);
  return v4;
}
