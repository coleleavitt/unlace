/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067900
// Address: 0x0000000100067900

//----- (0000000100067900) ----------------------------------------------------
__int64 __fastcall sub_100067900(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  char *v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // rax
  unsigned __int8 v11; // [rsp+Fh] [rbp-21h] BYREF

  v5 = *(_QWORD *)(a4 + 8);
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 < 0xFFFFFFFFFFFFFFFDLL )
    v6 = v5 + 3;
  if ( v5 >= v6 )
  {
    v11 = 0;
    sub_10001CE90(a4, v6, &v11);
  }
  else
  {
    v7 = *(char **)a4;
    if ( *(_QWORD *)(a4 + 16) >= v6 )
    {
      v8 = *(_QWORD *)(a4 + 8);
    }
    else
    {
      v7 = (char *)qvector_reserve(a4, *(void **)a4, v6, 1u);
      *(_QWORD *)a4 = v7;
      v8 = *(_QWORD *)(a4 + 8);
    }
    __bzero(&v7[v8], v6 - v8);
    *(_QWORD *)(a4 + 8) = v6;
  }
  v9 = *(_BYTE **)a4;
  v9[v5 + 2] = -2;
  *(_WORD *)&v9[v5] = -5172;
  return 0;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
