__int64 __fastcall sub_194F0A0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rdx

  v8 = a4 + 1;
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
  v15 = sub_18FF1F0(a1, v12, *(unsigned int *)(a3 + 20), 0, v13);
  v16 = v15;
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v15, 4, 4);
  *v17 = *a4;
  return v16;
}
