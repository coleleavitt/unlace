__int64 __fastcall get_import_module_name(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( a2 >= *(_DWORD *)(v2 + 2392) )
    return 0;
  LOBYTE(v4) = sub_7BEA80(v2 + 2328, *(_QWORD *)v2, a1, (int)a2, 83) > 0;
  return v4;
}
