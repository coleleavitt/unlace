/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433550
// Address: 0x0000000000433550

//----- (0000000000433550) ----------------------------------------------------
__int64 __fastcall sub_433550(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // dx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  size_t v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rdi
  void *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi

  sub_433340((__int64)a1, 2);
  v1 = a1[41];
  v2 = *(_WORD *)(a1[40] + 2 * v1 - 2);
  if ( v1 )
    a1[41] = v1 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[43] + 8LL * a1[44] - 8) + 24LL) = v2;
  v3 = a1[21];
  v4 = a1[20];
  v5 = v4 + 24 * v3 - 24;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    if ( v3 )
    {
      v7 = v3 - 1;
      a1[21] = v7;
      v8 = v4 + 24 * v7;
      v9 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        j__free(v9);
      }
    }
    return 0;
  }
  v11 = sub_4814F0(*(_QWORD *)(v5 + 8));
  memcpy(v11, *(const void **)v5, v6);
  v12 = a1[21];
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = a1[20];
    a1[21] = v13;
    v15 = v14 + 24 * v13;
    v16 = *(void **)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_QWORD *)(v15 + 8) = 0;
      j__free(v16);
    }
  }
  if ( !v11 )
    return 0;
  j__free(v11);
  return 0;
}
