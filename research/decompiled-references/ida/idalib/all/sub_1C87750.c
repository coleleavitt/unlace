__int64 __fastcall sub_1C87750(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int16 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v12; // rbx

  v4 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  v8 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), a3, a4, v5, v6, v7);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v12 = sub_19A4600(
            *a1,
            *(_DWORD *)(a2 + 24),
            (_QWORD *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL),
            *(unsigned int *)(a2 + 28),
            v9,
            v10,
            (__m128i)a3,
            a4);
    sub_190D5E0(v4, a3);
    return v12;
  }
}
