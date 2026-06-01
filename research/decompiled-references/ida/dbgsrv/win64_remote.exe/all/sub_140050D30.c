/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140050D30
// Address: 0x0000000140050D30

//----- (0000000140050D30) ----------------------------------------------------
_BYTE *__fastcall sub_140050D30(_QWORD *a1, __int64 a2, char a3)
{
  _BYTE *result; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdi
  size_t v10; // rbp
  size_t v11; // rbx
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rbp
  size_t v14; // rbp
  size_t v15; // rbx
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rbp
  size_t v18; // rbp
  size_t v19; // rbx
  unsigned __int64 v20; // rdx
  size_t v21; // rbp
  const void *v22; // rdi
  size_t v23; // rbx
  unsigned __int64 v24; // rdx
  _BYTE Src[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v26[3]; // [rsp+25h] [rbp-53h] BYREF
  _BYTE v27[5]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v28[3]; // [rsp+2Dh] [rbp-4Bh] BYREF
  _BYTE v29[5]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v30[3]; // [rsp+35h] [rbp-43h] BYREF

  result = sub_140002D20(a1, *(_DWORD *)(a2 + 8));
  v7 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v8 = 0;
    do
    {
      v9 = v8 + *(_QWORD *)a2;
      v10 = sub_14005B4D0(Src, (unsigned __int64)v26, *(_DWORD *)v9) - Src;
      if ( v10 )
      {
        v11 = a1[1];
        v12 = v11 + v10;
        if ( v11 + v10 < v11 )
          v12 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)a1, v12);
        memcpy((void *)(v11 + *a1), Src, v10);
      }
      v13 = sub_14005B4D0(v27, (unsigned __int64)v28, *(_DWORD *)(v9 + 16));
      result = v27;
      v14 = v13 - v27;
      if ( v14 )
      {
        v15 = a1[1];
        v16 = v15 + v14;
        if ( v15 + v14 < v15 )
          v16 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)a1, v16);
        result = memcpy((void *)(v15 + *a1), v27, v14);
      }
      if ( a3 )
      {
        v17 = sub_14005B4D0(v29, (unsigned __int64)v30, *(_DWORD *)(v9 + 4));
        result = v29;
        v18 = v17 - v29;
        if ( v18 )
        {
          v19 = a1[1];
          v20 = v19 + v18;
          if ( v19 + v18 < v19 )
            v20 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v20);
          result = memcpy((void *)(v19 + *a1), v29, v18);
        }
        v21 = *(_QWORD *)(v9 + 16);
        v22 = *(const void **)(v9 + 8);
        if ( v21 )
        {
          v23 = a1[1];
          v24 = v23 + v21;
          if ( v23 + v21 < v23 )
            v24 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v24);
          result = memcpy((void *)(v23 + *a1), v22, v21);
        }
      }
      ++v7;
      v8 += 32;
    }
    while ( v7 < *(_QWORD *)(a2 + 8) );
  }
  return result;
}
