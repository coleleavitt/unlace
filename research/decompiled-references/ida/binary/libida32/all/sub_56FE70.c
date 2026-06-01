bool __fastcall sub_56FE70(__int64 a1, unsigned int a2, void *a3, size_t a4)
{
  int v5; // ebp
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int bytes; // eax
  unsigned int v11; // edx
  _QWORD *v13; // rax
  size_t v15; // rdx

  v5 = a4;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v7 = (int)a4;
    v8 = a2;
    v9 = (int)a4;
    bytes = get_bytes(a3, (int)a4, v8, 0, 0);
    v11 = bytes;
    if ( v5 != bytes )
    {
      invalidate_dbgmem_config(a3, v9, bytes);
      v11 = get_bytes(a3, v7, a2, 0, 0);
    }
    return v5 == v11;
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 8);
    v15 = v13[1] - a2;
    if ( v15 > a4 )
      v15 = a4;
    memcpy(a3, (const void *)(*v13 + a2), v15);
    return 1;
  }
}

