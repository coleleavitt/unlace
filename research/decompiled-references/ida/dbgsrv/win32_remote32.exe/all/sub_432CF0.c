/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432CF0
// Address: 0x00432CF0

//----- (00432CF0) --------------------------------------------------------
int __userpurge sub_432CF0@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, _QWORD *a2, char a3)
{
  int result; // eax
  int v7; // eax
  __int16 v8; // ax
  __int64 v9; // [esp+10h] [ebp-20h] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int64 v11; // [esp+20h] [ebp-10h] BYREF
  __int64 v12; // [esp+28h] [ebp-8h]

  sub_432C60(this, xmm0_0, ebx0, a2, a3);
  for ( result = *(this + 66); *(_WORD *)(result + 12) == 38; result = *(this + 66) )
  {
    LOBYTE(v9) = 1;
    v10 = 0;
    sub_432B90(this, (__m128i)0LL, (void **)0x213D, &v9, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(this + 66);
        LOBYTE(v11) = 1;
        v12 = 0;
        v8 = *(_WORD *)(v7 + 12);
        if ( v8 != 15677 )
          break;
        sub_432B90(this, (__m128i)0LL, (void **)0x213D, &v11, 1);
        if ( v10 == v12 )
        {
          v10 = 1;
          LOBYTE(v9) = 0;
        }
        else
        {
          LOBYTE(v9) = 0;
          v10 = 0;
        }
      }
      if ( v8 != 8509 )
        break;
      sub_432B90(this, (__m128i)0LL, (void **)0x213D, &v11, 1);
      if ( v10 == v12 )
      {
        LOBYTE(v9) = 0;
        v10 = 0;
      }
      else
      {
        v10 = 1;
        LOBYTE(v9) = 0;
      }
    }
    a2[1] &= v10;
  }
  return result;
}
