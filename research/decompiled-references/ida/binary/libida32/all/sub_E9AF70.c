unsigned __int64 __fastcall sub_E9AF70(__int64 a1, __int64 a2, __int16 *a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v11; // rax
  __int16 v12; // dx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  size_t v15; // rdx

  v11 = sub_E99B50((__int64 *)(a1 + 2352), 8LL * *((unsigned int *)a3 + 4) + 40, 3u);
  v12 = *a3;
  v13 = v11;
  LODWORD(v11) = *((_DWORD *)a3 + 4);
  *(_DWORD *)v13 = a4;
  *(_DWORD *)(v13 + 4) = a7;
  *(_DWORD *)(v13 + 12) = a5;
  *(_DWORD *)(v13 + 16) = v11 + 1;
  *(_DWORD *)(v13 + 20) = a6;
  *(_WORD *)(v13 + 24) = v12;
  v14 = *((unsigned int *)a3 + 4);
  *(_DWORD *)(v13 + 8) = 49;
  v15 = 8 * v14;
  *(_QWORD *)(v13 + 32) = a2;
  if ( v15 )
    memmove((void *)(v13 + 40), *((const void **)a3 + 1), v15);
  return v13;
}

