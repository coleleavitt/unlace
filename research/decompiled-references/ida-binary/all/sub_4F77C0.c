__int64 __fastcall sub_4F77C0(int a1, const __m128i *a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v7; // al
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  char s2[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-10h]

  v7 = a1;
  v8 = (unsigned int)(a1 - 68);
  v13 = __readfsqword(0x28u);
  v9 = 0;
  if ( (unsigned __int8)v8 <= 0x31u )
  {
    v9 = 0x28F0000200B11LL;
    if ( _bittest64(&v9, v8) )
    {
      v7 = 78;
    }
    else
    {
      v9 = 105;
      if ( (_BYTE)v8 == 5 )
        v7 = 105;
    }
  }
  s2[0] = v7;
  s2[1] = 0;
  v10 = sub_4F7580(s2, (__int64)a2, v9, a5, a6, a7);
  return sub_4F6A20(v10, a2, a3);
}
