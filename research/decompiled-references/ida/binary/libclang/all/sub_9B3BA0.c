void __fastcall sub_9B3BA0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  void *v3; // rbp
  void *v4; // r12
  void *v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-30h]
  void *v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-20h]

  v1 = sub_A1A5A0(a1, 16);
  v2 = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 8) = 0;
  v6 = v2;
  v5 = *(void **)v1;
  sub_A1A5E0(a1, 16);
  if ( v6 > 0x40 )
  {
    sub_25877E0(&v7, &v5, 64);
    v3 = v7;
    if ( v8 > 0x40 )
    {
      v3 = *(void **)v7;
      operator delete[](v7);
    }
  }
  else
  {
    sub_2587BE0(&v7, &v5, 64);
    v3 = v7;
    if ( v8 > 0x40 )
    {
      v4 = *(void **)v7;
      if ( v7 )
        operator delete[](v7);
      v3 = v4;
    }
  }
  *(_QWORD *)sub_A1A4E0(a1, 8) = v3;
  if ( v6 > 0x40 )
  {
    if ( v5 )
      operator delete[](v5);
  }
}

