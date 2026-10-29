__int64 __fastcall sub_FF1A0(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 80) >= -1 && *(_QWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree();
  }
  result = clear_tinfo_t();
  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    return qfree();
  }
  return result;
}

