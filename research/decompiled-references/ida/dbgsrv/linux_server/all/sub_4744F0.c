/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4744F0
// Address: 0x00000000004744F0

//----- (00000000004744F0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_4744F0(__int64 a1)
{
  pthread_mutex_t *result; // rax

  result = sub_482C40();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  return result;
}
