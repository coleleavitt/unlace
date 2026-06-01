bool __fastcall sub_76F30(__int64 a1)
{
  void *v1; // rax
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax

  v1 = dlsym(*(void **)(a1 + 8), "g_hash_table_new_full");
  *(_QWORD *)(a1 + 48) = v1;
  if ( !v1 )
    return 0;
  v2 = dlsym(*(void **)(a1 + 8), "g_hash_table_insert");
  *(_QWORD *)(a1 + 56) = v2;
  if ( !v2 )
    return 0;
  v3 = dlsym(*(void **)(a1 + 8), "g_hash_table_unref");
  *(_QWORD *)(a1 + 64) = v3;
  if ( !v3 )
    return 0;
  v4 = dlsym(*(void **)(a1 + 8), "g_str_hash");
  *(_QWORD *)(a1 + 72) = v4;
  if ( !v4 )
    return 0;
  v5 = dlsym(*(void **)(a1 + 8), "g_str_equal");
  *(_QWORD *)(a1 + 80) = v5;
  if ( !v5 )
    return 0;
  v6 = dlsym(*(void **)(a1 + 8), "g_free");
  *(_QWORD *)(a1 + 88) = v6;
  if ( !v6 )
    return 0;
  v7 = dlsym(*(void **)(a1 + 8), "g_strdup");
  *(_QWORD *)(a1 + 96) = v7;
  return v7 != nullptr;
}

