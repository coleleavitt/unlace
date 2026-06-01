__int64 __fastcall sub_1DCD210(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdx

  v4 = *a1;
  v5 = a2;
  sub_18C74E0(*a1, 0, 0, 4);
  v10 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), v6, v7, v8, v9, a3, a4);
  if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v13 = (_QWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD **)(a2 + 16) != v13 )
      v5 = sub_19A4600(*a1, *(_DWORD *)(a2 + 24), v13, *(unsigned int *)(a2 + 28), v11, v12, (__m128i)a3, a4);
    sub_190D5E0(v4, a3);
    return v5;
  }
}
