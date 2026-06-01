/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A850
// Address: 0x000000000004A850

//----- (000000000004A850) ----------------------------------------------------
__int64 __fastcall sub_4A850(__int64 a1, const void *a2)
{
  _QWORD *v3; // rbp
  size_t v4; // rax
  size_t v5; // r15
  char **v6; // r13
  size_t v7; // r12
  char *v8; // rdi
  __int64 v9; // rax
  const char *v10; // rcx

  v3 = *(_QWORD **)(a1 + 24);
  if ( a2 && (v4 = strlen((const char *)a2)) != 0 )
  {
    v5 = v4;
    v6 = (char **)(v3 + 11);
    v7 = v4 + 1;
    if ( v3[13] >= v4 + 1 )
    {
      v8 = *v6;
    }
    else
    {
      v8 = (char *)qvector_reserve((__int64)(v3 + 11), *v6, v4 + 1, 1u);
      *v6 = v8;
    }
    v3[12] = v7;
    memmove(v8, a2, v5);
    *(_BYTE *)(v3[11] + v5) = 0;
  }
  else
  {
    v3[12] = 0;
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v9 + 24) )
    v10 = *(const char **)(v9 + 16);
  else
    v10 = s1;
  sub_9FDA0(*(_QWORD *)(a1 + 16), "Build ID '%s' of '%s'\n", (const char *)a2, v10);
  return 0;
}
