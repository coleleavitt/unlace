/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000666CC
// Address: 0x00000001000666CC

//----- (00000001000666CC) ----------------------------------------------------
__int64 __fastcall sub_1000666CC(_QWORD *a1, const char **a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x22
  __int64 (__fastcall *v6)(_QWORD); // x8
  __int64 v7; // x0
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  const char *v13; // x1
  const char *v14; // x8

  v4 = (pthread_mutex_t *)a1[2];
  qmutex_lock(v4);
  if ( (a1[7] & 1) == 0 )
  {
    if ( (sub_100065C9C((__int64)a1) & 1) != 0 )
    {
      v6 = (__int64 (__fastcall *)(_QWORD))dlsym((void *)a1[4], "OpenSSL_version");
      if ( !v6 )
      {
        v6 = (__int64 (__fastcall *)(_QWORD))dlsym((void *)a1[4], "SSLeay_version");
        if ( !v6 )
          goto LABEL_15;
      }
      v7 = v6(0);
      if ( v7 )
        v13 = (const char *)v7;
      else
        v13 = &byte_1000931E5;
      if ( (sub_100066034(a1, v13, 16777572, v8, v9, v10, v11, v12) & 1) == 0 )
      {
        v5 = 0;
        v14 = "unsupported_version";
        goto LABEL_17;
      }
      if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 16LL))(*a1, a1[4]) & 1) == 0 )
      {
LABEL_15:
        v5 = 0;
        v14 = "dlsym";
        goto LABEL_17;
      }
      (*(void (**)(void))(*(_QWORD *)*a1 + 24LL))();
      if ( sub_100066234(a1) )
      {
        v5 = 1;
        *((_BYTE *)a1 + 56) = 1;
        goto LABEL_18;
      }
      v5 = 0;
      v14 = "openssl";
    }
    else
    {
      v5 = 0;
      v14 = "dlopen";
    }
LABEL_17:
    *a2 = v14;
    goto LABEL_18;
  }
  v5 = 1;
LABEL_18:
  qmutex_unlock(v4);
  return v5;
}
// 100066764: variable 'v8' is possibly undefined
// 100066764: variable 'v9' is possibly undefined
// 100066764: variable 'v10' is possibly undefined
// 100066764: variable 'v11' is possibly undefined
// 100066764: variable 'v12' is possibly undefined
// 1000931E5: using guessed type char byte_1000931E5;
