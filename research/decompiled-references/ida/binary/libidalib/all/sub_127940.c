__int64 __fastcall sub_127940(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rbx
  int encoding_bpu_by_name; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * a2);
  if ( v2 )
  {
    v3 = a2;
    if ( (unsigned __int8)del_encoding() )
      return v3;
    get_encoding_name();
    encoding_bpu_by_name = get_encoding_bpu_by_name();
    if ( v2 == (unsigned int)get_default_encoding_idx() )
      sub_92200((__int64)"Cannot delete encoding used as %d-bit default encoding", 8 * encoding_bpu_by_name);
  }
  return -1;
}

