__int64 __fastcall sub_ED1E80(_QWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  __int16 v5; // dx
  __int64 v6; // [rsp+8h] [rbp-20h]

  result = sub_ECAC60(32, a1, 8u);
  v5 = *(_WORD *)result & 0xFE00;
  LOBYTE(v5) = -94;
  *(_WORD *)result = v5;
  if ( unk_2CAD564 )
  {
    v6 = result;
    sub_EC5E10(162);
    result = v6;
  }
  *(_DWORD *)(result + 8) = 93;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_QWORD *)(result + 24) = 0;
  return result;
}

