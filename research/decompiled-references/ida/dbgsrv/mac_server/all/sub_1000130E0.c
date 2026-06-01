/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000130E0
// Address: 0x00000001000130E0

//----- (00000001000130E0) ----------------------------------------------------
int *__fastcall sub_1000130E0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax
  int *result; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rbx

  v2 = 0;
  v3 = a1[2];
  v4 = v3 == 0;
  v5 = v3 - 1;
  if ( !v4 )
    v2 = v5;
  result = &dword_10008FEDC;
  if ( v2 > a2 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      v8 = (_BYTE *)(a2 + a1[1]);
      qlgetz(v7, a1[5] + a2, v8, a1[2] - a2);
      return (int *)v8;
    }
  }
  return result;
}
// 10008FEDC: using guessed type int dword_10008FEDC;
