__int64 __fastcall sub_13DC8D0(int a1, __int16 a2, __int64 *a3, __int64 a4, char a5, __m128i a6, double a7)
{
  __int32 v10; // r14d
  __int32 v11; // ebx
  int v12; // r13d
  const char *v13; // rax
  __int64 i; // rdx
  unsigned __int8 v15; // al
  int v16; // esi
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  __int16 v18; // [rsp+10h] [rbp-38h]
  char v19; // [rsp+18h] [rbp-30h]

  sub_13DC730(&v17, a1, a3, a4, 0, a6, a7);
  if ( !v19 || a2 != v18 )
    return 0;
  v10 = v17.m128i_i32[1];
  v11 = v17.m128i_i32[0];
  v12 = 0;
  if ( a5 )
  {
    v13 = &sub_1021A70((__int64)a3, v17.m128i_i32[0], nullptr)[v10];
    for ( i = *(unsigned __int8 *)v13; (byte_2411740[2 * i] & 5) != 0; i = *(unsigned __int8 *)v13 )
    {
      ++v13;
      ++v12;
    }
    if ( (_BYTE)i == 10 || (_BYTE)i == 13 )
    {
      v15 = v13[1];
      v16 = v12 + 1;
      if ( v15 == 10 || v15 == 13 )
      {
        if ( v15 != (char)i )
          v16 = v12 + 2;
        v12 = v16;
      }
      else
      {
        ++v12;
      }
    }
  }
  return (unsigned int)(v12 + v11 + v10);
}
