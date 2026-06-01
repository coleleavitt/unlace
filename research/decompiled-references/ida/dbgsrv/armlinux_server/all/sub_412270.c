/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412270
// Address: 0x0000000000412270

//----- (0000000000412270) ----------------------------------------------------
__int64 __fastcall sub_412270(__int64 a1)
{
  int v2; // w2
  const char *v3; // x0
  DIR *v4; // x21
  void *v5; // x0
  int i; // w24
  int v8; // w25
  const char *d_name; // x19
  unsigned __int64 v10; // x20
  struct dirent *v11; // x0
  int v12; // w0
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v14; // [xsp+58h] [xbp-18h]
  __int64 v15; // [xsp+60h] [xbp-10h]
  __int64 v16; // [xsp+68h] [xbp-8h]

  v2 = *(_DWORD *)(a1 + 2044);
  ptr = nullptr;
  v14 = 0;
  v15 = 0;
  sub_40CD68((__int64)&ptr, "/proc/%d/task", v2);
  v3 = (const char *)&qword_4B2D48;
  if ( v14 )
    v3 = (const char *)ptr;
  v4 = opendir(v3);
  if ( v4 )
  {
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          v11 = readdir(v4);
          if ( !v11 )
            break;
          d_name = v11->d_name;
          v10 = strtoul(v11->d_name, nullptr, 10);
          if ( v10 )
          {
            sub_45CDF8(a1, (__int64)"DBG: %d found %s thread\n", i, d_name);
            v12 = (unsigned __int8)sub_4121B8(a1, v10);
            if ( v12 )
            {
              v8 = v12;
              sub_45CDF8(a1, (__int64)"DBG: %d collected %s thread\n", i, d_name);
            }
          }
        }
        if ( !v8 )
          break;
        i = 0;
        rewinddir(v4);
      }
      rewinddir(v4);
      if ( i )
        break;
    }
    closedir(v4);
    v5 = ptr;
    if ( ptr )
      goto LABEL_5;
  }
  else
  {
    sub_40A690((int)"Could not open /proc/%d/task", *(unsigned int *)(a1 + 2044));
    v5 = ptr;
    if ( ptr )
    {
LABEL_5:
      v14 = 0;
      j__free(v5);
    }
  }
  return v16 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
