unsigned __int64 __fastcall sub_5A1140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 custom_argloc; // rax
  __int64 v8; // rbx

  v5 = *(_DWORD *)a1;
  if ( v5 == 6 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    return (get_item_end(v8, a2, a3, a4) - v8) / (unsigned __int64)(unsigned int)a3;
  }
  else if ( v5 > 6 && (custom_argloc = retrieve_custom_argloc()) != 0 )
  {
    return (*(__int64 (__fastcall **)(__int64, __int64))(custom_argloc + 112))(a1, a2);
  }
  else
  {
    return 0;
  }
}
