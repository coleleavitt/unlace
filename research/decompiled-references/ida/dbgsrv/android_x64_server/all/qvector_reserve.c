/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvector_reserve
// Address: 0x00000000000C32E0

//----- (00000000000C32E0) ----------------------------------------------------
void *__fastcall qvector_reserve(__int64 a1, char *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  void *result; // rax

  if ( !a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2676);
    BUG();
  }
  v5 = 2LL * *(_QWORD *)(a1 + 16);
  v6 = a3;
  if ( v5 > a3 )
    v6 = v5;
  if ( a4 && v6 && 0xFFFFFFFFFFFFFFFFLL / a4 < v6 )
  {
    if ( v5 <= a3 )
      goto LABEL_10;
    if ( a3 )
    {
      v6 = a3;
      if ( 0xFFFFFFFFFFFFFFFFLL / a4 < a3 )
LABEL_10:
        sub_C3280();
    }
    else
    {
      v6 = 0;
    }
  }
  result = qrealloc_or_throw(a2, v6 * a4);
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
