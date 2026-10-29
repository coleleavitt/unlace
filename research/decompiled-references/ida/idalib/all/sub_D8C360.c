__int64 __fastcall sub_D8C360(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  void **v6; // rbx
  void *v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  void *v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-30h]
  void *v13; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-20h]

  v3 = *(void **)a1;
  v4 = *(unsigned int *)(a1 + 8);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v4 > 0x40 )
    {
      v6 = &v11;
      sub_2205470(&v11, v3, 0);
    }
    else
    {
      v11 = v3;
      v6 = &v11;
    }
  }
  else
  {
    v6 = &v11;
    sub_2205610(&v11, v4, v5, v3);
  }
  v7 = *(void **)a2;
  v8 = *(unsigned int *)(a2 + 8);
  v9 = (unsigned __int64)(v8 + 63) >> 6;
  if ( v9 == 1 )
  {
    v14 = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)v8 <= 0x40 )
    {
      v13 = v7;
      LOBYTE(v6) = (int)sub_2205DB0(&v11, &v13) > 0;
      goto LABEL_7;
    }
    sub_2205470(&v13, v7, 0);
  }
  else
  {
    sub_2205610(&v13, v8, v9, v7);
  }
  LOBYTE(v6) = (int)sub_2205DB0(&v11, &v13) > 0;
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
LABEL_7:
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return (unsigned int)v6;
}
