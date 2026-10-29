__int64 __fastcall sub_56EAF0(__int64 a1, unsigned int a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // [rsp+8h] [rbp-20h]

  result = sub_56D830(a1, a2, sub_55C940, 0, 0, a3, a4, a5, a6);
  if ( v7 )
  {
    v8 = result;
    sub_56E900(a1, *(_DWORD *)(result + 16), a2);
    *(_DWORD *)(v8 + 16) = a2;
    return v8;
  }
  return result;
}
