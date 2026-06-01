__int64 __fastcall sub_2013E60(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v4; // r9
  _QWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+10h] [rbp-18h]

  result = *(_QWORD *)(a1 + 120);
  v4 = *(_BYTE *)(a1 + 144);
  if ( a3 || result != *(_QWORD *)(a1 + 136) || !v4 )
  {
    v5[1] = *(_QWORD *)(a1 + 136);
    v6 = v4;
    v5[0] = off_2C71B28;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, __int64))sub_2212770)(
             a1 + 152,
             a1,
             result,
             v5,
             a2);
  }
  return result;
}
