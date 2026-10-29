/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2qstr
// Address: 0x00071578

//----- (00071578) --------------------------------------------------------
unsigned int __fastcall user2qstr(int a1, int a2)
{
  unsigned int v4; // r2
  unsigned __int8 *v5; // r0
  unsigned int v6; // r1
  int v7; // r5
  int v8; // r0
  int v9; // r7
  void *v10; // r1
  unsigned __int8 *v12; // [sp+8h] [bp-10h]
  unsigned __int8 *v13[2]; // [sp+10h] [bp-8h] BYREF

  *(_DWORD *)(a1 + 4) = 0;
  v4 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 8) < v4 )
  {
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, v4, 1u);
    v4 = *(_DWORD *)(a2 + 4);
  }
  if ( v4 )
    v5 = *(unsigned __int8 **)a2;
  else
    v5 = (unsigned __int8 *)&byte_B3CBE;
  v13[0] = v5;
  v6 = v4 - 1;
  if ( !v4 )
    v6 = 0;
  v12 = &v5[v6];
  if ( v6 )
  {
    do
    {
      v13[0] = v5 + 1;
      v7 = *v5;
      if ( v7 == 92 )
        LOBYTE(v7) = back_char(v13);
      v8 = *(_DWORD *)(a1 + 4);
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      v10 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v9 + 2) )
      {
        v10 = qvector_reserve(a1, v10, v9 + 2, 1u);
        *(_DWORD *)a1 = v10;
      }
      *(_DWORD *)(a1 + 4) = v9 + 2;
      *((_BYTE *)v10 + v9) = v7;
      *(_BYTE *)(*(_DWORD *)a1 + v9 + 1) = 0;
      v5 = v13[0];
    }
    while ( v13[0] != v12 );
  }
  return _stack_chk_guard - (unsigned int)v13[1];
}
// B3CBE: using guessed type char byte_B3CBE;
