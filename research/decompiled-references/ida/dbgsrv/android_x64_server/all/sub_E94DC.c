/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E94DC
// Address: 0x00000000000E94DC

//----- (00000000000E94DC) ----------------------------------------------------
__int64 __fastcall sub_E94DC(__int64 a1, int (__fastcall *a2)(__int64, _QWORD, _QWORD), __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 i; // rbp
  int v8; // ebx
  _QWORD *v9; // rbp
  __int64 v10; // rax

  v5 = a3 + 16;
  v6 = *(_QWORD *)(a3 + 8);
  for ( i = v6 >> 1; ; sub_E943E(a1, a2, v5, i, v6) )
  {
    LODWORD(i) = i - 1;
    if ( (i & 0x80000000) != 0LL )
      break;
  }
  v8 = v6 - 1;
  v9 = (_QWORD *)(v5 + 8LL * v8);
  while ( v8 > 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = *v9;
    *v9-- = v10;
    sub_E943E(a1, a2, v5, 0, v8--);
  }
  return a4;
}
