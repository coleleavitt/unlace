/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A3CC
// Address: 0x0003A3CC

//----- (0003A3CC) --------------------------------------------------------
int __fastcall sub_3A3CC(int a1)
{
  int v2; // r3
  int v3; // r1
  unsigned int v4; // r0
  unsigned int v5; // r5
  int v6; // r6
  char *v7; // r1
  unsigned int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r5
  int v12; // r1
  _BYTE *v13; // r0
  int v15; // [sp+0h] [bp-Ch]
  _BYTE v16[4]; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 136);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 132) + 4 * (v2 - 1));
  if ( v2 )
    *(_DWORD *)(a1 + 136) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 116);
  if ( -4 - v3 + v4 )
  {
    sub_4022C(*(int **)(a1 + 112), v3, -4 - v3 + v4);
    *(_BYTE *)(a1 + 120) = -1;
  }
  else
  {
    if ( v4 <= 4 )
    {
      if ( !under_debugger )
        interr(708);
      __debugbreak();
    }
    v5 = v4 - 5;
    *(_DWORD *)(a1 + 116) = v4 - 5;
    v6 = *(_DWORD *)(a1 + 112);
    v7 = *(char **)v6;
    v8 = *(_DWORD *)(v6 + 4);
    v9 = *(unsigned __int8 *)(*(_DWORD *)v6 + v4 - 5);
    if ( v8 >= v4 - 5 )
    {
      if ( v8 != v4 - 5 )
      {
        v16[0] = 0;
        v10 = v9;
        sub_370F6((void **)v6, v4 - 5, v16);
        v9 = v10;
      }
    }
    else
    {
      v15 = *(unsigned __int8 *)(*(_DWORD *)v6 + v4 - 5);
      if ( *(_DWORD *)(v6 + 8) < v5 )
      {
        v7 = (char *)qvector_reserve(v6, v7, v5, 1u);
        *(_DWORD *)v6 = v7;
        v8 = *(_DWORD *)(v6 + 4);
      }
      memset(&v7[v8], 0, v5 - v8);
      *(_DWORD *)(v6 + 4) = v5;
      v9 = v15;
    }
    *(_BYTE *)(a1 + 120) = -87;
    if ( v9 == 171 )
    {
      *(_BYTE *)(a1 + 120) = -85;
      v11 = *(_DWORD *)(a1 + 112);
      v12 = *(_DWORD *)(v11 + 4);
      if ( *(_DWORD *)(v11 + 8) >= (unsigned int)(v12 + 1) )
      {
        v13 = *(_BYTE **)v11;
      }
      else
      {
        v13 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v11, v12 + 1, 1u);
        *(_DWORD *)v11 = v13;
        v12 = *(_DWORD *)(v11 + 4);
      }
      v13[v12] = -85;
      ++*(_DWORD *)(v11 + 4);
      ++*(_DWORD *)(a1 + 116);
      sub_390C4(a1, 0);
      sub_390C4(a1, 0);
    }
    else
    {
      sub_3A4EC(a1);
    }
  }
  return 0;
}
// E0550: using guessed type char under_debugger;
