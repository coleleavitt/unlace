__int64 sub_5CA0()
{
  char *v0; // rax
  __int64 *first_seg; // rbx
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rax
  const char *v5; // rbx
  char v6[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v7; // [rsp+408h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( getinf_buf(97, v6, 1024) > 0 )
  {
    v0 = strrchr(v6, 46);
    if ( v0 )
    {
      if ( !strcasecmp(v0 + 1, "exe") )
      {
        first_seg = (__int64 *)get_first_seg();
        if ( first_seg )
        {
          while ( !(unsigned __int8)sub_4F10(*first_seg, (__int64)"exe") )
          {
            first_seg = (__int64 *)get_next_seg(*first_seg);
            if ( !first_seg )
              return 0;
          }
          v2 = sub_32C0(0, (__int64)"This file contains reference to Pascal-stype overlays\nDo you want to load it?");
          if ( v2 == -1 )
            sub_33A0(0);
          if ( v2 )
          {
            while ( 1 )
            {
              v4 = set_file_ext(v6, 1024, v6, "ovr");
              v5 = (const char *)sub_52D0(0, v4, (__int64)"Please enter pascal overlays file");
              sub_3490();
              if ( !v5 )
                break;
              result = open_linput(v5, 0);
              if ( result )
                return result;
              sub_3120((__int64)"Pascal style overlays file '%s' is not found", v5);
            }
          }
        }
      }
    }
  }
  return 0;
}

