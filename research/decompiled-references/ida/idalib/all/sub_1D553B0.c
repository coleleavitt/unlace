__int64 __fastcall sub_1D553B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14

  v4 = a2;
  v5 = sub_1D51480(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( !v5 )
    return 1;
  v6 = *a1;
  v7 = v5;
  if ( !*(_DWORD *)(*a1 + 12632) && v5 == *(_QWORD **)(a2 + 40) )
    return v4;
  sub_18C74E0(*a1, 0, 0, 4);
  v11 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4, v8, v9, v10);
  sub_190D5E0(v6, a3);
  if ( v11 == 1 )
    return 1;
  else
    return sub_1E885A0(
             *a1,
             (*(_BYTE *)(a2 + 2) >> 3) & 3,
             *(unsigned int *)(a2 + 32),
             v7,
             v11 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)(a2 + 36));
}
