/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400506C0
// Address: 0x00000001400506C0

//----- (00000001400506C0) ----------------------------------------------------
_BYTE *__fastcall sub_1400506C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  _BYTE *v9; // rbp
  size_t v10; // rbp
  size_t v11; // rdi
  unsigned __int64 v12; // rdx
  _BYTE Src[5]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[3]; // [rsp+25h] [rbp-33h] BYREF

  v2 = *(int *)(a2 + 8);
  result = sub_140002D20(a1, *(_DWORD *)(a2 + 8));
  v6 = v2;
  if ( (int)v2 > 0 )
  {
    v7 = 0;
    do
    {
      v8 = v7 + *(_QWORD *)a2;
      sub_140002DC0(a1, *(_QWORD *)v8 + 1LL);
      sub_140002DC0(a1, *(_QWORD *)(v8 + 8) + 1LL);
      sub_140002DC0(a1, *(_QWORD *)(v8 + 16) + 1LL);
      v9 = sub_14005B4D0(Src, (unsigned __int64)v14, *(unsigned __int8 *)(v8 + 24));
      result = Src;
      v10 = v9 - Src;
      if ( v10 )
      {
        v11 = a1[1];
        v12 = v11 + v10;
        if ( v11 + v10 < v11 )
          v12 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)a1, v12);
        result = memcpy((void *)(v11 + *a1), Src, v10);
      }
      v7 += 32;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
