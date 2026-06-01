/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464211
// Address: 0x00464211

//----- (00464211) --------------------------------------------------------
int __usercall sub_464211@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        int *a2@<edi>,
        int a3@<esi>,
        PEXCEPTION_RECORD ExceptionRecord,
        _DWORD *TargetFrame,
        int a4)
{
  int (*v7)(void); // [esp+4h] [ebp-4h] BYREF

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    TargetFrame[9] = 1;
    return 1;
  }
  else
  {
    sub_46717A(
      (int)a1,
      a2,
      a3,
      ExceptionRecord,
      (struct EHRegistrationNode *)TargetFrame[4],
      a4,
      0,
      (int *)TargetFrame[3],
      TargetFrame[5],
      (struct EHRegistrationNode *)TargetFrame[6],
      1u);
    if ( !TargetFrame[9] )
      sub_464120(a1, TargetFrame, ExceptionRecord);
    sub_463FF1((int)a1, a2, a3, (int *)0x123, &v7, 0, 0, 0, 0, 0);
    return v7();
  }
}
