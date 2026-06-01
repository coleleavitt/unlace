__int64 __fastcall dwarf_search_for_signature(_QWORD *a1, __int64 a2, _QWORD *a3, Dwarf_Error *a4)
{
  char *v4; // r13
  bool v5; // zf
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 entry; // rax
  void **v11; // rax
  void *ptr; // [rsp+48h] [rbp-B0h]
  __int16 v14; // [rsp+62h] [rbp-96h] BYREF
  __int16 v15; // [rsp+64h] [rbp-94h] BYREF
  _WORD v16[5]; // [rsp+66h] [rbp-92h] BYREF
  __int64 v17; // [rsp+70h] [rbp-88h] BYREF
  __int64 v18; // [rsp+78h] [rbp-80h] BYREF
  __int64 v19; // [rsp+80h] [rbp-78h] BYREF
  __int64 v20; // [rsp+88h] [rbp-70h] BYREF
  __int64 v21; // [rsp+90h] [rbp-68h] BYREF
  __int64 v22; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v23[11]; // [rsp+A0h] [rbp-58h] BYREF

  v4 = (char *)(a1 + 1357);
  v5 = a1[1357] == 0;
  v23[3] = __readfsqword(0x28u);
  if ( v5 )
  {
    _dwarf_initialize_search_hash(a1 + 1357, dwarf_tied_data_hashfunc, 0);
    if ( !a1[1357] )
      return 0xFFFFFFFFLL;
  }
  v23[0] = a2;
  v23[1] = 0;
  v7 = _dwarf_tfind(v23, v4, dwarf_tied_compare_function);
  if ( v7 )
  {
LABEL_3:
    *a3 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
    return 0;
  }
  else
  {
    v17 = 0;
    while ( 1 )
    {
      v14 = 0;
      memset(v16, 0, sizeof(v16));
      v18 = 0;
      v19 = 0;
      v15 = 0;
      v20 = 0;
      v21 = 0;
      result = _dwarf_next_cu_header_internal(
                 (Dwarf_Debug)a1,
                 1,
                 0,
                 (__int64)&v18,
                 (__int64)&v15,
                 (__int64)&v19,
                 (__int64)v16,
                 (__int64)&v16[2],
                 (__int64)&v16[1],
                 (__int64)&v21,
                 (__int64)&v16[3],
                 (__int64)&v20,
                 (__int64)&v17,
                 (__int64)&v14,
                 a4);
      if ( (_DWORD)result == 1 )
        break;
      if ( (_DWORD)result == -1 )
        goto LABEL_17;
      if ( *(_DWORD *)&v16[3] )
      {
        v9 = a1[13];
        if ( !v9 )
          goto LABEL_17;
        v22 = *(_QWORD *)(v9 + 82);
        entry = _dwarf_tied_make_entry(&v22);
        if ( !entry )
          goto LABEL_17;
        ptr = (void *)entry;
        v11 = (void **)_dwarf_tsearch(entry, v4, dwarf_tied_compare_function);
        if ( !v11 )
        {
          free(ptr);
LABEL_17:
          v7 = _dwarf_tfind(v23, v4, dwarf_tied_compare_function);
          if ( v7 )
            goto LABEL_3;
          return 0xFFFFFFFFLL;
        }
        if ( ptr == *v11 )
        {
          if ( !(unsigned int)_dwarf_tied_compare_function(v23, ptr) )
            goto LABEL_17;
        }
        else
        {
          free(ptr);
        }
      }
    }
  }
  return result;
}

