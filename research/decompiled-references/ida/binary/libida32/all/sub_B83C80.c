unsigned __int64 __fastcall sub_B83C80(__int64 a1)
{
  unsigned __int64 result; // rax

  for ( result = sub_B6AC30(a1 + 48); result; result = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x12 && (*(_BYTE *)(result + 58) & 2) != 0 )
      break;
  }
  return result;
}

