__int64 __fastcall sub_1C87A40(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rcx

  v4 = sub_1C7A830((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( v4 )
  {
    v9 = v4;
    if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
    {
      v11 = 0;
      return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v9, v11, *(_QWORD *)(*a1 + 544), v8);
    }
    v10 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 32), a3, a4, v5, v6, v7);
    if ( v10 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v11 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
      return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v9, v11, *(_QWORD *)(*a1 + 544), v8);
    }
  }
  return 1;
}
