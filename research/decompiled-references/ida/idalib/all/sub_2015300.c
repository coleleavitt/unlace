__int64 __fastcall sub_2015300(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  __int64 result; // rax
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-18h] BYREF
  char v6; // [rsp+8h] [rbp-10h]
  char v7; // [rsp+9h] [rbp-Fh]

  v3 = *(_BYTE *)(a1 + 136);
  result = **(unsigned __int8 **)(a1 + 120);
  if ( a3 || !*(_BYTE *)(a1 + 137) || v3 != (_BYTE)result )
  {
    v7 = *(_BYTE *)(a1 + 137);
    v6 = v3;
    v5 = off_2C714E8;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 (__fastcall ***)(), __int64))sub_2212060)(
             a1 + 144,
             a1,
             (unsigned __int8)result,
             &v5,
             a2);
  }
  return result;
}
