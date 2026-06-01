__int64 __fastcall sub_169D850(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)a3 )
    return sub_17A2EB0();
  result = *(unsigned int *)(a3 + 4);
  if ( !(_DWORD)result || *(_QWORD *)(a3 + 8) )
    return sub_17A2EB0();
  return result;
}
