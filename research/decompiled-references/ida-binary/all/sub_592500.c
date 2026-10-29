__int64 __fastcall sub_592500(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int *v4; // rax
  char *v5; // rax
  size_t v6; // rbx
  int *v7; // rax
  char *v8; // rax
  int *v9; // rax
  char *v10; // rax
  size_t v11; // rbx
  int *v12; // rax
  char *v13; // rax
  bool v14; // al
  int v16; // [rsp+1Ch] [rbp-94h] BYREF
  int v17; // [rsp+20h] [rbp-90h] BYREF
  __int64 v18; // [rsp+28h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-80h]
  __int64 v20; // [rsp+38h] [rbp-78h]
  __int64 v21; // [rsp+40h] [rbp-70h]
  _BYTE v22[52]; // [rsp+50h] [rbp-60h] BYREF
  int v23; // [rsp+84h] [rbp-2Ch]
  int v24; // [rsp+88h] [rbp-28h]
  pid_t v25; // [rsp+8Ch] [rbp-24h]
  int v26[2]; // [rsp+90h] [rbp-20h]
  unsigned __int8 v27; // [rsp+9Fh] [rbp-11h]

  if ( (unsigned __int8)sub_59364C(a1) )
  {
    v2 = sub_593B94(a1 + 24);
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 16LL))(v2, a2, 1584);
  }
  else
  {
    sub_593356(v22);
    *(_QWORD *)v26 = sub_5933C0(v22, 16000);
    if ( *(_QWORD *)v26 )
    {
      *(_QWORD *)v26 += 16000LL;
      sub_5ADF07(*(_QWORD *)v26 - 16LL, 0, 16);
      v19 = a1;
      v18 = a1 + 32;
      v17 = getpid();
      v20 = a2;
      v21 = 1584;
      if ( (unsigned int)sub_591881((int *)(a1 + 128)) == -1 )
      {
        sub_596CDD("ExceptionHandler::GenerateDump sys_pipe failed:", 47);
        v4 = __errno_location();
        v5 = strerror(*v4);
        v6 = strlen(v5);
        v7 = __errno_location();
        v8 = strerror(*v7);
        sub_596CDD(v8, v6);
        sub_596CDD(&off_75968F, 1);
        *(_DWORD *)(a1 + 132) = -1;
        *(_DWORD *)(a1 + 128) = *(_DWORD *)(a1 + 132);
      }
      v25 = sub_591395((__int64)sub_592254, *(__int64 *)v26, (int)&unk_800200, (__int64)&v17, nullptr, nullptr);
      if ( v25 == -1 )
      {
        sub_591462(*(_DWORD *)(a1 + 128));
        sub_591462(*(_DWORD *)(a1 + 132));
        v3 = 0;
      }
      else
      {
        sub_591462(*(_DWORD *)(a1 + 128));
        sub_591594(1499557217, v25, 0, 0);
        sub_59289A(a1);
        v16 = 0;
        do
          v24 = sub_5918F5(v25, &v16, 0x40000000);
        while ( v24 == -1 && *__errno_location() == 4 );
        v23 = v24;
        sub_591462(*(_DWORD *)(a1 + 132));
        if ( v23 == -1 )
        {
          sub_596CDD("ExceptionHandler::GenerateDump waitpid failed:", 46);
          v9 = __errno_location();
          v10 = strerror(*v9);
          v11 = strlen(v10);
          v12 = __errno_location();
          v13 = strerror(*v12);
          sub_596CDD(v13, v11);
          sub_596CDD(&off_75968F, 1);
        }
        v14 = v23 != -1 && (v16 & 0x7F) == 0 && !BYTE1(v16);
        v27 = v14;
        if ( *(_QWORD *)(a1 + 8) )
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 8))(a1 + 32, *(_QWORD *)(a1 + 16), v27);
        v3 = v27;
      }
    }
    else
    {
      v3 = 0;
    }
    sub_5933A4(v22);
  }
  return v3;
}
