__int64 __fastcall sub_93CC70(__int64 a1)
{
  void *v1; // rdi
  unsigned int v2; // ebx
  void *v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 8) > 0x20u )
  {
    sub_25877E0(&v4, a1, 32);
    v1 = v4;
    if ( v5 > 0x40 )
    {
      v2 = *(_DWORD *)v4;
LABEL_7:
      operator delete[](v1);
      return v2;
    }
  }
  else
  {
    sub_2587BE0(&v4, a1, 32);
    v1 = v4;
    if ( v5 > 0x40 )
    {
      v2 = *(_DWORD *)v4;
      if ( !v4 )
        return v2;
      goto LABEL_7;
    }
  }
  return (unsigned int)v1;
}

