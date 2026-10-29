/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EBE0
// Address: 0x000000000008EBE0

//----- (000000000008EBE0) ----------------------------------------------------
char __fastcall sub_8EBE0(__int64 a1)
{
  char result; // al

  *(_QWORD *)a1 = &off_14E408;
  result = qsem_free(*(sem_t ***)(a1 + 16));
  *(_OWORD *)(a1 + 8) = 0;
  return result;
}
// 14E408: using guessed type void (__fastcall __noreturn *off_14E408)();
