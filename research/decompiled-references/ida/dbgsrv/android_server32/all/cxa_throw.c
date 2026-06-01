/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_throw
// Address: 0x0008FFBC

//----- (0008FFBC) --------------------------------------------------------
void __noreturn _cxa_throw(void *a1, struct type_info *lptinfo, void (*a3)(void *))
{
  int v6; // r5
  void *terminate; // r0
  int v8; // r1

  v6 = ((int (*)(void))_cxa_get_globals)();
  *((_DWORD *)a1 - 29) = std::get_unexpected();
  terminate = std::get_terminate();
  *((_DWORD *)a1 - 32) = 1;
  a1 = (char *)a1 - 128;
  *((_DWORD *)a1 + 4) = terminate;
  *((_DWORD *)a1 + 1) = lptinfo;
  *((_DWORD *)a1 + 2) = a3;
  *((_DWORD *)a1 + 10) = 1126902528;
  *((_DWORD *)a1 + 11) = 1129074247;
  v8 = *(_DWORD *)(v6 + 4) + 1;
  *(_DWORD *)(v6 + 4) = v8;
  *((_DWORD *)a1 + 12) = sub_90018;
  Unwind_RaiseException((int *)a1 + 10, v8, (int)sub_90018, 1);
  sub_90030((int)a1);
}
