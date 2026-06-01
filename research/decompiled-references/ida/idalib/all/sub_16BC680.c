bool __fastcall sub_16BC680(__int64 a1, __int64 a2, const char **a3, __int64 a4, __int64 a5, __m128i a6, double a7)
{
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const char *v13; // rbp
  size_t v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx

  if ( **(_DWORD **)a1 != (_DWORD)a2 )
    return 0;
  v9 = **(_QWORD **)(a1 + 8);
  if ( (int)sub_C00A40(v9, a2, (__int64)a3, a4, a5) >= 0 )
    return 0;
  v13 = *a3;
  if ( v13 )
  {
    v14 = j__strlen(v13);
    v15 = *(_QWORD *)(a1 + 16);
    v16 = *(_QWORD *)(v15 + 232);
    v17 = *(_QWORD *)(v15 + 272);
    v21 = sub_C00A40(v9, a2, v18, v19, v20);
    v25 = sub_13DC120(v21, v17, v16, a6, a7, v22, v23, v24);
    if ( v14 == v26 )
    {
      if ( v14 )
        return memcmp(v25, v13, v14) == 0;
      return 1;
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 16);
    v28 = *(_QWORD *)(v27 + 232);
    v29 = *(_QWORD *)(v27 + 272);
    v30 = sub_C00A40(v9, a2, v10, v11, v12);
    sub_13DC120(v30, v29, v28, a6, a7, v31, v32, v33);
    if ( !v34 )
      return 1;
  }
  return 0;
}
