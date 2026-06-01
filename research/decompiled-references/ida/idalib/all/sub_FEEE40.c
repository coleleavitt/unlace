__int64 __fastcall sub_FEEE40(__int64 a1)
{
  __int64 result; // rax

  for ( result = a1; *(_QWORD *)(result + 40); result = *(_QWORD *)(result + 40) )
    ;
  return result;
}
