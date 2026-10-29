__int64 __fastcall sub_EF5C30(_QWORD *a1)
{
  __int64 result; // rax
  __int16 v2; // dx
  __int64 v3; // [rsp+8h] [rbp-10h]

  result = sub_EEE9A0(32, a1, 8u);
  v2 = *(_WORD *)result & 0xFE00;
  LOBYTE(v2) = -94;
  *(_WORD *)result = v2;
  if ( unk_2CD7484 )
  {
    v3 = result;
    sub_EE9B50(162);
    result = v3;
  }
  *(_QWORD *)(result + 8) = 93;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  return result;
}
