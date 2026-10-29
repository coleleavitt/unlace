__int64 __fastcall sub_198C240(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r13
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rbx
  _DWORD *v15; // rdx

  v7 = a3;
  v8 = a4 + 3;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v7 + 32),
          (__m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v12;
  sub_F6C520(*(_QWORD *)(v7 + 32));
  if ( v14 != *(_QWORD *)(v7 + 32) )
  {
    v7 = sub_1E65A20(*a1, v14, *a4);
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v7, 12, 4);
  *v15 = *a4;
  v15[1] = a4[1];
  v15[2] = a4[2];
  return v7;
}
