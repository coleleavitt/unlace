__int64 __fastcall sub_D505C0(__int64 a1, __int64 a2)
{
  void *v3; // r13
  unsigned int v4; // r15d
  void *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // r13d
  __int64 result; // rax
  int v11; // edx
  int v12; // ebx
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-50h]
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]

  v3 = *(void **)a2;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(void **)a1;
  v6 = *(unsigned int *)(a1 + 8);
  v7 = (unsigned __int64)(v6 + 63) >> 6;
  if ( v7 == 1 )
  {
    v16 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v6 > 0x40 )
    {
      sub_2205470(&v15, v5, 1);
    }
    else
    {
      v15 = v5;
      sub_CF8100((unsigned __int64 *)&v15);
    }
  }
  else
  {
    sub_2205610(&v15, v6, v7, v5);
  }
  v8 = ((unsigned __int64)v4 + 63) >> 6;
  if ( v8 == 1 )
  {
    v14 = v4;
    if ( v4 > 0x40 )
    {
      sub_2205470(&v13, v3, 1);
    }
    else
    {
      v13 = v3;
      sub_CF8100((unsigned __int64 *)&v13);
    }
  }
  else
  {
    sub_2205610(&v13, v4, v8, v3);
  }
  v9 = sub_2205E20(&v15, &v13);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  result = 2;
  if ( v9 >= 0 )
  {
    sub_D4B720((__int64)&v15, (__int64 *)a1);
    sub_D4B720((__int64)&v13, (__int64 *)a2);
    v12 = sub_2205E20(&v15, &v13);
    if ( v14 > 0x40 && v13 )
      operator delete[](v13);
    if ( v16 > 0x40 )
    {
      if ( v15 )
        operator delete[](v15);
    }
    LOBYTE(v11) = v12 > 0;
    return (unsigned int)(3 * v11);
  }
  return result;
}
