char *__fastcall sub_19A0280(__int64 *src, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 *v5; // r12
  __int64 *i; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int8 v10; // dl
  int v11; // eax
  bool v12; // r15
  unsigned __int8 v13; // dl
  int v14; // eax
  char *v15; // rbx

  v5 = a3;
  for ( i = src; a2 != i && a4 != v5; ++a5 )
  {
    while ( 1 )
    {
      v8 = *v5;
      v9 = *i;
      v10 = *(_BYTE *)(*v5 + 28) & 0x7F;
      v11 = v10;
      if ( ((v10 + 52) & 0x7Fu) <= 1 || (unsigned int)v10 - 53 <= 1 )
        v11 = *(_BYTE *)(sub_B72ED0(*v5) + 28) & 0x7F;
      v12 = (unsigned int)(v11 - 58) <= 9;
      v13 = *(_BYTE *)(v9 + 28) & 0x7F;
      v14 = v13;
      if ( (unsigned int)v13 - 53 <= 1 || ((v13 + 52) & 0x7Fu) <= 1 )
        v14 = *(_BYTE *)(sub_B72ED0(v9) + 28) & 0x7F;
      if ( (unsigned __int8)v12 <= (unsigned __int8)((unsigned int)(v14 - 58) <= 9) )
        break;
      *a5 = v8;
      ++v5;
      ++a5;
      if ( a4 == v5 || a2 == i )
        goto LABEL_12;
    }
    *a5 = v9;
    ++i;
  }
LABEL_12:
  if ( a2 != i )
    memmove(a5, i, (char *)a2 - (char *)i);
  v15 = (char *)a5 + (char *)a2 - (char *)i;
  if ( a4 != v5 )
    memmove(v15, v5, (char *)a4 - (char *)v5);
  return &v15[(char *)a4 - (char *)v5];
}
