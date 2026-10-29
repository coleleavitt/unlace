__int64 __fastcall sub_7A28E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rbp
  const char *v11; // rsi
  int v12; // r8d
  int v13; // r9d
  int *v15; // rax
  __int64 v16; // rsi
  char v17; // [rsp+0h] [rbp-478h]
  void **p_ptr; // [rsp+0h] [rbp-478h]
  void *ptr; // [rsp+10h] [rbp-468h] BYREF
  __int128 v20; // [rsp+18h] [rbp-460h]
  _BYTE v21[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v22; // [rsp+438h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = sub_7A2630(a1, a3[11], a3[12]);
  if ( !(_BYTE)v4 )
    return v4;
  (*(void (__fastcall **)(__int64))(a1 + 16))(3);
  v5 = (*(__int64 (**)(void))(a1 + 32))();
  v7 = a3[12];
  v8 = v5;
  if ( !v5 )
  {
    v15 = __errno_location();
    v4 = 0;
    v16 = winerr(*v15);
    qstrncpy(a3[11], v16, v7);
    (*(void (**)(void))(a1 + 24))();
    return v4;
  }
  qsnprintf((int)v21, a3[12], (int)"%s_linux_%s", a3[9], a3[10], v6, v17);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(a1 + 48))(v8, 10018, v21);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(a1 + 48))(v8, 10010, v21);
  if ( (*(_BYTE *)(a1 + 128) & 0x20) == 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 48))(v8, 43, 0);
    (*(void (__fastcall **)(__int64, __int64, void (__fastcall __noreturn *)(__int64, int, __int64, int, int, int)))(a1 + 48))(
      v8,
      20056,
      sub_7A2470);
  }
  (*(void (__fastcall **)(__int64, __int64, size_t (__fastcall *)(void *, __int64, __int64, __int64 *)))(a1 + 48))(
    v8,
    20011,
    sub_7A23A0);
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 48))(v8, 10001, a1 + 104);
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 48))(v8, 10002, a2);
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 48))(v8, 32, 1);
  v9 = (_QWORD *)a3[4];
  if ( v9 )
  {
    if ( *v9 )
    {
      v10 = 0;
      p_ptr = &ptr;
      do
      {
        ptr = nullptr;
        v20 = 0;
        sub_3573A0((char **)&ptr);
        v11 = haystack;
        if ( (_QWORD)v20 )
          v11 = (const char *)ptr;
        v10 = (*(__int64 (__fastcall **)(__int64, const char *))(a1 + 88))(v10, v11);
        if ( ptr )
        {
          *(_QWORD *)&v20 = 0;
          qfree(ptr);
        }
        v9 += 2;
      }
      while ( *v9 );
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 48))(v8, 10023, v10);
      v9 = (_QWORD *)v10;
    }
    else
    {
      v9 = nullptr;
    }
  }
  (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v8);
  if ( (*(unsigned int (__fastcall **)(__int64))(a1 + 56))(v8) )
  {
    v4 = 0;
    qstrncpy(a3[11], v21, a3[12]);
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64, __int64, void **))(a1 + 64))(v8, 2097154, &ptr) )
    {
LABEL_18:
      v4 = 0;
      goto LABEL_19;
    }
    if ( ptr != &qword_C8 )
    {
      qsnprintf(a3[11], a3[12], (int)"Server replied with status code %ld", (int)ptr, v12, v13, (char)p_ptr);
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
  {
    ptr = nullptr;
    if ( !(*(unsigned int (__fastcall **)(__int64, __int64, void **))(a1 + 64))(v8, 1048577, &ptr) )
    {
      if ( ptr )
        sub_365330();
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(a1 + 96))(v9);
  (*(void (__fastcall **)(__int64))(a1 + 40))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  (*(void (**)(void))(a1 + 24))();
  return v4;
}

