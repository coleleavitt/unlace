__int64 sub_1201F0()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v6; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-A0h]
  __int64 v8; // [rsp+10h] [rbp-98h]
  __int64 v9; // [rsp+18h] [rbp-90h]
  __int128 v10; // [rsp+20h] [rbp-88h]
  int v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  int v13; // [rsp+40h] [rbp-68h]
  char v14; // [rsp+48h] [rbp-60h]
  unsigned __int64 v15; // [rsp+4Ch] [rbp-5Ch]
  __int64 v16; // [rsp+58h] [rbp-50h]
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+70h] [rbp-38h]
  char v19; // [rsp+78h] [rbp-30h]
  unsigned __int64 v20; // [rsp+88h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v0 = sub_163B20();
  if ( v0 )
  {
    v10 = 0;
    v15 = 0xFFFFFFFEFFFFFFFFLL;
    v6 = 0;
    v7 = 0;
    v8 = -1;
    v9 = 0;
    v11 = -1;
    v12 = 0;
    v13 = -1;
    v14 = 0;
    v16 = -1;
    v18 = 0xFFFFFFFFLL;
    v19 = 0;
    v17 = 0;
    v4 = -1;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15EC40)(
                         v0,
                         &v6,
                         2,
                         v1,
                         v2,
                         v3) == 5 )
    {
      v4 = v11;
      if ( v11 == -1 )
        v4 = v15;
    }
    if ( SHIDWORD(v15) >= -1 && v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v4;
}

