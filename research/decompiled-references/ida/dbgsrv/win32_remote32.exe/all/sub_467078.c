/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467078
// Address: 0x00467078

//----- (00467078) --------------------------------------------------------
int __usercall sub_467078@<eax>(
        int a1@<ebx>,
        int *a2@<edi>,
        int a3@<esi>,
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a5,
        int a6,
        int a7,
        int *a8,
        int a9,
        struct EHRegistrationNode *TargetFrame,
        unsigned __int8 a11)
{
  _DWORD *v11; // eax
  int (__cdecl *v12)(PEXCEPTION_RECORD, struct EHRegistrationNode *, int, int, int *, int, struct EHRegistrationNode *, _DWORD); // esi
  unsigned int v13; // eax

  sub_46765C(a6);
  v11 = sub_4667C5(a1, a2, a3);
  v12 = nullptr;
  if ( v11[8]
    || ExceptionRecord->ExceptionCode == -529697949
    || ExceptionRecord->ExceptionCode == -2147483610
    || (*a8 & 0x1FFFFFFFu) < 0x19930522
    || (a8[8] & 1) == 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
    {
      if ( a8[1] )
      {
        if ( !a9 )
          sub_467436(0x1FFFFFFF, (int *)0x19930522, (int)a5, a7, (int)a8);
      }
    }
    else if ( a8[3] || (v13 = *a8 & 0x1FFFFFFF, v13 >= 0x19930521) && a8[7] || v13 >= 0x19930522 && (a8[8] & 4) != 0 )
    {
      if ( ExceptionRecord->ExceptionCode == -529697949
        && ExceptionRecord->NumberParameters >= 3
        && ExceptionRecord->ExceptionInformation[0] > 0x19930522 )
      {
        v12 = *(int (__cdecl **)(PEXCEPTION_RECORD, struct EHRegistrationNode *, int, int, int *, int, struct EHRegistrationNode *, _DWORD))(ExceptionRecord->ExceptionInformation[2] + 8);
        if ( v12 )
          return v12(ExceptionRecord, a5, a6, a7, a8, a9, TargetFrame, a11);
      }
      sub_466B11((PEXCEPTION_RECORD)0x1FFFFFFF, (int)v12, ExceptionRecord, a5, a6, a7, a8, a11, a9, TargetFrame);
    }
  }
  return 1;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
