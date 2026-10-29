__int64 __fastcall sub_DBC9E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  void *v3; // r12
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]
  void *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-20h]

  v1 = sub_E21760(a1, 16);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(void **)v1;
  sub_E21790(a1, 16);
  v4 = ((unsigned __int64)(unsigned int)v2 + 63) >> 6;
  if ( v4 == 1 )
  {
    v8 = v2;
    if ( (unsigned int)v2 <= 0x40 )
    {
      v7 = v3;
      goto LABEL_4;
    }
    sub_2205470(&v7, v3, 0);
  }
  else
  {
    sub_2205610(&v7, v2, v4, v3);
  }
  if ( v8 <= 0x40 )
  {
LABEL_4:
    sub_2206CD0(&v9, &v7, 64);
    if ( v10 > 0x40 )
    {
      v5 = *(_QWORD *)v9;
      if ( v9 )
        operator delete[](v9);
    }
    else
    {
      v5 = 0;
      if ( v10 )
        v5 = (__int64)((_QWORD)v9 << (64 - (unsigned __int8)v10)) >> (64 - (unsigned __int8)v10);
    }
    goto LABEL_7;
  }
  sub_2206A40(&v9, &v7);
  if ( v10 > 0x40 )
  {
    v5 = *(_QWORD *)v9;
    operator delete[](v9);
  }
  else
  {
    v5 = 0;
    if ( v10 )
      v5 = (__int64)((_QWORD)v9 << (64 - (unsigned __int8)v10)) >> (64 - (unsigned __int8)v10);
  }
LABEL_7:
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  *(_QWORD *)sub_E216C0(a1, 8) = v5;
  return 1;
}
