__int64 __fastcall operator+=(__int64 result, __int64 a2)
{
  if ( !*(_BYTE *)(result + 8) || !*(_BYTE *)(a2 + 8) )
    std::__throw_bad_optional_access[abi:v15006]();
  *(_QWORD *)result += *(_QWORD *)a2;
  *(_BYTE *)(result + 8) = 1;
  return result;
}
