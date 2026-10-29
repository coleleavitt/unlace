/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4508C0
// Address: 0x00000000004508C0

//----- (00000000004508C0) ----------------------------------------------------
void *__fastcall sub_4508C0(unsigned __int64 a1)
{
  size_t v1; // x19
  void *v2; // x0

  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    sub_4A0308();
  v1 = 8 * a1;
  v2 = sub_49E050(8 * a1);
  return memset(v2, 0, v1);
}
