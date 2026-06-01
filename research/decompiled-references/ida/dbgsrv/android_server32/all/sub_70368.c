/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70368
// Address: 0x00070368

//----- (00070368) --------------------------------------------------------
int __fastcall sub_70368(char *s, _DWORD *a2)
{
  _DWORD *v4; // r7
  size_t v5; // r0
  size_t v6; // r6
  void *v7; // r1
  unsigned int v8; // r2
  void *v9; // r0
  int result; // r0
  unsigned int v11; // [sp+0h] [bp-4h]

  v4 = a2 + 18;
  if ( s && (v5 = strlen(s)) != 0 )
  {
    v6 = v5;
    v7 = (void *)a2[18];
    v8 = v5 + 1;
    if ( a2[20] < v5 + 1 )
    {
      v11 = v5 + 1;
      v9 = qvector_reserve((int)v4, v7, v8, 1u);
      v8 = v11;
      v7 = v9;
      *v4 = v9;
    }
    a2[19] = v8;
    memmove(v7, s, v6);
    *(_BYTE *)(a2[18] + v6) = 0;
  }
  else
  {
    a2[19] = 0;
  }
  result = qisdir(s);
  if ( !result )
  {
    result = qmkdir(s, 0x1FFu);
    if ( result )
      sub_1C9E4("Cannot create directory '%s' for bad requests", s);
  }
  return result;
}
