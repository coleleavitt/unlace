/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17418
// Address: 0x00017418

//----- (00017418) --------------------------------------------------------
void sub_17418()
{
  void **v0; // r5
  int (*v1)(void); // r3
  int v2; // r0
  void *v3; // r7
  char **v4; // r4
  const char *v5; // r6
  char *v6; // r0
  char *v7; // r0

  if ( !byte_D3931 )
  {
    v0 = (void **)&off_D397C;
    v1 = (int (*)(void))off_D397C;
    if ( off_D397C )
    {
LABEL_3:
      v2 = v1();
      if ( v2 )
        sub_1700C((int)"DBG: td_init error code %d\n", v2);
      else
        byte_D3931 = 1;
      return;
    }
    v3 = dlopen("libthread_db.so", 2);
    if ( v3 )
    {
      v4 = &off_CF4A8;
      v5 = "td_init";
      while ( 1 )
      {
        *v0 = dlsym(v3, v5);
        v6 = dlerror();
        if ( v6 )
        {
          sub_1700C((int)"dlsym(%s.%s): %s\n", "libthread_db.so", v5, v6);
          dlclose(v3);
          goto LABEL_12;
        }
        if ( &off_CF500 == v4 )
          break;
        v0 = (void **)v4[3];
        v5 = v4[2];
        v4 += 2;
      }
      v1 = (int (*)(void))off_D397C;
      goto LABEL_3;
    }
    v7 = dlerror();
    sub_1700C((int)"dlopen(%s): %s\n", "libthread_db.so", v7);
LABEL_12:
    sub_1700C((int)"DBG: thread support is not available\n");
  }
}
// CF4A8: using guessed type char *off_CF4A8;
// CF500: using guessed type char *off_CF500;
// D3931: using guessed type char byte_D3931;
// D397C: using guessed type _UNKNOWN *off_D397C;
