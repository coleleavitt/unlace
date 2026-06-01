__int64 __fastcall sub_12DF86(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 360);
  if ( *(_QWORD *)(a1 + 392) != result )
    return sub_174FE0(a1);
  return result;
}
