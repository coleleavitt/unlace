__int64 __fastcall sub_19774D0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax

  v8 = sub_1975200(a1, *(_WORD **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v8 == 1 )
    return 1;
  else
    return sub_1A86120(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v8 & 0xFFFFFFFFFFFFFFFELL);
}
