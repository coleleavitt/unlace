__int64 __fastcall apply_tree_layout(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r15
  __int64 (__fastcall *v4)(__int64, _QWORD); // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // eax

  v3 = a3[1];
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 480LL);
  if ( v3 )
  {
    v5 = *a3;
    v6 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v5 + 8) )
      {
        v7 = strcmp(*(const char **)v5, "index");
        if ( !v7 )
          break;
      }
      ++v6;
      v5 += 40;
      if ( v3 == v6 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(v5 + 24) == 1 )
      v7 = *(_DWORD *)(v5 + 32);
  }
  else
  {
LABEL_8:
    v7 = 0;
  }
  return v4(a2, v7);
}
