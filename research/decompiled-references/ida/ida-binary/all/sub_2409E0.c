__int64 __fastcall sub_2409E0(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rbx
  int v15; // ebp
  __int64 v16; // rdx
  int v18; // eax
  _DWORD *v19; // rdi
  char *v20; // rcx

  v14 = 56LL * a1;
  v15 = *(_DWORD *)(v14 + qword_8CC2F0 + 4);
  if ( !(unsigned __int8)sub_22E8C0(
                           (unsigned int *)(v14 + qword_8CC2F0),
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           a12,
                           a13,
                           a14,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6) )
    return 0;
  v16 = qword_8CC2F0;
  if ( *(_DWORD *)(qword_8CC2F0 + v14 + 4) == (unsigned __int16)v15 )
    return 0;
  v18 = xmmword_8CC2F8;
  v19 = qword_8CC600;
  v20 = (char *)(unsigned int)xmmword_8CC2F8;
  if ( !qword_8CC600 )
  {
    sub_20CEA0(dbg, 13, qword_8CC2F0, (unsigned int)xmmword_8CC2F8);
    return 0;
  }
  *(_QWORD *)qword_8CC600 = qword_8CC2F0;
  v19[2] = v18;
  sub_23D480((__int64)v19, 24, v16, v20, *(double *)a7.m128_u64);
  return 0;
}
