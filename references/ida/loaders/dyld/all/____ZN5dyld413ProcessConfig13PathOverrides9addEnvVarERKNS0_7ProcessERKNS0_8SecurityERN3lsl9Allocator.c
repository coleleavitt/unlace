__int64 __fastcall ___ZN5dyld413ProcessConfig13PathOverrides9addEnvVarERKNS0_7ProcessERKNS0_8SecurityERN3lsl9AllocatorEPKcbPc_block_invoke(
        __int64 result,
        char *__s1)
{
  __int64 v3; // x19
  int v4; // w8
  char *v5; // x0
  const char *v6; // x1
  char *v7; // x0
  const char *v8; // x1

  v3 = result;
  if ( *(_BYTE *)(*(_QWORD *)(result + 40) + 1LL) || *__s1 != 64 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) )
      strlcat(*(char **)(result + 48), ":", 0x400u);
    if ( _platform_strncmp(__s1, "@executable_path/", 0x11u) )
    {
      v4 = _platform_strncmp(__s1, "@loader_path/", 0xDu);
      v5 = *(char **)(v3 + 48);
      v6 = *(const char **)(*(_QWORD *)(v3 + 56) + 8LL);
      if ( v4 )
      {
        result = strlcpy(v5, v6, 0x400u);
LABEL_13:
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) = 1;
        return result;
      }
      strlcat(v5, v6, 0x400u);
      result = (__int64)strrchr(*(char **)(v3 + 48), 47);
      if ( !result )
        return result;
      v7 = (char *)(result + 1);
      v8 = __s1 + 13;
    }
    else
    {
      strlcat(*(char **)(v3 + 48), *(const char **)(*(_QWORD *)(v3 + 56) + 8LL), 0x400u);
      result = (__int64)strrchr(*(char **)(v3 + 48), 47);
      if ( !result )
        return result;
      v7 = (char *)(result + 1);
      v8 = __s1 + 17;
    }
    result = (__int64)strcpy(v7, v8);
    goto LABEL_13;
  }
  return result;
}
