__int64 __fastcall sub_41FD10(char *src, char *a2, char *a3, char *a4, _QWORD *a5)
{
  char *v6; // r12
  char *v7; // rbp
  __int64 v9; // rax
  size_t v10; // r14
  bool v11; // zf
  signed __int64 v12; // r13
  _QWORD *v13; // rbx
  __int64 v15; // rax
  char v16[57]; // [rsp+Fh] [rbp-39h] BYREF

  v6 = a3;
  v7 = src;
  if ( src != a2 && a3 != a4 )
  {
    do
    {
      while ( (unsigned __int8)sub_422720(v16, *(_QWORD *)v6, *(_QWORD *)v7) )
      {
        v9 = *(_QWORD *)v6;
        v6 += 8;
        *a5++ = v9;
        if ( a4 == v6 || a2 == v7 )
          goto LABEL_6;
      }
      v15 = *(_QWORD *)v7;
      v7 += 8;
      *a5++ = v15;
      if ( a2 == v7 )
        goto LABEL_6;
    }
    while ( a4 != v6 );
    v10 = a2 - v7;
    v11 = a2 - v7 == 8;
    if ( a2 - v7 <= 8 )
      goto LABEL_14;
LABEL_7:
    memmove(a5, v7, v10);
    goto LABEL_8;
  }
LABEL_6:
  v10 = a2 - v7;
  v11 = a2 - v7 == 8;
  if ( a2 - v7 > 8 )
    goto LABEL_7;
LABEL_14:
  if ( v11 )
    *a5 = *(_QWORD *)v7;
LABEL_8:
  v12 = a4 - v6;
  v13 = (_QWORD *)((char *)a5 + v10);
  if ( v12 <= 8 )
  {
    if ( v12 == 8 )
      *v13 = *(_QWORD *)v6;
  }
  else
  {
    memmove(v13, v6, v12);
  }
  return (__int64)v13 + v12;
}

