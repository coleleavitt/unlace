__int64 __fastcall sub_DB9DA0(__int64 *src, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, _QWORD *a6)
{
  __int64 *v6; // r12
  __int64 *v7; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  size_t v11; // r13
  bool v12; // zf
  __int64 *v13; // rbx
  _QWORD *v16; // [rsp+18h] [rbp-40h] BYREF

  v6 = a3;
  v7 = src;
  v16 = a6;
  if ( src != a2 && a3 != a4 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        v10 = *v6;
        if ( !sub_DB0E50(&v16, *v6, *v7) )
          break;
        *a5 = v10;
        ++v6;
        ++a5;
        if ( a4 == v6 || a2 == v7 )
          goto LABEL_6;
      }
      ++v7;
      *a5++ = v9;
      if ( a2 == v7 )
        goto LABEL_6;
    }
    while ( a4 != v6 );
    v11 = (char *)a2 - (char *)v7;
    v12 = (char *)a2 - (char *)v7 == 8;
    if ( (char *)a2 - (char *)v7 <= 8 )
      goto LABEL_14;
LABEL_7:
    memmove(a5, v7, v11);
    goto LABEL_8;
  }
LABEL_6:
  v11 = (char *)a2 - (char *)v7;
  v12 = (char *)a2 - (char *)v7 == 8;
  if ( (char *)a2 - (char *)v7 > 8 )
    goto LABEL_7;
LABEL_14:
  if ( v12 )
    *a5 = *v7;
LABEL_8:
  v13 = (__int64 *)((char *)a5 + v11);
  if ( (char *)a4 - (char *)v6 <= 8 )
  {
    if ( (char *)a4 - (char *)v6 == 8 )
      *v13 = *v6;
  }
  else
  {
    memmove(v13, v6, (char *)a4 - (char *)v6);
  }
  return (__int64)v13 + (char *)a4 - (char *)v6;
}

