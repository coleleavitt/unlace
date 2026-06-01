/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_703E4
// Address: 0x000703E4

//----- (000703E4) --------------------------------------------------------
int __fastcall sub_703E4(const char *a1, _DWORD *a2)
{
  size_t v4; // r0
  size_t v5; // r6
  void *v6; // r1
  unsigned int v7; // r2
  void *v8; // r0
  int result; // r0
  unsigned int v10; // [sp+0h] [bp-4h]

  if ( !qisdir(a1) && qmkdir(a1, 0x1FFu) )
    sub_1C9E4("Cannot create directory '%s' for recording conversations into", a1);
  if ( a1 && (v4 = strlen(a1)) != 0 )
  {
    v5 = v4;
    v6 = (void *)a2[24];
    v7 = v4 + 1;
    if ( a2[26] < v4 + 1 )
    {
      v10 = v4 + 1;
      v8 = qvector_reserve((int)(a2 + 24), v6, v7, 1u);
      v7 = v10;
      v6 = v8;
      a2[24] = v8;
    }
    a2[25] = v7;
    memmove(v6, a1, v5);
    result = a2[24];
    *(_BYTE *)(result + v5) = 0;
  }
  else
  {
    a2[25] = 0;
    return 0;
  }
  return result;
}
