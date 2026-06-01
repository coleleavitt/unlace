__int64 __fastcall google_breakpad::ExceptionHandler::GenerateDump(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx
  int *v5; // rax
  char *v6; // rax
  const char *v7; // rbx
  int *v8; // rax
  char *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int *v13; // rax
  char *v14; // rax
  const char *v15; // rbx
  int *v16; // rax
  char *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  bool v20; // al
  int v22; // [rsp+1Ch] [rbp-94h] BYREF
  int v23; // [rsp+20h] [rbp-90h] BYREF
  __int64 v24; // [rsp+28h] [rbp-88h]
  __int64 v25; // [rsp+30h] [rbp-80h]
  __int64 v26; // [rsp+38h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-70h]
  _BYTE v28[52]; // [rsp+50h] [rbp-60h] BYREF
  int v29; // [rsp+84h] [rbp-2Ch]
  int v30; // [rsp+88h] [rbp-28h]
  pid_t v31; // [rsp+8Ch] [rbp-24h]
  int v32[2]; // [rsp+90h] [rbp-20h]
  unsigned __int8 v33; // [rsp+9Fh] [rbp-11h]

  if ( (unsigned __int8)google_breakpad::ExceptionHandler::IsOutOfProcess((google_breakpad::ExceptionHandler *)a1) )
  {
    v2 = google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::operator->(a1 + 24);
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 16LL))(v2, a2, 1584);
  }
  else
  {
    google_breakpad::PageAllocator::PageAllocator((google_breakpad::PageAllocator *)v28);
    *(_QWORD *)v32 = google_breakpad::PageAllocator::Alloc((google_breakpad::PageAllocator *)v28, 0x3E80u);
    if ( *(_QWORD *)v32 )
    {
      *(_QWORD *)v32 += 16000LL;
      my_memset(*(_QWORD *)v32 - 16LL, 0, 16);
      v25 = a1;
      v24 = a1 + 32;
      v23 = getpid();
      v26 = a2;
      v27 = 1584;
      if ( (unsigned int)sub_1A4B3B((int *)(a1 + 128)) == -1 )
      {
        logger::write((logger *)"ExceptionHandler::GenerateDump sys_pipe failed:", (const char *)&qword_28 + 7, v4);
        v5 = __errno_location();
        v6 = strerror(*v5);
        v7 = (const char *)strlen(v6);
        v8 = __errno_location();
        v9 = strerror(*v8);
        logger::write((logger *)v9, v7, v10);
        logger::write((logger *)"\n", (const char *)&dword_0 + 1, v11);
        *(_DWORD *)(a1 + 132) = -1;
        *(_DWORD *)(a1 + 128) = *(_DWORD *)(a1 + 132);
      }
      v31 = sub_1A464F(
              (__int64)google_breakpad::ExceptionHandler::ThreadEntry,
              *(__int64 *)v32,
              8389120,
              (__int64)&v23,
              nullptr,
              nullptr);
      if ( v31 == -1 )
      {
        sub_1A471C(*(_DWORD *)(a1 + 128));
        sub_1A471C(*(_DWORD *)(a1 + 132));
        v3 = 0;
      }
      else
      {
        sub_1A471C(*(_DWORD *)(a1 + 128));
        sub_1A484E(1499557217, v31, 0, 0);
        google_breakpad::ExceptionHandler::SendContinueSignalToChild((google_breakpad::ExceptionHandler *)a1);
        v22 = 0;
        do
          v30 = sub_1A4BAF(v31, &v22, 0x40000000);
        while ( v30 == -1 && *__errno_location() == 4 );
        v29 = v30;
        sub_1A471C(*(_DWORD *)(a1 + 132));
        if ( v29 == -1 )
        {
          logger::write((logger *)"ExceptionHandler::GenerateDump waitpid failed:", (const char *)&qword_28 + 6, v12);
          v13 = __errno_location();
          v14 = strerror(*v13);
          v15 = (const char *)strlen(v14);
          v16 = __errno_location();
          v17 = strerror(*v16);
          logger::write((logger *)v17, v15, v18);
          logger::write((logger *)"\n", (const char *)&dword_0 + 1, v19);
        }
        v20 = v29 != -1 && (v22 & 0x7F) == 0 && !BYTE1(v22);
        v33 = v20;
        if ( *(_QWORD *)(a1 + 8) )
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 8))(a1 + 32, *(_QWORD *)(a1 + 16), v33);
        v3 = v33;
      }
    }
    else
    {
      v3 = 0;
    }
    google_breakpad::PageAllocator::~PageAllocator((google_breakpad::PageAllocator *)v28);
  }
  return v3;
}

