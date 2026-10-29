__int64 __fastcall sub_E5C0F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]

  result = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
  if ( (_DWORD)result == 1073709056 )
  {
    v3 = 1;
    v4 = 1;
    sub_222AB70(a1 + 1048, "resultDependent", 15);
    sub_222CAC0(a1 + 1048, &v3);
    sub_2229BF0(a1 + 1048);
    return sub_222B2A0(&v3);
  }
  return result;
}
