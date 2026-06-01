/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005ABE0
// Address: 0x000000014005ABE0

//----- (000000014005ABE0) ----------------------------------------------------
void *__fastcall sub_14005ABE0(__int64 a1, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rdx
  void *result; // rax

  if ( !a1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(2676);
  }
  v6 = 2LL * *(_QWORD *)(a1 + 16);
  v7 = a3;
  if ( v6 > a3 )
    v7 = v6;
  if ( a4 && v7 && v7 > 0xFFFFFFFFFFFFFFFFuLL / a4 )
  {
    if ( a3 >= v6 || a3 && a3 > 0xFFFFFFFFFFFFFFFFuLL / a4 )
LABEL_22:
      sub_14005AA30();
    v7 = a3;
  }
  v8 = a4 * v7;
  if ( a4 * v7 >= 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_22;
  if ( !v8 )
  {
    free(a2);
    goto LABEL_22;
  }
  if ( v8 <= 0 )
  {
    *errno() = 12;
    goto LABEL_21;
  }
  result = j__realloc_base(a2, v8);
  if ( !result )
  {
LABEL_21:
    sub_1400640B0(1u);
    goto LABEL_22;
  }
  *(_QWORD *)(a1 + 16) = v7;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
