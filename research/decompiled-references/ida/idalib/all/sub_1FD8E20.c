__int64 __fastcall sub_1FD8E20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbp
  void *v9[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h] BYREF
  void **v11; // [rsp+20h] [rbp-98h] BYREF
  __int16 v12; // [rsp+40h] [rbp-78h]
  __int128 v13; // [rsp+50h] [rbp-68h] BYREF
  __int128 v14; // [rsp+60h] [rbp-58h]
  __int128 v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+80h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp-28h]

  LOWORD(v15) = 773;
  *(_QWORD *)&v13 = a2;
  *((_QWORD *)&v13 + 1) = a3;
  *(_QWORD *)&v14 = ".timestamp";
  sub_2253560(v9, &v13);
  v17 = 0;
  v15 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  HIDWORD(v15) = 0xFFFF;
  v3 = std::_V2::system_category((std::_V2 *)v9);
  v12 = 260;
  v4 = v3;
  v11 = v9;
  v5 = sub_228C3C0(&v11, &v13, 1);
  if ( v4 != v6 || v5 )
    v7 = 0;
  else
    v7 = sub_228BB60(&v13) / 1000000000;
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
  return v7;
}
