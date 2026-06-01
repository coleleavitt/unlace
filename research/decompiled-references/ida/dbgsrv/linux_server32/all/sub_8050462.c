/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8050462
// Address: 0x08050462

//----- (08050462) --------------------------------------------------------
void __usercall __noreturn sub_8050462(int a1@<ebp>, _DWORD *a2@<esi>)
{
  void *v2; // eax
  void *v3; // eax

  sub_80C6090(a2 + 50);
  sub_80C6090(a2 + 39);
  a2[25] = dword_811CDF8;
  v2 = (void *)a2[35];
  if ( v2 )
  {
    a2[36] = 0;
    sub_80CF780(v2);
  }
  v3 = (void *)a2[27];
  if ( v3 )
  {
    a2[28] = 0;
    sub_80CF780(v3);
  }
  sub_80BA2D0(a2);
  _Unwind_Resume(*(_DWORD *)(a1 - 28));
}
// 804BC60: using guessed type void __cdecl __noreturn _Unwind_Resume(_DWORD);
// 811CDF8: using guessed type int dword_811CDF8[2];
