__int64 __fastcall sub_D2A6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  __int64 v8[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v10; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-50h]
  void *v12; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-40h]
  void *v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-30h]

  v9[0] = a1;
  v9[1] = a2;
  v8[1] = a4;
  v8[0] = a3;
  sub_D279E0((__int64)&v10, v9);
  sub_D279E0((__int64)&v12, v8);
  sub_21E3E60(&v14);
  sub_CE8850(a6, (__int64)&v14);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return 0;
}

