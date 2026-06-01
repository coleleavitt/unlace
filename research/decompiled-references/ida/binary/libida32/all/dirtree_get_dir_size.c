__int64 __fastcall dirtree_get_dir_size(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx

  if ( a2 == -1 || (unsigned __int64)a2 >= *(_QWORD *)(a1 + 56) )
    return -1;
  v2 = *(_QWORD *)(a1 + 48) + 176LL * a2;
  sub_757350(a1, a2, v2, nullptr);
  return *(_QWORD *)(v2 + 32);
}

