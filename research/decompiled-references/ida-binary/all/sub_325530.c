__int64 __fastcall sub_325530(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int *v15; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbp
  unsigned int *i; // r12
  unsigned __int64 *v19; // rax
  __int16 v20; // r12
  __int64 v21; // rbx
  double v22; // xmm4_8
  double v23; // xmm5_8
  char v24; // [rsp+0h] [rbp-48h]
  __int16 v25; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v26[7]; // [rsp+10h] [rbp-38h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v25 = 0;
  v26[0] = -1;
  if ( (int)sub_1697D0(
              (int)"Move multiple segments\n"
                   "\n"
                   "<~T~arget address:N::18::>\n"
                   "\n"
                   "<#Correct relocatable references#~F~ix up the relocated segments:C>>\n",
              (__int64)v26,
              (__int64)&v25,
              a12,
              a13,
              a14,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              v24) <= 0 )
    return 0;
  v15 = *(unsigned int **)(a1 + 48);
  v16 = -1;
  v17 = -1;
  for ( i = &v15[2 * *(_QWORD *)(a1 + 56)]; i != v15; v15 += 2 )
  {
    v19 = (unsigned __int64 *)getnseg(*v15);
    if ( v19 )
    {
      if ( v17 == -1 )
        v17 = *v19;
      v16 = v19[1];
    }
  }
  v20 = v25;
  v21 = v26[0] - v17;
  if ( sub_323E80(v17, v16, v26[0] - v17) )
    sub_323CD0(v17, v16, v21, v20, a2, a3, a4, a5, v22, v23, a8, a9);
  return 1;
}
