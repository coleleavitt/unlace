/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E980
// Address: 0x000000010004E980

//----- (000000010004E980) ----------------------------------------------------
void *__fastcall sub_10004E980(_QWORD *a1, const void *a2, unsigned __int64 a3)
{
  void *v3; // rdi
  size_t v4; // r14
  unsigned __int64 v5; // r12
  void *v6; // rax

  if ( a3 > 0x16 )
  {
    if ( a3 >= 0xFFFFFFFFFFFFFFF8LL )
      sub_10004CF00();
    v4 = 26;
    if ( (a3 | 7) != 0x17 )
      v4 = (a3 | 7) + 1;
    v5 = a3;
    v6 = operator new(v4);
    a3 = v5;
    a1[2] = v6;
    *a1 = v4 + 1;
    a1[1] = v5;
    v3 = v6;
  }
  else
  {
    *(_BYTE *)a1 = 2 * a3;
    v3 = (char *)a1 + 1;
  }
  return memmove(v3, a2, a3 + 1);
}
