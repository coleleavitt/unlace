/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x00000000000B7080

//----- (00000000000B7080) ----------------------------------------------------
char *__fastcall idadir(_BYTE *a1)
{
  __int64 v2; // x0
  pthread_mutex_t *v3; // x19
  __int64 v4; // x0
  size_t v5; // x20
  __int64 v6; // x21
  void *align; // x0
  char *v8; // x19
  void *ptr; // [xsp+8h] [xbp-1058h] BYREF
  __int64 v11; // [xsp+10h] [xbp-1050h]
  __int64 v12; // [xsp+18h] [xbp-1048h]
  pthread_mutex_t *v13; // [xsp+20h] [xbp-1040h] BYREF
  Dl_info info; // [xsp+28h] [xbp-1038h] BYREF
  __int64 v15; // [xsp+1028h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_C0EAC(&v13);
  if ( byte_166D7C[0] )
    goto LABEL_15;
  ptr = nullptr;
  v11 = 0;
  v12 = 0;
  if ( !byte_166D60 )
    goto LABEL_8;
  if ( (qgetenv("IDADIR", (__int64)&ptr) & 1) == 0 )
  {
    if ( byte_166D60 )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(idadir, &info) )
      {
        qstrncpy((pthread_mutex_t *)byte_166D7C, (char *)info.dli_fname, 4096);
LABEL_11:
        if ( !qisdir(byte_166D7C) )
          qdirname(byte_166D7C, 0x1000u, byte_166D7C);
        goto LABEL_13;
      }
    }
LABEL_8:
    v2 = readlink("/proc/self/exe", byte_166D7C, 0x1000u);
    if ( v2 < 1 || (unsigned __int64)v2 >= 0x1000 )
    {
      if ( !under_debugger )
        v2 = (__int64)interr(1208);
      __break(1u);
      sub_39134((void *)v2);
    }
    byte_166D7C[v2] = 0;
    goto LABEL_11;
  }
  qstrncpy((pthread_mutex_t *)byte_166D7C, (char *)ptr, 4096);
LABEL_13:
  if ( ptr )
  {
    v11 = 0;
    qfree(ptr);
    ptr = nullptr;
    v12 = 0;
  }
LABEL_15:
  if ( a1 && *a1 )
  {
    qmakepath((size_t)&info, 0x1000u, byte_166D7C, a1, 0);
    v3 = (pthread_mutex_t *)sub_B25D4();
    v4 = __strlen_chk(&info, 4096);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 1;
      if ( *(&v3->__align + 2) >= (unsigned __int64)(v4 + 1) )
      {
        align = (void *)v3->__align;
      }
      else
      {
        align = qvector_reserve(v3, (void *)v3->__align, v4 + 1, 1u);
        v3->__align = (__int64)align;
      }
      *(&v3->__align + 1) = v6;
      memmove(align, &info, v5);
      *(_BYTE *)(v3->__align + v5) = 0;
    }
    else
    {
      *(&v3->__align + 1) = 0;
    }
    v8 = (char *)v3->__align;
  }
  else
  {
    v8 = byte_166D7C;
  }
  qmutex_unlock(v13);
  return v8;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 166D60: using guessed type char byte_166D60;
// 168DF0: using guessed type char under_debugger;
