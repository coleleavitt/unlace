__int64 __fastcall sub_5E4040(__int64 a1, __int64 a2)
{
  __int64 current_config; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 file_ext; // rax
  int v7; // r13d
  const char *v8; // r15

  current_config = get_current_config();
  v3 = qfileexist(a1, a2);
  if ( !(_BYTE)v3 )
  {
    v4 = v3;
    file_ext = get_file_ext(a1);
    if ( !file_ext )
    {
      v7 = 0;
      if ( !*(_QWORD *)(current_config + 16) )
        return v4;
      while ( 1 )
      {
        v8 = (const char *)(*(_QWORD *)(current_config + 8) + 26 * file_ext);
        if ( !strchr(v8, 63) && !strchr(v8, 42) )
        {
          set_file_ext(a1, a2, a1, v8);
          if ( (unsigned __int8)qfileexist(a1, a2) )
            break;
        }
        file_ext = ++v7;
        if ( (unsigned __int64)v7 >= *(_QWORD *)(current_config + 16) )
          return v4;
      }
    }
  }
  return 1;
}

