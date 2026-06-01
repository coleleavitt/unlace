/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D758
// Address: 0x000000000005D758

//----- (000000000005D758) ----------------------------------------------------
__int64 __fastcall sub_5D758(__int64 a1, __int64 a2)
{
  const char *v3; // x2
  char *v4; // x20
  __int64 align; // x1
  __int64 v6; // x23
  char *v7; // x21
  const char *v8; // x20
  size_t v9; // x2
  pthread_mutex_t s; // [xsp+8h] [xbp-68h] BYREF
  __int64 v12; // [xsp+30h] [xbp-40h]
  __int64 v13; // [xsp+38h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v12 = 0;
  *(_OWORD *)(&s.__align + 3) = 0u;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_F154B;
  if ( (eval_expr((__int64 *)a2, -1, v3, (__int64)&s.__list) & 1) != 0 )
    goto LABEL_20;
  sub_39140(&s, "IDC_FAILURE: ");
  if ( s.__list.__next )
  {
    v4 = (char *)&s.__list.__next[-1].__next + 7;
    if ( s.__list.__next != (struct __pthread_internal_list *)((char *)&dword_0 + 1) )
    {
      align = s.__align;
      if ( *(&s.__align + 1) )
        v6 = *(&s.__align + 1) - 1;
      else
        v6 = 0;
      v7 = (char *)s.__list.__next + v6;
      if ( *(&s.__align + 2) < (unsigned __int64)s.__list.__next + v6 )
      {
        align = (__int64)qvector_reserve(&s, (void *)s.__align, (unsigned __int64)s.__list.__next + v6, 1u);
        s.__align = align;
      }
      *(&s.__align + 1) = (__int64)v7;
      v4[v6 + align] = 0;
      memcpy((void *)(s.__align + v6), s.__list.__prev, (size_t)v4);
    }
  }
  if ( *(&s.__align + 1) )
  {
    v8 = (const char *)s.__align;
    if ( !s.__align )
    {
      v9 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v8 = &byte_F154B;
  }
  v9 = strlen(v8);
LABEL_18:
  *(_BYTE *)a2 = 7;
  sub_4968C((pthread_mutex_t *)(a2 + 8), v8, v9);
  if ( s.__align )
  {
    *(&s.__align + 1) = 0;
    qfree((void *)s.__align);
    s.__align = 0;
    *(&s.__align + 2) = 0;
  }
LABEL_20:
  if ( s.__list.__prev )
  {
    s.__list.__next = nullptr;
    qfree(s.__list.__prev);
    s.__list.__prev = nullptr;
    v12 = 0;
  }
  return 0;
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
