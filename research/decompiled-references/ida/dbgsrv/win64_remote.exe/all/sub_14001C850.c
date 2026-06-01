/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001C850
// Address: 0x000000014001C850

//----- (000000014001C850) ----------------------------------------------------
__int64 __fastcall sub_14001C850(_QWORD *a1, unsigned int a2, int a3, const char *a4)
{
  __int64 v6; // rsi
  const char *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  const char *v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // r8
  _QWORD *v14; // rsi
  void *v15; // rdi
  void *v16; // rdx
  unsigned __int64 v17; // r8
  void *Block[2]; // [rsp+28h] [rbp-20h] BYREF
  void *v19; // [rsp+38h] [rbp-10h]

  v6 = *(_QWORD *)(a1[1] + 16LL) & (a2 + a1[3]);
  v7 = (const char *)a1[5];
  if ( !v7 )
  {
    *(_OWORD *)Block = 0;
    v19 = nullptr;
    v11 = (const char *)a1[2];
    if ( *a4 )
      sub_140002FB0((__int64)Block, "%s_%s", v11, a4);
    else
      sub_140002FB0((__int64)Block, "%s_%u", v11, a3);
    v12 = a1[4];
    v13 = *(_QWORD *)(v12 + 8) + 1LL;
    if ( v13 > *(_QWORD *)(v12 + 16) )
      *(_QWORD *)v12 = sub_14005ABE0(a1[4], *(void **)v12, v13, 8u);
    *(_QWORD *)(*(_QWORD *)v12 + 8LL * (*(_QWORD *)(v12 + 8))++) = v6;
    v14 = (_QWORD *)a1[4];
    if ( v19 <= Block[1]
      || (v15 = Block[0]) != nullptr && Block[1] && (v15 = sub_14005AAF0(Block[0], (signed __int64)Block[1])) == nullptr )
    {
      v15 = Block[0];
    }
    v19 = nullptr;
    Block[1] = nullptr;
    Block[0] = nullptr;
    v16 = (void *)v14[3];
    v17 = v14[4] + 1LL;
    if ( v17 > v14[5] )
    {
      v16 = sub_14005ABE0((__int64)(v14 + 3), v16, v17, 8u);
      v14[3] = v16;
    }
    *((_QWORD *)v16 + v14[4]++) = v15;
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    return 0;
  }
  if ( strcmp(v7, a4) )
    return 0;
  v8 = a1[4];
  v9 = *(_QWORD *)(v8 + 8) + 1LL;
  if ( v9 > *(_QWORD *)(v8 + 16) )
    *(_QWORD *)v8 = sub_14005ABE0(a1[4], *(void **)v8, v9, 8u);
  *(_QWORD *)(*(_QWORD *)v8 + 8LL * (*(_QWORD *)(v8 + 8))++) = v6;
  return 1;
}
