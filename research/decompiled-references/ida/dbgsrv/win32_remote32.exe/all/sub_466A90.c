/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466A90
// Address: 0x00466A90

//----- (00466A90) --------------------------------------------------------
void __cdecl sub_466A90(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        int a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int *a8,
        int a9,
        struct EHRegistrationNode *TargetFrame)
{
  struct EHRegistrationNode *v10; // eax
  void *v11; // eax

  if ( a7 )
    sub_4669F4((int)ExceptionRecord, (int *)a2, a6, a7);
  v10 = a2;
  if ( TargetFrame )
    v10 = TargetFrame;
  sub_464120((struct _EXCEPTION_REGISTRATION_RECORD **)a6, v10, ExceptionRecord);
  sub_46744E((int)a6, (int *)a2, (int)a2, a4, a5, *a8);
  sub_467CE9((int)a2, a5, a8[1] + 1);
  v11 = (void *)sub_4671DB(ExceptionRecord, (int)a2, a3, a5, a6[3], a9, 256);
  if ( v11 )
    _JumpToContinuation(v11, a2);
}
