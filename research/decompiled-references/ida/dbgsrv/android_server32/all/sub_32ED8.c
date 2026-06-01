/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32ED8
// Address: 0x00032ED8

//----- (00032ED8) --------------------------------------------------------
int __fastcall sub_32ED8(int a1, _DWORD *a2, int a3, unsigned int a4, int a5)
{
  _DWORD *v5; // r7
  int result; // r0
  int v8; // r4
  void *v9; // r0
  size_t v10; // r7
  unsigned int v11; // r5
  char v12; // r4
  void **v13; // r1
  int v14; // r0
  int v15; // r6
  unsigned int v16; // r7
  void *v17; // r1
  void *v18; // r0
  unsigned int v19; // [sp+Ch] [bp-1Ch]
  int v20; // [sp+10h] [bp-18h]
  int v22; // [sp+1Ch] [bp-Ch]
  _BYTE v23[4]; // [sp+20h] [bp-8h] BYREF

  v5 = a2;
  result = 0;
  if ( ~a3 >= a4 && a4 + a3 <= a2[1] )
  {
    *(_DWORD *)(a1 + 4) = 0;
    v20 = a3;
    if ( !a5 )
    {
      v23[0] = 0;
      v10 = a4;
      sub_37884((void **)a1, a4 + 1, v23);
      *(_BYTE *)(*(_DWORD *)a1 + v10) = 0;
      qmemcpy(*(void **)a1, (const void *)(*a2 + v20), v10);
      return 1;
    }
    v19 = a4;
    if ( *(_DWORD *)(a1 + 8) >= a4 )
    {
      if ( !a4 )
        return 1;
    }
    else
    {
      v8 = a3;
      v9 = qvector_reserve(a1, *(void **)a1, a4, 1u);
      a3 = v8;
      a4 = v19;
      *(_DWORD *)a1 = v9;
    }
    v11 = 0;
    do
    {
      v12 = *(_BYTE *)(*v5 + a3 + v11);
      if ( !v12 )
        break;
      v13 = (void **)a1;
      v14 = *(_DWORD *)(a1 + 4);
      v15 = v14 - 1;
      if ( !v14 )
        v15 = 0;
      v22 = v15;
      v16 = v15 + 2;
      a1 = (int)v13;
      v17 = *v13;
      if ( *(_DWORD *)(a1 + 8) < v16 )
      {
        v18 = qvector_reserve(a1, v17, v16, 1u);
        a3 = v20;
        a4 = v19;
        v17 = v18;
        *(_DWORD *)a1 = v18;
      }
      *(_DWORD *)(a1 + 4) = v16;
      *((_BYTE *)v17 + v22) = v12;
      *(_BYTE *)(*(_DWORD *)a1 + v22 + 1) = 0;
      ++v11;
      v5 = a2;
    }
    while ( v11 < a4 );
    return 1;
  }
  return result;
}
