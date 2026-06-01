unsigned __int64 __fastcall sub_194E3C0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rdx

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
  v14 = sub_A74EC0(*(_QWORD *)(*a1 + 248), v12);
  v15 = v14;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v14, 4, 4);
  *v16 = *a4;
  return v15;
}
