__int64 __fastcall sub_4DFD70(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  void *v8; // rdx
  void **v9; // rax

  v4 = a2[1];
  if ( !v4 )
    goto LABEL_16;
  v5 = *(unsigned int *)(a1 + 76);
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 - 4) )
    goto LABEL_16;
  v6 = (unsigned int)v5;
  if ( *(_QWORD *)(v4 + 8LL * (unsigned int)v5) )
  {
    sub_4DC9E0(a1, a2, a3);
    v5 = *(unsigned int *)(a1 + 76);
    v4 = a2[1];
    if ( *(_BYTE *)(a1 + 72) )
    {
      if ( !v4 || (unsigned int)v5 >= *(_DWORD *)(v4 - 4) )
        goto LABEL_16;
      v6 = (unsigned int)v5;
      goto LABEL_8;
    }
    if ( !v4 )
      goto LABEL_16;
  }
  else if ( *(_BYTE *)(a1 + 72) )
  {
LABEL_8:
    v7 = *(_QWORD *)(v4 + 8 * v6);
    if ( v7 )
    {
      v8 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
      goto LABEL_14;
    }
LABEL_16:
    v8 = nullptr;
    goto LABEL_14;
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 - 4) )
    goto LABEL_16;
  v9 = (void **)(v4 + 8 * v5);
  v8 = *v9;
  if ( *v9 )
    *v9 = nullptr;
LABEL_14:
  sub_4DF0F0((__int64)a2, *(_DWORD *)(a1 + 80), v8);
  return 1;
}

