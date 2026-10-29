unsigned __int64 __fastcall sub_4A3CC0(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // r8
  int v6; // r9d
  unsigned int v8; // [rsp+4h] [rbp-CCh] BYREF
  __int64 v9[3]; // [rsp+8h] [rbp-C8h] BYREF
  int v10; // [rsp+20h] [rbp-B0h]
  char v11; // [rsp+28h] [rbp-A8h]
  __int128 v12; // [rsp+38h] [rbp-98h] BYREF
  __int64 v13; // [rsp+48h] [rbp-88h]
  __int64 v14; // [rsp+50h] [rbp-80h]
  __int64 v15; // [rsp+58h] [rbp-78h]
  void *v16; // [rsp+60h] [rbp-70h]
  __int128 v17; // [rsp+68h] [rbp-68h] BYREF
  __int64 v18; // [rsp+78h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp-50h]
  __int64 v20; // [rsp+88h] [rbp-48h]
  void *v21; // [rsp+90h] [rbp-40h]
  unsigned __int64 v22; // [rsp+A0h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v16 = a2;
  v13 = 0;
  v14 = -1;
  v15 = 0;
  v12 = 0;
  if ( a2 )
    v16 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
  sub_4A2850(v9, a1, (__int64)&v12, a3, 0);
  v4 = 0;
  if ( (v11 & 1) != 0 )
  {
    while ( 1 )
    {
      LODWORD(v17) = v10;
      if ( v4 >= (unsigned int)sub_79B3A0(&v17, v9[0], 1, 65) )
        break;
      v18 = 0;
      v19 = -1;
      v20 = 0;
      v21 = a2;
      v17 = 0;
      if ( a2 )
        v21 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
      v8 = v4;
      if ( !(unsigned __int8)sub_4A3920((__int64)v9, (__int64)&v17, 0, &v8, v5, v6) )
        sub_365330();
      ++v4;
      if ( v21 )
        qfree(v21);
    }
  }
  qfree((void *)v9[1]);
  if ( v16 )
    qfree(v16);
  return v22 - __readfsqword(0x28u);
}

