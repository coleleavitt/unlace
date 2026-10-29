__int64 __fastcall sub_C70D50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-10h]

  result = sub_ECAC60(48, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x55;
  if ( unk_2CAD564 )
  {
    v2 = result;
    sub_EC5E10(85);
    result = v2;
  }
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)result &= 0xF3FFFFFFuLL;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  return result;
}

