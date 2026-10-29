__int64 __fastcall sub_A6140(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v3; // rsi
  const char *v5; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v6; // [rsp+8h] [rbp-C0h]
  _QWORD v7[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-90h]
  __int128 v9; // [rsp+40h] [rbp-88h]
  __int64 v10; // [rsp+50h] [rbp-78h]
  __int128 v11; // [rsp+58h] [rbp-70h]
  __int64 v12; // [rsp+68h] [rbp-60h]
  __int128 v13; // [rsp+70h] [rbp-58h]
  __int64 v14; // [rsp+80h] [rbp-48h]
  __int128 v15; // [rsp+88h] [rbp-40h]
  __int64 eah; // [rsp+98h] [rbp-30h]
  int v17; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v18; // [rsp+A8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v5 = nullptr;
  LOBYTE(v7[0]) = 11;
  v7[1] = xmmword_251F20;
  v7[2] = -1;
  v8 = 0;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  v6 = 0;
  v9 = 0;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  eah = get_eah();
  v17 = 0;
  v2 = sub_A5A20(v7, a1, a2, 0, (__int64)&v5);
  if ( !(_BYTE)v2 )
  {
    v3 = s1;
    if ( (_QWORD)v6 )
      v3 = v5;
    sub_8F740((__int64)"%s\n", v3);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v2;
}

