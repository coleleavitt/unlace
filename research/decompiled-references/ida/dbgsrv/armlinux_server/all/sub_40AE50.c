/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AE50
// Address: 0x000000000040AE50

//----- (000000000040AE50) ----------------------------------------------------
__int64 sub_40AE50()
{
  __int64 result; // x0
  void **v1; // x21
  __int64 (*v2)(void); // x0
  unsigned int v3; // w0
  void *v4; // x25
  __int64 *v5; // x20
  const char *v6; // x23
  char *v7; // x0
  __int64 v8; // x1
  char *v9; // x0

  result = (unsigned __int8)byte_522031;
  if ( !byte_522031 )
  {
    v1 = (void **)&off_5220C8;
    v2 = (__int64 (*)(void))off_5220C8;
    if ( off_5220C8 )
    {
LABEL_3:
      v3 = v2();
      if ( v3 )
        return sub_40A690((int)"DBG: td_init error code %d\n", v3);
      byte_522031 = 1;
      return 1;
    }
    v4 = dlopen("libthread_db.so", 2);
    if ( v4 )
    {
      v5 = (__int64 *)&off_519998;
      v6 = "td_init";
      while ( 1 )
      {
        *v1 = dlsym(v4, v6);
        v7 = dlerror();
        if ( v7 )
        {
          sub_40A690((int)"dlsym(%s.%s): %s\n", "libthread_db.so", v6, v7);
          dlclose(v4);
          return sub_40A690((int)"DBG: thread support is not available\n", v8);
        }
        if ( qword_519A48 == v5 )
          break;
        v6 = (const char *)*v5;
        v1 = (void **)v5[1];
        v5 += 2;
      }
      v2 = (__int64 (*)(void))off_5220C8;
      goto LABEL_3;
    }
    v9 = dlerror();
    sub_40A690((int)"dlopen(%s): %s\n", "libthread_db.so", v9);
    return sub_40A690((int)"DBG: thread support is not available\n", v8);
  }
  return result;
}
// 40AEBC: variable 'v8' is possibly undefined
// 519998: using guessed type char *off_519998;
// 519A48: using guessed type __int64 qword_519A48[2];
// 522031: using guessed type char byte_522031;
// 5220C8: using guessed type _UNKNOWN *off_5220C8;
