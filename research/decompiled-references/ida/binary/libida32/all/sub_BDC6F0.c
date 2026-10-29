__int64 __fastcall sub_BDC6F0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  size_t v7; // rdx
  char *v8; // rax

  v1 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 16LL);
  v2 = *v1;
  v3 = v1 + 2;
  v4 = (unsigned int)*v1;
  if ( v4 == 2 )
  {
    if ( *((_WORD *)v1 + 8) == 26984 || *((_WORD *)v1 + 8) == 28524 )
      return 0;
    goto LABEL_4;
  }
  if ( v4 == 4 )
  {
    if ( *((_DWORD *)v1 + 4) == 1852143205 )
      return 0;
    goto LABEL_4;
  }
  if ( v4 != 3 )
  {
LABEL_4:
    if ( (v1[2] & 0xDF) != 0x53 )
      goto LABEL_7;
    if ( !(unsigned int)*v1 )
      return 0;
    goto LABEL_6;
  }
  if ( *((_WORD *)v1 + 8) == 25711 && *((_BYTE *)v1 + 18) == 100 )
    return 0;
  if ( (v1[2] & 0xDF) == 0x53 )
  {
LABEL_6:
    --v4;
    v3 = (__int64 *)((char *)v1 + 17);
    LODWORD(v2) = v4;
  }
LABEL_7:
  if ( !(_DWORD)v2 )
    return 0;
  v5 = 1;
  v6 = (unsigned int)(v2 - 1) + 2LL;
  while ( 1 )
  {
    if ( v4 >= v5 )
    {
      v7 = v4 - v5;
      if ( v4 - v5 == -1 || v7 )
      {
        v8 = (char *)memchr((char *)v3 + v5, *((char *)v3 + v5 - 1), v7);
        if ( v8 )
        {
          if ( v8 - ((char *)v3 + v5) != -1 )
            break;
        }
      }
    }
    if ( v6 == ++v5 )
      return 0;
  }
  return 1;
}

