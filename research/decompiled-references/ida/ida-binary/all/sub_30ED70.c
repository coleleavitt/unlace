__int64 __fastcall sub_30ED70(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 320);
  if ( result )
    return *(_QWORD *)(result + 40);
  return result;
}
