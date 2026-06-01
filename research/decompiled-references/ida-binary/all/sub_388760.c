__int64 __fastcall st_chooser_t__::vfunc_7(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( dword_8BA580 < 0 )
    return -1;
  v2 = -1;
  if ( dword_8BA580 < (unsigned __int64)xmmword_8CC438 )
  {
    v3 = qword_8CC430 + ((__int64)dword_8BA580 << 8);
    if ( a2 < *(_QWORD *)(v3 + 96) )
      return *(_QWORD *)(*(_QWORD *)(v3 + 88) + 32 * a2);
  }
  return v2;
}
