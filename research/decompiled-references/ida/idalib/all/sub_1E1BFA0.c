__int64 __fastcall sub_1E1BFA0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdx

  v4 = *a1;
  v5 = a2;
  sub_18C74E0(*a1, 0, 0, 4);
  v9 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v6, v7, v8);
  if ( v9 == 1 )
  {
    sub_190D5E0(v4, a3);
    return 1;
  }
  else
  {
    v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD **)(a2 + 16) != v12 )
      v5 = sub_19A4600(*a1, *(_DWORD *)(a2 + 24), v12, *(unsigned int *)(a2 + 28), v10, v11, (__m128i)a3, a4);
    sub_190D5E0(v4, a3);
    return v5;
  }
}
