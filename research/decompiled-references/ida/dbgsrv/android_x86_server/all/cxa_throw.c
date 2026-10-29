/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_throw
// Address: 0x000BD090

//----- (000BD090) --------------------------------------------------------
void __noreturn _cxa_throw(void *a1, struct type_info *lptinfo, void (*a3)(void *))
{
  _DWORD *globals; // esi
  int v4; // edx
  int *v5; // [esp+0h] [ebp-1Ch]

  globals = _cxa_get_globals(v5);
  *((_DWORD *)a1 - 18) = std::get_unexpected();
  *((_DWORD *)a1 - 17) = std::get_terminate();
  *((_DWORD *)a1 - 20) = lptinfo;
  *((_DWORD *)a1 - 19) = a3;
  *((_DWORD *)a1 - 7) = 1129074247;
  *((_DWORD *)a1 - 8) = 1126902528;
  *((_DWORD *)a1 - 9) = 1;
  ++globals[1];
  *((_DWORD *)a1 - 6) = sub_BD110;
  Unwind_RaiseException((int)a1 - 32, v4, (_DWORD *)a1 - 8);
  sub_BD180((int)a1 - 80);
}
// BD0AB: variable 'v5' is possibly undefined
// BD0F8: variable 'v4' is possibly undefined
