/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A4F0
// Address: 0x000000014003A4F0

//----- (000000014003A4F0) ----------------------------------------------------
_QWORD *__fastcall sub_14003A4F0(__int64 a1, const char *a2)
{
  _QWORD *v4; // rbp
  size_t v5; // rax
  void **v6; // r8
  void **v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  size_t v10; // rcx
  size_t i; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  _QWORD *v15; // rbp
  _QWORD *v16; // rdx
  void **v17; // rcx
  void **v18; // rax
  _QWORD *v19; // rcx
  void *Buf1[2]; // [rsp+30h] [rbp-58h] BYREF
  size_t Size; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 648);
  *(_OWORD *)Buf1 = 0;
  Size = 0;
  v23 = 0;
  v5 = strlen(a2);
  sub_140036210(Buf1, a2, v5);
  v6 = Buf1;
  v7 = (void **)Buf1[0];
  v8 = v23;
  if ( v23 > 0xF )
    v6 = (void **)Buf1[0];
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0;
  for ( i = Size; v10 < Size; ++v10 )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)v6 + v10) ^ (unsigned __int64)v9);
  v12 = v4[3];
  v13 = *(_QWORD **)(v12 + 16 * (v9 & v4[6]) + 8);
  v14 = (_QWORD *)v4[1];
  if ( v13 == v14 )
  {
LABEL_16:
    v13 = nullptr;
  }
  else
  {
    v15 = *(_QWORD **)(v12 + 16 * (v9 & v4[6]));
    while ( 1 )
    {
      v16 = v13 + 2;
      if ( v13[5] > 0xFu )
        v16 = (_QWORD *)*v16;
      v17 = Buf1;
      if ( v8 > 0xF )
        v17 = v7;
      if ( i == v13[4] && (!i || !memcmp(v17, v16, i)) )
        break;
      if ( v13 == v15 )
        goto LABEL_16;
      v13 = (_QWORD *)v13[1];
    }
  }
  if ( !v13 )
    v13 = v14;
  if ( v8 > 0xF )
  {
    v18 = v7;
    if ( v8 + 1 >= 0x1000 )
    {
      v7 = (void **)*(v7 - 1);
      if ( (unsigned __int64)((char *)v18 - (char *)v7 - 8) > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    j_j_free(v7);
  }
  v19 = v13 + 6;
  if ( v13 == *(_QWORD **)(*(_QWORD *)(a1 + 648) + 8LL) )
    return nullptr;
  return v19;
}
