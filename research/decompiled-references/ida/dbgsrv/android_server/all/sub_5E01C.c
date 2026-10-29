/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E01C
// Address: 0x000000000005E01C

//----- (000000000005E01C) ----------------------------------------------------
__int64 __fastcall sub_5E01C(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x8
  FILE *v4; // x1
  __int64 v5; // x0
  __int64 align; // x1
  size_t v7; // x20
  __int64 v8; // x23
  __int64 v9; // x24
  unsigned __int64 v10; // x21
  pthread_mutex_t ptr; // [xsp+0h] [xbp-60h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 8);
  if ( qword_166A50 > v3 && (v4 = *(FILE **)(qword_166A48 + 8 * v3)) != nullptr )
  {
    memset(&ptr, 0, 24);
    if ( qgetline((__int64)&ptr, v4) < 0 )
    {
      *(_QWORD *)(a2 + 8) = -1;
      if ( ptr.__align )
      {
        *(&ptr.__align + 1) = 0;
        qfree((void *)ptr.__align);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
    }
    else
    {
      v5 = __strlen_chk("\n", 2);
      align = ptr.__align;
      v7 = v5;
      if ( *(&ptr.__align + 1) )
        v8 = *(&ptr.__align + 1) - 1;
      else
        v8 = 0;
      v9 = v8 + v5;
      v10 = v8 + v5 + 1;
      if ( *(&ptr.__align + 2) < v10 )
      {
        align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v10, 1u);
        ptr.__align = align;
      }
      *(&ptr.__align + 1) = v10;
      *(_BYTE *)(align + v9) = 0;
      memmove((void *)(ptr.__align + v8), "\n", v7);
      *(_BYTE *)a2 = 7;
      *(_OWORD *)(a2 + 8) = *(_OWORD *)&ptr.__lock;
      *(_QWORD *)(a2 + 24) = *(&ptr.__align + 2);
      memset(&ptr, 0, 24);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
