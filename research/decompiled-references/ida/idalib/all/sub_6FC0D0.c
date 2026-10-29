unsigned __int64 __fastcall sub_6FC0D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 plugin_options; // rsi
  char *v3; // rbx
  char *v4; // r12
  const char *v5; // rdi
  int v6; // eax
  char *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbp
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1896);
  sub_6F9720(v1 + 64);
  hook_event_listener(1, v1 + 40, 0, 0);
  hook_event_listener(0, v1 + 16, 0, 0);
  ptr = nullptr;
  v15 = 0;
  plugin_options = get_plugin_options("clang");
  if ( (unsigned __int8)parse_plugin_options(&ptr, plugin_options) )
  {
    v3 = (char *)ptr;
    v4 = (char *)ptr + 48 * v15;
    if ( v4 != ptr )
    {
      while ( 1 )
      {
        if ( !*((_QWORD *)v3 + 1) )
          goto LABEL_7;
        v5 = *(const char **)v3;
        if ( **(_BYTE **)v3 == 111 && v5[1] == 110 && !v5[2] )
        {
          *(_DWORD *)(v1 + 8) = 2;
LABEL_7:
          v3 += 48;
          if ( v4 == v3 )
            break;
        }
        else
        {
          if ( strcmp(v5, "off") )
            goto LABEL_7;
          v3 += 48;
          *(_DWORD *)(v1 + 8) = 1;
          if ( v4 == v3 )
            break;
        }
      }
    }
  }
  v6 = *(_DWORD *)(v1 + 8);
  if ( v6 )
  {
LABEL_13:
    if ( v6 != 2 )
      goto LABEL_14;
    goto LABEL_26;
  }
  if ( !(unsigned __int8)qgetenv("IDA_CLANG_PARSER") )
  {
    v6 = *(_DWORD *)(v1 + 8);
    goto LABEL_13;
  }
  *(_DWORD *)(v1 + 8) = 2;
LABEL_26:
  sub_729C30("clang");
LABEL_14:
  v7 = (char *)ptr;
  if ( ptr )
  {
    v8 = v15;
    if ( (_QWORD)v15 )
    {
      v9 = 0;
      do
      {
        v10 = &v7[48 * v9];
        v11 = *((void **)v10 + 3);
        if ( v11 )
        {
          *((_QWORD *)v10 + 4) = 0;
          qfree(v11);
        }
        v12 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v12);
        }
        ++v9;
        v7 = (char *)ptr;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v7);
  }
  return v16 - __readfsqword(0x28u);
}
