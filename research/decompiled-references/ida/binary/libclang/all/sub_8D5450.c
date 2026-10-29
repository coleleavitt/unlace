void *__fastcall sub_8D5450(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rbp
  void *v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-30h]
  void *v6; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+18h] [rbp-20h]

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 <= 0x40 )
  {
    v4 = *(void **)a1;
    goto LABEL_3;
  }
  sub_2585B30(&v4);
  if ( v5 <= 0x40 )
  {
LABEL_3:
    sub_2587BE0(&v6, &v4, 64);
    v1 = v6;
    if ( v7 > 0x40 )
    {
      v2 = *(void **)v6;
      if ( v6 )
        operator delete[](v6);
      v1 = v2;
    }
    goto LABEL_7;
  }
  sub_25877E0(&v6, &v4, 64);
  v1 = v6;
  if ( v7 > 0x40 )
  {
    v1 = *(void **)v6;
    operator delete[](v6);
  }
LABEL_7:
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  return v1;
}

