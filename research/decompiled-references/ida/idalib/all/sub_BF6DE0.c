__int64 __fastcall sub_BF6DE0(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  int v12; // eax
  void *v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-40h]
  char v15; // [rsp+Ch] [rbp-3Ch]
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  int v17; // [rsp+18h] [rbp-30h]

  v6 = sub_F65240(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v13 = a3;
  v14 = 64;
  v15 = v6 ^ 1;
  v10 = sub_AAC1F0(a2, a4, v7, v8, v9);
  if ( v10 == 64 )
  {
    *(_DWORD *)(a1 + 8) = 64;
    *(_QWORD *)a1 = v13;
    *(_BYTE *)(a1 + 12) = v15;
    return a1;
  }
  if ( v15 )
  {
    sub_2206D90(&v16, &v13, v10);
    v12 = v17;
    *(_BYTE *)(a1 + 12) = 1;
  }
  else
  {
    sub_2206DE0(&v16, &v13, v10);
    v12 = v17;
    *(_BYTE *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = v16;
  if ( v14 <= 0x40 || !v13 )
    return a1;
  operator delete[](v13);
  return a1;
}
