/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A910
// Address: 0x000000000004A910

//----- (000000000004A910) ----------------------------------------------------
__int64 __fastcall sub_4A910(__int64 a1, const void *a2, int a3)
{
  _QWORD *v5; // r15
  size_t v6; // rax
  size_t v7; // r12
  char **v8; // r13
  size_t v9; // rbp
  char *v10; // rdi
  __int64 v11; // rax
  const char *v12; // rcx
  int v14; // [rsp+0h] [rbp-34h]

  v5 = *(_QWORD **)(a1 + 24);
  if ( a2 && (v6 = strlen((const char *)a2)) != 0 )
  {
    v7 = v6;
    v14 = a3;
    v8 = (char **)(v5 + 14);
    v9 = v6 + 1;
    if ( v5[16] >= v6 + 1 )
    {
      v10 = *v8;
    }
    else
    {
      v10 = (char *)qvector_reserve((__int64)(v5 + 14), *v8, v6 + 1, 1u);
      *v8 = v10;
    }
    v5[15] = v9;
    memmove(v10, a2, v7);
    *(_BYTE *)(v5[14] + v7) = 0;
    a3 = v14;
  }
  else
  {
    v5[15] = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 136LL) = a3;
  v11 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v11 + 24) )
    v12 = *(const char **)(v11 + 16);
  else
    v12 = s1;
  sub_9FDA0(*(_QWORD *)(a1 + 16), "debuglink '%s' of '%s'\n", (const char *)a2, v12);
  return 0;
}
