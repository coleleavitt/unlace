__int64 __fastcall sub_D59510(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  void *v4; // rdi
  unsigned int v5; // ebx
  void *v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-20h]
  void *v9; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-10h]

  v1 = *(void **)a1;
  v2 = *(unsigned int *)(a1 + 8);
  v3 = (unsigned __int64)(v2 + 63) >> 6;
  if ( v3 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v2 > 0x40 )
    {
      sub_2205470(&v7, v1, 0);
      LODWORD(v2) = v8;
    }
    else
    {
      v7 = v1;
    }
  }
  else
  {
    sub_2205610(&v7, v2, v3, v1);
    LODWORD(v2) = v8;
  }
  if ( (unsigned int)v2 > 0x20 )
  {
    sub_2206A40(&v9, &v7);
    v5 = (unsigned int)v9;
    if ( v10 <= 0x40 )
      goto LABEL_8;
    v4 = v9;
    v5 = *(_DWORD *)v9;
    goto LABEL_7;
  }
  sub_2206CD0(&v9, &v7, 32);
  v4 = v9;
  v5 = (unsigned int)v9;
  if ( v10 > 0x40 )
  {
    v5 = *(_DWORD *)v9;
    if ( v9 )
LABEL_7:
      operator delete[](v4);
  }
LABEL_8:
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  return v5;
}
