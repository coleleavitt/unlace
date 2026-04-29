dyld4::ProcessConfig::Logging *__fastcall dyld4::ProcessConfig::Logging::Logging(
        dyld4::ProcessConfig::Logging *this,
        const dyld4::ProcessConfig::Process *a2,
        const dyld4::ProcessConfig::Security *a3,
        dyld4::SyscallDelegate *a4)
{
  bool v8; // w8
  int v9; // w9
  bool v10; // w8
  int v11; // w9
  bool v12; // w8
  int v13; // w9
  bool v14; // w8
  int v15; // w9
  bool v16; // w8
  int v17; // w9
  bool v18; // w8
  int v19; // w9
  bool v20; // w8
  int v21; // w9
  bool v22; // w8
  int v23; // w9
  bool v24; // w8
  int v25; // w9
  bool v26; // w8
  int v27; // w9
  bool v28; // w8
  bool v29; // w9
  const char *v30; // x0
  int v31; // w0

  if ( !*((_BYTE *)a3 + 2) )
  {
    *((_BYTE *)this + 1) = 0;
    goto LABEL_14;
  }
  v8 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_SEGMENTS") != 0;
  v9 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 1) = v8;
  if ( !v9 )
  {
LABEL_14:
    *(_BYTE *)this = 0;
    *((_BYTE *)this + 2) = 0;
    goto LABEL_15;
  }
  v10 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_LIBRARIES") != 0;
  v11 = *((unsigned __int8 *)a3 + 2);
  *(_BYTE *)this = v10;
  if ( !v11 )
  {
    *((_WORD *)this + 1) = 0;
    goto LABEL_20;
  }
  v12 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_BINDINGS") != 0;
  v13 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 2) = v12;
  if ( !v13 )
  {
LABEL_15:
    *(_WORD *)((char *)this + 3) = 0;
    goto LABEL_16;
  }
  v14 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_INITIALIZERS") != 0;
  v15 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 3) = v14;
  if ( !v15 )
  {
LABEL_20:
    *((_WORD *)this + 2) = 0;
    goto LABEL_21;
  }
  v16 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_APIS") != 0;
  v17 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 4) = v16;
  if ( !v17 )
  {
LABEL_16:
    *(_WORD *)((char *)this + 5) = 0;
    goto LABEL_17;
  }
  v18 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_NOTIFICATIONS") != 0;
  v19 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 5) = v18;
  if ( !v19 )
  {
LABEL_21:
    *((_WORD *)this + 3) = 0;
    goto LABEL_22;
  }
  v20 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_INTERPOSING") != 0;
  v21 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 6) = v20;
  if ( !v21 )
  {
LABEL_17:
    *(_WORD *)((char *)this + 7) = 0;
    goto LABEL_18;
  }
  v22 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_LOADERS") != 0;
  v23 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 7) = v22;
  if ( !v23 )
  {
LABEL_22:
    v28 = 0;
    *((_WORD *)this + 4) = 0;
    goto LABEL_23;
  }
  v24 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_SEARCHING") != 0;
  v25 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 8) = v24;
  if ( !v25 )
  {
LABEL_18:
    v28 = 0;
    *((_BYTE *)this + 9) = 0;
LABEL_23:
    v29 = 1;
    goto LABEL_24;
  }
  v26 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_ENV") != 0;
  v27 = *((unsigned __int8 *)a3 + 2);
  *((_BYTE *)this + 9) = v26;
  if ( !v27 )
  {
    v28 = 0;
    goto LABEL_23;
  }
  v28 = _simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_TO_STDERR") != 0;
  v29 = *((_BYTE *)a3 + 2) == 0;
LABEL_24:
  *((_BYTE *)this + 16) = v28;
  *((_DWORD *)this + 3) = 2;
  *((_BYTE *)this + 17) = 0;
  if ( !v29 )
  {
    if ( *((_BYTE *)a3 + 4) )
    {
      v30 = (const char *)_simple_getenv(*((_QWORD *)a2 + 13), "DYLD_PRINT_TO_FILE");
      if ( v30 )
      {
        v31 = dyld4::SyscallDelegate::openLogFile(a4, v30);
        if ( v31 != -1 )
        {
          *((_BYTE *)this + 17) = 1;
          *((_DWORD *)this + 3) = v31;
        }
      }
    }
  }
  return this;
}
