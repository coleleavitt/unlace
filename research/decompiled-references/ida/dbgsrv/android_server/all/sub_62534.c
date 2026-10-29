/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62534
// Address: 0x0000000000062534

//----- (0000000000062534) ----------------------------------------------------
bool __fastcall sub_62534(__int64 a1)
{
  char *v2; // x1
  unsigned __int16 v3; // w0
  __int64 v5; // x9
  int *v6; // x20
  unsigned int v7; // w19
  int v8; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_F154B;
  v3 = sub_62274((_QWORD *)a1, v2, &v8);
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    if ( (unsigned int)set_qerrno(0x3Au) )
      return 1;
  }
  else
  {
    sub_5ECDC(a1, 0xDBC2C0u >> (8 * (v8 - 1)), v3);
  }
  sub_62638(a1);
  v5 = *(_QWORD *)(a1 + 352);
  v6 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * (v5 - 1));
  if ( v5 )
    *(_QWORD *)(a1 + 352) = v5 - 1;
  v7 = sub_642D8((pthread_mutex_t *)a1, v6, 0, 0);
  if ( v6 )
  {
    sub_62860(v6);
    operator delete(v6);
  }
  return (unsigned int)set_qerrno(v7) != 0;
}
// F154B: using guessed type char byte_F154B;
