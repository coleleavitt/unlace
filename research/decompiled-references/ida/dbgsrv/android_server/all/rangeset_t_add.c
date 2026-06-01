/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add
// Address: 0x00000000000C4100

//----- (00000000000C4100) ----------------------------------------------------
__int64 __fastcall rangeset_t_add(__int64 a1, unsigned __int64 *a2)
{
  int v3; // w8
  char v5; // w0
  char v6; // w19
  void *ptr; // [xsp+8h] [xbp-48h] BYREF
  __int64 v9; // [xsp+10h] [xbp-40h]
  __int64 v10; // [xsp+18h] [xbp-38h]
  int v11; // [xsp+20h] [xbp-30h]
  char v12; // [xsp+24h] [xbp-2Ch]
  __int64 v13; // [xsp+28h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 && *a2 < a2[1] )
  {
    v3 = *(_DWORD *)(a1 + 32);
    ptr = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = v3;
    if ( v3 == -1 )
      v5 = 0;
    else
      v5 = must_journal();
    v12 = v5 & 1;
    v6 = sub_C3D98((char **)a1, a2, (__int64)&ptr);
    if ( (v6 & 1) != 0 )
      sub_C4214((__int64)&ptr);
    if ( ptr )
    {
      v9 = 0;
      qfree(ptr);
      ptr = nullptr;
      v10 = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  return v6 & 1;
}
