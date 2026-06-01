unsigned __int64 __fastcall sub_3D0360(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v8; // [rsp+10h] [rbp-78h] BYREF
  __int128 v9; // [rsp+18h] [rbp-70h]
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a2[1] > 1u )
  {
    get_ash();
    v8 = 0;
    v9 = 0;
    sub_3C6F60(a2, &v8, "\n", 0);
    v2 = v8;
    v3 = v8 + 24 * v9;
    if ( v8 != v3 )
    {
      do
      {
        v10 = 0;
        v11 = 0;
        sub_F3E30(&v10);
        sub_3CCF90(a1, (__int64)&v10);
        if ( v10 )
        {
          *(_QWORD *)&v11 = 0;
          qfree();
        }
        v2 += 24;
      }
      while ( v3 != v2 );
      v3 = v8;
      v2 = v8;
    }
    if ( v3 )
    {
      v4 = v9;
      if ( (_QWORD)v9 )
      {
        v5 = 0;
        do
        {
          v6 = (_QWORD *)(v3 + 24 * v5);
          if ( *v6 )
          {
            v6[1] = 0;
            qfree();
            v2 = v8;
          }
          ++v5;
          v3 = v2;
        }
        while ( v4 != v5 );
      }
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return v12 - __readfsqword(0x28u);
}
