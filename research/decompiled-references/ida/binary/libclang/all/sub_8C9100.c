__int64 __fastcall sub_8C9100(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
    return *(_QWORD *)(result + 40);
  return result;
}

