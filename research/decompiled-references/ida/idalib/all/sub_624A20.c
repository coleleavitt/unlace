__int64 __fastcall sub_624A20(__int64 a1, __int64 a2, const char *a3)
{
  int v3; // edx
  __int64 v5; // r14
  unsigned int v6; // r12d
  char *v7; // rdi
  char *s1; // [rsp+8h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-50h]
  unsigned __int64 v12; // [rsp+20h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 64);
  v12 = __readfsqword(0x28u);
  v11 = 0;
  s1 = nullptr;
  if ( v3 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v5;
      if ( sub_7BEA80(a1, a2, &s1, (int)v5, 83) > 0 )
      {
        v7 = (char *)haystack;
        if ( (_QWORD)v11 )
          v7 = s1;
        if ( !strcasecmp(v7, a3) )
          break;
      }
      if ( ++v5 >= (unsigned __int64)*(unsigned int *)(a1 + 64) )
      {
        v6 = -1;
        break;
      }
    }
    if ( s1 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(s1);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}
