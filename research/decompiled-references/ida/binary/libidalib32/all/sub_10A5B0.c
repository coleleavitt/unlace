__int64 sub_10A5B0()
{
  unsigned __int8 v0; // al
  __int64 v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-98h] BYREF
  __int128 v9; // [rsp+8h] [rbp-90h]
  __int64 v10; // [rsp+18h] [rbp-80h]
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+28h] [rbp-70h]
  __int64 v13; // [rsp+38h] [rbp-60h]
  __int128 v14; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-48h]
  __int128 v16; // [rsp+58h] [rbp-40h]
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v9 = 0;
  v12 = 0;
  v8 = 0;
  v10 = -1;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  v0 = sub_108810(3, &v11, (__int64)&v8);
  v1 = v15;
  v2 = v0;
  if ( v15 )
  {
    v3 = v16;
    if ( (_QWORD)v16 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v1 + v4);
        if ( *(_QWORD *)(v1 + v4 + 64) )
        {
          v6[9] = 0;
          qfree();
        }
        if ( v6[4] )
        {
          v6[5] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        ++v5;
        v1 = v15;
        v4 += 88;
      }
      while ( v3 != v5 );
    }
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v2;
}

