__int64 sub_7D8460()
{
  _QWORD *server_connection; // rax
  __int64 v1; // rax
  unsigned int v2; // ebx
  void *v4; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  void *ptr; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  server_connection = get_server_connection();
  if ( server_connection )
  {
    v4 = nullptr;
    ptr = nullptr;
    v5 = 0;
    v7 = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD *, void **, void **, __int64))(*server_connection + 72LL))(
           server_connection,
           &v4,
           &ptr,
           1);
    if ( !v1 )
      sub_368890();
    v2 = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree(v4);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
