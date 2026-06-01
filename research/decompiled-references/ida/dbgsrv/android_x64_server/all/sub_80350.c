/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80350
// Address: 0x0000000000080350

//----- (0000000000080350) ----------------------------------------------------
_QWORD *__fastcall sub_80350(_QWORD **a1, _QWORD *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  void **v7; // rax
  _QWORD *v8; // rbx
  void **v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v15[1] = __readfsqword(0x28u);
  v7 = (void **)sub_80420(a1, a2, v15, &v14, a3);
  v8 = *v7;
  if ( !*v7 )
  {
    v9 = v7;
    v8 = operator new(0x58u);
    sub_80700((__int64)(v8 + 4), a4, a5, a6);
    v10 = v15[0];
    *(_OWORD *)v8 = 0;
    v8[2] = v10;
    *v9 = v8;
    v11 = (_QWORD *)**a1;
    if ( v11 )
    {
      *a1 = v11;
      v12 = (__int64 *)*v9;
    }
    else
    {
      v12 = v8;
    }
    sub_4A450(a1[1], v12);
    a1[2] = (_QWORD *)((char *)a1[2] + 1);
  }
  return v8;
}
