__int64 __fastcall sub_CF81C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]
  void *v11; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_E21760(v2, 16);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(void **)v3;
  sub_E21790(v2, 16);
  v6 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
  if ( v6 == 1 )
  {
    v10 = v4;
    if ( (unsigned int)v4 > 0x40 )
    {
      sub_2205470(&v9, v5, 1);
    }
    else
    {
      v9 = v5;
      sub_CF8100((unsigned __int64 *)&v9);
    }
  }
  else
  {
    sub_2205610(&v9, v4, v6, v5);
  }
  if ( v10 > 0x40 )
  {
    sub_2206A40(&v11, &v9);
    if ( v12 > 0x40 )
    {
      v7 = *(_QWORD *)v11;
      operator delete[](v11);
    }
    else
    {
      v7 = 0;
      if ( v12 )
        v7 = (__int64)((_QWORD)v11 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
    }
  }
  else
  {
    sub_2206B70(&v11, &v9, 64);
    if ( v12 > 0x40 )
    {
      v7 = *(_QWORD *)v11;
      if ( v11 )
        operator delete[](v11);
    }
    else
    {
      v7 = 0;
      if ( v12 )
        v7 = (__int64)((_QWORD)v11 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
    }
  }
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  *(_QWORD *)sub_E216C0(v2, 8) = v7;
  return 1;
}
