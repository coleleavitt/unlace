/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3393C
// Address: 0x0003393C

//----- (0003393C) --------------------------------------------------------
int __fastcall sub_3393C(int a1, int a2, unsigned int *a3)
{
  unsigned int *v6; // r0
  int v7; // r7
  unsigned int v8; // r10
  unsigned int v9; // r3
  unsigned int v10; // r2
  int v11; // r6
  int v12; // r9
  unsigned int v13; // r5
  void *v14; // r1
  void *v15; // r0
  char v16; // r8
  int v17; // r5
  void *ptr; // [sp+8h] [bp-14h] BYREF
  unsigned int v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+10h] [bp-Ch]

  v6 = sub_326A0(a1, 1, ".gnu_debuglink");
  if ( !v6 )
    return 0;
  ptr = nullptr;
  v20 = 0;
  v21 = 0;
  sub_337BC(a1, (int)&ptr, (int)v6);
  if ( v20 <= 4 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v8 = v20 - 4;
    if ( a3 )
    {
      v9 = *(_DWORD *)((char *)ptr + v8);
      v10 = bswap32(v9);
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 132) + 393) == 2 )
        v9 = v10;
      *a3 = v9;
    }
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) < v8 )
        *(_DWORD *)a2 = sub_78018(a2, *(void **)a2, v8, 1u);
      v11 = 0;
      do
      {
        v15 = ptr;
        v16 = *((_BYTE *)ptr + v11);
        if ( !v16 )
          goto LABEL_20;
        v17 = *(_DWORD *)(a2 + 4);
        if ( v17 )
        {
          v12 = v17 - 1;
          v13 = v17 + 1;
          v14 = *(void **)a2;
          if ( *(_DWORD *)(a2 + 8) < v13 )
            goto LABEL_18;
        }
        else
        {
          v12 = 0;
          v13 = 2;
          v14 = *(void **)a2;
          if ( *(_DWORD *)(a2 + 8) < 2u )
          {
LABEL_18:
            v14 = sub_78018(a2, v14, v13, 1u);
            *(_DWORD *)a2 = v14;
          }
        }
        *(_DWORD *)(a2 + 4) = v13;
        ++v11;
        *((_BYTE *)v14 + v12) = v16;
        *(_BYTE *)(*(_DWORD *)a2 + v12 + 1) = 0;
      }
      while ( v11 != v8 );
    }
  }
  v15 = ptr;
LABEL_20:
  if ( v15 )
  {
    v20 = 0;
    sub_77F70(v15);
  }
  return v7;
}
