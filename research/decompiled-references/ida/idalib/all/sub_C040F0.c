__int64 __fastcall sub_C040F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-10h]

  result = sub_EEE9A0(48, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x38;
  if ( unk_2CD7484 )
  {
    v2 = result;
    sub_EE9B50(56);
    *(_QWORD *)(v2 + 8) = 0;
    return v2;
  }
  else
  {
    *(_QWORD *)(result + 8) = 0;
  }
  return result;
}
