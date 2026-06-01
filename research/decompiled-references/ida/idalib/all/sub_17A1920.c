char __fastcall sub_17A1920(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v3; // dl
  int v5; // eax
  size_t v6; // rax

  v2 = sub_FEAA90(a2);
  v3 = 1;
  if ( v2 == 200 )
    return v3;
  v5 = sub_FEAA90(a2);
  v3 = 0;
  if ( v5 != 300 )
    return v3;
  v6 = j__strlen("__opencl_c_program_scope_global_variables");
  return sub_FF8060(a1, (__int64)"__opencl_c_program_scope_global_variables", v6, a2);
}
