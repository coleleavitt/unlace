__int64 __fastcall sub_141A660(__int64 *a1, int a2)
{
  unsigned int v2; // ebp
  char *v3; // rbx
  size_t v4; // rax
  int v5; // eax
  char *s; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0;
  sub_1022900((__int64)&s, a1, a2, 1);
  v3 = s;
  if ( s )
  {
    v4 = strlen(s);
    if ( v4 == 10 )
    {
      if ( *(_QWORD *)v3 == 0x692D746C6975623CLL && *((_WORD *)v3 + 4) == 15982 )
      {
        v5 = 0;
        goto LABEL_6;
      }
LABEL_5:
      v5 = 1;
LABEL_6:
      LOBYTE(v2) = v5 == 0;
      return v2;
    }
    if ( v4 == 14 )
    {
      if ( *(_QWORD *)v3 == 0x646E616D6D6F633CLL && *((_DWORD *)v3 + 2) == 1852402720 && *((_WORD *)v3 + 6) == 15973 )
      {
        v5 = 0;
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  return v2;
}
