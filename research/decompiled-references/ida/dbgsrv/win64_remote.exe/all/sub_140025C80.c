/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025C80
// Address: 0x0000000140025C80

//----- (0000000140025C80) ----------------------------------------------------
void *__fastcall sub_140025C80(__int64 a1, void *a2, signed __int64 a3)
{
  void *result; // rax

  result = sub_14002D910(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), a2, a3);
  *(_QWORD *)(a1 + 112) += a3;
  return result;
}
