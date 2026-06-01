/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55A34
// Address: 0x0000000000055A34

//----- (0000000000055A34) ----------------------------------------------------
unsigned int *__fastcall sub_55A34(__int64 a1, int a2, const char *a3)
{
  __int64 v3; // x8
  unsigned int *v5; // x9
  __int64 *v8; // x23
  unsigned int *v9; // x19
  const char *v10; // x0
  void *ptr; // [xsp+0h] [xbp-60h] BYREF
  __int64 v13; // [xsp+8h] [xbp-58h]
  __int64 v14; // [xsp+10h] [xbp-50h]
  __int64 v15; // [xsp+18h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_BYTE *)(a1 + 168) )
  {
    if ( !under_debugger )
      interr(20099);
    __break(1u);
    sub_39134((void *)a1);
  }
  v13 = 0;
  v14 = 0;
  ptr = nullptr;
  v3 = *(_QWORD *)(a1 + 40);
  if ( !(v3 << 6) )
    return nullptr;
  v5 = *(unsigned int **)(a1 + 32);
  v8 = (__int64 *)(a1 + 176);
  v9 = v5;
  do
  {
    if ( v9[1] == a2 )
    {
      v13 = 0;
      if ( *v8 >= 1
        && *(_QWORD *)(a1 + 192)
        && (sub_55D60(*(_QWORD *)(a1 + 160), (__int64)&ptr, (__int64 *)(a1 + 176), *v9), v13) )
      {
        v10 = (const char *)ptr;
      }
      else
      {
        v10 = &byte_F154B;
      }
      if ( !strcmp(v10, a3) )
        goto LABEL_14;
      v5 = *(unsigned int **)(a1 + 32);
      v3 = *(_QWORD *)(a1 + 40);
    }
    v9 += 16;
  }
  while ( v9 != &v5[16 * v3] );
  v9 = nullptr;
LABEL_14:
  if ( ptr )
  {
    v13 = 0;
    qfree(ptr);
    ptr = nullptr;
    v14 = 0;
  }
  return v9;
}
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
