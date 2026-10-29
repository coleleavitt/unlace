/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C4A30
// Address: 0x00000000000C4A30

//----- (00000000000C4A30) ----------------------------------------------------
void __fastcall sub_C4A30(sem_t ***ptr)
{
  *ptr = (sem_t **)&off_14E408;
  qsem_free(ptr[2]);
  operator delete(ptr);
}
// 14E408: using guessed type void (__fastcall __noreturn *off_14E408)();
