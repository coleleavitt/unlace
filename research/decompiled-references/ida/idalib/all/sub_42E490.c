__int64 __fastcall sub_42E490(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  const char *v4; // rdi
  char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  char *v8; // rdx
  void *v9; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  v3 = sub_42D8A0(a1, (__int64)&ptr);
  if ( (_BYTE)v3 )
  {
    v5 = (char *)ptr;
  }
  else
  {
    if ( a2 )
    {
      v4 = haystack;
      if ( *(_QWORD *)(a1 + 32) )
        v4 = *(const char **)(a1 + 24);
      qbasename(v4);
      sub_368890();
    }
    v5 = (char *)ptr;
    if ( (char *)ptr + 24 * (_QWORD)v12 != ptr )
      sub_368890();
  }
  if ( v5 )
  {
    v6 = v12;
    if ( (_QWORD)v12 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[24 * v7];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = (char *)ptr;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v12 = 0;
    qfree(v5);
  }
  return v3;
}
