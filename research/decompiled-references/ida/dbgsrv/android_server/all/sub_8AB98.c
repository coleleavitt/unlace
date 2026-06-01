/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AB98
// Address: 0x000000000008AB98

//----- (000000000008AB98) ----------------------------------------------------
__int64 __fastcall sub_8AB98(__int64 a1, __int64 a2, char **a3)
{
  char *v5; // x21
  unsigned __int64 v6; // x8
  __int64 v8; // x9
  unsigned int v9; // w10
  unsigned int v10; // w12
  unsigned int v11; // w13
  __int64 v12; // x27
  unsigned int v13; // w20
  char *align; // x23
  __int64 v15; // x28
  __int64 v16; // x29
  char *v17; // x8
  char *v18; // x9
  int v19; // w22
  char *v20; // x1
  __int64 v21; // x0
  size_t v22; // x21
  __int64 v23; // x22
  void *v24; // x0
  pthread_mutex_t ptr[29]; // [xsp+10h] [xbp-500h] BYREF
  __int64 v27; // [xsp+498h] [xbp-78h]
  int v28; // [xsp+4A0h] [xbp-70h]
  __int64 v29; // [xsp+4A8h] [xbp-68h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(char **)a2;
  v6 = *(unsigned __int16 *)(a2 + 36);
  memset(ptr, 0, 24);
  if ( v6 )
  {
    if ( (unsigned int)v6 < 0xC )
      return (unsigned int)-1;
    LODWORD(v8) = *(_DWORD *)(a2 + 38);
    v9 = *(_DWORD *)(a2 + 42);
    v10 = bswap32(v8);
    v11 = bswap32(v9);
    v8 = *(_BYTE *)(a2 + 28) ? v10 : (unsigned int)v8;
    v12 = *(_BYTE *)(a2 + 28) ? v11 : v9;
    if ( v8 + v12 + 12 > v6 )
      return (unsigned int)-1;
    align = &byte_F154B;
    if ( (_DWORD)v12 )
    {
      v15 = 0;
      v16 = a2 + v8 + 50;
      do
        sub_4C730(ptr, "%02x", *(unsigned __int8 *)(v16 + v15++));
      while ( (unsigned int)v15 < (unsigned int)v12 );
      if ( *(&ptr[0].__align + 1) )
        align = (char *)ptr[0].__align;
    }
  }
  else
  {
    align = &byte_F154B;
  }
  v18 = *a3;
  v17 = a3[1];
  v19 = *(_DWORD *)(a2 + 24);
  if ( v17 )
    v20 = v18;
  else
    v20 = &byte_F154B;
  sub_42028((__int64)&ptr[0].__list, v20, 0, v5, (char *)(a2 + 1062), 0, align);
  ptr[0].__list.__prev = (struct __pthread_internal_list *)&off_15DFA0;
  v27 = a2 + 28;
  v28 = v19;
  if ( (unsigned int)sub_4224C((__int64)&ptr[0].__list) )
  {
    if ( a1 )
    {
      v21 = __strlen_chk(&ptr[0].__align + 4, 1144);
      v22 = v21;
      if ( v21 )
      {
        v23 = v21 + 1;
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v21 + 1) )
        {
          v24 = *(void **)a1;
        }
        else
        {
          v24 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v21 + 1, 1u);
          *(_QWORD *)a1 = v24;
        }
        *(_QWORD *)(a1 + 8) = v23;
        memmove(v24, &ptr[0].__align + 4, v22);
        v13 = 0;
        *(_BYTE *)(*(_QWORD *)a1 + v22) = 0;
      }
      else
      {
        v13 = 0;
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = -1;
  }
  sub_42704(&ptr[0].__list.__prev);
  if ( ptr[0].__align )
  {
    *(&ptr[0].__align + 1) = 0;
    qfree((void *)ptr[0].__align);
    ptr[0].__align = 0;
    *(&ptr[0].__align + 2) = 0;
  }
  return v13;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 15DFA0: using guessed type _UNKNOWN *off_15DFA0;
