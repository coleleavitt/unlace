__int64 __fastcall sub_1932E0(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        __int64 a33)
{
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 result; // rax
  __int64 v36; // rsi

  v33 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v33 <= 0x3A )
  {
    v34 = 0x400000002000400LL;
    if ( _bittest64(&v34, v33) )
      return sub_3CF380(
               a1,
               a2,
               33555456,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               a20,
               a21,
               a22,
               a23,
               a24,
               a25,
               a26,
               a27,
               a28,
               a29,
               a30,
               a31,
               a32,
               a33);
  }
  v36 = sub_33CF00("Choose a name");
  result = 1;
  if ( v36 != -1 )
    return (unsigned __int8)sub_192AA0(a1, v36, -1, 1u);
  return result;
}
