__int64 __fastcall sub_C93FF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = a2 + 8;
  *(_QWORD *)a1 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(v3 - 8);
  v6[1] = v3;
  v6[0] = v4;
  result = sub_F6CCB0(v6);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
