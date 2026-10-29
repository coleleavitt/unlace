__int64 __fastcall sub_20FDD70(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v4; // r9
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-18h] BYREF
  int v6; // [rsp+8h] [rbp-10h]
  char v7; // [rsp+Ch] [rbp-Ch]

  result = *(unsigned int *)(a1 + 120);
  v4 = *(_BYTE *)(a1 + 140);
  if ( a3 || (_DWORD)result != *(_DWORD *)(a1 + 136) || !v4 )
  {
    v6 = *(_DWORD *)(a1 + 136);
    v7 = v4;
    v5 = off_2BEAAC8;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 (__fastcall ***)(), __int64))sub_2212240)(
             a1 + 144,
             a1,
             (unsigned int)result,
             &v5,
             a2);
  }
  return result;
}
