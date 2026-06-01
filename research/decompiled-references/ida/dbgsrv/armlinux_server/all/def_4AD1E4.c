/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: def_4AD1E4
// Address: 0x00000000004AD120

//----- (00000000004AD120) ----------------------------------------------------
__int64 __fastcall def_4AD1E4(__int64 a1, unsigned int a2, unsigned int *a3)
{
  int v5; // w5
  __int64 result; // x0
  __int64 v7; // x3
  unsigned int v8; // w0
  unsigned int *v9; // [xsp+20h] [xbp+20h] BYREF
  __int64 v10; // [xsp+28h] [xbp+28h]

  if ( a3 && (v5 = a3[1], v5 <= 1) )
  {
    v7 = *(_QWORD *)(a1 + 328);
    a3[1] = v5 + 1;
    *(_QWORD *)(a1 + 328) = &v9;
    v9 = a3;
    v10 = v7;
    sub_4A9488(a1, a2, a3);
    v8 = a3[1];
    *(_QWORD *)(a1 + 328) = v10;
    result = v8 - 1;
    a3[1] = result;
  }
  else
  {
    *(_DWORD *)(a1 + 304) = 1;
    return 1;
  }
  return result;
}
