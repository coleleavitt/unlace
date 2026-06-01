/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400526A0
// Address: 0x00000001400526A0

//----- (00000001400526A0) ----------------------------------------------------
__int64 __fastcall sub_1400526A0(__int64 a1, _QWORD *a2, void *a3, unsigned __int64 a4)
{
  void *v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // eax
  size_t v9; // rbx
  void *v11; // rdx
  __int64 (__fastcall *v12)(__int64, _QWORD, void *, size_t, void **, size_t *); // rax
  unsigned int v13; // ebx
  size_t v14; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-28h]
  void *Block; // [rsp+70h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  Src = a3;
  v16 = a4;
  v6 = nullptr;
  v7 = sub_14005B690((unsigned __int64 *)&Src, a4);
  v8 = sub_14005B690((unsigned __int64 *)&Src, v16);
  v9 = v8;
  if ( v8 )
  {
    v6 = sub_14005AA50(v8);
    if ( !v6 )
      return 2;
  }
  v11 = Src;
  if ( (char *)Src + v9 < Src )
    return 1;
  if ( (unsigned __int64)Src + v9 > v16 )
    return 1;
  Src = (char *)Src + v9;
  if ( !memcpy(v6, v11, v9) )
    return 1;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, size_t, void **, size_t *))(a1 + 40);
  Block = nullptr;
  v14 = 0;
  v13 = v12(a1, v7, v6, v9, &Block, &v14);
  j_free(v6);
  sub_140002D20(a2, v13);
  sub_1400067E0(a2, Block, v14);
  j_free(Block);
  return 0;
}
