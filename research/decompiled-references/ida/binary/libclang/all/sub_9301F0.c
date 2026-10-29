void *__fastcall sub_9301F0(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rbp
  __int64 v4; // rbx
  void *v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 8) <= 0x40u )
  {
    sub_2587D60(&v5, a1);
    v1 = v5;
    if ( v6 > 0x40 )
    {
      v2 = *(_QWORD *)v5;
      if ( v5 )
        operator delete[](v5);
      return (void *)v2;
    }
    return v1;
  }
  sub_25877E0(&v5, a1, 64);
  v1 = v5;
  if ( v6 <= 0x40 )
    return v1;
  v4 = *(_QWORD *)v5;
  operator delete[](v5);
  return (void *)v4;
}

