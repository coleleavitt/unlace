/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414290
// Address: 0x0000000000414290

//----- (0000000000414290) ----------------------------------------------------
__int64 __fastcall sub_414290(__int64 *a1, _QWORD *a2)
{
  void (*v2)(void); // rax
  _DWORD *v3; // r12

  v2 = *(void (**)(void))(*a1 + 112);
  if ( (char *)v2 == (char *)sub_414230 )
  {
    v3 = (_DWORD *)a1[166];
    if ( v3 )
    {
      if ( v3[56] == 1 )
        sub_40E9C0(a1[166]);
      operator delete(v3, 0xE8u);
    }
    a1[166] = 0;
    sub_413C90(a1);
    sub_46D440((__int64)a1);
  }
  else
  {
    v2();
  }
  if ( a2 )
    *a2 = 0x500000000LL;
  sub_412500(a1);
  return 1;
}
