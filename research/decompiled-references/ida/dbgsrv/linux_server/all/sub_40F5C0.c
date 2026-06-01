/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F5C0
// Address: 0x000000000040F5C0

//----- (000000000040F5C0) ----------------------------------------------------
__int64 __fastcall sub_40F5C0(__int64 a1, const void *a2, int a3)
{
  __int64 v5; // r14
  size_t v6; // rax
  size_t v7; // r13
  const char *v8; // rcx
  __int64 v9; // rax
  void *v11; // rdi
  unsigned __int64 v12; // r15
  void *v13; // rax

  v5 = *(_QWORD *)(a1 + 24);
  if ( a2 && (v6 = strlen((const char *)a2), (v7 = v6) != 0) )
  {
    v11 = *(void **)(v5 + 136);
    v12 = v6 + 1;
    if ( *(_QWORD *)(v5 + 152) < v6 + 1 )
    {
      v13 = sub_481540(v5 + 136, *(void **)(v5 + 136), v12, 1u);
      *(_QWORD *)(v5 + 136) = v13;
      v11 = v13;
    }
    *(_QWORD *)(v5 + 144) = v12;
    memmove(v11, a2, v7);
    *(_BYTE *)(*(_QWORD *)(v5 + 136) + v7) = 0;
  }
  else
  {
    *(_QWORD *)(v5 + 144) = 0;
  }
  v8 = s1;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 160LL) = a3;
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v9 + 24) )
    v8 = *(const char **)(v9 + 16);
  sub_4563D0(*(_QWORD *)(a1 + 16), "debuglink '%s' of '%s'\n", (const char *)a2, v8);
  return 0;
}
