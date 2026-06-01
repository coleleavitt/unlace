__int64 __fastcall sub_21003E0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 && (*(_BYTE *)(a1 + 9) & 0x70) == 0x20 && (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
  {
    result = sub_210D820(*(_QWORD *)(a1 + 24));
    *(_QWORD *)a1 = result;
  }
  return result;
}
