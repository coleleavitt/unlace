__int64 __fastcall sub_BE0490(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 18720);
  result = sub_ECAC60(24, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x19;
  if ( unk_2CAD564 )
  {
    v3 = result;
    sub_EC5E10(25);
    result = v3;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v1;
  *(_DWORD *)(result + 16) = 0;
  return result;
}

