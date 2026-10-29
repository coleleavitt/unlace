/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvector_reserve
// Address: 0x0007E9DC

//----- (0007E9DC) --------------------------------------------------------
void *__fastcall qvector_reserve(int a1, void *ptr, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r7
  unsigned int v5; // r6
  size_t v6; // r5
  void *result; // r0

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(2676);
    __debugbreak();
  }
  v4 = 2 * *(_DWORD *)(a1 + 8);
  v5 = v4;
  if ( a3 >= v4 )
    v5 = a3;
  if ( a4 && v5 && 0xFFFFFFFF / a4 < v5 && (v4 <= a3 || (v5 = 0, a3) && (v5 = a3, 0xFFFFFFFF / a4 < a3))
    || (v6 = a4 * v5, a4 * v5 >= 0x7FFFFFFF) )
  {
LABEL_18:
    sub_7E9A0();
  }
  if ( !v6 )
  {
    free(ptr);
    sub_7E9A0();
  }
  result = realloc(ptr, v6);
  if ( !result )
  {
    set_qerrno(1);
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 8) = v5;
  return result;
}
// E0550: using guessed type char under_debugger;
