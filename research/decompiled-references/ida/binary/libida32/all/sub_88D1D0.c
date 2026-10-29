unsigned __int64 __fastcall sub_88D1D0(__int64 a1)
{
  _BOOL4 v1; // ecx
  char *v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v8[4]; // [rsp+20h] [rbp-B8h] BYREF
  void *v9; // [rsp+40h] [rbp-98h]
  __int128 v10; // [rsp+48h] [rbp-90h]
  void *v11; // [rsp+58h] [rbp-80h]
  __int128 v12; // [rsp+60h] [rbp-78h]
  void *v13; // [rsp+70h] [rbp-68h]
  __int128 v14; // [rsp+78h] [rbp-60h]
  __int128 v15; // [rsp+88h] [rbp-50h]
  __int64 v16; // [rsp+98h] [rbp-40h]
  void *ptr; // [rsp+A0h] [rbp-38h]
  __int128 v18; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+B8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 208) == 0;
  WORD2(v8[0]) = 0;
  LODWORD(v8[0]) = 0;
  memset(&v8[1], 0, 24);
  v9 = nullptr;
  v11 = nullptr;
  v13 = nullptr;
  v16 = 0;
  ptr = nullptr;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 0;
  sub_88CC80(a1, v8, 0, v1, 0);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  v2 = (char *)v13;
  if ( v13 )
  {
    v3 = v14;
    if ( (_QWORD)v14 )
    {
      v4 = 0;
      do
      {
        v5 = &v2[24 * v4];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)v13;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v2);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v19 - __readfsqword(0x28u);
}

