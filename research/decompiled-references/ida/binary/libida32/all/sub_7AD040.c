bool __fastcall sub_7AD040(__int64 a1)
{
  void *v1; // rax
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax

  v1 = dlsym(*(void **)(a1 + 8), "secret_password_lookupv_nonpageable_sync");
  *(_QWORD *)(a1 + 48) = v1;
  if ( !v1 )
    return 0;
  v2 = dlsym(*(void **)(a1 + 8), "secret_password_free");
  *(_QWORD *)(a1 + 56) = v2;
  if ( !v2 )
    return 0;
  v3 = dlsym(*(void **)(a1 + 8), "secret_password_storev_sync");
  *(_QWORD *)(a1 + 64) = v3;
  if ( !v3 )
    return 0;
  v4 = dlsym(*(void **)(a1 + 8), "secret_password_clearv_sync");
  *(_QWORD *)(a1 + 72) = v4;
  return v4 != nullptr;
}

