__int64 __fastcall sub_176E940(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r14
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _DWORD *v14; // rdx

  v4 = a3;
  v7 = a4 + 1;
  v8 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v8 * (((unsigned __int64)v7 - (v7 != nullptr)) / v8 + (v7 != nullptr))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = *a1;
    v13 = v11;
    if ( !*(_DWORD *)(*a1 + 12632LL) )
    {
      sub_F6C520(*(_QWORD *)(v4 + 32));
      if ( v13 == *(_QWORD *)(v4 + 32) )
        goto LABEL_4;
      v12 = *a1;
    }
    v4 = sub_1E6FF00(v12, v13, (unsigned int)*a4, 0);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_4:
      sub_1EA6140(a2, v4, 4, 4);
      *v14 = *a4;
      return v4;
    }
  }
  return 0;
}
