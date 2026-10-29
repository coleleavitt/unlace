/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99B04
// Address: 0x0000000000099B04

//----- (0000000000099B04) ----------------------------------------------------
__int64 __fastcall sub_99B04(__int64 a1, int a2, pthread_mutex_t *a3, __int64 a4)
{
  __int64 v7; // x0
  char *v8; // x1

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 16) )
      v8 = *(char **)(v7 + 8);
    else
      v8 = &byte_F154B;
    qstrncpy(a3, v8, a4);
    return 1;
  }
  else
  {
    qsnprintf(a3, a4, "%08X", a2);
    return 0;
  }
}
// F154B: using guessed type char byte_F154B;
