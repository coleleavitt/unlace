__int64 __fastcall sub_D41E70(__int64 a1)
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
    if ( (unsigned int)v2 <= 0x40 )
    {
      v6 = v1;
      goto LABEL_4;
    }
    sub_2205470(&v6, v1, 0);
  }
  else
  {
    sub_2205610(&v6, v2, v3, v1);
  }
  if ( v7 <= 0x40 )
  {
LABEL_4:
    sub_2206CD0(&v8, &v6, 64);
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
    goto LABEL_7;
  }
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
LABEL_7:
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return v4;
}
