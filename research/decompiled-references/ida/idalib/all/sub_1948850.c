__int64 __fastcall sub_1948850(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // eax

  v8 = a4 + 16;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v9 * ((v8 - (unsigned __int64)(v8 != 0)) / v9 + (v8 != 0)),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = sub_1901270(a1, v12, (*(_WORD *)(a3 + 18) >> 6) & 7, 0, 0, (*(_BYTE *)(a3 + 18) >> 3) & 7, *(_QWORD *)a4);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v14, 16, 8);
  *(_DWORD *)v15 = *(_DWORD *)a4;
  v16 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 4) = v16;
  return v14;
}
