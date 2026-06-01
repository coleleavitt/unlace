/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BDF8
// Address: 0x0006BDF8

//----- (0006BDF8) --------------------------------------------------------
int __fastcall sub_6BDF8(const void *a1, _DWORD *a2)
{
  _DWORD *v3; // r7
  size_t v5; // r0
  size_t v6; // r6
  int v7; // r2
  void *v8; // r1
  unsigned int v9; // r7
  int result; // r0
  _DWORD *v11; // [sp+0h] [bp-4h]

  v3 = a2 + 1;
  if ( a1 && (v5 = strlen((const char *)a1)) != 0 )
  {
    v6 = v5;
    v7 = (int)v3;
    v8 = (void *)a2[1];
    v9 = v5 + 1;
    if ( a2[3] < v5 + 1 )
    {
      v11 = (_DWORD *)v7;
      v8 = qvector_reserve(v7, v8, v9, 1u);
      *v11 = v8;
    }
    a2[2] = v9;
    memmove(v8, a1, v6);
    result = a2[1];
    *(_BYTE *)(result + v6) = 0;
  }
  else
  {
    a2[2] = 0;
    return 0;
  }
  return result;
}
