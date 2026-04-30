__int64 __fastcall sub_178BB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3;
  if ( !*(_QWORD *)(a2 + 112) )
    return (*(_DWORD *)(a2 + 80) & 2) == 0 ? 7 : 3;
  return result;
}
