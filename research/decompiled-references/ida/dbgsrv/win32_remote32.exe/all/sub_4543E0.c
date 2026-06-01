/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4543E0
// Address: 0x004543E0

//----- (004543E0) --------------------------------------------------------
_DWORD *__thiscall sub_4543E0(_DWORD *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // eax

  v1 = lpCriticalSection;
  *this = lpCriticalSection;
  if ( v1 )
    EnterCriticalSection(v1);
  return this;
}
