/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E943E
// Address: 0x00000000000E943E

//----- (00000000000E943E) ----------------------------------------------------
void __fastcall sub_E943E(__int64 a1, int (__fastcall *a2)(__int64, _QWORD, _QWORD), __int64 a3, int a4, int a5)
{
  __int64 v7; // rbp
  int i; // ebx
  _QWORD *v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // [rsp+8h] [rbp-40h]

  v7 = a4;
  for ( i = 2 * a4 + 1; i < a5; i = 2 * i + 1 )
  {
    if ( i + 1 < a5 && a2(a1, *(_QWORD *)(a3 + 8 * (i + 1LL) - 8), *(_QWORD *)(a3 + 8 * (i + 1LL))) < 0 )
      ++i;
    v9 = (_QWORD *)(a3 + 8 * v7);
    v11 = (_QWORD *)(a3 + 8LL * i);
    if ( a2(a1, *v9, *v11) >= 0 )
      break;
    v10 = *v9;
    *v9 = *v11;
    v7 = i;
    *v11 = v10;
  }
}
