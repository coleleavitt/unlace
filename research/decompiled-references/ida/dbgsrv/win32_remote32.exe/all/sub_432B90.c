/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432B90
// Address: 0x00432B90

//----- (00432B90) --------------------------------------------------------
int __userpurge sub_432B90@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, _QWORD *a2, char a3)
{
  int v6; // eax
  int result; // eax
  char v8[8]; // [esp+10h] [ebp-10h] BYREF
  __int64 v9; // [esp+18h] [ebp-8h]

  sub_432B00(this, xmm0_0, ebx0, (int)a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(this + 66);
          v8[0] = 1;
          v9 = 0;
          result = *(unsigned __int16 *)(v6 + 12);
          if ( (_WORD)result != 15933 )
            break;
          sub_432B00(this, (__m128i)0LL, (void **)0x3C3D, (int)v8, 1);
          sub_433450(a2, v8);
        }
        if ( (_WORD)result != 15421 )
          break;
        sub_432B00(this, (__m128i)0LL, (void **)0x3C3D, (int)v8, 1);
        sub_433650(a2, v8);
      }
      if ( result != 60 )
        break;
      sub_432B00(this, (__m128i)0LL, (void **)0x3C3D, (int)v8, 1);
      sub_433750(a2, v8);
    }
    if ( result != 62 )
      break;
    sub_432B00(this, (__m128i)0LL, (void **)0x3C3D, (int)v8, 1);
    sub_433550(a2, v8);
  }
  return result;
}
