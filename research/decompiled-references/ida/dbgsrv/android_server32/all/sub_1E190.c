/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E190
// Address: 0x0001E190

//----- (0001E190) --------------------------------------------------------
int __fastcall sub_1E190(_DWORD *a1, int a2)
{
  _DWORD *v3; // r2
  _DWORD *v4; // r0
  _DWORD *v6; // r1
  int v7; // r3
  _DWORD *v8; // r6
  unsigned int *v9; // r7
  void **v10; // r6
  unsigned int v11; // r1
  void *v12; // r0
  int result; // r0

  v3 = (_DWORD *)a1[229];
  v4 = a1 + 229;
  if ( !v3 )
    goto LABEL_18;
  v6 = v4;
  do
  {
    v7 = v3[4];
    if ( v7 >= a2 )
      v6 = v3;
    v8 = v3 + 1;
    if ( v7 >= a2 )
      v8 = v3;
    v3 = (_DWORD *)*v8;
  }
  while ( *v8 );
  if ( v6 == v4 || v6[4] > a2 )
  {
LABEL_18:
    if ( !under_debugger )
      interr(30064);
    __debugbreak();
  }
  if ( *((_BYTE *)v6 + 45) )
    --a1[254];
  sub_277B4((int)(a1 + 228), v6);
  v9 = a1 + 232;
  v10 = (void **)(a1 + 231);
  v11 = a1[232];
  if ( v11 >= 0xA )
  {
    memmove(*v10, (char *)*v10 + 4, ((unsigned int)*v10 + 4 * v11 + -4 - (_DWORD)*v10) & 0xFFFFFFFC);
    v11 = *v9 - 1;
    *v9 = v11;
  }
  if ( a1[233] >= v11 + 1 )
  {
    v12 = *v10;
  }
  else
  {
    v12 = qvector_reserve((int)(a1 + 231), *v10, v11 + 1, 4u);
    *v10 = v12;
    v11 = *v9;
  }
  *((_DWORD *)v12 + v11) = a2;
  result = *v9 + 1;
  *v9 = result;
  return result;
}
// E0550: using guessed type char under_debugger;
