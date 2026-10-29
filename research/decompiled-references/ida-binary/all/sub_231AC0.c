__int64 __fastcall sub_231AC0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = (unsigned int)dword_8CD7F0;
  if ( !dword_8CD7F0 || !get_module_data((unsigned int)dword_8CD7F0) )
    return sub_22BB70(&qword_8CC640, a1);
  v8 = sub_227580(a3, v4, a2, v6, v7);
  return sub_22BB70((__int64 *)(v8 + 8), a1);
}
