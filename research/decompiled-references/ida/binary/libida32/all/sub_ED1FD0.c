__int64 __fastcall sub_ED1FD0(_QWORD *a1)
{
  __int64 result; // rax
  __int16 v2; // dx
  __int64 v3; // [rsp+8h] [rbp-10h]

  result = sub_ECAC60(32, a1, 8u);
  v2 = *(_WORD *)result & 0xFE00;
  LOBYTE(v2) = -22;
  *(_WORD *)result = v2;
  if ( unk_2CAD564 )
  {
    v3 = result;
    sub_EC5E10(234);
    result = v3;
  }
  *(_QWORD *)(result + 8) = 5;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  return result;
}

