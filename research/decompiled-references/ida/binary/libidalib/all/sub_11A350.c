__int64 __fastcall sub_11A350(__int64 a1, int a2)
{
  size_t v3; // r13
  const char *v4; // rax
  int v5; // esi
  void *v6; // [rsp+20h] [rbp-488h] BYREF
  __int128 v7; // [rsp+28h] [rbp-480h]
  char s[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v9; // [rsp+468h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  s[0] = 0;
  if ( (unsigned __int64)a2 > 0x10 || a2 != get_bytes() )
    return 0;
  print_fpval();
  v6 = nullptr;
  v7 = 0;
  v3 = strlen(s);
  v6 = (void *)qvector_reserve();
  *(_QWORD *)&v7 = v3 + 1;
  memmove(v6, s, v3);
  *((_BYTE *)v6 + v3) = 0;
  v4 = (const char *)itext();
  if ( (unsigned __int8)sub_9DB70((__int64)&v6, 0, (__int64)"%s", v4) && (unsigned __int64)v7 > 1 )
  {
    v5 = asctoreal();
    if ( v5 == 1 )
    {
      if ( (unsigned int)ieee2cpu() == 1 )
        patch_bytes();
    }
    else
    {
      sub_92200((__int64)"Could not convert the input string to floating point, error %d", v5);
    }
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return 1;
}

