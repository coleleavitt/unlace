char *__fastcall sub_1AC1920(char *a1, char *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char *result; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // cl
  __int64 v16; // rcx
  __int64 v17; // rcx

  v2 = (a2 - a1) >> 3;
  v3 = (a2 - a1) >> 5;
  if ( v3 <= 0 )
  {
LABEL_18:
    if ( v2 != 2 )
    {
      if ( v2 != 3 )
      {
        if ( v2 != 1 )
          return a2;
LABEL_26:
        v15 = *(_BYTE *)(*(_QWORD *)a1 + 8LL);
        result = a2;
        if ( v15 <= 0x31u && ((0x2480020000000uLL >> v15) & 1) != 0 )
          return a1;
        return result;
      }
      v13 = *(unsigned __int8 *)(*(_QWORD *)a1 + 8LL);
      if ( (unsigned __int8)v13 <= 0x31u )
      {
        v17 = 0x2480020000000LL;
        result = a1;
        if ( _bittest64(&v17, v13) )
          return result;
      }
      a1 += 8;
    }
    v14 = *(unsigned __int8 *)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int8)v14 <= 0x31u )
    {
      v16 = 0x2480020000000LL;
      result = a1;
      if ( _bittest64(&v16, v14) )
        return result;
    }
    a1 += 8;
    goto LABEL_26;
  }
  v4 = *(unsigned __int8 *)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int8)v4 > 0x31u || (v12 = 0x2480020000000LL, result = a1, !_bittest64(&v12, v4)) )
  {
    v5 = 0x2480020000000LL;
    v6 = &a1[32 * v3];
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)(*((_QWORD *)a1 + 1) + 8LL);
      if ( (unsigned __int8)v7 <= 0x31u && _bittest64(&v5, v7) )
        return a1 + 8;
      v8 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 8LL);
      if ( (unsigned __int8)v8 <= 0x31u && _bittest64(&v5, v8) )
        return a1 + 16;
      v9 = *(unsigned __int8 *)(*((_QWORD *)a1 + 3) + 8LL);
      if ( (unsigned __int8)v9 <= 0x31u )
      {
        if ( _bittest64(&v5, v9) )
          return a1 + 24;
      }
      result = a1 + 32;
      if ( v6 == a1 + 32 )
      {
        a1 = v6;
        v2 = (a2 - v6) >> 3;
        goto LABEL_18;
      }
      v11 = *(unsigned __int8 *)(*((_QWORD *)a1 + 4) + 8LL);
      if ( (unsigned __int8)v11 <= 0x31u && _bittest64(&v5, v11) )
        return result;
      a1 = result;
    }
  }
  return result;
}
