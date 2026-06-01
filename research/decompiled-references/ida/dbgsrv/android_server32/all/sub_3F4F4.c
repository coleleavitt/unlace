/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F4F4
// Address: 0x0003F4F4

//----- (0003F4F4) --------------------------------------------------------
bool __fastcall sub_3F4F4(unsigned __int8 *a1, int a2, const char *a3, int a4, int a5, int a6)
{
  unsigned int v7; // r7
  size_t v8; // r2
  const void *v9; // r1
  void *v10; // r0
  size_t v11; // r7
  unsigned int v12; // r5
  void *v14; // [sp+10h] [bp-18h]
  void *v15; // [sp+18h] [bp-10h] BYREF
  unsigned int v16; // [sp+1Ch] [bp-Ch]
  int v17; // [sp+20h] [bp-8h]

  sub_3F5C0(&v15, a1, a3, a4, a5, a6);
  if ( a2 && &v15 != (void **)a2 )
  {
    v7 = v16;
    v8 = v16 - 1;
    if ( v16 < 2 )
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
    else
    {
      v9 = v15;
      if ( *(_DWORD *)(a2 + 8) >= v16 )
      {
        v10 = *(void **)a2;
      }
      else
      {
        v14 = v15;
        v10 = qvector_reserve(a2, *(void **)a2, v16, 1u);
        *(_DWORD *)a2 = v10;
        v8 = v7 - 1;
        v9 = v14;
      }
      *(_DWORD *)(a2 + 4) = v7;
      v11 = v8;
      memmove(v10, v9, v8);
      *(_BYTE *)(*(_DWORD *)a2 + v11) = 0;
    }
  }
  v12 = v16;
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
    v17 = 0;
    v15 = nullptr;
  }
  return v12 < 2;
}
