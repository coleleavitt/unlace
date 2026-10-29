/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3717C
// Address: 0x0003717C

//----- (0003717C) --------------------------------------------------------
int __fastcall sub_3717C(int a1, const char *a2, int a3)
{
  unsigned int v5; // r0
  int v6; // r1
  int v7; // r5
  int v8; // r6
  unsigned int v9; // r7
  _BYTE *v10; // r0
  const char *v12; // [sp+4h] [bp-14h]

  v5 = qvsnprintf(nullptr, 0, a2, a3);
  if ( v5 )
  {
    v12 = a2;
    v6 = *(_DWORD *)(a1 + 4);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    v8 = v5 + 1;
    v9 = v5 + 1 + v7;
    if ( *(_DWORD *)(a1 + 8) >= v9 )
    {
      v10 = *(_BYTE **)a1;
    }
    else
    {
      v10 = qvector_reserve(a1, *(void **)a1, v9, 1u);
      *(_DWORD *)a1 = v10;
    }
    *(_DWORD *)(a1 + 4) = v9;
    qvsnprintf(&v10[v7], v8, v12, a3);
  }
  return a1;
}
