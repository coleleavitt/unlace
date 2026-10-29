/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65550
// Address: 0x0000000000065550

//----- (0000000000065550) ----------------------------------------------------
__int64 __fastcall sub_65550(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  char *v5; // rax
  __int64 v6; // rbx
  size_t v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  char *v12; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v3 - 1;
  if ( !v3 )
    v4 = 0;
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v4 + 2) )
  {
    v5 = *(char **)v2;
  }
  else
  {
    v5 = (char *)qvector_reserve(*(_QWORD *)(v1 + 16), *(char **)v2, v4 + 2, 1u);
    *(_QWORD *)v2 = v5;
  }
  *(_QWORD *)(v2 + 8) = v4 + 2;
  v5[v4] = 46;
  *(_BYTE *)(*(_QWORD *)v2 + v4 + 1) = 0;
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v6 != 1 )
    {
      v8 = *(_QWORD *)(v1 + 16);
      v9 = *(_QWORD *)(v8 + 8);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      v11 = v10 + v6;
      if ( *(_QWORD *)(v8 + 16) >= v11 )
      {
        v12 = *(char **)v8;
      }
      else
      {
        v12 = (char *)qvector_reserve(v8, *(char **)v8, v11, 1u);
        *(_QWORD *)v8 = v12;
      }
      *(_QWORD *)(v8 + 8) = v11;
      v12[v10 + v7] = 0;
      memcpy((void *)(*(_QWORD *)v8 + v10), *(const void **)(a1 + 40), v7);
    }
  }
  return 0;
}
