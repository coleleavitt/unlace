/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003D450
// Address: 0x000000014003D450

//----- (000000014003D450) ----------------------------------------------------
__int64 __fastcall sub_14003D450(_QWORD *a1, char a2, __int64 a3)
{
  const char *v6; // rbx
  size_t v7; // rax
  void **v8; // r8
  void **v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  size_t v12; // rcx
  size_t i; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  _QWORD *v17; // rdx
  void **v18; // rcx
  void **v19; // rax
  __int16 v20; // ax
  _BYTE v21[8]; // [rsp+30h] [rbp-58h] BYREF
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v24; // [rsp+50h] [rbp-38h]

  if ( !a2 )
    sub_140039B20((__int64)a1, a3);
  if ( sub_14003DEB0((__int64)a1, a3) )
    return 0;
  if ( (unsigned int)sub_140039740((__int64)a1, a3, v21) )
    return 0xFFFFFFFFLL;
  if ( v21[0] != 1 )
  {
    if ( v21[0] != 2 )
    {
      v6 = Str1;
      if ( *(_QWORD *)(a3 + 8) )
        v6 = *(const char **)a3;
      *(_OWORD *)Buf1 = 0;
      Size = 0;
      v24 = 0;
      v7 = strlen(v6);
      sub_140036210(Buf1, v6, v7);
      v8 = Buf1;
      v9 = (void **)Buf1[0];
      v10 = v24;
      if ( v24 > 0xF )
        v8 = (void **)Buf1[0];
      v11 = 0xCBF29CE484222325uLL;
      v12 = 0;
      for ( i = Size; v12 < Size; ++v12 )
        v11 = 0x100000001B3LL * (*((unsigned __int8 *)v8 + v12) ^ (unsigned __int64)v11);
      v14 = a1[14];
      v15 = *(_QWORD *)(v14 + 16 * (v11 & a1[17]) + 8);
      if ( v15 == a1[12] )
      {
LABEL_25:
        v15 = 0;
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 16 * (v11 & a1[17]));
        while ( 1 )
        {
          v17 = (_QWORD *)(v15 + 16);
          if ( *(_QWORD *)(v15 + 40) > 0xFu )
            v17 = (_QWORD *)*v17;
          v18 = Buf1;
          if ( v10 > 0xF )
            v18 = v9;
          if ( i == *(_QWORD *)(v15 + 32) && (!i || !memcmp(v18, v17, i)) )
            break;
          if ( v15 == v16 )
            goto LABEL_25;
          v15 = *(_QWORD *)(v15 + 8);
        }
      }
      if ( !v15 )
        v15 = a1[12];
      if ( v10 > 0xF )
      {
        v19 = v9;
        if ( v10 + 1 >= 0x1000 )
        {
          v9 = (void **)*(v9 - 1);
          if ( (unsigned __int64)((char *)v19 - (char *)v9 - 8) > 0x1F )
            invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        }
        j_j_free(v9);
      }
      if ( v15 == a1[12] )
        v20 = 2;
      else
        v20 = *(_WORD *)(v15 + 48);
      *(_WORD *)(a3 + 24) = v20;
    }
    return 0;
  }
  return 1;
}
