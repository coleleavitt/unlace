__int64 __fastcall vault_files_dirtree_widget_t__::vfunc_40(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 1688) == a2 )
    return *(unsigned int *)(a1 + 1696);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  *(_QWORD *)(a1 + 1688) = a2;
  *(_DWORD *)(a1 + 1696) = result;
  return result;
}
