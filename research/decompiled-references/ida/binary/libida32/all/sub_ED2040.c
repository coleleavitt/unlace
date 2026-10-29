__int64 __fastcall sub_ED2040(_QWORD *a1, int a2, int a3, int a4)
{
  __int64 result; // rax
  __int16 v7; // dx
  __int64 v8; // [rsp+8h] [rbp-20h]

  result = sub_ECAC60(40, a1, 8u);
  v7 = *(_WORD *)result & 0xFE00;
  LOBYTE(v7) = -24;
  *(_WORD *)result = v7;
  if ( unk_2CAD564 )
  {
    v8 = result;
    sub_EC5E10(232);
    result = v8;
  }
  *(_DWORD *)(result + 8) = 10;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = a4;
  return result;
}

