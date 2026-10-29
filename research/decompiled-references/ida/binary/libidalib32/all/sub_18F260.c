void __fastcall sub_18F260(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 2232);
  if ( v2
    && (v3 = (const char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 192LL))(v2, 0),
        (v4 = v3) != nullptr)
    && (v5 = strlen(v3), (v6 = v5) != 0) )
  {
    v7 = *(void **)a2;
    v8 = v5 + 1;
    if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
    {
      v9 = qvector_reserve();
      *(_QWORD *)a2 = v9;
      v7 = (void *)v9;
    }
    *(_QWORD *)(a2 + 8) = v8;
    memmove(v7, v4, v6);
    *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
}

