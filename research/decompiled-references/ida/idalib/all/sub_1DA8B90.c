unsigned __int64 __fastcall sub_1DA8B90(__int64 *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v6; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // rdx

  v6 = a3;
  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v12 = sub_1D97F40(
          a1,
          a2,
          *(_QWORD *)(v6 + 24),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v16 = v12;
    v17 = *a1;
    if ( !*(_DWORD *)(*a1 + 12632) )
    {
      sub_F6C520(*(_QWORD *)(v6 + 24));
      if ( v16 == *(_QWORD *)(v6 + 24) )
        goto LABEL_4;
      v17 = *a1;
    }
    v6 = sub_A820D0(*(_QWORD *)(v17 + 248), v16, *(_QWORD *)(v6 + 32), v13, v14, v15);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_4:
      sub_1EA6140(a2, v6, 4, 4);
      *v18 = *a4;
      return v6;
    }
  }
  return 0;
}
