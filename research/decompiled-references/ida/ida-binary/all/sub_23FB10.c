__int64 __fastcall sub_23FB10(
        const char *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // ebx
  unsigned int v13; // eax
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // eax
  int v17; // [rsp+4h] [rbp-4Ch] BYREF
  int v18; // [rsp+8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+10h] [rbp-40h]
  __int128 v20; // [rsp+18h] [rbp-38h]
  unsigned __int64 v21; // [rsp+30h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v18 = -2;
  v19 = -1;
  v20 = 0;
  LOBYTE(a3) = dword_8CC5F0 == 0;
  v11 = a3;
  LOBYTE(v11) = a1 == nullptr || dword_8CC5F0 == 0;
  if ( (_BYTE)v11 )
  {
    return 0;
  }
  else
  {
    v17 = 0;
    v13 = sub_2383E0(a1, (__int64)&v17, a3);
    v16 = sub_23F7A0(v13, (unsigned __int16 *)&v17, (unsigned int *)&v18, (__m128)0LL, a5, a6, a7, v14, v15, a10, a11);
    if ( (_BYTE)v16 && v18 == -2 )
    {
      if ( a2 )
        *a2 = v19;
      return v16;
    }
    else if ( v18 >= -1 && v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19, (const char *)&v17);
    }
  }
  return v11;
}
