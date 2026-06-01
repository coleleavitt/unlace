unsigned __int64 __fastcall sub_3E7C00(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        _QWORD *a11,
        __int64 a12)
{
  __int64 v12; // rax
  bool v13; // zf
  int v15; // ebp
  __int64 v16; // rdi
  __int64 v18[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v12 = 0;
  v13 = a11[1] == 0;
  v18[0] = (__int64)a10;
  v18[1] = a12;
  if ( !v13 )
  {
    v15 = 0;
    do
    {
      v16 = *(_QWORD *)(*a11 + 8 * v12);
      if ( *(_DWORD *)(v16 + 56) != 2 || !v16 )
      {
        if ( !under_debugger )
          interr(40282, a10, *a11, a12, a1);
        BUG();
      }
      a10 = v18;
      ++v15;
      sub_3E5A30(v16, v18, a1, a2, a3, a4, a5, a6, a7, a8);
      v12 = v15;
    }
    while ( (unsigned __int64)v15 < a11[1] );
  }
  return v19 - __readfsqword(0x28u);
}
