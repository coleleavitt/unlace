void *__fastcall sub_613E10(__int64 a1, __int64 a2, char *a3, size_t a4, unsigned int a5)
{
  __int64 *v7; // rbp
  size_t v8; // r12
  _BYTE *v9; // rsi
  __int64 v11; // rax

  v7 = (__int64 *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a2 + 8));
  if ( a5 != 100 && (unsigned __int8)must_journal(a1, a2, a3) )
  {
    if ( (*(_BYTE *)(a2 + 56) & 0x20) != 0 )
    {
      if ( !under_debugger )
        interr(2042);
      BUG();
    }
    sub_60E260(a5, v7, a3, a4);
    if ( (*(_BYTE *)(a2 + 56) & 0x20) == 0 )
      return memcpy(v7, a3, a4);
LABEL_3:
    v7[1] = 0;
    v8 = a4 - 1;
    if ( a3[a4 - 1] )
    {
      v8 = a4;
      v9 = (_BYTE *)*v7;
      if ( v7[2] >= ++a4 )
        goto LABEL_5;
    }
    else
    {
      v9 = (_BYTE *)*v7;
      if ( v7[2] >= a4 )
      {
LABEL_5:
        v7[1] = a4;
        v9[v8] = 0;
        return memmove((void *)*v7, a3, v8);
      }
    }
    v11 = qvector_reserve(v7, v9, a4, 1);
    *v7 = v11;
    v9 = (_BYTE *)v11;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a2 + 56) & 0x20) != 0 )
    goto LABEL_3;
  return memcpy(v7, a3, a4);
}

