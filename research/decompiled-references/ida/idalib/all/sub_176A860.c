__int64 __fastcall sub_176A860(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // rbp
  void **v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // rbp

  v8 = *a1;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 || !sub_15F2610(*a1, 0, a3, a4, a5, a6) )
    v9 = (void **)sub_19A27D0(v8);
  else
    v9 = sub_176A2F0(a1, *(_QWORD *)(a2 + 8), a7);
  v10 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && *(void ***)(a2 + 8) == v9 )
  {
    sub_19B4EA0(v10, a2);
    return a2;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 4);
    v12 = 1;
    v13 = *(_QWORD *)a2 >> 16;
    if ( !(unsigned __int8)sub_19A92A0(v10, v11, v9) )
      return sub_19B4F00(*a1, v11, v9, (v13 & 8) != 0);
    return v12;
  }
}
