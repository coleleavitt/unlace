__int64 __fastcall sub_C04160(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 18720);
  result = sub_EEE9A0(24, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x19;
  if ( unk_2CD7484 )
  {
    v4 = result;
    sub_EE9B50(25);
    result = v4;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 16) = a2;
  return result;
}
