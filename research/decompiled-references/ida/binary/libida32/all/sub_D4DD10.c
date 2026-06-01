__int64 __fastcall sub_D4DD10(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned int v7; // ebx
  void *v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-20h]

  v3 = *(void **)a1;
  v4 = *(unsigned int *)(a1 + 8);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 == 1 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v4 <= 0x40 )
    {
      v8 = v3;
LABEL_4:
      LOBYTE(v2) = (unsigned __int64)v8 >= a2;
      return v2;
    }
    sub_21E1730(&v8, v3, 0);
  }
  else
  {
    sub_21E18D0(&v8, (unsigned int)v4, v5, v3);
  }
  v2 = v9;
  if ( v9 <= 0x40 )
    goto LABEL_4;
  v7 = v2 - sub_21E2A40(&v8);
  if ( v7 <= 0x40 )
  {
    LOBYTE(v7) = *(_QWORD *)v8 >= (unsigned __int64)a2;
  }
  else
  {
    v7 = 1;
    if ( !v8 )
      return 1;
  }
  operator delete[](v8);
  return v7;
}

