unsigned __int64 __fastcall sub_2D4060(__int64 a1, char **a2)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  const char **v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  const char **v11; // rax
  const char *v12; // rdi
  const char **v14; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+8h] [rbp-70h]
  const void *v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int128 v19; // [rsp+48h] [rbp-30h]
  unsigned __int64 v20; // [rsp+58h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v15 = 0;
  v14 = nullptr;
  v16 = nullptr;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  sub_2D0940(&v14, &v18, (__int64 *)&v16, a2);
  sub_2D1580(a1, (__int64)&v14, &v18, v16);
  v2 = v18;
  if ( v18 )
  {
    v3 = v19;
    if ( (_QWORD)v19 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 80 * v4);
        v6 = v5[4];
        if ( v6 )
        {
          v5[5] = 0;
          qfree(v6, (const char *)&v14);
        }
        v7 = v5[1];
        if ( v7 )
        {
          v5[2] = 0;
          qfree(v7, (const char *)&v14);
        }
        ++v4;
        v2 = v18;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v2, (const char *)&v14);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, (const char *)&v14);
  }
  v8 = v14;
  if ( v14 )
  {
    v9 = v15;
    if ( (_QWORD)v15 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[3 * v10];
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = nullptr;
          qfree(v12, (const char *)&v14);
          v8 = v14;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v8, (const char *)&v14);
  }
  return v20 - __readfsqword(0x28u);
}
