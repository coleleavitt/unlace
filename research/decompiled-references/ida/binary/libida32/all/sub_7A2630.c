__int64 __fastcall sub_7A2630(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rax
  const char *v5; // r13
  void *v6; // rax
  int v7; // r8d
  int v8; // r9d
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  void *v18; // rdx
  int v19; // r8d
  int v20; // r9d
  __int64 result; // rax
  char v22; // [rsp+0h] [rbp-28h]

  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( !under_debugger )
      interr(551);
    BUG();
  }
  v4 = dlopen("libcurl.so", 2);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4
    || (v4 = dlopen("libcurl.so.4", 2), (*(_QWORD *)(a1 + 8) = v4) != 0)
    || (v4 = dlopen("libcurl.so.3", 2), (*(_QWORD *)(a1 + 8) = v4) != 0) )
  {
    v5 = "curl_global_init";
    v6 = dlsym(v4, "curl_global_init");
    *(_QWORD *)(a1 + 16) = v6;
    if ( v6
      && (v5 = "curl_global_cleanup",
          v9 = dlsym(*(void **)(a1 + 8), "curl_global_cleanup"),
          (*(_QWORD *)(a1 + 24) = v9) != 0)
      && (v5 = "curl_easy_init", v10 = dlsym(*(void **)(a1 + 8), "curl_easy_init"), (*(_QWORD *)(a1 + 32) = v10) != 0)
      && (v5 = "curl_easy_setopt", v11 = dlsym(*(void **)(a1 + 8), "curl_easy_setopt"),
                                   (*(_QWORD *)(a1 + 48) = v11) != 0)
      && (v5 = "curl_easy_perform",
          v12 = dlsym(*(void **)(a1 + 8), "curl_easy_perform"),
          (*(_QWORD *)(a1 + 56) = v12) != 0)
      && (v5 = "curl_easy_getinfo",
          v13 = dlsym(*(void **)(a1 + 8), "curl_easy_getinfo"),
          (*(_QWORD *)(a1 + 64) = v13) != 0)
      && (v5 = "curl_easy_cleanup",
          v14 = dlsym(*(void **)(a1 + 8), "curl_easy_cleanup"),
          (*(_QWORD *)(a1 + 40) = v14) != 0)
      && (v5 = "curl_formadd", v15 = dlsym(*(void **)(a1 + 8), "curl_formadd"), (*(_QWORD *)(a1 + 72) = v15) != 0)
      && (v5 = "curl_formfree", v16 = dlsym(*(void **)(a1 + 8), "curl_formfree"), (*(_QWORD *)(a1 + 80) = v16) != 0)
      && (v5 = "curl_slist_append",
          v17 = dlsym(*(void **)(a1 + 8), "curl_slist_append"),
          (*(_QWORD *)(a1 + 88) = v17) != 0) )
    {
      v18 = dlsym(*(void **)(a1 + 8), "curl_slist_free_all");
      *(_QWORD *)(a1 + 96) = v18;
      result = 1;
      if ( v18 )
        return result;
      qsnprintf(a2, a3, (int)"Could not find function %s in libcurl", (int)"curl_slist_free_all", v19, v20, v22);
    }
    else
    {
      qsnprintf(a2, a3, (int)"Could not find function %s in libcurl", (int)v5, v7, v8, v22);
    }
  }
  else
  {
    qstrncpy(a2, "Could not load libcurl.so", a3);
  }
  return 0;
}

