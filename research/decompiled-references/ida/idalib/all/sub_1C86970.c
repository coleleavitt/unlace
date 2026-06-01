__int64 __fastcall sub_1C86970(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rbx

  v4 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  v8 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a3, a4, v5, v6, v7);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v9 = v8;
    sub_190D5E0(v4, a3);
    return sub_1E86580(
             *a1,
             *(_DWORD *)(a2 + 4) & 0x7FFFFFFF,
             *(unsigned int *)(a2 + 16),
             (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)(a2 + 20));
  }
}
