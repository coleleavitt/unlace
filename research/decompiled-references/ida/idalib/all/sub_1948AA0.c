__int64 __fastcall sub_1948AA0(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rdx

  v8 = a4 + 3;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr)),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = sub_1E65A20(*a1, v12, *a4);
  v15 = v14;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v14, 12, 4);
  *v16 = *a4;
  v16[1] = a4[1];
  v16[2] = a4[2];
  return v15;
}
