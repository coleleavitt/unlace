/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005AA50
// Address: 0x000000014005AA50

//----- (000000014005AA50) ----------------------------------------------------
void *__fastcall sub_14005AA50(signed __int64 a1)
{
  void *v2; // rbx

  if ( !a1 )
    return nullptr;
  if ( a1 <= 0 )
  {
    v2 = nullptr;
    *errno() = 12;
LABEL_6:
    sub_1400640B0(1u);
    return v2;
  }
  v2 = j__malloc_base(a1);
  if ( !v2 )
    goto LABEL_6;
  return v2;
}
