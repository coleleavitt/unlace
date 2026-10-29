__int64 __fastcall clang_getCString(__int64 a1, int a2)
{
  __int64 result; // rax

  result = a1;
  if ( a2 == 2 )
    return *(_QWORD *)a1;
  return result;
}

