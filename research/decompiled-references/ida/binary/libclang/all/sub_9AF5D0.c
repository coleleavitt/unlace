void __fastcall sub_9AF5D0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // edx
  void *v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-40h]
  void *v9; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-30h]
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-20h]

  v2 = a2;
  v3 = sub_A1A5A0(a1, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v8 = v4;
  v7 = *(void **)v3;
  sub_A1A5E0(a1, 16);
  if ( !a2 )
    v2 = v8;
  sub_2587E20(&v11, &v7, v2);
  v10 = v12;
  if ( v12 > 0x40 )
  {
    sub_2585B30(&v9);
    if ( v12 > 0x40 && v11 )
      operator delete[](v11);
  }
  else
  {
    v9 = v11;
  }
  v5 = sub_A1A4E0(a1, 16);
  v6 = v10;
  v10 = 0;
  *(_DWORD *)(v5 + 8) = v6;
  *(_QWORD *)v5 = v9;
  if ( v8 > 0x40 )
  {
    if ( v7 )
      operator delete[](v7);
  }
}

