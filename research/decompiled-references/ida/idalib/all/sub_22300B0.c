__int64 __fastcall sub_22300B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = operator new(a1, a2, &std::nothrow);
  if ( !result )
    sub_2221CE0("Buffer allocation failed", 1u);
  return result;
}
