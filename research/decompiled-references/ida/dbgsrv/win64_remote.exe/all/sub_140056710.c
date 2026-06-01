/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056710
// Address: 0x0000000140056710

//----- (0000000140056710) ----------------------------------------------------
__int64 __fastcall sub_140056710(__int64 *Block)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rbx
  const char *v5; // rbp
  const char *v6; // r14
  char *v7; // rax
  int v8; // ebp
  __int64 v9; // rbp
  char *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = Block[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v3 = *Block;
  v12 = *Block;
  v4 = (volatile signed __int32 *)Block[1];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  j_j_free(Block);
  v13 = 0;
  v5 = Str1;
  v6 = Str1;
  if ( *(_QWORD *)(v3 + 56) )
    v6 = *(const char **)(v3 + 48);
  if ( *(_QWORD *)(v3 + 32) )
    v5 = *(const char **)(v3 + 24);
  v7 = (char *)qword_1400CB5D8;
  if ( !qword_1400CB5D8 )
  {
    v7 = sub_1400571D0(0);
    qword_1400CB5D8 = (__int64)v7;
  }
  v8 = ((__int64 (__fastcall *)(const char *, const char *, __int64, __int64 *, __int64, volatile signed __int32 *))v7)(
         v5,
         v6,
         v3 + 72,
         &v13,
         v12,
         v4);
  WSASetLastError(v8);
  sub_14005D6B0(*(struct _RTL_CRITICAL_SECTION **)(v3 + 8));
  if ( *(_BYTE *)(v3 + 124) )
  {
    v9 = v13;
    if ( v13 )
    {
      v10 = (char *)qword_1400CB5E8;
      if ( !qword_1400CB5E8 )
      {
        v10 = sub_1400571D0(2u);
        qword_1400CB5E8 = (__int64)v10;
      }
      ((void (__fastcall *)(__int64))v10)(v9);
      v13 = 0;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 120) = v8;
    *(_QWORD *)v3 = v13;
  }
  sub_14005D6D0(*(struct _RTL_CRITICAL_SECTION **)(v3 + 8));
  sub_14005D730(*(void **)(v3 + 16));
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return 0;
}
// 1400CB5D8: using guessed type __int64 qword_1400CB5D8;
// 1400CB5E8: using guessed type __int64 qword_1400CB5E8;
