/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57508
// Address: 0x0000000000057508

//----- (0000000000057508) ----------------------------------------------------
__int64 __fastcall sub_57508(__int64 a1, __int64 a2)
{
  void *v4; // x0
  void *v5; // x0
  unsigned int v6; // w8
  unsigned int v7; // w9
  __int64 v9; // x8
  void *v10[2]; // [xsp+38h] [xbp-88h] BYREF
  void *ptr[2]; // [xsp+48h] [xbp-78h]
  __int128 v12; // [xsp+58h] [xbp-68h]
  __int128 v13; // [xsp+68h] [xbp-58h]
  __int128 v14; // [xsp+78h] [xbp-48h]
  _BYTE v15[15]; // [xsp+88h] [xbp-38h] BYREF
  __int64 v16; // [xsp+98h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(v15, 0, sizeof(v15));
  v14 = 0u;
  v13 = 0u;
  v12 = 0u;
  *(_OWORD *)ptr = 0u;
  *(_OWORD *)v10 = 0u;
  if ( v10 != (void **)a2 )
  {
    v4 = *(void **)(a2 + 24);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 32) = 0;
      qfree(v4);
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 40) = 0;
    }
    v5 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v5);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
    sub_5AEEC(a2, (__int64)v10);
    if ( ptr[1] )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr[1]);
      ptr[1] = nullptr;
      *((_QWORD *)&v12 + 1) = 0;
    }
  }
  if ( v10[0] )
  {
    v10[1] = nullptr;
    qfree(v10[0]);
    v10[0] = nullptr;
    ptr[0] = nullptr;
  }
  if ( (sub_4F2E0(*(_QWORD *)(a1 + 8), a2 + 48) & 0x80000000) != 0 )
    return 0;
  v6 = *(unsigned __int8 *)(a2 + 52);
  v7 = v6 >> 4;
  if ( v6 >= 0x30 )
  {
    if ( v7 == 14 && *(_WORD *)(*(_QWORD *)(a1 + 8) + 522LL) == 40 )
    {
      LOBYTE(v7) = 2;
    }
    else if ( v6 < 0xA0 )
    {
      LOBYTE(v7) = -2;
    }
  }
  *(_BYTE *)(a2 + 92) = v7;
  *(_DWORD *)(a2 + 88) = 0;
  *(_BYTE *)(a2 + 93) = v6 & 0xF;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL) + *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 80) = v9;
  return 1;
}
