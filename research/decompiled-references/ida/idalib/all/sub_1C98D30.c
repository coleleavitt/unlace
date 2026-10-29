__int64 __fastcall sub_1C98D30(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // r12
  _DWORD *v20; // rdx

  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1C892C0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (const __m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v13;
  v18 = sub_1E70650(*a1, v13, (*(_WORD *)(a3 + 18) & 8) != 0, (unsigned int)*a4, 0);
  v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( (unsigned int)*(unsigned __int8 *)(*v19 + 16LL) - 43 > 1 )
    sub_F63050(*v19, v15, v16, v17);
  sub_1EA6140(a2, v18, 4, 4);
  *v20 = *a4;
  return v18;
}
