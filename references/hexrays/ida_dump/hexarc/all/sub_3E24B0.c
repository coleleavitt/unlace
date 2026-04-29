char **__fastcall sub_3E24B0(__int64 a1, const char **a2)
{
  const char **v2; // rbx
  char **v3; // rbp
  const char *v5; // rbx
  __int64 v6; // rbx
  char v7; // [rsp+0h] [rbp-70h] BYREF
  char v8; // [rsp+4h] [rbp-6Ch] BYREF
  __int64 v9; // [rsp+8h] [rbp-68h] BYREF
  __int128 v10; // [rsp+10h] [rbp-60h]
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h]
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v2 = a2;
  v10 = 0;
  v9 = 0;
  if ( !a2 )
    v2 = (const char **)&v9;
  v3 = (char **)sub_3EB910(a1, v2);
  if ( !v3 )
  {
    v5 = *v2;
    if ( v5 )
    {
      while ( *v5 == 95 )
        ++v5;
      if ( !strcmp(v5, "ac_mc_va") )
      {
        v3 = &off_4B61C0;
      }
      else if ( !strcmp(v5, "stack_vargs") )
      {
        v3 = &off_4B61D8;
      }
      else if ( !strncmp(v5, "ac_p", 4u) )
      {
        v12 = 0;
        v11 = 0;
        if ( get_ea_name(&v11, a1, 512, 0) > 0 )
        {
          v6 = v11;
          if ( (unsigned int)qsscanf(v11, "__ac_push_%d_to_%d", &v7, &v8) == 2
            || (unsigned int)qsscanf(v6, "__ac_pop_%d_to_%dv", &v7, &v8) == 2
            || (unsigned int)qsscanf(v6, "__ac_pop_%d_to_%d", &v7, &v8) == 2 )
          {
            v3 = (char **)&off_4B6190;
          }
        }
        if ( v11 )
        {
          *(_QWORD *)&v12 = 0;
          qfree(v11);
        }
      }
    }
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v3;
}
