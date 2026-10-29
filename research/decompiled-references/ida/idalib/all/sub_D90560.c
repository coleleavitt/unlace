void __fastcall sub_D90560(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  void *v6; // rcx
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]
  void *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-20h]
  void *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-10h]
  char v12; // [rsp+2Ch] [rbp-Ch]

  v5 = *(_DWORD *)(a2 + 8);
  v9 = v5;
  if ( v5 > 0x40 )
  {
    v7 = a3;
    sub_2205510(&v8);
    v5 = v9;
    v6 = v8;
    a3 = v7;
  }
  else
  {
    v6 = *(void **)a2;
    v8 = *(void **)a2;
  }
  v11 = v5;
  v10 = v6;
  v9 = 0;
  v12 = 1;
  sub_D8FFE0(a1, (__int64)&v10, a3, (__int64)v6, a5);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}
