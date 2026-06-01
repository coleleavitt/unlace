/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B980
// Address: 0x000000010002B980

//----- (000000010002B980) ----------------------------------------------------
__int64 __fastcall sub_10002B980(_QWORD *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  size_t v5; // r15
  __int64 v6; // r12
  void *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rdi
  _QWORD *v12; // rbx

  sub_10002BA90((__int64)a1, 2);
  v1 = a1[41];
  v2 = *(unsigned __int16 *)(a1[40] + 2 * v1 - 2);
  if ( v1 )
    a1[41] = v1 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[43] + 8LL * a1[44] - 8) + 24LL) = v2;
  v3 = a1[20];
  v4 = a1[21];
  v5 = *(_QWORD *)(v3 + 24 * v4 - 16);
  if ( v5 )
  {
    v6 = v3 + 24 * v4;
    v7 = qalloc_or_throw(*(_QWORD *)(v6 - 16));
    memcpy(v7, *(const void **)(v6 - 24), v5);
    v4 = a1[21];
    if ( !v4 )
      goto LABEL_9;
  }
  else
  {
    v7 = nullptr;
    if ( !v4 )
      goto LABEL_9;
  }
  v8 = a1[20];
  v9 = v4 - 1;
  a1[21] = v9;
  v10 = 3 * v9;
  v11 = *(void **)(v8 + 8 * v10);
  if ( v11 )
  {
    v12 = (_QWORD *)(v8 + 8 * v10);
    v12[1] = 0;
    qfree(v11);
    *v12 = 0;
    v12[2] = 0;
  }
LABEL_9:
  if ( v7 )
    qfree(v7);
  return 0;
}
