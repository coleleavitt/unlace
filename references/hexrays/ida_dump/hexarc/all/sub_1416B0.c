__int64 __fastcall sub_1416B0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  unsigned __int64 **v6; // r14
  unsigned __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbp
  __int64 v11; // r15
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rsi
  unsigned __int64 v17; // rdx

  if ( a2 == -1 )
  {
    sub_66B20((__int64)"Incorrect argument ea=BADADDR in the call of mark_cfunc_dirty()\n");
    return 0;
  }
  v3 = *(_QWORD *)(a1 + 96);
  sub_3AA890(v3);
  v6 = *(unsigned __int64 ***)(v3 + 792);
  v7 = *v6;
  if ( *v6 )
  {
    v8 = 24;
    v9 = (__int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v9 )
    {
LABEL_9:
      v11 = *(_QWORD *)(v8 + 8);
      if ( v11 )
      {
        sub_140080(v3, a2);
        v12 = *(_QWORD *)(v11 + 8);
        if ( *(_QWORD *)(v12 + 8) )
          *(_QWORD *)(v12 + 8) = get_func(*(_QWORD *)(v12 + 40));
      }
      sub_13F360(v6, v9);
      goto LABEL_6;
    }
    while ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v13 = v9[3];
      v8 = (__int64)(v9 + 3);
      if ( a2 < v13 )
      {
        v9 = (__int64 *)v9[1];
      }
      else
      {
        if ( v13 >= a2 )
        {
          if ( v7 == (unsigned __int64 *)v9 )
            break;
          goto LABEL_9;
        }
        v9 = (__int64 *)v9[2];
      }
    }
  }
  sub_140080(v3, a2);
LABEL_6:
  sub_382560(v3, a2, a3);
  if ( !a3 )
    return 1;
  v14 = *(_QWORD *)(v3 + 792);
  v15 = *(__int64 **)(v14 + 16);
  if ( !v15 )
    return 1;
  v16 = (__int64 *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v16 )
  {
    while ( (*(_BYTE *)v16 & 2) == 0 )
    {
      while ( 1 )
      {
        v17 = v16[3];
        if ( a2 >= v17 )
          break;
        v16 = (__int64 *)v16[1];
        if ( (*(_BYTE *)v16 & 2) != 0 )
          return 1;
      }
      if ( v17 >= a2 )
      {
        if ( v16 == v15 )
          return 1;
        goto LABEL_25;
      }
      v16 = (__int64 *)v16[2];
    }
    return 1;
  }
LABEL_25:
  sub_141310((unsigned __int64 **)(v14 + 16), v16);
  return 1;
}
