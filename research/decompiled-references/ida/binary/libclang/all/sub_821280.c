__int64 __fastcall sub_821280(__int64 a1)
{
  __int64 result; // rax

  result = 1;
  if ( *(_DWORD *)(a1 + 964) <= 2u )
  {
    result = *(unsigned __int8 *)(a1 + 962);
    LOBYTE(result) = *(_BYTE *)(a1 + 963) | result;
  }
  return result;
}

