/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DD8C
// Address: 0x0003DD8C

//----- (0003DD8C) --------------------------------------------------------
const char *__fastcall sub_3DD8C(int a1, int a2, const char *a3, int a4)
{
  int v8; // r0
  int (__fastcall *v9)(int, int, const char *, int); // r6
  int v10; // r4
  const char *result; // r0
  void *v12; // r6

  v8 = sub_3D59C();
  if ( v8 )
  {
    v9 = *(int (__fastcall **)(int, int, const char *, int))(v8 + 36);
    v10 = v8;
    if ( v9 )
    {
      result = (const char *)v9(a1, a2, a3, a4);
    }
    else
    {
      result = (const char *)a4;
      if ( a4 )
      {
        sub_188E0(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(const char **)(v10 + 12));
        result = nullptr;
      }
    }
    --*(_DWORD *)(v10 + 8);
  }
  else
  {
    v12 = *(void **)a4;
    if ( *(_DWORD *)(a4 + 8) <= 0x15u )
    {
      v12 = sub_78018(a4, *(void **)a4, 0x16u, 1u);
      *(_DWORD *)a4 = v12;
    }
    *(_DWORD *)(a4 + 4) = 22;
    qmemcpy(v12, "no extlang registered", 21);
    *(_BYTE *)(*(_DWORD *)a4 + 21) = 0;
    return sub_3D934(a1, a2, a3, (void **)a4);
  }
  return result;
}
// 3DDAE: conditional instruction was optimized away because r4.4!=0
