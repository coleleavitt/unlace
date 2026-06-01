__int64 __fastcall get_import_module_name(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 v5; // rsi

  v2 = a2;
  v3 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( a2 >= *((_DWORD *)v3 + 576) )
    return 0;
  v5 = *v3;
  LOBYTE(v5) = sub_79B6F0(v3 + 280, *v3, a1, v2, 83) > 0;
  return (unsigned int)v5;
}

