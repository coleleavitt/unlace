__int64 __fastcall sub_215DFA0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 96);
  if ( !result )
    return *(_QWORD *)(a1 + 104);
  return result;
}
