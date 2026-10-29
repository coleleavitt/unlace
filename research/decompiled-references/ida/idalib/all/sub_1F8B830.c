__int64 __fastcall sub_1F8B830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10[4]; // [rsp+0h] [rbp-20h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( (!result || !*(_BYTE *)(result + 9267)) && *(char *)(a3 + 29) >= 0 )
  {
    if ( *(char *)(a2 + 29) < 0 || (v8 = (_QWORD *)sub_B8C330(a2), result = sub_AA81B0(v8), a2 == result) )
    {
      result = (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35;
      if ( (unsigned int)result <= 3 )
      {
        v10[0] = a2;
        v9 = sub_1F8B440(a1 + 1288, v10, a3, a4, a5, a6);
        return (__int64)sub_1F705B0(v9, 0, a3);
      }
    }
  }
  return result;
}
