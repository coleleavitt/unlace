/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42028
// Address: 0x0000000000042028

//----- (0000000000042028) ----------------------------------------------------
const char *__fastcall sub_42028(__int64 a1, char *a2, char a3, char *s, char *a5, int a6, char *a7)
{
  char *v13; // x19
  char *v14; // x24
  const char *result; // x0
  char *i; // x1
  void *ptr[3]; // [xsp+8h] [xbp-1088h] BYREF
  const char *v18; // [xsp+20h] [xbp-1070h] BYREF
  pthread_mutex_t sa[102]; // [xsp+28h] [xbp-1068h] BYREF
  __int64 v20; // [xsp+1028h] [xbp-68h]

  v13 = (char *)(a1 + 1032);
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)a1 = off_156660;
  *(_QWORD *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_QWORD *)(a1 + 1032) = 0;
  sub_39140((_QWORD *)(a1 + 1056), s);
  sub_39140((_QWORD *)(a1 + 1080), a5);
  sub_39140((_QWORD *)(a1 + 1104), a7);
  if ( (a3 & 1) != 0 )
    v14 = ":";
  else
    v14 = ";";
  *(_DWORD *)(a1 + 1128) = a6;
  *(_BYTE *)(a1 + 8) = 0;
  qstrncpy(sa, a2, 4096);
  result = qstrtok((char *)sa, v14, &v18);
  for ( i = (char *)result; i; i = (char *)result )
  {
    sub_39140(ptr, i);
    sub_494CC(v13, (char *)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    result = qstrtok(nullptr, v14, &v18);
  }
  return result;
}
// 156660: using guessed type __int64 (__fastcall *off_156660[3])();
