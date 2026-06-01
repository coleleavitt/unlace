__int64 __fastcall sub_DBED30(__int64 a1, __int64 a2, void **a3)
{
  void *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-40h]
  void *v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-30h]
  void *src; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-20h]

  v4 = *(void **)a2;
  v5 = *(unsigned int *)(a2 + 8);
  v6 = (unsigned __int64)(v5 + 63) >> 6;
  if ( v6 == 1 )
  {
    v14 = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)v5 > 0x40 )
      sub_2205470(&v13, v4, 0);
    else
      v13 = v4;
  }
  else
  {
    sub_2205610(&v13, (unsigned int)v5, v6, v4);
  }
  v7 = *(void **)a1;
  v8 = *(unsigned int *)(a1 + 8);
  v9 = (unsigned __int64)(v8 + 63) >> 6;
  if ( v9 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v8 > 0x40 )
      sub_2205470(&v11, v7, 0);
    else
      v11 = v7;
  }
  else
  {
    sub_2205610(&v11, v8, v9, v7);
  }
  sub_2209CE0(&src, &v11, &v13);
  if ( v16 > 0x40 )
  {
    memcpy(*a3, src, 8 * (((unsigned __int64)v16 + 63) >> 6));
    if ( v16 > 0x40 && src )
      operator delete[](src);
  }
  else
  {
    *a3 = src;
  }
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return 0;
}
