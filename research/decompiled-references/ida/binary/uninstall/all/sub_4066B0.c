__int64 __fastcall sub_4066B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r12d
  void *v6; // rax
  void *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int *v12; // [rsp+0h] [rbp-28h] BYREF
  int *v13; // [rsp+8h] [rbp-20h]

  v4 = 1;
  if ( a3 == 1 )
  {
    v6 = dlopen(nullptr, 261);
    v7 = v6;
    if ( v6 )
    {
      v12 = (int *)sub_406680(v6, "gnu_get_libc_version");
      v8 = sub_406680(v7, "gnu_get_libc_release");
      v13 = (int *)v8;
      if ( v12 && v8 )
      {
        v4 = 0;
        v11 = sub_46EEB0(2, &v12);
        sub_48AFD0(a2, v11);
      }
      else
      {
        v9 = sub_48DF10("Unable to call gnu_get_libc functions", 0xFFFFFFFF);
        sub_48AFD0(a2, v9);
        if ( v12 && *v12 <= 0 )
          sub_47B120(v12);
        if ( v13 )
        {
          if ( *v13 <= 0 )
            sub_47B120(v13);
        }
      }
      dlclose(v7);
      return v4;
    }
    else
    {
      v10 = sub_48DF10("Unable to initialize glibc version check", 0xFFFFFFFF);
      sub_48AFD0(a2, v10);
      return 1;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, 5275687);
    return 1;
  }
}

