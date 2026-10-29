__int64 __fastcall sub_1C88060(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int16 *v12; // r12
  unsigned __int16 *v13; // rax

  v7 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v12 = v7;
  v13 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 48), a6, a7, v8, v9, v10);
  if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1923BC0(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL,
             0,
             (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL,
             a6,
             a7);
}
