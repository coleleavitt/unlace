__int64 __fastcall sub_11386F0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD v5[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-88h] BYREF
  void *v7[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+40h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-48h]
  __int128 v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]

  v5[0] = a2;
  v5[1] = a3;
  sub_2246450(v7, v5);
  v10 = 0;
  v9 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v6[0] = 0;
  v6[1] = 0;
  v3 = sub_11385B0(a1, (__int64)v7[0], (unsigned __int64)v7[1], v6, (__int64)&v9);
  if ( v7[0] != &v8 )
    operator delete(v7[0]);
  return v3;
}
