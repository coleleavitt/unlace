/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dd
// Address: 0x00000000000BB33C

//----- (00000000000BB33C) ----------------------------------------------------
pthread_mutex_t *__fastcall pack_dd(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // w8
  char *v4; // x8

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
    goto LABEL_30;
  if ( (unsigned int)a3 <= 0x7F )
    goto LABEL_13;
  if ( !((unsigned int)a3 >> 14) )
  {
    if ( (unsigned __int64)a1 < a2 )
    {
      v3 = ((unsigned int)a3 >> 8) | 0x80;
LABEL_12:
      a1->__size[0] = v3;
      a1 = (pthread_mutex_t *)((char *)a1 + 1);
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  if ( (unsigned int)a3 >> 29 )
  {
    a1->__size[0] = -1;
    v4 = &a1->__size[1];
    if ( (__int64)(a2 - ((_QWORD)&a1->__lock + 1)) >= 0 )
    {
      if ( (unsigned __int64)v4 < a2
        && (v4 = &a1->__size[2], a1->__size[1] = BYTE3(a3), (unsigned __int64)&a1->__size[2] < a2) )
      {
        *v4 = BYTE2(a3);
        v4 = &a1->__size[3];
        if ( (__int64)(a2 - ((_QWORD)&a1->__align + 3)) < 0 )
          goto LABEL_30;
      }
      else if ( (__int64)(a2 - (_QWORD)v4) < 0 )
      {
        goto LABEL_30;
      }
      if ( (unsigned __int64)v4 < a2 )
        *v4++ = BYTE1(a3);
      if ( (unsigned __int64)v4 < a2 )
        *v4++ = a3;
      return (pthread_mutex_t *)v4;
    }
  }
  else if ( (unsigned __int64)a1 < a2
         && (a1->__size[0] = BYTE3(a3) | 0xC0, a1 = (pthread_mutex_t *)((char *)a1 + 1), (unsigned __int64)a1 < a2) )
  {
    a1->__size[0] = BYTE2(a3);
    a1 = (pthread_mutex_t *)((char *)a1 + 1);
    if ( (__int64)(a2 - (_QWORD)a1) >= 0 )
    {
LABEL_10:
      if ( (unsigned __int64)a1 < a2 )
      {
        v3 = (unsigned int)a3 >> 8;
        goto LABEL_12;
      }
LABEL_13:
      if ( (unsigned __int64)a1 < a2 )
      {
        a1->__size[0] = a3;
        return (pthread_mutex_t *)((char *)a1 + 1);
      }
      return a1;
    }
  }
  else if ( (__int64)(a2 - (_QWORD)a1) >= 0 )
  {
    goto LABEL_10;
  }
LABEL_30:
  if ( !under_debugger )
    a1 = interr(1225);
  __break(1u);
  return pack_dw(a1, a2, a3);
}
// BB469: variable 'a2' is possibly undefined
// BB469: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
