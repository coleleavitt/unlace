__int64 __fastcall sub_1C36210(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int16 v5; // dx
  char v6; // dl
  __int64 v7; // [rsp+8h] [rbp-20h]

  result = sub_EEE9A0(8, *(_QWORD **)(a1 + 248), 8u);
  v5 = *(_WORD *)result & 0xFE00;
  LOBYTE(v5) = -18;
  *(_WORD *)result = v5;
  if ( unk_2CD7484 )
  {
    v7 = result;
    sub_EE9B50(238);
    result = v7;
  }
  v6 = *(_BYTE *)(result + 1);
  *(_DWORD *)(result + 4) = a2;
  *(_BYTE *)(result + 1) = (2 * (a3 & 1)) | v6 & 0xFD;
  return result;
}
