void __fastcall sub_2129730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r13d
  _QWORD v6[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-78h] BYREF
  void *v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  void *v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF

  v7[0] = a2;
  v6[0] = a4;
  v6[1] = a5;
  v7[1] = a3;
  sub_2246450(v10, v6);
  v5 = *(_DWORD *)sub_2129640(a1 + 864, v10[0], (size_t)v10[1]);
  sub_2246450(v8, v7);
  *(_DWORD *)sub_2129640(a1 + 864, v8[0], (size_t)v8[1]) = v5;
  if ( v8[0] != &v9 )
    operator delete(v8[0]);
  if ( v10[0] != &v11 )
    operator delete(v10[0]);
}
