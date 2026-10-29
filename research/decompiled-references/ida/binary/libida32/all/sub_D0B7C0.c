void *__fastcall sub_D0B7C0(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  void *v4; // rdi
  void *v5; // rbx
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
    if ( (unsigned int)v2 <= 0x40 )
    {
      v7 = v1;
      goto LABEL_4;
    }
    sub_21E1730(&v7, v1, 0);
  }
  else
  {
    sub_21E18D0(&v7, v2, v3, v1);
  }
  if ( v8 > 0x40 )
  {
    sub_21E2D00(&v9, &v7);
    v5 = v9;
    if ( v10 <= 0x40 )
      goto LABEL_7;
    v4 = v9;
    v5 = *(void **)v9;
    goto LABEL_6;
  }
LABEL_4:
  sub_21E2F90(&v9, &v7, 64);
  v4 = v9;
  v5 = v9;
  if ( v10 > 0x40 )
  {
    v5 = *(void **)v9;
    if ( v9 )
LABEL_6:
      operator delete[](v4);
  }
LABEL_7:
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  return v5;
}

