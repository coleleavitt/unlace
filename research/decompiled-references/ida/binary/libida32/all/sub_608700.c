__int64 __fastcall sub_608700(__int64 a1, __int64 a2, const char *a3)
{
  int v3; // ecx
  __int64 v6; // rbx
  char *v7; // rdi
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 64);
  v11 = __readfsqword(0x28u);
  s1 = nullptr;
  v10 = 0;
  if ( v3 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( sub_79B6F0(a1, a2, &s1, (unsigned int)v6, 83) > 0 )
      {
        v7 = (char *)haystack;
        if ( (_QWORD)v10 )
          v7 = s1;
        if ( !strcasecmp(v7, a3) )
          break;
      }
      if ( ++v6 >= (unsigned __int64)*(unsigned int *)(a1 + 64) )
      {
        LODWORD(v6) = -1;
        break;
      }
    }
    if ( s1 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(s1);
    }
  }
  else
  {
    LODWORD(v6) = -1;
  }
  return (unsigned int)v6;
}

