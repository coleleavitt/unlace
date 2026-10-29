__int64 sub_11BE20()
{
  unsigned int v0; // ebp
  __int64 v1; // rax
  const char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi

  v0 = 1;
  v1 = sub_117410(1u, (__int64)"dif", 970);
  if ( v1 )
  {
    v2 = (const char *)v1;
    v0 = 0;
    v3 = sub_11B710(v1);
    if ( v3 )
    {
      v4 = v3;
      v0 = gen_file();
      if ( !v0 )
        sub_F9540(1013, v4);
      qfclose();
      sub_8F740((__int64)"The difference file %s is created\n", v2);
    }
  }
  return v0;
}

