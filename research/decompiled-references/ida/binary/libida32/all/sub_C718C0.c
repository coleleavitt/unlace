__int64 __fastcall sub_C718C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-10h]

  result = sub_ECAC60(16, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x62;
  if ( unk_2CAD564 )
  {
    v2 = result;
    sub_EC5E10(98);
    *(_QWORD *)(v2 + 8) = 0;
    return v2;
  }
  else
  {
    *(_QWORD *)(result + 8) = 0;
  }
  return result;
}

