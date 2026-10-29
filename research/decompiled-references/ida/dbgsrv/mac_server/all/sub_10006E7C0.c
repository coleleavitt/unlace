/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E7C0
// Address: 0x000000010006E7C0

//----- (000000010006E7C0) ----------------------------------------------------
__int64 __fastcall sub_10006E7C0(_QWORD *a1, const char **a2)
{
  unsigned int v2; // r14d
  pthread_mutex_t *v4; // rbx
  __int64 (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rax
  char *v7; // rsi
  const char *v8; // rax

  v4 = (pthread_mutex_t *)a1[2];
  qmutex_lock(v4);
  LOBYTE(v2) = 1;
  if ( !*((_BYTE *)a1 + 56) )
  {
    if ( (unsigned __int8)sub_10006DF70((__int64)a1) )
    {
      v5 = (__int64 (__fastcall *)(_QWORD))dlsym((void *)a1[4], "OpenSSL_version");
      if ( !v5 )
      {
        v5 = (__int64 (__fastcall *)(_QWORD))dlsym((void *)a1[4], "SSLeay_version");
        if ( !v5 )
          goto LABEL_13;
      }
      v6 = v5(0);
      v7 = (char *)&_s;
      if ( v6 )
        v7 = (char *)v6;
      if ( !(unsigned __int8)sub_10006E3A0(a1, v7, 0x1000164u) )
      {
        v8 = "unsupported_version";
        goto LABEL_15;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 16LL))(*a1, a1[4]) )
      {
LABEL_13:
        v8 = "dlsym";
        goto LABEL_15;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
      if ( sub_10006E530(a1) )
      {
        *((_BYTE *)a1 + 56) = 1;
        goto LABEL_16;
      }
      v8 = "openssl";
    }
    else
    {
      v8 = "dlopen";
    }
LABEL_15:
    *a2 = v8;
    v2 = 0;
  }
LABEL_16:
  qmutex_unlock(v4);
  return v2;
}
// 10006E8AC: variable 'v2' is possibly undefined
