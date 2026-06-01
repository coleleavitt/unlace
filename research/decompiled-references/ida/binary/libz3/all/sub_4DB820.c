__int64 __fastcall sub_4DB820(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r13
  __int64 *v4; // r14
  __int64 v5; // rbx
  _DWORD v6[16]; // [rsp+0h] [rbp-40h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v3 = (__int64 *)(result + 8LL * *(unsigned int *)(result - 4));
    if ( v3 != (__int64 *)result )
    {
      v4 = (__int64 *)*a1;
      do
      {
        v5 = *v4++;
        sub_6299B0(v6);
        sub_629B60(v5 + 8, v6);
        sub_18183E0(a2, "instruction", v6[1]);
        result = sub_18183E0(a2, "instruction-time", v6[0]);
      }
      while ( v3 != v4 );
    }
  }
  return result;
}

