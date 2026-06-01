unsigned __int64 __fastcall sub_8B0B50(__int64 a1)
{
  _BOOL4 v1; // ecx
  char *v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  char *v5; // rax
  void *v6; // rdi
  int v8; // [rsp+20h] [rbp-B8h] BYREF
  __int16 v9; // [rsp+24h] [rbp-B4h]
  __int64 v10; // [rsp+28h] [rbp-B0h]
  __int64 v11; // [rsp+30h] [rbp-A8h]
  __int64 v12; // [rsp+38h] [rbp-A0h]
  void *v13; // [rsp+40h] [rbp-98h]
  __int128 v14; // [rsp+48h] [rbp-90h]
  void *v15; // [rsp+58h] [rbp-80h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  void *v17; // [rsp+70h] [rbp-68h]
  __int128 v18; // [rsp+78h] [rbp-60h]
  __int128 v19; // [rsp+88h] [rbp-50h]
  __int64 v20; // [rsp+98h] [rbp-40h]
  void *ptr; // [rsp+A0h] [rbp-38h]
  __int128 v22; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v23; // [rsp+B8h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 208) == 0;
  v9 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = nullptr;
  v15 = nullptr;
  v17 = nullptr;
  v20 = 0;
  ptr = nullptr;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v22 = 0;
  sub_8B0600(a1, (__int64)&v8, 0, v1, 0);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  v2 = (char *)v17;
  if ( v17 )
  {
    v3 = v18;
    if ( (_QWORD)v18 )
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
          v2 = (char *)v17;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v2);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v23 - __readfsqword(0x28u);
}
