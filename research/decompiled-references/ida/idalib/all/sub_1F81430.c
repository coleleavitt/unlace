__int64 __fastcall sub_1F81430(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax

  v3 = &a2[a3];
  if ( a2 != v3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4++;
      result = sub_1F80F70(a1, v5);
    }
    while ( v3 != v4 );
  }
  return result;
}
