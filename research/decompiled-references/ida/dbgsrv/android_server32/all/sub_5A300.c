/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A300
// Address: 0x0005A300

//----- (0005A300) --------------------------------------------------------
int __fastcall sub_5A300(int **a1, int a2, const char *a3)
{
  int v5; // r7
  void **v6; // r6
  size_t v7; // r0
  size_t v8; // r5
  unsigned int v9; // r2
  void *v10; // r0
  unsigned int v12; // [sp+8h] [bp-2Ch]
  void *v13; // [sp+14h] [bp-20h] BYREF
  int v14; // [sp+18h] [bp-1Ch]
  int v15; // [sp+1Ch] [bp-18h]
  void **v16; // [sp+24h] [bp-10h] BYREF
  _DWORD v17[3]; // [sp+28h] [bp-Ch] BYREF

  if ( a3 )
  {
    v14 = 0;
    v13 = nullptr;
    v15 = 0;
    sub_5A030(a2, (int)&v13);
    v16 = &v13;
    sub_63358((int)v17, a1, (int)&v13, (int)&byte_B4612, (int *)&v16);
    v5 = v17[0];
    v6 = (void **)(v17[0] + 28);
    v7 = strlen(a3);
    if ( v7 )
    {
      v8 = v7;
      v9 = v7 + 1;
      if ( *(_DWORD *)(v17[0] + 36) >= v7 + 1 )
      {
        v10 = *v6;
      }
      else
      {
        v12 = v7 + 1;
        v10 = qvector_reserve((int)v6, *v6, v9, 1u);
        *v6 = v10;
        v9 = v12;
      }
      *(_DWORD *)(v5 + 32) = v9;
      memmove(v10, a3, v8);
      *(_BYTE *)(*(_DWORD *)(v5 + 28) + v8) = 0;
    }
    else
    {
      *(_DWORD *)(v17[0] + 32) = 0;
    }
    if ( v13 )
    {
      v14 = 0;
      qfree(v13);
      v15 = 0;
      v13 = nullptr;
    }
  }
  return _stack_chk_guard - v17[2];
}
// B4612: using guessed type char byte_B4612;
