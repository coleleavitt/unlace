__int64 __fastcall sub_1D23540(_QWORD *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r13
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rdx

  v7 = a3;
  v9 = a4 + 3;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1D190C0(
          a1,
          a2,
          *(_QWORD *)(v7 + 32),
          (__m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = *a1;
    v15 = v13;
    if ( !*(_DWORD *)(*a1 + 12632LL) )
    {
      sub_F6C520(*(_QWORD *)(v7 + 32));
      if ( v15 == *(_QWORD *)(v7 + 32) )
        goto LABEL_4;
      v14 = *a1;
    }
    v7 = sub_1E65A20(v14, v15, *a4);
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_4:
      sub_1EA6140(a2, v7, 12, 4);
      *v16 = *a4;
      v16[1] = a4[1];
      v16[2] = a4[2];
      return v7;
    }
  }
  return 0;
}
