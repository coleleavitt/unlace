char __fastcall google_breakpad::LinuxDumper::GetMappingEffectiveNameAndPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        const void *a5,
        char *a6)
{
  __int64 v6; // rax
  char result; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]

  my_strlcpy(a3, a2 + 41, a4);
  if ( (unsigned __int8)sub_1ADAC8(a1, a2, a5, a6) != 1 )
  {
    v15 = my_strrchr(a3, 47);
    if ( v15 )
      v6 = v15 + 1;
    else
      v6 = a3;
    return my_strlcpy(a5, v6, a6);
  }
  else if ( *(_BYTE *)(a2 + 40) && *(_QWORD *)(a2 + 32) )
  {
    v8 = my_strlen(a3);
    result = a4 > v8 + my_strlen(a5) + 1;
    if ( result )
    {
      my_strlcat(a3, "/", a4);
      return my_strlcat(a3, a5, a4);
    }
  }
  else
  {
    v16 = my_strrchr(a3, 47);
    if ( v16 )
    {
      v9 = a4 - my_strlen(a3);
      v10 = my_strlen(v16 + 1);
      return my_strlcpy(v16 + 1, a5, v9 + v10);
    }
    else
    {
      return my_strlcpy(a3, a5, a4);
    }
  }
  return result;
}

