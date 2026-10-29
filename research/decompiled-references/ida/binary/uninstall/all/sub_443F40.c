__int64 sub_443F40()
{
  __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-18h] BYREF
  _DWORD v3[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v0 = sub_443EA0();
  sub_46FB10(0, v0, v3);
  result = 0;
  if ( v3[0] )
  {
    sub_46FB70(0, v0, 0, &v2);
    return sub_47B3B0(v2);
  }
  return result;
}

