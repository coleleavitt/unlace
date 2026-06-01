/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003B6A0
// Address: 0x000000014003B6A0

//----- (000000014003B6A0) ----------------------------------------------------
void __fastcall sub_14003B6A0(__int64 a1, const char *a2)
{
  _QWORD *v4; // r14
  size_t v5; // rax
  void **v6; // r8
  void **v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  size_t v11; // rcx
  size_t i; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  _QWORD *v16; // r14
  _QWORD *v17; // rdx
  void **v18; // rcx
  void **v19; // rax
  _QWORD *v20; // r10
  _QWORD *v21; // r9
  unsigned __int64 v22; // r8
  _QWORD *v23; // rdx
  unsigned __int64 j; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  void *v28; // rcx
  void *Buf1[2]; // [rsp+30h] [rbp-68h] BYREF
  size_t Size; // [rsp+40h] [rbp-58h]
  unsigned __int64 v31; // [rsp+48h] [rbp-50h]

  if ( *(_BYTE *)(a1 + 720) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(303);
  }
  v4 = *(_QWORD **)(a1 + 648);
  *(_OWORD *)Buf1 = 0;
  Size = 0;
  v31 = 0;
  v5 = strlen(a2);
  sub_140036210(Buf1, a2, v5);
  v6 = Buf1;
  v7 = (void **)Buf1[0];
  v8 = v31;
  if ( v31 > 0xF )
    v6 = (void **)Buf1[0];
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0xCBF29CE484222325uLL;
  v11 = 0;
  for ( i = Size; v11 < Size; ++v11 )
    v10 = 0x100000001B3LL * (*((unsigned __int8 *)v6 + v11) ^ (unsigned __int64)v10);
  v13 = v4[3];
  v14 = *(_QWORD **)(v13 + 16 * (v10 & v4[6]) + 8);
  v15 = (_QWORD *)v4[1];
  if ( v14 == v15 )
  {
LABEL_18:
    v14 = nullptr;
  }
  else
  {
    v16 = *(_QWORD **)(v13 + 16 * (v10 & v4[6]));
    while ( 1 )
    {
      v17 = v14 + 2;
      if ( v14[5] > 0xFu )
        v17 = (_QWORD *)*v17;
      v18 = Buf1;
      if ( v8 > 0xF )
        v18 = v7;
      if ( i == v14[4] && (!i || !memcmp(v18, v17, i)) )
        break;
      if ( v14 == v16 )
        goto LABEL_18;
      v14 = (_QWORD *)v14[1];
    }
  }
  if ( !v14 )
    v14 = v15;
  if ( v8 > 0xF )
  {
    v19 = v7;
    if ( v8 + 1 >= 0x1000 )
    {
      v7 = (void **)*(v7 - 1);
      if ( (unsigned __int64)((char *)v19 - (char *)v7 - 8) > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    j_j_free(v7);
  }
  v20 = *(_QWORD **)(a1 + 648);
  v21 = (_QWORD *)v20[1];
  if ( v14 != v21 )
  {
    v22 = v14[4];
    v23 = v14 + 2;
    if ( v14[5] > 0xFu )
      v23 = (_QWORD *)v14[2];
    for ( j = 0; j < v22; ++j )
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)v23 + j) ^ (unsigned __int64)v9);
    v25 = (_QWORD *)(v20[3] + 16 * (v9 & v20[6]));
    v26 = (_QWORD *)*v25;
    if ( (_QWORD *)v25[1] == v14 )
    {
      if ( v26 == v14 )
        *v25 = v21;
      else
        v21 = (_QWORD *)v14[1];
      v25[1] = v21;
    }
    else if ( v26 == v14 )
    {
      *v25 = *v14;
    }
    v27 = *v14;
    --v20[2];
    *(_QWORD *)v14[1] = v27;
    *(_QWORD *)(v27 + 8) = v14[1];
    v28 = (void *)v14[6];
    if ( v28 )
    {
      v14[7] = 0;
      j_free(v28);
      v14[6] = 0;
      v14[8] = 0;
    }
    sub_140037230((__int64)(v14 + 2));
    j_j_free(v14);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
