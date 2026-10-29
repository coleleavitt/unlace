__int64 __fastcall sub_7E008(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    result = qfree();
  }
  *(_DWORD *)a1 = -2;
  return result;
}

