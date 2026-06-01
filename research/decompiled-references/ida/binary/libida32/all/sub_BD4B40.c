__int64 __fastcall sub_BD4B40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-10h]

  result = sub_ECAC60(32, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x3E;
  if ( unk_2CAD564 )
  {
    v2 = result;
    sub_EC5E10(62);
    result = v2;
  }
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_WORD *)(result + 2) &= 0xFE07u;
  return result;
}

