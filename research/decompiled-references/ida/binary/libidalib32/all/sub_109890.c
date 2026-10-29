__int64 __fastcall sub_109890(__int64 a1, const char *a2, const char *a3)
{
  char *v4; // r13
  size_t v5; // r15
  char *v6; // rsi
  size_t v7; // rax
  size_t v8; // r13
  char *v9; // rsi
  size_t v10; // rax
  __int64 v11; // rax
  const char *v12; // rbp
  size_t v13; // rdx
  struct _Unwind_Exception *v15; // rbp
  const char *v16; // [rsp+0h] [rbp-68h] BYREF
  __int128 v17; // [rsp+8h] [rbp-60h]
  _BYTE v18[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v19[0] = __readfsqword(0x28u);
  v16 = nullptr;
  *(_QWORD *)a1 = 0;
  v17 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v4 = (char *)a2;
    v5 = strlen(a2);
    if ( HIDWORD(v5) )
      sub_105180((__int64)a2, (__int64)a2);
  }
  else
  {
    v5 = 0;
    v4 = "";
  }
  v6 = (char *)v19;
  v7 = pack_dd() - (_QWORD)v18;
  if ( v7 )
  {
    v6 = v18;
    sub_105CD0((__int64 *)a1, v18, v7);
  }
  if ( !v5 )
  {
    if ( a3 )
      goto LABEL_7;
LABEL_20:
    v8 = 0;
    a3 = "";
    goto LABEL_8;
  }
  v6 = v4;
  sub_105CD0((__int64 *)a1, v4, v5);
  if ( !a3 )
    goto LABEL_20;
LABEL_7:
  v8 = strlen(a3);
  if ( HIDWORD(v8) )
  {
    v15 = (struct _Unwind_Exception *)sub_105180((__int64)a3, (__int64)v6);
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree();
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    _Unwind_Resume(v15);
  }
LABEL_8:
  v9 = (char *)v19;
  v10 = pack_dd() - (_QWORD)v18;
  if ( v10 )
  {
    v9 = v18;
    sub_105CD0((__int64 *)a1, v18, v10);
  }
  if ( v8 )
  {
    v9 = (char *)a3;
    sub_105CD0((__int64 *)a1, a3, v8);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(TProgram::application + 136LL) + 48LL))(
          TProgram::application + 136LL,
          v9);
  (*(void (__fastcall **)(__int64, const char **, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 64LL))(
    TProgram::application + 136LL,
    &v16,
    v11);
  v12 = s1;
  if ( (_QWORD)v17 )
    v12 = v16;
  if ( v12 )
  {
    v13 = strlen(v12) + 1;
  }
  else
  {
    v13 = 1;
    v12 = "";
  }
  sub_105CD0((__int64 *)a1, v12, v13);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return a1;
}

