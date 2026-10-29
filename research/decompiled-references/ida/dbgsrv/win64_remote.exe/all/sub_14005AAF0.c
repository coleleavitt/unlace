/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005AAF0
// Address: 0x000000014005AAF0

//----- (000000014005AAF0) ----------------------------------------------------
void *__fastcall sub_14005AAF0(void *a1, signed __int64 a2)
{
  void *v3; // rbx

  if ( !a2 )
  {
    free(a1);
    return nullptr;
  }
  if ( a2 <= 0 )
  {
    v3 = nullptr;
    *errno() = 12;
LABEL_6:
    sub_1400640B0(1u);
    return v3;
  }
  v3 = j__realloc_base(a1, a2);
  if ( !v3 )
    goto LABEL_6;
  return v3;
}
