/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473375
// Address: 0x00473375

//----- (00473375) --------------------------------------------------------
void __cdecl sub_473375(LPCRITICAL_SECTION lpCriticalSection)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi

  if ( lpCriticalSection )
  {
    v1 = lpCriticalSection;
    do
    {
      DeleteCriticalSection(v1);
      v1 = (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 56);
    }
    while ( v1 != (struct _RTL_CRITICAL_SECTION *)&lpCriticalSection[149].RecursionCount );
    sub_479216(lpCriticalSection);
  }
}
