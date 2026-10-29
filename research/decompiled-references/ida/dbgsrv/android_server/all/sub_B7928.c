/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7928
// Address: 0x00000000000B7928

//----- (00000000000B7928) ----------------------------------------------------
__int64 __fastcall sub_B7928(pthread_mutex_t *a1)
{
  unsigned __int64 v2; // x20
  char *v3; // x0
  const char **v4; // x20
  const char *v5; // x3
  const char *v6; // t1
  __int64 v7; // x0
  size_t v8; // x20
  void *v9; // x8
  __int64 v10; // x21
  unsigned int v11; // w19
  const void *v12; // x21
  void *align; // x0
  __int64 v14; // x8
  pthread_mutex_t *v16; // [xsp+8h] [xbp-1068h] BYREF
  __int128 v17; // [xsp+10h] [xbp-1060h] BYREF
  pthread_mutex_t src[102]; // [xsp+28h] [xbp-1048h] BYREF
  __int64 v19; // [xsp+1028h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_C0EAC(&v16);
  v2 = qword_167DA0;
  if ( (unsigned __int64)qword_167DA0 > 1 )
    goto LABEL_13;
  v17 = *(_OWORD *)&off_160190;
  v3 = sub_B77D4();
  qstrncpy(src, v3, 4096);
  if ( src[0].__size[0] )
  {
    v4 = (const char **)&v17 + 1;
    v5 = ".idapro";
    do
    {
      qmakepath((size_t)src, 0x1000u, (char *)src, v5, 0);
      if ( !qfileexist((const char *)src) )
        qmkdir((const char *)src, 0x1FFu);
      v6 = *v4++;
      v5 = v6;
    }
    while ( v6 );
    v7 = __strlen_chk(src, 4096);
    v8 = v7;
    if ( !v7 )
    {
      v11 = 0;
      qword_167DA0 = 0;
      goto LABEL_20;
    }
    v9 = (void *)qword_167D98;
    v10 = v7 + 1;
    if ( qword_167DA8 < (unsigned __int64)(v7 + 1) )
    {
      v9 = qvector_reserve((pthread_mutex_t *)&qword_167D98, (void *)qword_167D98, v7 + 1, 1u);
      qword_167D98 = (__int64)v9;
    }
    qword_167DA0 = v10;
    memmove(v9, src, v8);
    *(_BYTE *)(qword_167D98 + v8) = 0;
  }
  v2 = qword_167DA0;
  if ( (unsigned __int64)qword_167DA0 >= 2 )
  {
LABEL_13:
    if ( a1 == (pthread_mutex_t *)&qword_167D98 )
    {
      v11 = 1;
    }
    else
    {
      v12 = (const void *)qword_167D98;
      if ( *(&a1->__align + 2) >= v2 )
      {
        align = (void *)a1->__align;
      }
      else
      {
        align = qvector_reserve(a1, (void *)a1->__align, v2, 1u);
        a1->__align = (__int64)align;
      }
      *(&a1->__align + 1) = v2;
      memmove(align, v12, v2 - 1);
      v14 = a1->__align;
      v11 = 1;
      *(_BYTE *)(v14 + v2 - 1) = 0;
    }
  }
  else
  {
    v11 = 0;
  }
LABEL_20:
  qmutex_unlock(v16);
  return v11;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 160190: using guessed type char *off_160190;
// 166D80: using guessed type __int64[512];
// 167D98: using guessed type __int64 qword_167D98;
// 167DA0: using guessed type __int64 qword_167DA0;
// 167DA8: using guessed type __int64 qword_167DA8;
