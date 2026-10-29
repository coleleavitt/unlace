/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001AFD0
// Address: 0x000000010001AFD0

//----- (000000010001AFD0) ----------------------------------------------------
__int64 __fastcall sub_10001AFD0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v7; // r13
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  const char *v10; // rdi
  void *__p; // [rsp+8h] [rbp-58h]
  __int128 v13; // [rsp+10h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-40h]

  v13 = 0;
  v14 = 0;
  if ( sub_10001AEB0((__int64)a1, (__int64)&v13, a3) )
  {
    if ( *((_QWORD *)&v13 + 1) )
      v7 = (const char *)v13;
    else
      v7 = _s1;
    v9 = open_linput(v7, 0);
    __p = v9;
    if ( v9 )
    {
      if ( (unsigned __int8)sub_100018180((__int64)a1, (__int64)v9, a4) )
      {
        v8 = (*(__int64 (__fastcall **)(_BYTE *, void *, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, __p, a2, a5);
LABEL_14:
        close_linput(__p);
        goto LABEL_15;
      }
      v10 = "WARNING: UUID mismatch for symbol file %s. Please make sure SYMBOL_PATH in the debugger's cfg file points to"
            " symbols that are compatible with the remote machine.\n";
    }
    else
    {
      v10 = "WARNING: symbol file not found %s.\n";
    }
    v8 = 0;
    sub_100000AE0((int)v10, v7);
    goto LABEL_14;
  }
  if ( a1[25] == 1 )
  {
    sub_100000AE0((int)"WARNING: No path to local symbol cache specified. Symbol loading might be very slow. You can set "
                       "SYMBOL_PATH in the debugger's cfg file for faster and more detailed debugging.\n");
    a1[25] = 0;
  }
  v8 = 0;
LABEL_15:
  if ( (_QWORD)v13 )
  {
    *((_QWORD *)&v13 + 1) = 0;
    qfree((void *)v13);
  }
  return v8;
}
