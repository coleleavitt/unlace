__int64 __fastcall sub_176E4C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // r13
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _DWORD *v14; // rdx

  v5 = a3;
  v7 = a4 + 3;
  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v5 + 32),
          (const __m128i *)(v8 * (((unsigned __int64)v7 - (v7 != nullptr)) / v8 + (v7 != nullptr))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = *a1;
    v13 = v11;
    if ( !*(_DWORD *)(*a1 + 12632LL) )
    {
      sub_F6C520(*(_QWORD *)(v5 + 32));
      if ( v13 == *(_QWORD *)(v5 + 32) )
        goto LABEL_4;
      v12 = *a1;
    }
    v5 = sub_1E65A20(v12, v13, *a4);
    if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_4:
      sub_1EA6140(a2, v5, 12, 4);
      *v14 = *a4;
      v14[1] = a4[1];
      v14[2] = a4[2];
      return v5;
    }
  }
  return 0;
}
