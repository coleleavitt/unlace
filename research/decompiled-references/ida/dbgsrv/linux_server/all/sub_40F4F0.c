/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F4F0
// Address: 0x000000000040F4F0

//----- (000000000040F4F0) ----------------------------------------------------
__int64 __fastcall sub_40F4F0(__int64 a1, const void *a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  size_t v5; // rbp
  __int64 v6; // rax
  const char *v7; // rcx
  void *v9; // rdi
  unsigned __int64 v10; // r14
  void *v11; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( a2 && (v4 = strlen((const char *)a2), (v5 = v4) != 0) )
  {
    v9 = *(void **)(v3 + 112);
    v10 = v4 + 1;
    if ( *(_QWORD *)(v3 + 128) < v4 + 1 )
    {
      v11 = sub_481540(v3 + 112, *(void **)(v3 + 112), v10, 1u);
      *(_QWORD *)(v3 + 112) = v11;
      v9 = v11;
    }
    *(_QWORD *)(v3 + 120) = v10;
    memmove(v9, a2, v5);
    *(_BYTE *)(*(_QWORD *)(v3 + 112) + v5) = 0;
  }
  else
  {
    *(_QWORD *)(v3 + 120) = 0;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = s1;
  if ( *(_QWORD *)(v6 + 24) )
    v7 = *(const char **)(v6 + 16);
  sub_4563D0(*(_QWORD *)(a1 + 16), "Build ID '%s' of '%s'\n", (const char *)a2, v7);
  return 0;
}
