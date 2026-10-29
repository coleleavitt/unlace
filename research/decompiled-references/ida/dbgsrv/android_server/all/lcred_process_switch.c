/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lcred_process_switch
// Address: 0x00000000000A8664

//----- (00000000000A8664) ----------------------------------------------------
__int64 __fastcall lcred_process_switch(__int64 a1, _BYTE *a2)
{
  __int64 result; // x0
  const void *v4; // x20
  void *v5; // x0
  size_t v6; // x0
  unsigned __int64 v7; // x22
  size_t v8; // x21
  void **v9; // x23
  void *v10; // x0
  size_t v11; // x0
  unsigned __int64 v12; // x22
  void **v13; // x23
  void *v14; // x0
  __int64 v15; // x8
  void *ptr[4]; // [xsp+0h] [xbp-60h] BYREF

  ptr[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *a2 != 45 )
  {
    if ( !under_debugger )
      interr(2756);
    __break(1u);
    sub_39134((void *)a1);
  }
  result = 0;
  v4 = a2 + 2;
  switch ( a2[1] )
  {
    case 'P':
      *(_DWORD *)(a1 + 168) |= 0x402u;
      sub_39140(ptr, a2 + 2);
      sub_A88B4((__int128 *)(a1 + 88), (__int64)ptr, 1);
      v5 = ptr[0];
      if ( !ptr[0] )
        return 1;
      goto LABEL_10;
    case 'h':
      sub_39140(ptr, a2 + 2);
      sub_A88B4((__int128 *)(a1 + 8), (__int64)ptr, 1);
      v5 = ptr[0];
      if ( ptr[0] )
      {
LABEL_10:
        ptr[1] = nullptr;
        qfree(v5);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      return 1;
    case 'p':
      if ( a2 == (_BYTE *)-2LL || (v6 = strlen(a2 + 2)) == 0 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        return 1;
      }
      v7 = v6 + 1;
      v8 = v6;
      v9 = (void **)(a1 + 64);
      if ( *(_QWORD *)(a1 + 80) >= v6 + 1 )
      {
        v10 = *v9;
      }
      else
      {
        v10 = qvector_reserve((pthread_mutex_t *)(a1 + 64), *v9, v7, 1u);
        *v9 = v10;
      }
      *(_QWORD *)(a1 + 72) = v7;
      memmove(v10, v4, v8);
      v15 = *(_QWORD *)(a1 + 64);
      goto LABEL_21;
    case 'u':
      if ( a2 == (_BYTE *)-2LL || (v11 = strlen(a2 + 2)) == 0 )
      {
        *(_QWORD *)(a1 + 48) = 0;
      }
      else
      {
        v12 = v11 + 1;
        v8 = v11;
        v13 = (void **)(a1 + 40);
        if ( *(_QWORD *)(a1 + 56) >= v11 + 1 )
        {
          v14 = *v13;
        }
        else
        {
          v14 = qvector_reserve((pthread_mutex_t *)(a1 + 40), *v13, v12, 1u);
          *v13 = v14;
        }
        *(_QWORD *)(a1 + 48) = v12;
        memmove(v14, v4, v8);
        v15 = *(_QWORD *)(a1 + 40);
LABEL_21:
        *(_BYTE *)(v15 + v8) = 0;
      }
      return 1;
    default:
      return result;
  }
}
// 168DF0: using guessed type char under_debugger;
