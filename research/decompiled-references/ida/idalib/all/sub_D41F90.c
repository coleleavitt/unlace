__int64 __fastcall sub_D41F90(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]
  void *v8; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-10h]

  v1 = *(void **)a1;
  v2 = *(unsigned int *)(a1 + 8);
  v3 = (unsigned __int64)(v2 + 63) >> 6;
  if ( v3 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v2 > 0x40 )
    {
      sub_2205470(&v6, v1, 1);
    }
    else
    {
      v6 = v1;
      sub_CF8100((unsigned __int64 *)&v6);
    }
  }
  else
  {
    sub_2205610(&v6, v2, v3, v1);
  }
  if ( v7 > 0x40 )
  {
    sub_2206A40(&v8, &v6);
    if ( v9 > 0x40 )
    {
      v4 = *(_QWORD *)v8;
      operator delete[](v8);
    }
    else
    {
      v4 = 0;
      if ( v9 )
        v4 = (__int64)((_QWORD)v8 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9);
    }
  }
  else
  {
    sub_2206B70(&v8, &v6, 64);
    if ( v9 > 0x40 )
    {
      v4 = *(_QWORD *)v8;
      if ( v8 )
        operator delete[](v8);
    }
    else
    {
      v4 = 0;
      if ( v9 )
        v4 = (__int64)((_QWORD)v8 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9);
    }
  }
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return v4;
}
