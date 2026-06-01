__int64 __fastcall sub_22BF8F0(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  unsigned __int8 (__fastcall **v4)(_QWORD, __int64); // [rsp+0h] [rbp-18h] BYREF
  int v5; // [rsp+8h] [rbp-10h]
  char v6; // [rsp+Ch] [rbp-Ch]

  result = *(unsigned int *)(a1 + 120);
  if ( a3 || *(_DWORD *)(a1 + 136) != (_DWORD)result || !*(_BYTE *)(a1 + 140) )
  {
    v4 = (unsigned __int8 (__fastcall **)(_QWORD, __int64))&off_2C771E0;
    v6 = 1;
    v5 = result;
    return sub_2211E70(
             (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))(a1 + 144),
             a1,
             &v4,
             (unsigned __int8 (__fastcall ***)(_QWORD, __int64))(a1 + 128),
             a2);
  }
  return result;
}
