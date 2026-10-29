__int64 __fastcall sub_3D9C60(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h]
  int v8; // [rsp+18h] [rbp-50h]
  int v9; // [rsp+20h] [rbp-48h] BYREF
  void *v10; // [rsp+28h] [rbp-40h]
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF

  sub_16669D0(&v9, a2);
  sub_16744A0(v11, a2);
  sub_3DEAA0((int)&v9, (int)&v6, a1, v2, v3, v4, v6, 0, 0, v8, v9, v10);
  if ( ptr )
    sub_186B220(ptr);
  return 0;
}

