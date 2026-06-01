__int64 __fastcall sub_AB6F20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+Ch] [rbp-1Ch]

  result = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( (_DWORD)result == -1 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
    sub_AB6BC0((__int64 *)a1, v3);
    return v3;
  }
  return result;
}

