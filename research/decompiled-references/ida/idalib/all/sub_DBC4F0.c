__int64 __fastcall sub_DBC4F0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // r12
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  void *v7; // rdi
  bool v8; // bl
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]
  void *v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-20h]

  v2 = sub_E21760(a1, 16);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(void **)v2;
  sub_E21790(a1, 16);
  v5 = ((unsigned __int64)(unsigned int)v3 + 63) >> 6;
  if ( v5 == 1 )
  {
    v11 = v3;
    if ( (unsigned int)v3 > 0x40 )
    {
      sub_2205470(&v10, v4, 0);
      v6 = v11;
    }
    else
    {
      v10 = v4;
      v6 = v3;
    }
  }
  else
  {
    sub_2205610(&v10, v3, v5, v4);
    v6 = v11;
  }
  if ( v6 > 8 )
  {
    sub_2206A40(&v12, &v10);
    if ( v13 <= 0x40 )
    {
      v8 = v12 != nullptr;
      goto LABEL_8;
    }
    v7 = v12;
    v8 = *(_QWORD *)v12 != 0;
LABEL_7:
    operator delete[](v7);
    goto LABEL_8;
  }
  sub_2206CD0(&v12, &v10, 8);
  v7 = v12;
  if ( v13 <= 0x40 )
  {
    v8 = v12 != nullptr;
    goto LABEL_8;
  }
  v8 = *(_QWORD *)v12 != 0;
  if ( v12 )
    goto LABEL_7;
LABEL_8:
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  *(_BYTE *)sub_E216C0(a1, 8) = v8;
  return 1;
}
