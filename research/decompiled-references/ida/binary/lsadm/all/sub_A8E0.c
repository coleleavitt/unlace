__int64 __fastcall sub_A8E0(__int64 a1, const void **a2)
{
  char *v2; // rbp
  char *v4; // r13
  char *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  size_t v8; // rbp
  size_t v10; // rbp
  void *v11; // rax
  void *v12; // rdi
  __int64 v13; // rax

  v2 = (char *)a2[1];
  if ( v2 && (v4 = (char *)*a2, v5 = strstr((const char *)*a2, "::ffff:"), v4 == v5) && v5 )
  {
    v6 = (unsigned __int64)(v2 - 1);
    v7 = 7;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( v6 <= 7 )
      v7 = v6;
    v8 = v6 - v7;
    if ( !v8 )
      return a1;
    v12 = nullptr;
    if ( v8 != -1 )
    {
      v13 = sub_29E60(a1, 0, v8 + 1, 1);
      *(_QWORD *)a1 = v13;
      v12 = (void *)v13;
    }
    *(_QWORD *)(a1 + 8) = v8 + 1;
    memmove(v12, &v4[v7], v8);
    *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v10 = (size_t)a2[1];
    if ( !v10 )
      return a1;
    v11 = (void *)sub_29E10(a2[1]);
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)a1 = v11;
    memcpy(v11, *a2, v10);
    *(_QWORD *)(a1 + 8) = v10;
    return a1;
  }
}

