__int64 __fastcall sub_1F9DE20(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rsi

  v3 = a2;
  v4 = &a2[a3];
  result = sub_9B9C90(a1[2], a3);
  if ( v4 != a2 )
  {
    do
    {
      v6 = *v3++;
      result = sub_1F9A7E0(a1, v6);
    }
    while ( v4 != v3 );
  }
  return result;
}
