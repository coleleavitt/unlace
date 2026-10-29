__int64 __fastcall sub_819A40(__int64 a1)
{
  unsigned int *v1; // rax
  unsigned __int64 v2; // rbp
  unsigned int *v3; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  int v8; // esi
  char *v9; // rbx
  char *v10; // rax

  v1 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
  v2 = *v1;
  v3 = v1 + 4;
  if ( v2 == 2 )
  {
    if ( *((_WORD *)v1 + 8) == 26984 || *((_WORD *)v1 + 8) == 28524 )
      return 0;
    goto LABEL_9;
  }
  if ( v2 != 4 )
  {
    if ( v2 == 3 && *((_WORD *)v1 + 8) == 25711 && *((_BYTE *)v1 + 18) == 100 )
      return 0;
LABEL_9:
    if ( (v1[4] & 0xDF) == 0x53 )
    {
      v5 = v2 != 0;
      v2 -= v5;
      v3 = (unsigned int *)((char *)v3 + v5);
    }
    v6 = 0;
    while ( v6 != (unsigned int)v2 )
    {
      v7 = (unsigned int)(v6 + 1);
      if ( v7 > v2 )
        v7 = v2;
      if ( v2 == v7 )
      {
        ++v6;
      }
      else
      {
        v8 = *((char *)v3 + v6);
        v9 = (char *)v3 + v7;
        ++v6;
        v10 = (char *)memchr((char *)v3 + v7, v8, v2 - v7);
        if ( v10 && v10 - v9 != -1 )
          return 1;
      }
    }
    return 0;
  }
  if ( v1[4] != 1852143205 )
    goto LABEL_9;
  return 0;
}

