__int64 __fastcall sub_A8B0(__int64 a1, __int64 a2)
{
  unsigned __int8 (__fastcall ***module_data)(_QWORD, __int64); // rax
  __int64 v3; // rbp

  module_data = (unsigned __int8 (__fastcall ***)(_QWORD, __int64))get_module_data();
  v3 = (**module_data)(module_data, 2);
  free_idcv();
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
