/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF920
// Address: 0x080CF920

//----- (080CF920) --------------------------------------------------------
void *__cdecl sub_80CF920(int a1, void *ptr, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // esi
  size_t v6; // eax
  void *result; // eax
  int v8; // [esp-24h] [ebp-28h]
  int v9; // [esp-20h] [ebp-24h]
  int v10; // [esp-1Ch] [ebp-20h]

  if ( !a1 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(2676, v8, v9, v10);
    BUG();
  }
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a3;
  if ( 2 * v4 >= a3 )
    v5 = 2 * v4;
  if ( v5 && a4 && !is_mul_ok(a4, v5) )
  {
    if ( a3 >= 2 * v4 || a3 && !is_mul_ok(a4, a3) )
      std::__throw_bad_alloc();
    v5 = a3;
    v6 = a3 * a4;
  }
  else
  {
    v6 = v5 * a4;
  }
  result = sub_80CF8E0(ptr, v6);
  *(_DWORD *)(a1 + 8) = v5;
  return result;
}
// 80CF999: variable 'v8' is possibly undefined
// 80CF999: variable 'v9' is possibly undefined
// 80CF999: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
