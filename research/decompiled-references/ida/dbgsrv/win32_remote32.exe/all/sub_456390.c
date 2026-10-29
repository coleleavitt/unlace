/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456390
// Address: 0x00456390

//----- (00456390) --------------------------------------------------------
bool __userpurge sub_456390@<al>(char *a1@<ebx>, int a2@<edi>, __m128i *a3, __m128i *a4)
{
  _DWORD *v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // esi
  bool v6; // bl

  if ( dword_4B7120 )
  {
    v5 = lpCriticalSection;
  }
  else
  {
    v4 = sub_4627C2(8u);
    v4[1] = GetCurrentThreadId();
    *v4 = -1;
    dword_4B7120 = (int)v4;
    v5 = (struct _RTL_CRITICAL_SECTION *)sub_4627C2(0x18u);
    InitializeCriticalSection(v5);
    lpCriticalSection = v5;
  }
  if ( v5 )
    EnterCriticalSection(v5);
  v6 = sub_4720C4(a1, a2, a3, a4) == 0;
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
// 4B7120: using guessed type int dword_4B7120;
