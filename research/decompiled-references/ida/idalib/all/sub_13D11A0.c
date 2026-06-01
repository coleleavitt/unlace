__int64 __fastcall sub_13D11A0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 136);
  if ( (*(_BYTE *)(result + 14) & 4) != 0 )
  {
    *(_BYTE *)(a1 + 146) = 2;
  }
  else
  {
    result = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 544LL) & 1;
    *(_BYTE *)(a1 + 146) = result;
  }
  return result;
}
