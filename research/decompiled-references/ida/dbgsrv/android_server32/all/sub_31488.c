/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31488
// Address: 0x00031488

//----- (00031488) --------------------------------------------------------
int __fastcall sub_31488(int a1, _DWORD *a2)
{
  unsigned int v3; // r1
  unsigned int v4; // r0
  __int64 v5; // kr00_8
  _DWORD *v6; // r5
  int v7; // r7
  unsigned int v8; // r1
  char **v9; // r0
  char *v10; // r0
  bool v11; // cf
  _DWORD v14[4]; // [sp+8h] [bp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 52);
  if ( v3 < v4 )
  {
LABEL_12:
    v7 = 0;
    if ( v3 < v4 )
    {
      *a2 = *(_DWORD *)(a1 + 28) + 16 * v3;
      ++*(_DWORD *)(a1 + 48);
      return 1;
    }
    return v7;
  }
  v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
  v6 = (_DWORD *)(a1 + 40);
  v7 = 0;
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 32);
    v9 = (char **)(a1 + 28);
    if ( v8 >= (unsigned int)v5 )
    {
      if ( v8 != (_DWORD)v5 )
      {
        memset(v14, 0, sizeof(v14));
        sub_37778(v9, v5, (char *)v14);
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 36) >= (unsigned int)v5 )
      {
        v10 = *v9;
      }
      else
      {
        v10 = (char *)qvector_reserve((int)v9, *(void **)(a1 + 28), v5, 0x10u);
        *(_DWORD *)(a1 + 28) = v10;
        v8 = *(_DWORD *)(a1 + 32);
      }
      memset(&v10[16 * v8], 0, 16 * (v5 - v8));
      *(_DWORD *)(a1 + 32) = v5;
    }
    v7 = 0;
    *(_DWORD *)(a1 + 48) = 0;
    v4 = sub_37638(a1, v5);
    *(_DWORD *)(a1 + 52) = v4;
    if ( v4 )
    {
      v11 = __CFADD__(*v6, v4);
      *v6 += v4;
      *(_DWORD *)(a1 + 44) += v11;
      v3 = *(_DWORD *)(a1 + 48);
      goto LABEL_12;
    }
  }
  return v7;
}
