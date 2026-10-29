__int64 __fastcall sub_BE0310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int16 v11; // dx
  __int64 v12; // [rsp+8h] [rbp-30h]

  result = sub_ECAC60(48, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x38;
  if ( unk_2CAD564 )
  {
    v12 = result;
    sub_EC5E10(56);
    result = v12;
  }
  v11 = *(_WORD *)(result + 1);
  *(_QWORD *)(result + 8) = a2;
  *(_BYTE *)(result + 40) = a6;
  *(_QWORD *)(result + 16) = a3;
  *(_QWORD *)(result + 24) = a4;
  *(_WORD *)(result + 1) = v11 & 0xF801 | 2;
  *(_QWORD *)(result + 32) = a5;
  return result;
}

