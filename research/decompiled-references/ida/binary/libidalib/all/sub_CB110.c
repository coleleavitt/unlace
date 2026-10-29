_QWORD *__fastcall sub_CB110(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // r13
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rsi

  if ( !byte_245140 )
  {
    if ( !byte_2521E8 )
    {
      byte_2521E8 = 1;
      sub_92200((__int64)"The source level debugger has been disabled.\n"
                         "To enable it, use Debugger, Use source-level debugging");
    }
    goto LABEL_8;
  }
  if ( !(_QWORD)xmmword_2525B8 )
  {
LABEL_8:
    *a1 = 0;
    return a1;
  }
  v6 = a2 != 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *((_QWORD *)qword_2525B0 + v8);
    if ( v9 == a2 || !v6 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*(_QWORD *)v9 + 88LL))(a1, v9, a4, a3);
      if ( *a1 )
        return a1;
    }
    v8 = ++v7;
    if ( v7 >= (unsigned __int64)xmmword_2525B8 )
      goto LABEL_8;
  }
}

