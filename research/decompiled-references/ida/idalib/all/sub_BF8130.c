__int64 __fastcall sub_BF8130(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-20h]

  v1 = sub_A70010(a1, *(_QWORD *)(a1 + 18648) | 1LL);
  result = sub_EEE9A0(40, a1, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0xE;
  if ( unk_2CD7484 )
  {
    v3 = result;
    sub_EE9B50(14);
    result = v3;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v1;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}
