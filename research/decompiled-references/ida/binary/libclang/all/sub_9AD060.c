void __fastcall sub_9AD060(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]
  void *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v10 = v3;
  v9 = *(void **)v2;
  sub_A1A5E0(v1, 16);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v8 = v6;
  v7 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  sub_9A8CC0(a1, (__int64)&v7, (__int64)&v9);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

