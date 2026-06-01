unsigned __int64 __fastcall sub_1E01C70(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // r12
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rbx

  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFCLL;
  sub_18C74E0(*(_QWORD *)a1, 4, 0, 4);
  v9 = sub_1DF2070(*(_QWORD *)a1, v5, *(_QWORD *)(a1 + 32), v6, v7, v8, a3, a4);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1)
    || (v13 = v9,
        v14 = sub_1DF2070(*(_QWORD *)a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 32), v10, v11, v12, a3, a4),
        v14 == (unsigned __int16 *)((char *)&dword_0 + 1)) )
  {
    v15 = 0;
  }
  else
  {
    v15 = sub_1863700(
            *(_QWORD *)a1,
            *(_DWORD *)(a2 + 24),
            (_DWORD *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL),
            (_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL),
            *(_DWORD *)(a2 + 56),
            (*(__int64 *)(a2 + 40) >> 1) & 1,
            *(double *)a3.m128_u64);
  }
  sub_190D5E0(v4, a3);
  return v15;
}
