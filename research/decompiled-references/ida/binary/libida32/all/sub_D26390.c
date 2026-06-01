void *__fastcall sub_D26390(__int64 a1)
{
  void *v1; // rbp
  void *v3; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-50h]
  void *v5; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+18h] [rbp-40h]
  void *v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-30h]

  sub_D23F70((__int64)&v3, (__int64 *)a1);
  sub_21E2D00(&v5, &v3);
  sub_21E3050(&v7, &v5, *(unsigned int *)(a1 + 8));
  v1 = v7;
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( v6 > 0x40 && v5 )
    operator delete[](v5);
  if ( v4 > 0x40 && v3 )
    operator delete[](v3);
  return v1;
}

