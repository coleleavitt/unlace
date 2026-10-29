/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_175BC
// Address: 0x000175BC

//----- (000175BC) --------------------------------------------------------
void sub_175BC()
{
  void **v0; // r5
  int (*v1)(void); // r3
  int v2; // r0
  void *v3; // r7
  char **v4; // r4
  const char *v5; // r6
  char *v6; // r0
  char *v7; // r0

  if ( !byte_D4951 )
  {
    v0 = (void **)&off_D499C;
    v1 = (int (*)(void))off_D499C;
    if ( off_D499C )
    {
LABEL_3:
      v2 = v1();
      if ( v2 )
        sub_171B0((int)"DBG: td_init error code %d\n", v2);
      else
        byte_D4951 = 1;
      return;
    }
    v3 = dlopen("libthread_db.so", 2);
    if ( v3 )
    {
      v4 = &off_D04A8;
      v5 = "td_init";
      while ( 1 )
      {
        *v0 = dlsym(v3, v5);
        v6 = dlerror();
        if ( v6 )
        {
          sub_171B0((int)"dlsym(%s.%s): %s\n", "libthread_db.so", v5, v6);
          dlclose(v3);
          goto LABEL_12;
        }
        if ( &off_D0500 == v4 )
          break;
        v0 = (void **)v4[3];
        v5 = v4[2];
        v4 += 2;
      }
      v1 = (int (*)(void))off_D499C;
      goto LABEL_3;
    }
    v7 = dlerror();
    sub_171B0((int)"dlopen(%s): %s\n", "libthread_db.so", v7);
LABEL_12:
    sub_171B0((int)"DBG: thread support is not available\n");
  }
}
// D04A8: using guessed type char *off_D04A8;
// D0500: using guessed type char *off_D0500;
// D4951: using guessed type char byte_D4951;
// D499C: using guessed type _UNKNOWN *off_D499C;
