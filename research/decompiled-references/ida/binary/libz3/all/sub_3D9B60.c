__int64 __fastcall sub_3D9B60(int a1, _QWORD *a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  int v7[6]; // [rsp+8h] [rbp-50h] BYREF
  int v8; // [rsp+20h] [rbp-38h] BYREF
  void *v9; // [rsp+30h] [rbp-28h]

  v6 = (__int64)a2;
  sub_1684300(v7, *a2);
  v9 = nullptr;
  result = sub_3DD8A0((int)&v6, (int)&v8, a1, v2, v3, v4, (__int64)a2, v7[0], v7[2], v7[4], v8, nullptr);
  if ( v9 )
    return sub_186B220(v9);
  return result;
}

