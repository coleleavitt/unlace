__int64 __fastcall sub_FF370(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 96) >= -1 && *(_QWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree();
  }
  result = clear_tinfo_t();
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    return qfree();
  }
  return result;
}

