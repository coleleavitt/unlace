/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39D2C
// Address: 0x00039D2C

//----- (00039D2C) --------------------------------------------------------
int __fastcall sub_39D2C(int a1, int a2)
{
  int v4; // r0
  unsigned __int8 *v5; // r1
  unsigned int v6; // r0
  size_t v7; // r6
  int v8; // r1
  int v9; // r7
  unsigned int v10; // r1
  size_t v11; // r2
  _BYTE *v12; // r0
  signed int v13; // r2
  int *v14; // r1
  size_t v15; // r2
  int v16; // r0
  int v17; // r5
  size_t v18; // r6
  unsigned int v19; // r7
  _BYTE *v20; // r0
  size_t v22; // [sp+8h] [bp-20h]
  int *v23; // [sp+Ch] [bp-1Ch]
  unsigned int v24; // [sp+10h] [bp-18h]
  int *v25; // [sp+18h] [bp-10h] BYREF
  int v26; // [sp+1Ch] [bp-Ch]
  int v27; // [sp+20h] [bp-8h]
  int v28; // [sp+24h] [bp-4h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    v26 = 0;
    v25 = nullptr;
    v27 = 0;
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 )
      v5 = *(unsigned __int8 **)a2;
    else
      v5 = (unsigned __int8 *)&byte_B3CBE;
    v13 = v4 - 1;
    if ( !v4 )
      v13 = 0;
    if ( !utf8_utf16((int)&v25, v5, v13) )
    {
      if ( !under_debugger )
        interr(274);
      __debugbreak();
    }
    if ( v26 )
      v14 = v25;
    else
      v14 = dword_B3E9C;
    v15 = 2 * v26 - 2;
    if ( !v26 )
      v15 = 0;
    v16 = *(_DWORD *)(a1 + 4);
    v17 = v16 - 1;
    if ( !v16 )
      v17 = 0;
    v18 = v17 + v15;
    v19 = v17 + v15 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v19 )
    {
      v20 = *(_BYTE **)a1;
    }
    else
    {
      v22 = v15;
      v23 = v14;
      v20 = qvector_reserve(a1, *(void **)a1, v17 + v15 + 1, 1u);
      *(_DWORD *)a1 = v20;
      v14 = v23;
      v15 = v22;
    }
    *(_DWORD *)(a1 + 4) = v19;
    v20[v18] = 0;
    memmove((void *)(*(_DWORD *)a1 + v17), v14, v15);
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
      v27 = 0;
      v25 = nullptr;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 4);
    v7 = v6 - 1;
    if ( v6 >= 2 )
    {
      v8 = *(_DWORD *)(a1 + 4);
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      v10 = v9 + v6;
      v11 = v9 + v7;
      if ( *(_DWORD *)(a1 + 8) >= v9 + v6 )
      {
        v12 = *(_BYTE **)a1;
      }
      else
      {
        v24 = v9 + v6;
        v12 = qvector_reserve(a1, *(void **)a1, v10, 1u);
        v10 = v24;
        v11 = v9 + v7;
        *(_DWORD *)a1 = v12;
      }
      *(_DWORD *)(a1 + 4) = v10;
      v12[v11] = 0;
      qmemcpy((void *)(*(_DWORD *)a1 + v9), *(const void **)a2, v7);
    }
  }
  return _stack_chk_guard - v28;
}
// B3CBE: using guessed type char byte_B3CBE;
// B3E9C: using guessed type int dword_B3E9C[152];
// E0550: using guessed type char under_debugger;
