/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F3D8
// Address: 0x0005F3D8

//----- (0005F3D8) --------------------------------------------------------
int __fastcall sub_5F3D8(int a1, int a2)
{
  unsigned int *v3; // r6
  unsigned int v4; // r7
  const char *v5; // r5
  __int64 v6; // r2
  _BYTE *v7; // r0
  size_t v8; // r0
  unsigned int v9; // r5
  unsigned int v10; // r7
  _BYTE *v11; // r0
  int v12; // r0
  _DWORD *v14; // [sp+Ch] [bp-34h]
  int v15; // [sp+10h] [bp-30h]
  void *v16; // [sp+24h] [bp-1Ch] BYREF
  int v17; // [sp+28h] [bp-18h]
  int v18; // [sp+2Ch] [bp-14h]
  _BYTE v19[5]; // [sp+30h] [bp-10h] BYREF
  _BYTE v20[3]; // [sp+35h] [bp-Bh] BYREF
  _BYTE v21[6]; // [sp+3Ah] [bp-6h] BYREF

  if ( 28 * *(_DWORD *)(a2 + 4) )
  {
    v3 = *(unsigned int **)a2;
    v14 = (_DWORD *)(a1 + 244);
    v15 = a1 + 100;
    while ( 1 )
    {
      v4 = *v3;
      v5 = &byte_B3CBE;
      if ( v3[2] )
        v5 = (const char *)v3[1];
      sub_6DA58((int)&v16, 57);
      v6 = 0;
      if ( v4 != -1 )
        v6 = v4 + 1LL;
      v7 = pack_dq(v19, (unsigned int)v21, v6, HIDWORD(v6));
      ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&v16, v19, v7 - v19);
      if ( !v5 )
        v5 = &byte_A0742;
      v8 = strlen(v5);
      ((void (__fastcall *)(void **, const char *, size_t))loc_30B84)(&v16, v5, v8 + 1);
      v9 = v3[4];
      v10 = v3[5];
      v11 = pack_dd(v19, (unsigned int)v20, v10);
      ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&v16, v19, v11 - v19);
      ((void (__fastcall *)(void **, unsigned int, unsigned int))loc_30B84)(&v16, v9, v10);
      v12 = sub_680B0(v15, (int)&v16, -1, 0);
      if ( v12 < 0 )
        break;
      if ( v12 )
        (*(void (__fastcall **)(_DWORD, unsigned int *))(*(_DWORD *)*v14 + 284))(*v14, v3);
      if ( v16 )
      {
        v17 = 0;
        qfree(v16);
        v18 = 0;
        v16 = nullptr;
      }
      v3 += 7;
      if ( v3 == (unsigned int *)(*(_DWORD *)a2 + 28 * *(_DWORD *)(a2 + 4)) )
        return _stack_chk_guard - *(_DWORD *)&v21[2];
    }
    if ( v16 )
    {
      v17 = 0;
      qfree(v16);
      v18 = 0;
      v16 = nullptr;
    }
  }
  return _stack_chk_guard - *(_DWORD *)&v21[2];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
