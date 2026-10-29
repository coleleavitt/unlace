/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E4A0
// Address: 0x000000000045E4A0

//----- (000000000045E4A0) ----------------------------------------------------
__int64 __fastcall sub_45E4A0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  _QWORD *v4; // x21
  __int64 v7; // x0
  __int64 v8; // x19
  __int64 result; // x0
  __int64 (*v10)(); // x3
  int *v11; // x0

  v4 = a1 + 77;
  v7 = sub_45DE48(a1, a2, 1);
  if ( (_QWORD *)v7 == v4 )
    return 0;
  v8 = v7;
  result = 0;
  if ( *(_QWORD *)(v8 + 40) == a2 && *(_DWORD *)(v8 + 76) == a3 )
  {
    v10 = *(__int64 (**)())(*a1 + 344LL);
    if ( v10 != sub_407140 )
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v10)(a1, v8, 0);
    v11 = sub_49FAC0((int *)v8, v4);
    j__free_0(v11);
    --a1[81];
    return 1;
  }
  return result;
}
