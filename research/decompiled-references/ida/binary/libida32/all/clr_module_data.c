__int64 __fastcall clr_module_data(int a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 *v3; // rdx

  result = 0;
  if ( a1 )
  {
    v2 = qword_2CA1698;
    if ( (unsigned __int64)a1 < *(_QWORD *)(qword_2CA1698 + 168) )
    {
      destroy_moddata_merge_handlers();
      v3 = (__int64 *)(*(_QWORD *)(v2 + 160) + 8LL * a1);
      result = *v3;
      *v3 = 0;
    }
  }
  return result;
}

