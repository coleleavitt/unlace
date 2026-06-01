/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000F5C0
// Address: 0x000000014000F5C0

//----- (000000014000F5C0) ----------------------------------------------------
char __fastcall sub_14000F5C0(__int64 a1, unsigned int a2)
{
  char *v4; // rsi
  void *v5; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  void *v10; // rbp
  DWORD v11; // edi
  __int64 **v12; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  char *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r15
  size_t v21; // rbx
  void *v22; // rax
  int *v23; // rbx
  void *v24; // rdi
  char *v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h]

  v4 = nullptr;
  if ( *(_QWORD *)(a1 + 352) )
  {
    sub_14001A500((__int64 *)(a1 + 352), 0);
    j_free(*(void **)(a1 + 352));
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  v5 = *(void **)(a1 + 1248);
  if ( !v5 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(676);
  }
  SetEvent(v5);
  if ( WaitForSingleObject(*(HANDLE *)(a1 + 1248), 0x3A98u) )
  {
    sub_140002CE0((struct __crt_locale_pointers *)"Error restoring broken connection");
    return 0;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 136LL))(
         a1,
         a2,
         0xFFFFFFFFLL,
         0,
         0) != 1
    || !qword_1400CAE70 )
  {
    return 0;
  }
  v7 = *(_QWORD **)(a1 + 1088);
  v8 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 != v7 )
  {
    do
    {
      v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_1400CAE70)(2032639, 1, *((unsigned int *)v8 + 18));
      v10 = (void *)v9;
      if ( v9 )
        v8[5] = v9;
      else
        sub_140043190(a1, (struct __crt_locale_pointers *)"OpenThread");
      v11 = SuspendThread(v10);
      ResumeThread(v10);
      *((_DWORD *)v8 + 19) = v11;
      v12 = (__int64 **)v8[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v8 != *(_QWORD **)(i + 16) )
            break;
          v8 = (_QWORD *)i;
        }
        v8 = (_QWORD *)i;
      }
      else
      {
        v8 = (_QWORD *)v8[2];
        for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v8 = j;
      }
    }
    while ( v8 != *(_QWORD **)(a1 + 1088) );
  }
  v25 = nullptr;
  v15 = 0;
  v26 = 0;
  v27 = 0;
  v16 = *(_QWORD *)(a1 + 1232);
  if ( v16 )
  {
    v17 = (char *)sub_14005AAA0(88 * v16);
    v25 = v17;
    v27 = v16;
    v18 = 0;
    v19 = v16;
    while ( 1 )
    {
      v20 = v18 + *(_QWORD *)(a1 + 1224);
      *(_OWORD *)&v17[v18] = *(_OWORD *)v20;
      *(_QWORD *)&v17[v18 + 16] = *(_QWORD *)(v20 + 16);
      *(_QWORD *)&v17[v18 + 24] = *(_QWORD *)(v20 + 24);
      *(_DWORD *)&v17[v18 + 32] = *(_DWORD *)(v20 + 32);
      *(_DWORD *)&v17[v18 + 36] = *(_DWORD *)(v20 + 36);
      *(_QWORD *)&v17[v18 + 40] = *(_QWORD *)(v20 + 40);
      *(_DWORD *)&v17[v18 + 48] = *(_DWORD *)(v20 + 48);
      *(_QWORD *)&v17[v18 + 56] = *(_QWORD *)(v20 + 56);
      *(_QWORD *)&v17[v18 + 64] = 0;
      *(_QWORD *)&v17[v18 + 72] = 0;
      *(_QWORD *)&v17[v18 + 80] = 0;
      v21 = *(_QWORD *)(v20 + 72);
      if ( v21 )
      {
        v22 = sub_14005AAA0(*(_QWORD *)(v20 + 72));
        *(_QWORD *)&v17[v18 + 64] = v22;
        *(_QWORD *)&v17[v18 + 80] = v21;
        memcpy(v22, *(const void **)(v20 + 64), v21);
        *(_QWORD *)&v17[v18 + 72] = v21;
      }
      v18 += 88;
      if ( !--v19 )
        break;
      v17 = v25;
    }
    v15 = v16;
    v26 = v16;
    v4 = v25;
  }
  if ( v4 != &v4[88 * v15] )
  {
    v23 = (int *)(v4 + 36);
    do
    {
      v24 = *(void **)(v23 - 9);
      if ( *v23 > 0 )
      {
        do
        {
          ResumeThread(v24);
          --*v23;
        }
        while ( *v23 > 0 );
        v15 = v26;
        v4 = v25;
      }
      v23 += 22;
    }
    while ( v23 - 9 != (int *)&v4[88 * v15] );
  }
  sub_14000AF00((__int64)&v25);
  return 1;
}
// 1400CAE70: using guessed type __int64 qword_1400CAE70;
// 1400CB61C: using guessed type char byte_1400CB61C;
