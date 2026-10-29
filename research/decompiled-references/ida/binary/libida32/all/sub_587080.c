__int64 __fastcall sub_587080(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 custom_argloc; // rax
  unsigned int v8; // ebx

  v5 = *a1;
  if ( v5 == 6 )
  {
    v8 = a1[2];
    return ((unsigned int)get_item_end(v8, a2, a3, a4) - v8) / (unsigned int)a3;
  }
  else if ( v5 > 6 && (custom_argloc = retrieve_custom_argloc()) != 0 )
  {
    return (*(__int64 (__fastcall **)(int *, __int64))(custom_argloc + 112))(a1, a2);
  }
  else
  {
    return 0;
  }
}

