/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7E1C
// Address: 0x00000000000B7E1C

//----- (00000000000B7E1C) ----------------------------------------------------
bool __fastcall sub_B7E1C(__int64 a1)
{
  const char *v2; // x0
  char *v3; // x20
  __int64 v4; // x19
  void *ptr[3]; // [xsp+1090h] [xbp-1068h] BYREF
  pthread_mutex_t v7[103]; // [xsp+10A8h] [xbp-1050h] BYREF
  __int64 v8; // [xsp+20C0h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  get_ida_subdirs(a1, "cfg", 6);
  memset(v7, 0, 24);
  if ( (sub_B7928(v7) & 1) != 0 )
  {
    v2 = *(&v7[0].__align + 1)
       ? qmakepath((size_t)&v7[0].__list, 0x1000u, (char *)v7[0].__align, 0)
       : qmakepath((size_t)&v7[0].__list, 0x1000u, &byte_F154B, 0);
    v3 = (char *)v2;
    if ( qisdir(v2) )
    {
      sub_39140(ptr, v3);
      sub_494CC((char *)a1, (char *)ptr);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
    }
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v7[0].__align )
  {
    *(&v7[0].__align + 1) = 0;
    qfree((void *)v7[0].__align);
    v7[0].__align = 0;
    *(&v7[0].__align + 2) = 0;
  }
  return v4 != 0;
}
// F154B: using guessed type char byte_F154B;
