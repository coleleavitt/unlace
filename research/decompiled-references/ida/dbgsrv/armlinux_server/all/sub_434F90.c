/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434F90
// Address: 0x0000000000434F90

//----- (0000000000434F90) ----------------------------------------------------
__int64 __fastcall sub_434F90(__int64 a1, char *s, unsigned int a3)
{
  _QWORD *v5; // x21
  int v7; // w26
  size_t v8; // x0
  size_t v9; // x27
  size_t v10; // x25
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  size_t v13; // [xsp+58h] [xbp-18h]
  __int64 v14; // [xsp+60h] [xbp-10h]
  __int64 v15; // [xsp+68h] [xbp-8h]

  v5 = *(_QWORD **)(a1 + 192);
  if ( v5 )
  {
    ptr = nullptr;
    v13 = 0;
    v14 = 0;
    v7 = *(_DWORD *)(a1 + 208);
    if ( s )
    {
      v8 = strlen(s);
      v9 = v8 + 1;
      v10 = v8;
      ptr = sub_491288((__int64)&ptr, nullptr, v8 + 1, 1u);
      v13 = v9;
      memmove(ptr, s, v10);
      *((_BYTE *)ptr + v10) = 0;
    }
    sub_43D7B8(v5, v7, (__int64)&ptr);
    if ( ptr )
    {
      v13 = 0;
      j__free(ptr);
    }
    sub_43DB48(*(_QWORD **)(a1 + 192), *(_DWORD *)(a1 + 208), a3);
  }
  return v15 ^ _stack_chk_guard;
}
