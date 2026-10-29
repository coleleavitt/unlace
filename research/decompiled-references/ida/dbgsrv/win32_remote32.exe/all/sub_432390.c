/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432390
// Address: 0x00432390

//----- (00432390) --------------------------------------------------------
int __userpurge sub_432390@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, int a2, char a3)
{
  int result; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  __int64 v10; // [esp+8h] [ebp-20h] BYREF
  __int64 v11; // [esp+10h] [ebp-18h]
  __int64 v12; // [esp+18h] [ebp-10h] BYREF
  __int64 v13; // [esp+20h] [ebp-8h]

  sub_432E30(this, xmm0_0, ebx0, a2, a3);
  for ( result = *(this + 66); *(_WORD *)(result + 12) == 124; result = *(this + 66) )
  {
    LOBYTE(v10) = 1;
    v11 = 0;
    sub_432CF0(this, (__m128i)0LL, ebx0, &v10, 1);
    if ( *(_WORD *)(*(this + 66) + 12) == 94 )
    {
      do
      {
        LOBYTE(v12) = 1;
        v13 = 0;
        sub_432CF0(this, (__m128i)0LL, ebx0, &v12, 1);
        v7 = *(this + 66);
        v8 = v13 ^ v11;
        v9 = HIDWORD(v13) ^ HIDWORD(v11);
        v11 ^= v13;
      }
      while ( *(_WORD *)(v7 + 12) == 94 );
    }
    else
    {
      v9 = HIDWORD(v11);
      v8 = v11;
    }
    *(_DWORD *)(a2 + 8) |= v8;
    *(_DWORD *)(a2 + 12) |= v9;
  }
  return result;
}
