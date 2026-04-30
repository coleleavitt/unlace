__int64 __fastcall sub_2EF280(
        int a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 server_connection2; // rax
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  const char *v20; // rdx
  const char *v21; // [rsp+0h] [rbp-38h] BYREF
  __int128 v22; // [rsp+8h] [rbp-30h]
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  server_connection2 = get_server_connection2();
  v12 = server_connection2;
  if ( server_connection2 )
  {
    v13 = (const char *)&v21;
    v21 = nullptr;
    v22 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, const char **, __int64))(*(_QWORD *)server_connection2 + 104LL))(
            server_connection2,
            &v21,
            a2);
    if ( !v12 )
    {
      v20 = &s1;
      if ( (_QWORD)v22 )
        v20 = v21;
      v13 = "secondary";
      if ( !a1 )
        v13 = "primary";
      sub_169700(
        (int)"Failed to get func histories from %s lumina server: %s\n",
        (__int64)v13,
        (__int64)v20,
        v14,
        v15,
        v16,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v17,
        v18,
        a9,
        a10,
        (char)v21);
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, v13);
    }
  }
  return v12;
}
