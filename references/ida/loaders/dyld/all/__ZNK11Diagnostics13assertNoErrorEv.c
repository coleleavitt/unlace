__int64 __fastcall Diagnostics::assertNoError(Diagnostics *this)
{
  __int64 result; // x0

  result = *(_QWORD *)this;
  if ( result )
    Diagnostics::assertNoError();
  return result;
}
