unsigned __int64 __fastcall sub_1A410(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r13
  unsigned int *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi
  const char *v6; // rdx
  const char *v7; // rdx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v2 = a2[1];
  v11 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (__int64)&(*a2)[8 * (_QWORD)v2];
  if ( (unsigned int *)v4 != *a2 )
  {
    do
    {
      v5 = *v3;
      if ( !*(_BYTE *)(a1 + 211) || (_DWORD)v5 != 50 )
      {
        v6 = haystack;
        if ( *((_QWORD *)v3 + 2) )
          v6 = *((const char **)v3 + 1);
        ptr = nullptr;
        v10 = 0;
        sub_65C40(&ptr, v5, v6);
        v7 = haystack;
        if ( (_QWORD)v10 )
          v7 = (const char *)ptr;
        sub_19CE0(a1, (__int64)"%s\n", v7);
        if ( ptr )
        {
          *(_QWORD *)&v10 = 0;
          j__free(ptr);
        }
      }
      v3 += 8;
    }
    while ( (unsigned int *)v4 != v3 );
  }
  return v11 - __readfsqword(0x28u);
}

