__int64 __fastcall sub_208CFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  const void *v8; // rax
  size_t v9; // rdx
  void *v10; // rdi
  size_t v11; // r12

  v7 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a2 + 7) & 0x10) != 0 )
  {
    v8 = (const void *)sub_20CC3B0(a2);
    v10 = *(void **)(v7 + 32);
    v11 = v9;
    if ( *(_QWORD *)(v7 + 24) - (_QWORD)v10 < v9 )
    {
      sub_227BF10(v7, v8, v9);
      return a1;
    }
    else
    {
      if ( v9 )
      {
        memcpy(v10, v8, v9);
        *(_QWORD *)(v7 + 32) += v11;
      }
      return a1;
    }
  }
  else
  {
    sub_2040450(a2, *(_QWORD *)(a1 + 8), 0, 0, a5, a6);
    return a1;
  }
}
