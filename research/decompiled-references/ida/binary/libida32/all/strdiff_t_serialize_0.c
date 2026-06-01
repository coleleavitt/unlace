__int64 __fastcall strdiff_t_serialize_0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r12
  const char *v5; // rdx
  int v6; // eax
  void (__fastcall *v7)(__int64 *, __int64, const char *); // rcx
  const char *v8; // rdx
  const char *v10; // rdx

  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 16))(a2, 0);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *a2;
  v4 = v2 + 56LL * *(_QWORD *)(a1 + 64);
  if ( v2 != v4 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 48);
      v7 = *(void (__fastcall **)(__int64 *, __int64, const char *))(v3 + 16);
      if ( v6 == 1 )
        break;
      if ( v6 == 2 )
      {
        v8 = haystack;
        if ( *(_QWORD *)(v2 + 8) )
          v8 = *(const char **)v2;
        v2 += 56;
        v7(a2, 4, v8);
        v3 = *a2;
        if ( v4 == v2 )
          return (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 16))(a2, 1);
      }
      else
      {
        if ( !v6 )
        {
          v5 = haystack;
          if ( *(_QWORD *)(v2 + 8) )
            v5 = *(const char **)v2;
          v7(a2, 2, v5);
          v3 = *a2;
        }
LABEL_7:
        v2 += 56;
        if ( v4 == v2 )
          return (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 16))(a2, 1);
      }
    }
    v10 = haystack;
    if ( *(_QWORD *)(v2 + 8) )
      v10 = *(const char **)v2;
    v7(a2, 3, v10);
    v3 = *a2;
    goto LABEL_7;
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 16))(a2, 1);
}

