void __fastcall sub_3AEB40(__int64 a1, const char *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  size_t v5; // rax
  size_t v6; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  if ( !a2 )
    goto LABEL_7;
  if ( *a2 )
  {
    if ( *(int *)(a1 + 84) < 0 )
    {
      v3 = *(_QWORD *)(qword_2CCB598 + 1576);
      v4 = *(_DWORD *)(v3 + 304);
      *(_DWORD *)(v3 + 304) = v4 + 1;
      *(_DWORD *)(a1 + 84) = v4;
    }
    *(_DWORD *)(a1 + 76) &= ~0x20u;
  }
  v5 = strlen(a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(void **)(a1 + 8);
    v8 = v5 + 1;
    if ( *(_QWORD *)(a1 + 24) < v5 + 1 )
    {
      v9 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v8, 1);
      *(_QWORD *)(a1 + 8) = v9;
      v7 = (void *)v9;
    }
    *(_QWORD *)(a1 + 16) = v8;
    memmove(v7, a2, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) = 0;
  }
  else
  {
LABEL_7:
    *(_QWORD *)(a1 + 16) = 0;
  }
}
