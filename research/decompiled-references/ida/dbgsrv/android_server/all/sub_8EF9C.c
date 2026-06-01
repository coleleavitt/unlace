/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EF9C
// Address: 0x000000000008EF9C

//----- (000000000008EF9C) ----------------------------------------------------
void __fastcall sub_8EF9C(__int64 a1, pthread_mutex_t *a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // w22
  pthread_mutex_t *v8; // x0
  char *v9; // x8
  char *v10; // x20
  size_t v11; // x0
  pthread_mutex_t v12; // [xsp+0h] [xbp-70h] BYREF
  __int64 v13; // [xsp+28h] [xbp-48h]

  v7 = a3;
  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = pack_dd(&v12, (unsigned __int64)&v12.__align + 5, a3);
  sub_545E8(a2, &v12, (char *)v8 - (char *)&v12);
  if ( v7 < 1 )
  {
    if ( *(_QWORD *)(a4 + 8) )
      v9 = *(char **)a4;
    else
      v9 = &byte_F154B;
    if ( v9 )
      v10 = v9;
    else
      v10 = "";
    v11 = strlen(v10);
    sub_545E8(a2, v10, v11 + 1);
  }
  else
  {
    memset(&v12.__align + 1, 0, 24);
    v12.__align = 0x800000028LL;
    *((_DWORD *)&v12.__align + 8) = -1;
    (*(void (__fastcall **)(_QWORD, pthread_mutex_t *))(**(_QWORD **)(a1 + 440) + 552LL))(*(_QWORD *)(a1 + 440), &v12);
    sub_A0918(a2, (__int64)&v12);
    if ( *(_BYTE *)(a1 + 184) )
      sub_39FA0((__int64)"RPC: append_start_or_attach idaregs.nregs %zu\n", *(_QWORD *)(*(_QWORD *)(a1 + 440) + 552LL));
    j_serialize_dynamic_register_set(a2, *(_QWORD *)(a1 + 440) + 544LL);
    if ( *(&v12.__align + 1) )
    {
      *(&v12.__align + 2) = 0;
      qfree(*((void **)&v12.__align + 1));
      *(&v12.__align + 1) = 0;
      v12.__list.__prev = nullptr;
    }
  }
}
// A09CC: using guessed type __int64 __fastcall j_serialize_dynamic_register_set(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
