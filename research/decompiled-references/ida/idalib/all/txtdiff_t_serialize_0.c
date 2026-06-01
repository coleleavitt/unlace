__int64 __fastcall txtdiff_t_serialize_0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r13
  const char *v9; // rdx
  unsigned int v10; // edx
  void (__fastcall *v11)(__int64 *, __int64, const char *); // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  const char *v14; // rcx
  const char *v15; // rdx
  const char *v17; // rdx
  const char *v18; // rdx

  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 16))(a2, 0);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = v3 + 56LL * *(_QWORD *)(a1 + 64);
  if ( v4 != v3 )
  {
    v5 = *a2;
    v6 = 1;
    while ( 1 )
    {
      v7 = 0;
      v8 = 0;
      if ( *(_QWORD *)(v3 + 8) )
        break;
LABEL_18:
      v3 += 56;
      if ( v4 == v3 )
        return (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 16))(a2, 1);
    }
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v5 + 16))(a2, 2, v6);
      v5 = *a2;
      v10 = *(_DWORD *)(v3 + 48);
      v11 = *(void (__fastcall **)(__int64 *, __int64, const char *))(*a2 + 16);
      v12 = 24 * v8 + *(_QWORD *)v3;
      if ( v10 == 2 )
      {
        v18 = haystack;
        if ( *(_QWORD *)(v12 + 8) )
          v18 = *(const char **)v12;
        v11(a2, 5, v18);
        v5 = *a2;
        goto LABEL_9;
      }
      if ( v10 <= 2 )
        break;
      if ( v10 == 3 )
      {
        v13 = *(_QWORD *)(v3 + 24) + 24 * v8;
        v14 = haystack;
        if ( *(_QWORD *)(v12 + 8) )
          v14 = *(const char **)v12;
        v15 = haystack;
        if ( *(_QWORD *)(v13 + 8) )
          v15 = *(const char **)v13;
        ++v7;
        ((void (__fastcall *)(__int64 *, __int64, const char *, const char *))v11)(a2, 6, v15, v14);
        v8 = v7;
        v5 = *a2;
        v6 = 0;
        if ( (unsigned __int64)v7 >= *(_QWORD *)(v3 + 8) )
          goto LABEL_18;
      }
      else
      {
LABEL_9:
        ++v7;
        v6 = 0;
        v8 = v7;
        if ( (unsigned __int64)v7 >= *(_QWORD *)(v3 + 8) )
          goto LABEL_18;
      }
    }
    if ( v10 )
    {
      v9 = haystack;
      if ( *(_QWORD *)(v12 + 8) )
        v9 = *(const char **)v12;
      v11(a2, 4, v9);
      v5 = *a2;
    }
    else
    {
      v17 = haystack;
      if ( *(_QWORD *)(v12 + 8) )
        v17 = *(const char **)v12;
      v11(a2, 3, v17);
      v5 = *a2;
    }
    goto LABEL_9;
  }
  v5 = *a2;
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 16))(a2, 1);
}
