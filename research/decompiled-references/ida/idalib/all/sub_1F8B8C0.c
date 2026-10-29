unsigned __int64 __fastcall sub_1F8B8C0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rax
  _BYTE *v8; // [rsp+0h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( (!result || !*(_BYTE *)(result + 9267)) && (char)a2[29] < 0 )
  {
    if ( (result = (unsigned __int8)a2[83], (result & 8) == 0) && ((a2[128] & 1) != 0 || *((_QWORD *)a2 + 16))
      || (result & 0x40) != 0 )
    {
      v8 = a2;
      v7 = sub_1F8B440(a1 + 1288, (__int64 *)&v8, a3, a4, a5, a6);
      return (unsigned __int64)sub_1F705B0(v7, 2, 0);
    }
  }
  return result;
}
