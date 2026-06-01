__int64 sub_11E840()
{
  __int64 path; // rsi
  __int64 v1; // rdx
  _QWORD **v2; // rdi
  _QWORD **v3; // rbx
  __int64 v4; // rbp
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-21B8h] BYREF
  char v9; // [rsp+50h] [rbp-2168h] BYREF
  char v10; // [rsp+B0h] [rbp-2108h] BYREF
  _QWORD **v11; // [rsp+2148h] [rbp-70h]
  __int64 v12; // [rsp+2150h] [rbp-68h]
  __int64 v13; // [rsp+2160h] [rbp-58h]
  __int64 v14; // [rsp+2168h] [rbp-50h]
  unsigned __int64 v15; // [rsp+2198h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  path = get_path();
  sub_11D4A0((__int64)&v8);
  sub_8F660((__int64)"Restore snapshot is not supported in this version of IDA\n", path);
  v8 = off_230F18;
  if ( v13 )
  {
    v14 = 0;
    qfree();
  }
  v1 = v12;
  v2 = v11;
  v3 = v11;
  if ( 8 * v12 )
  {
    do
    {
      v4 = (__int64)*v3;
      if ( *v3 )
      {
        sub_118C40(*v3);
        if ( *(_QWORD *)(v4 + 4240) )
        {
          *(_QWORD *)(v4 + 4248) = 0;
          qfree();
        }
        qfree();
        v2 = v11;
        v1 = v12;
      }
      ++v3;
    }
    while ( v3 != &v2[v1] );
  }
  if ( v2 )
  {
    v12 = 0;
    qfree();
  }
  v5 = &v10;
  v8 = (__int64 (__fastcall **)())&stru_235898;
  do
  {
    v6 = *((_QWORD *)v5 - 3);
    v5 -= 24;
    if ( v6 )
    {
      *((_QWORD *)v5 + 1) = 0;
      qfree();
    }
  }
  while ( v5 != &v9 );
  return 0;
}

