unsigned __int64 __fastcall sub_145F720(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __m128 v8; // [rsp+0h] [rbp-18h] BYREF

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    if ( v3 )
    {
      v4 = *(_BYTE *)(a1 + 544);
      if ( v4 >= 0 )
      {
        *(_BYTE *)(a1 + 544) = v4 | 0x80;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 1704);
  v6 = (_QWORD *)(*(_QWORD *)v5 + 16LL * *(unsigned int *)(v5 + 16));
  sub_13C4310(&v8, v6, v6, v5, 1);
  return v8.m128_u64[0];
}
