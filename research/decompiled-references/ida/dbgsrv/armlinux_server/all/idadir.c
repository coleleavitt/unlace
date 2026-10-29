/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x000000000048A5D0

//----- (000000000048A5D0) ----------------------------------------------------
char *__fastcall idadir(_BYTE *a1)
{
  char *v2; // x19
  unsigned __int64 v4; // x21
  size_t v5; // x0
  size_t v6; // x23
  unsigned __int64 v7; // x24
  pthread_mutex_t *v8; // [xsp+48h] [xbp-1048h] BYREF
  void *ptr; // [xsp+50h] [xbp-1040h] BYREF
  __int64 v10; // [xsp+58h] [xbp-1038h]
  __int64 v11; // [xsp+60h] [xbp-1030h]
  Dl_info info; // [xsp+68h] [xbp-1028h] BYREF
  char v13[4096]; // [xsp+88h] [xbp-1008h] BYREF

  sub_494748(&v8);
  if ( byte_5224F8 )
    goto LABEL_8;
  ptr = nullptr;
  v10 = 0;
  v11 = 0;
  if ( !byte_522469 )
    goto LABEL_3;
  if ( !(unsigned __int8)sub_4950A8("IDADIR", (__int64)&ptr) )
  {
    if ( byte_522469 )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(idadir, &info) )
      {
        sub_493350((unsigned __int64)&byte_5224F8, (unsigned __int8 *)info.dli_fname, 4096);
LABEL_4:
        if ( !(unsigned __int8)sub_4902C8(&byte_5224F8) )
          sub_48F310(&byte_5224F8, 0x1000u, &byte_5224F8);
        goto LABEL_6;
      }
    }
LABEL_3:
    sub_48A570(&byte_5224F8, 0x1000u);
    goto LABEL_4;
  }
  sub_493350((unsigned __int64)&byte_5224F8, (unsigned __int8 *)ptr, 4096);
LABEL_6:
  if ( ptr )
  {
    v10 = 0;
    j__free(ptr);
  }
LABEL_8:
  if ( a1 )
  {
    v2 = &byte_5224F8;
    if ( *a1 )
    {
      sub_48F278(v13, 4096, (unsigned __int8 *)&byte_5224F8, a1, 0);
      v4 = sub_486CC0();
      v5 = strlen(v13);
      v6 = v5;
      v2 = *(char **)v4;
      if ( v5 )
      {
        v7 = v5 + 1;
        if ( v5 + 1 > *(_QWORD *)(v4 + 16) )
        {
          v2 = (char *)sub_491288(v4, *(void **)v4, v7, 1u);
          *(_QWORD *)v4 = v2;
        }
        *(_QWORD *)(v4 + 8) = v7;
        memmove(v2, v13, v6);
        *(_BYTE *)(*(_QWORD *)v4 + v6) = 0;
        v2 = *(char **)v4;
      }
      else
      {
        *(_QWORD *)(v4 + 8) = 0;
      }
    }
  }
  else
  {
    v2 = &byte_5224F8;
  }
  sub_494760(v8);
  return v2;
}
// 48A5D0: could not find valid save-restore pair for x22
// 522469: using guessed type char byte_522469;
// 5224F8: using guessed type char byte_5224F8;
