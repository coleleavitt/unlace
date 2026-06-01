unsigned __int64 __fastcall sub_204D20(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  _QWORD *v15; // rcx
  const __m128i *v16; // r12
  __int64 v17; // r8
  __int128 v19; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  *((_QWORD *)&v19 + 1) = a2;
  *(_QWORD *)&v19 = 0;
  v10 = sub_1E7840(a1, &v19);
  if ( v10 )
  {
    v15 = *(_QWORD **)v10;
    v16 = (const __m128i *)v10;
    v17 = *(_QWORD *)v10 + 16LL * *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v10 == v17 )
      goto LABEL_9;
    while ( 1 )
    {
      v11 = v15[1] ^ *((_QWORD *)&v19 + 1) | *v15 ^ v19;
      if ( *(_OWORD *)v15 - v19 == 0 )
        break;
      v15 += 2;
      if ( (_QWORD *)v17 == v15 )
        goto LABEL_9;
    }
    if ( v15 == (_QWORD *)v17 )
LABEL_9:
      sub_169700(
        (int)"Coherency check failed: g->has(ssv)\n",
        (__int64)&v19,
        v11,
        (__int64)v15,
        v17,
        v12,
        a3,
        a4,
        a5,
        a6,
        v13,
        v14,
        a9,
        a10,
        v19);
    sub_204900(a1, v16, &v19, (__int64)v15, v17, v12, a3, a4, a5, a6, v13, v14, a9, a10);
  }
  return v20 - __readfsqword(0x28u);
}
