__int64 __fastcall sub_200F060(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-18h] BYREF
  int v8; // [rsp+8h] [rbp-10h]
  char v9; // [rsp+Ch] [rbp-Ch]

  result = *(unsigned int *)(a1 + 120);
  if ( a3 || *(_DWORD *)(a1 + 136) != (_DWORD)result || !*(_BYTE *)(a1 + 140) )
  {
    v9 = 1;
    v8 = result;
    v7 = off_2C71508;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64, __int64))sub_2211E70)(
             a1 + 144,
             a1,
             &v7,
             a1 + 128,
             a2,
             a6);
  }
  return result;
}
