__int64 __fastcall sub_1DD0D30(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  _DWORD *v16; // rdx

  v6 = a3;
  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          a5,
          a6,
          v11,
          v12);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = *a1;
    v15 = v13;
    if ( !*(_DWORD *)(*a1 + 12632) )
    {
      sub_F6C520(*(_QWORD *)(v6 + 32));
      if ( v15 == *(_QWORD *)(v6 + 32) )
        goto LABEL_4;
      v14 = *a1;
    }
    v6 = sub_1E6FF00(v14, v15, (unsigned int)*a4, a1[6]);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_4:
      sub_1EA6140(a2, v6, 4, 4);
      *v16 = *a4;
      return v6;
    }
  }
  return 0;
}
