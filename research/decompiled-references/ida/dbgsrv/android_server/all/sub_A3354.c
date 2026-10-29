/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3354
// Address: 0x00000000000A3354

//----- (00000000000A3354) ----------------------------------------------------
__int64 __fastcall sub_A3354(__int64 a1, char *a2, __int128 *a3)
{
  __int128 v4; // q0
  __time_t v5; // x0
  const char *v6; // x3
  unsigned int v7; // w19
  __int128 v9[2]; // [xsp+0h] [xbp-80h] BYREF
  void *ptr; // [xsp+20h] [xbp-60h] BYREF
  __int64 v11; // [xsp+28h] [xbp-58h]
  __int64 v12; // [xsp+30h] [xbp-50h]
  pthread_mutex_t v13; // [xsp+3Ch] [xbp-44h] BYREF

  *(__int64 *)((char *)&v13.__align + 28) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = 0;
  v12 = 0;
  ptr = nullptr;
  v4 = a3[1];
  v9[0] = *a3;
  v9[1] = v4;
  sub_4A3C0((__int64)&ptr, a2, v9);
  v5 = qtime64();
  format_timestamp(&v13, 25, v5, 0);
  if ( v11 )
    v6 = (const char *)ptr;
  else
    v6 = &byte_F154B;
  v7 = sub_A84C8("%s [%u] %s", (const char *)&v13, *(_DWORD *)(a1 + 168), v6);
  if ( ptr )
  {
    v11 = 0;
    qfree(ptr);
    ptr = nullptr;
    v12 = 0;
  }
  return v7;
}
// F154B: using guessed type char byte_F154B;
