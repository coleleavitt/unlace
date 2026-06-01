/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461DB8
// Address: 0x0000000000461DB8

//----- (0000000000461DB8) ----------------------------------------------------
__int64 __fastcall sub_461DB8(__int64 *a1, __int64 a2)
{
  __int64 v4; // x20
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // x3
  unsigned int i; // w22
  unsigned int v7; // w24
  void *v9; // x0
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, int *, _QWORD); // x21
  unsigned int v11; // w0
  int v12; // w0
  int v13; // w1
  int v14; // [xsp+48h] [xbp-28h] BYREF
  void *ptr; // [xsp+50h] [xbp-20h]
  __int64 v16; // [xsp+58h] [xbp-18h]
  __int64 v17; // [xsp+60h] [xbp-10h]

  v4 = sub_461B70();
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 488LL);
  if ( !a1[6] )
    goto LABEL_5;
  for ( i = v5(v4, a1[5], 0); (i & 0x80000000) != 0; i = v5(v4, (__int64)&qword_4B2D48, 0) )
  {
    if ( !under_debugger )
      sub_492270(30055);
    __break(0x3E8u);
LABEL_5:
    ;
  }
  v7 = sub_4498D8(a1);
  if ( !v7 )
  {
    v9 = (void *)a1[1];
    v14 = -2;
    ptr = v9;
    v16 = 0;
    v17 = 0;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v4 + 232LL);
    v11 = sub_461B80();
    v12 = v10(v4, v11, i, &v14, 0);
    v13 = v14;
    *(_QWORD *)(a2 + 8) = v12;
    if ( v13 >= -1 )
    {
      if ( ptr )
      {
        v16 = 0;
        j__free(ptr);
      }
    }
  }
  return v7;
}
// 461DB8: could not find valid save-restore pair for x24
// 461E3C: variable 'v5' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
