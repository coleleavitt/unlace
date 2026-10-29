/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BC34
// Address: 0x0003BC34

//----- (0003BC34) --------------------------------------------------------
int __fastcall sub_3BC34(_DWORD *a1, const char *a2)
{
  void **v3; // r5
  int v4; // r0
  size_t v5; // r6
  unsigned int v6; // r7
  void *v7; // r0
  int v8; // r2
  int *v9; // r5
  int v10; // r6
  int *v11; // r0
  int result; // r0

  v3 = (void **)(a1 + 6);
  sub_1DA58((int)(a1 + 6), "%s.%s", a2, a2);
  sub_3B6CC((int)a1);
  sub_3BB10(a1);
  v4 = _strlen_chk("this", 5);
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 1;
    if ( a1[8] >= (unsigned int)(v4 + 1) )
    {
      v7 = *v3;
    }
    else
    {
      v7 = qvector_reserve((int)v3, *v3, v6, 1u);
      *v3 = v7;
    }
    a1[7] = v6;
    memmove(v7, "this", v5);
    *(_BYTE *)(a1[6] + v5) = 0;
  }
  else
  {
    a1[7] = 0;
  }
  sub_3B6CC((int)a1);
  v8 = a1[49];
  v9 = *(int **)(a1[48] + 4 * (v8 - 1));
  if ( v8 )
    a1[49] = v8 - 1;
  v10 = sub_3CA3C((int)a1, v9, 0, 0);
  if ( v9 )
  {
    v11 = sub_3B850(v9);
    operator delete(v11);
  }
  result = set_qerrno(v10);
  if ( !result )
    return sub_3BCF8((int)a1);
  return result;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
