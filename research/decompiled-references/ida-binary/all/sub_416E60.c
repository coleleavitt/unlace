__int64 __fastcall sub_416E60(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 8) <= 1u )
  {
    qgethostname(result);
    return *(_QWORD *)(a1 + 32);
  }
  return result;
}
