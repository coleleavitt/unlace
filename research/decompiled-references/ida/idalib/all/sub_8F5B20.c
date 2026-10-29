unsigned __int64 __fastcall sub_8F5B20(__int64 a1, __int64 a2)
{
  const char *v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rbx
  const char *v6; // rdx
  void *v7; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+8h] [rbp-A0h]
  void *v9; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v12; // [rsp+48h] [rbp-60h]
  __int128 v13; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  if ( !(unsigned int)sub_8FE1E0(a1, &v13, a2, 0, 0) )
  {
    v7 = nullptr;
    v8 = 0;
    v7 = (void *)qvector_reserve(&v7, 0, 1024, 1);
    memset((char *)v7 + v8, 0, 1024 - v8);
    *(_QWORD *)&v8 = 1024;
    sub_8FDA40(&v9, a2, &v13);
    v3 = haystack;
    if ( v10 )
      v3 = (const char *)v9;
    v4 = sub_8FE420(a1, a2, v3, &v7);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        ptr = nullptr;
        v12 = 0;
        vault_errstr(&ptr, v4, 0);
        v6 = haystack;
        if ( (_QWORD)v12 )
          v6 = (const char *)ptr;
        sub_8C8C00(v5, (__int64)"%s\n", v6);
        if ( ptr )
        {
          *(_QWORD *)&v12 = 0;
          qfree(ptr);
        }
      }
    }
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
  }
  return v14 - __readfsqword(0x28u);
}
