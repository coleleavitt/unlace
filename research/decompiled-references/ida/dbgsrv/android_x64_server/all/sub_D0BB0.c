/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0BB0
// Address: 0x00000000000D0BB0

//----- (00000000000D0BB0) ----------------------------------------------------
void *__fastcall sub_D0BB0(size_t a1, size_t a2)
{
  void *v2; // rbx
  void *v3; // rax

  v2 = calloc(a1, a2);
  if ( !v2 )
  {
    v3 = (void *)sub_D0AB0(a1 * a2);
    if ( v3 )
    {
      v2 = v3;
      memset(v3, 0, a1 * a2);
    }
    else
    {
      return nullptr;
    }
  }
  return v2;
}
