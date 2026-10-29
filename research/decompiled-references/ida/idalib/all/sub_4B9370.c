unsigned __int64 __fastcall sub_4B9370(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5; // r8
  int v6; // r9d
  unsigned int v8; // [rsp+4h] [rbp-CCh] BYREF
  __int64 v9[4]; // [rsp+8h] [rbp-C8h] BYREF
  char v10; // [rsp+2Ch] [rbp-A4h]
  __int128 v11; // [rsp+38h] [rbp-98h] BYREF
  __int64 v12; // [rsp+48h] [rbp-88h]
  __int64 v13; // [rsp+50h] [rbp-80h]
  __int64 v14; // [rsp+58h] [rbp-78h]
  void *v15; // [rsp+60h] [rbp-70h]
  __int128 v16; // [rsp+68h] [rbp-68h] BYREF
  __int64 v17; // [rsp+78h] [rbp-58h]
  __int64 v18; // [rsp+80h] [rbp-50h]
  __int64 v19; // [rsp+88h] [rbp-48h]
  void *v20; // [rsp+90h] [rbp-40h]
  unsigned __int64 v21; // [rsp+A0h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v15 = a2;
  v12 = 0;
  v13 = -1;
  v14 = 0;
  v11 = 0;
  if ( a2 )
    v15 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
  sub_4B7DA0(v9, a1, (__int64)&v11, a3, 0, 0.0);
  v4 = 0;
  if ( (v10 & 1) != 0 )
  {
    while ( 1 )
    {
      *(_QWORD *)&v16 = v9[3];
      if ( v4 >= (unsigned int)sub_7BE710(&v16, v9[0], 1, 65) )
        break;
      v17 = 0;
      v18 = -1;
      v19 = 0;
      v20 = a2;
      v16 = 0;
      if ( a2 )
        v20 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
      v8 = v4;
      if ( !(unsigned __int8)sub_4B8F10(v9, (__int64)&v16, 0, &v8, v5, v6) )
        sub_368890();
      ++v4;
      if ( v20 )
        qfree(v20);
    }
  }
  qfree((void *)v9[1]);
  if ( v15 )
    qfree(v15);
  return v21 - __readfsqword(0x28u);
}
