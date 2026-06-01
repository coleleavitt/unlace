__int64 __fastcall sub_183E400(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 *v4; // rbx
  __int64 v5; // rsi

  result = *(unsigned int *)(a2 + 12);
  if ( (_DWORD)result )
  {
    v3 = a2 + 8LL * (unsigned int)(result - 1) + 32;
    v4 = (__int64 *)(a2 + 24);
    do
    {
      v5 = *v4++;
      result = sub_1838B30(a1, v5);
    }
    while ( (__int64 *)v3 != v4 );
  }
  return result;
}
