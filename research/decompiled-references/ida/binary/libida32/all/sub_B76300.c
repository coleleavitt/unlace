__int64 __fastcall sub_B76300(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  do
    result = *(_QWORD *)(result + 72);
  while ( (*(_BYTE *)(result + 28) & 0x7Fu) - 53 <= 1 );
  return result;
}

