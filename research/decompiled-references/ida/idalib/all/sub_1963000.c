__int64 __fastcall sub_1963000(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // rax

  v8 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 16), a3, a7, a8, a4, a5, a6);
  if ( v8 == 1 )
    return 1;
  v10 = v8;
  v11 = sub_18CBA40((__int64)a1, *(_QWORD *)(a2 + 8));
  if ( !v11 )
    return 1;
  if ( v11 == *(_QWORD *)(a2 + 8) )
    *(_QWORD *)(v11 + 48) = 0;
  return sub_1C3E300(*a1, *(unsigned int *)(a2 + 4), v11, 0, v10 & 0xFFFFFFFFFFFFFFFELL);
}
