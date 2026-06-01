/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464174
// Address: 0x00464174

//----- (00464174) --------------------------------------------------------
int __usercall sub_464174@<eax>(int a1@<ebx>, int *a2@<edi>, EXCEPTION_RECORD *a3, int a4, int a5)
{
  return sub_46717A(
           a1,
           a2,
           a4,
           a3,
           *(struct EHRegistrationNode **)(a4 + 16),
           a5,
           0,
           *(int **)(a4 + 12),
           *(_DWORD *)(a4 + 20),
           (struct EHRegistrationNode *)a4,
           0);
}
