__int64 __fastcall sub_2067E20(__int64 a1, _BYTE *a2)
{
  signed __int64 v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  sub_20655B0(a1);
  sub_2067580(&v5, v3, a2, v2);
  result = v5;
  if ( v5 )
  {
    v6 = v5;
    v5 = 0;
    sub_2220CA0(&v6, 1);
  }
  return result;
}
