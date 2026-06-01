__int64 __fastcall sub_200F000(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-18h] BYREF
  int v5; // [rsp+8h] [rbp-10h]
  char v6; // [rsp+Ch] [rbp-Ch]

  result = *(unsigned int *)(a1 + 120);
  if ( a3 || *(_DWORD *)(a1 + 136) != (_DWORD)result || !*(_BYTE *)(a1 + 140) )
  {
    v6 = 1;
    v5 = result;
    v4 = off_2C715E0;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64))sub_2211E70)(
             a1 + 144,
             a1,
             &v4,
             a1 + 128,
             a2);
  }
  return result;
}
