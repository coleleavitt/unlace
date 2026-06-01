/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400085F0
// Address: 0x00000001400085F0

//----- (00000001400085F0) ----------------------------------------------------
__int64 __fastcall sub_1400085F0(__int64 a1, __int64 a2, const char *a3)
{
  void *v6; // rdi
  size_t v7; // rbp
  void *v8; // rax
  unsigned __int8 *v9; // rdx
  unsigned int v10; // ebx
  void *Block; // [rsp+30h] [rbp-48h] BYREF
  size_t v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  void *v15[3]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = nullptr;
  if ( a3 )
  {
    Block = nullptr;
    v13 = 0;
    v14 = 0;
    v7 = strlen(a3);
    v8 = nullptr;
    if ( v7 != -1 )
    {
      v8 = sub_14005ABE0((__int64)&Block, nullptr, v7 + 1, 1u);
      Block = v8;
    }
    v13 = v7 + 1;
    memcpy(v8, a3, v7);
    *((_BYTE *)Block + v7) = 0;
    v9 = (unsigned __int8 *)word_1400CAE32;
    if ( v13 )
      v9 = (unsigned __int8 *)Block;
    sub_140061F60((__int64)v15, v9, -1);
    v6 = v15[0];
    if ( Block )
    {
      v13 = 0;
      j_free(Block);
      Block = nullptr;
      v14 = 0;
    }
  }
  v16 = 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, __int64, __int64 *))(**(_QWORD **)(a1 + 48) + 168LL))(
          *(_QWORD *)(a1 + 48),
          0,
          v6,
          6,
          &v16);
  if ( !v10 )
    sub_140004260(a1, a2, v16);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15[0] )
  {
    v15[1] = nullptr;
    j_free(v15[0]);
  }
  return v10;
}
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
