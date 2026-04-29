char __fastcall sub_12D720(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v6; // eax
  char v9; // al

  v6 = *(_DWORD *)(a4 + 4);
  if ( v6 != -1 )
    return sub_12D290(a1, a2, a3, a4, 2 * v6, a5, a6);
  v9 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL);
  if ( v9 )
    v9 = sub_117990((unsigned __int8 *)a4);
  return a5 == (unsigned __int8)v9;
}
