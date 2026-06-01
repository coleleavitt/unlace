__int64 __fastcall sub_15F3610(
        __int64 a1,
        const __m128i *a2,
        const void *a3,
        __int64 a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // rbx

  v6 = sub_B2D780(*(_QWORD *)(a1 + 248), a3, a4, a5, a6, a2);
  if ( !(unsigned __int8)sub_166AD70(a1, a2, *(_QWORD *)(v6 + 64), *(unsigned int *)(v6 + 56)) )
    return 0;
  return v6;
}
