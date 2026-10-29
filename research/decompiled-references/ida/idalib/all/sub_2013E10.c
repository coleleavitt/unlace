__int64 __fastcall sub_2013E10(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_BYTE *)(a1 + 144) )
    result = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 120) = result;
  return result;
}
