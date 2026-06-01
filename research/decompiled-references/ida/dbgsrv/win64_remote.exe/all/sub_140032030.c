/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032030
// Address: 0x0000000140032030

//----- (0000000140032030) ----------------------------------------------------
__int64 __fastcall sub_140032030(_QWORD *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r14
  size_t v6; // rbp
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // rcx

  v2 = sub_140035180((__int64)a1, 2);
  if ( !v2 )
  {
    v3 = a1[40];
    v4 = *(unsigned __int16 *)(a1[39] + 2 * v3 - 2);
    if ( v3 )
      a1[40] = v3 - 1;
    *(_DWORD *)(*(_QWORD *)(a1[42] + 8LL * a1[43] - 8) + 24LL) = v4;
  }
  v5 = a1[19] + 24LL * a1[20];
  v6 = *(_QWORD *)(v5 - 16);
  v7 = nullptr;
  if ( v6 )
  {
    v7 = sub_14005AAA0(*(_QWORD *)(v5 - 16));
    memcpy(v7, *(const void **)(v5 - 24), v6);
  }
  v8 = a1[20];
  if ( v8 )
  {
    v9 = v8 - 1;
    a1[20] = v9;
    v10 = a1[19] + 24 * v9;
    v11 = *(void **)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      j_free(v11);
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 16) = 0;
    }
  }
  if ( v7 )
    j_free(v7);
  return v2;
}
