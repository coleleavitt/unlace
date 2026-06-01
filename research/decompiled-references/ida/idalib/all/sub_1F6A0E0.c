__int64 __fastcall sub_1F6A0E0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r12
  __int64 *v3; // rbx
  int v4; // ebp
  __int64 v5; // rdi

  result = 1;
  v2 = *(__int64 **)(a1 + 264);
  v3 = *(__int64 **)(a1 + 256);
  if ( v3 != v2 )
  {
    v4 = 0;
    do
    {
      v5 = *v3++;
      v4 += sub_1F6A0E0(v5);
    }
    while ( v2 != v3 );
    return (unsigned int)(v4 + 1);
  }
  return result;
}
