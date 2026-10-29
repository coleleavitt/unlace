__int64 __fastcall sub_DBEEA0(__int64 a1, __int64 a2, void **a3)
{
  void *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  void *v10; // rbp
  unsigned int v12; // eax
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-50h]
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]
  void *src; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-30h]

  v4 = *(void **)a2;
  v5 = *(unsigned int *)(a2 + 8);
  v6 = (unsigned __int64)(v5 + 63) >> 6;
  if ( v6 == 1 )
  {
    v16 = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)v5 > 0x40 )
      sub_2205470(&v15, v4, 0);
    else
      v15 = v4;
  }
  else
  {
    sub_2205610(&v15, (unsigned int)v5, v6, v4);
  }
  v7 = *(void **)a1;
  v8 = *(unsigned int *)(a1 + 8);
  v9 = (unsigned __int64)(v8 + 63) >> 6;
  if ( v9 == 1 )
  {
    v14 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v8 <= 0x40 )
    {
      v13 = v7;
      v18 = v8;
LABEL_7:
      src = v13;
      goto LABEL_8;
    }
    sub_2205470(&v13, v7, 0);
    v12 = v14;
  }
  else
  {
    sub_2205610(&v13, v8, v9, v7);
    v12 = v14;
  }
  v18 = v12;
  if ( v12 <= 0x40 )
    goto LABEL_7;
  sub_2205510(&src);
LABEL_8:
  sub_22059A0(&src, &v15);
  v10 = src;
  if ( v18 > 0x40 )
  {
    memcpy(*a3, src, 8 * (((unsigned __int64)v18 + 63) >> 6));
    operator delete[](v10);
  }
  else
  {
    *a3 = src;
  }
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  return 0;
}
