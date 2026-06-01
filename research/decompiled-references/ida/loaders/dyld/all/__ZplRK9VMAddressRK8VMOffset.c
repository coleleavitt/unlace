__int64 __fastcall operator+(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 8) || !*(_BYTE *)(a2 + 8) )
    std::__throw_bad_optional_access[abi:v15006]();
  return *(_QWORD *)a2 + *(_QWORD *)a1;
}
