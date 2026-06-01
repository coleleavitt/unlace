void __fastcall sub_CFED10(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  size_t v9; // rbx
  const void *p_src; // rsi
  void *v11; // rdi
  void *src; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-30h]

  v3 = sub_21F8CF0(*(unsigned int *)(a1 + 8));
  v4 = (unsigned int)sub_21F9120(v3);
  v6 = sub_21F90D0(v3, a2, v5);
  v7 = v6;
  if ( (unsigned __int64)(v4 + 63) >> 6 == 1 )
  {
    if ( *a2 == v6 )
      sub_22010F0(&src, a2);
    else
      sub_21FEE00(&src, a2);
    v11 = src;
    if ( v13 <= 0x40 )
    {
      *(_QWORD *)a1 = src;
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)src;
      operator delete[](v11);
    }
  }
  else
  {
    v8 = sub_21F8CF0(*(unsigned int *)(a1 + 8));
    v9 = 8 * (((unsigned __int64)(unsigned int)sub_21F9120(v8) + 63) >> 6);
    if ( *a2 == v7 )
      sub_22010F0(&src, a2);
    else
      sub_21FEE00(&src, a2);
    p_src = &src;
    if ( v13 > 0x40 )
      p_src = src;
    memcpy(*(void **)a1, p_src, v9);
    if ( v13 > 0x40 )
    {
      if ( src )
        operator delete[](src);
    }
  }
}
