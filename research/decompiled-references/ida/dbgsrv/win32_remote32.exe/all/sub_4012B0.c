/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4012B0
// Address: 0x004012B0

//----- (004012B0) --------------------------------------------------------
void sub_4012B0()
{
  _DWORD *v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // esi

  if ( !dword_4B7120 )
  {
    v0 = sub_4627C2(8u);
    v0[1] = GetCurrentThreadId();
    *v0 = -1;
    dword_4B7120 = (int)v0;
    v1 = (struct _RTL_CRITICAL_SECTION *)sub_4627C2(0x18u);
    InitializeCriticalSection(v1);
    lpCriticalSection = v1;
  }
}
// 4B7120: using guessed type int dword_4B7120;
