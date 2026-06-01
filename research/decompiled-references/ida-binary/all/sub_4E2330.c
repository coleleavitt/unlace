double __fastcall sub_4E2330(__int64 *a1, const char *a2)
{
  volatile signed __int32 *v3; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rdi
  double result; // xmm0_8
  __int64 v8; // rdi
  _QWORD *v9; // rbp
  void *v10; // rdi
  __int64 *v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 i; // r12
  __int64 *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi

  v3 = (volatile signed __int32 *)a1[62];
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v33 = *(_QWORD *)v3;
      v34 = a1[62];
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(__int64, const char *, volatile signed __int32 *))(v33 + 16))(v34, a2, v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v3 + 2);
        *((_DWORD *)v3 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_28E9C0(v3);
    }
  }
  v6 = a1[58];
  if ( v6 )
  {
    a1[59] = 0;
    result = qfree(v6, a2);
  }
  v8 = a1[55];
  if ( v8 )
  {
    a1[56] = 0;
    result = qfree(v8, a2);
  }
  v9 = (_QWORD *)a1[50];
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    operator delete(v10, 0x18u);
  }
  memset((void *)a1[48], 0, 8 * a1[49]);
  v11 = (__int64 *)a1[48];
  a1[51] = 0;
  a1[50] = 0;
  v12 = a1[49];
  if ( v11 != a1 + 54 )
  {
    v12 *= 8LL;
    operator delete(v11, v12);
  }
  v13 = a1[43];
  if ( v13 )
  {
    a1[44] = 0;
    result = qfree(v13, (const char *)v12);
  }
  v14 = (void *)a1[39];
  if ( v14 )
  {
    v12 = a1[41] - (_QWORD)v14;
    operator delete(v14, v12);
  }
  v15 = (void *)a1[36];
  if ( v15 )
  {
    v12 = a1[38] - (_QWORD)v15;
    operator delete(v15, v12);
  }
  v16 = (void *)a1[32];
  if ( v16 )
  {
    v12 = a1[34] - (_QWORD)v16;
    operator delete(v16, v12);
  }
  v17 = (void *)a1[29];
  if ( v17 )
  {
    v12 = a1[31] - (_QWORD)v17;
    operator delete(v17, v12);
  }
  v18 = (void *)a1[26];
  if ( v18 )
  {
    v12 = a1[28] - (_QWORD)v18;
    operator delete(v18, v12);
  }
  v19 = a1[23];
  if ( v19 )
  {
    a1[24] = 0;
    result = qfree(v19, (const char *)v12);
  }
  v20 = (void *)a1[19];
  if ( v20 )
  {
    v12 = a1[21] - (_QWORD)v20;
    operator delete(v20, v12);
  }
  v21 = (void *)a1[16];
  if ( v21 )
  {
    v12 = a1[18] - (_QWORD)v21;
    operator delete(v21, v12);
  }
  v22 = (void *)a1[12];
  if ( v22 )
  {
    v12 = a1[14] - (_QWORD)v22;
    operator delete(v22, v12);
  }
  v23 = (void *)a1[9];
  if ( v23 )
  {
    v12 = a1[11] - (_QWORD)v23;
    operator delete(v23, v12);
  }
  v24 = (void *)a1[6];
  if ( v24 )
  {
    v12 = a1[8] - (_QWORD)v24;
    operator delete(v24, v12);
  }
  v25 = a1[3];
  if ( v25 )
  {
    v26 = a1[4];
    if ( v26 )
    {
      for ( i = 0; i != v26; ++i )
      {
        v28 = (__int64 *)(v25 + (i << 7));
        v29 = v28[6];
        if ( v29 )
        {
          v28[7] = 0;
          qfree(v29, (const char *)v12);
        }
        v30 = v28[3];
        if ( v30 )
        {
          v28[4] = 0;
          qfree(v30, (const char *)v12);
        }
        v31 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v31, (const char *)v12);
        }
        v25 = a1[3];
      }
    }
    a1[4] = 0;
    result = qfree(v25, (const char *)v12);
  }
  v32 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v32, (const char *)v12);
  }
  return result;
}
