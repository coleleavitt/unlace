__int64 __fastcall edit_func_dialog_t__::vfunc_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r8d

  result = *(unsigned int *)(a2 + 12);
  if ( !(_DWORD)result )
  {
    v3 = 1;
    if ( *(_QWORD *)(a1 + 272) > 1u )
      v3 = (unsigned __int8)parse_decl(0, 0, 0, *(_QWORD *)(a1 + 264), 49423);
    return callui(203, 16, a1, 0, v3, (_DWORD)callui);
  }
  return result;
}
