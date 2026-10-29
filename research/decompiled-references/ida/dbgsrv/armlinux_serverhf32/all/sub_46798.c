/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46798
// Address: 0x00046798

//----- (00046798) --------------------------------------------------------
int __fastcall sub_46798(int a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int result; // r0
  size_t v7; // r6
  size_t v8; // r3
  size_t v9; // r3
  const void *v10; // r0
  const void *v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  __int64 v14; // r0
  size_t v15; // [sp+4h] [bp-4h]

  switch ( sub_46630((unsigned __int8 *)a1, (unsigned __int8 *)a2) )
  {
    case 2:
    case 6:
      v4 = *(_DWORD *)(a1 + 8);
      v5 = *(_DWORD *)(a2 + 8);
      if ( v4 > v5 )
        return 1;
      if ( v4 >= v5 )
        return 0;
      else
        return -1;
    case 3:
      return sub_71C58(a1 + 8, a2 + 8);
    case 5:
      return *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8);
    case 7:
      v7 = *(_DWORD *)(a1 + 12);
      if ( v7 )
        --v7;
      v8 = *(_DWORD *)(a2 + 12);
      if ( !v8 )
        return v7 > v8;
      v9 = v8 - 1;
      v10 = *(const void **)(a1 + 8);
      v11 = *(const void **)(a2 + 8);
      if ( v7 >= v9 )
      {
        v15 = v9;
        result = memcmp(v10, v11, v9);
        v8 = v15;
        if ( !result )
          return v7 > v8;
      }
      else
      {
        result = memcmp(v10, v11, v7);
        if ( !result )
          return -1;
      }
      return result;
    case 8:
      v12 = *(_DWORD *)(a1 + 8);
      v13 = *(_DWORD *)(a2 + 8);
      if ( v12 > v13 )
        return 1;
      if ( v12 >= v13 )
        return 0;
      else
        return -1;
    case 9:
      v14 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a2 + 8) < v14 )
        return 1;
      if ( v14 >= *(_QWORD *)(a2 + 8) )
        return 0;
      else
        return -1;
    default:
      return 1;
  }
}
