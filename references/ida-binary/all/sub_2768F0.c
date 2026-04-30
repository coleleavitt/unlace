__int64 __fastcall sub_2768F0(unsigned __int64 *src, unsigned __int64 *a2, char *a3, char *a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // r11
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  signed __int64 v13; // rsi
  signed __int64 v14; // rbp
  _QWORD *v15; // r8

  if ( src != a2 )
  {
    while ( a3 != a4 )
    {
      v10 = *(_QWORD *)a3;
      v11 = *(_QWORD *)(a6 + 32);
      v12 = *src;
      if ( *(_QWORD *)a3 >= v11 )
        goto LABEL_9;
      v8 = **(_QWORD **)(a6 + 24);
      v9 = -1;
      if ( v12 < v11 )
        v9 = *(_QWORD *)(v8 + 8 * v12);
      if ( *(_QWORD *)(v8 + 8 * v10) >= v9 )
      {
LABEL_9:
        ++src;
        *a5++ = v12;
        if ( src == a2 )
          break;
      }
      else
      {
        *a5 = v10;
        a3 += 8;
        ++a5;
        if ( src == a2 )
          break;
      }
    }
  }
  v13 = (char *)a2 - (char *)src;
  if ( v13 <= 8 )
  {
    if ( v13 == 8 )
      *a5 = *src;
  }
  else
  {
    a5 = memmove(a5, src, v13);
  }
  v14 = a4 - a3;
  v15 = (_QWORD *)((char *)a5 + v13);
  if ( v14 <= 8 )
  {
    if ( v14 == 8 )
      *v15 = *(_QWORD *)a3;
  }
  else
  {
    v15 = memmove(v15, a3, v14);
  }
  return (__int64)v15 + v14;
}
