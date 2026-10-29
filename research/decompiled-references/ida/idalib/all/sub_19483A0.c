unsigned __int64 __fastcall sub_19483A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v13; // rbx

  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v8 * ((a4 - (unsigned __int64)(a4 != 0)) / v8 + (a4 != 0)),
          v9,
          v10,
          a5,
          a6);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = sub_A75D20(*(_QWORD **)(*a1 + 248), v11);
  sub_1EA6140(a2, v13, 0, 1);
  return v13;
}
