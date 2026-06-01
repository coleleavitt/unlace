/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000351E0
// Address: 0x00000001000351E0

//----- (00000001000351E0) ----------------------------------------------------
size_t __fastcall sub_1000351E0(__int64 a1, const void *a2, const char *a3)
{
  size_t result; // rax
  __int64 v5; // r14
  size_t v6; // r12
  unsigned __int64 v7; // r13
  void *v8; // rax
  size_t v9; // r15
  unsigned __int64 v10; // r12
  void *v11; // rax

  sub_100035920((char **)(a1 + 88), *(_QWORD *)(a1 + 96) + 1LL);
  result = *(_QWORD *)(a1 + 88);
  v5 = result + 48LL * *(_QWORD *)(a1 + 96);
  *(_OWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 16) = 0;
  *(_OWORD *)v5 = 0;
  ++*(_QWORD *)(a1 + 96);
  if ( a2 && (result = strlen((const char *)a2)) != 0 )
  {
    v6 = result;
    v7 = result + 1;
    v8 = *(void **)v5;
    if ( *(_QWORD *)(v5 + 16) < v7 )
    {
      v8 = qvector_reserve(v5, *(void **)v5, v7, 1u);
      *(_QWORD *)v5 = v8;
    }
    *(_QWORD *)(v5 + 8) = v7;
    memmove(v8, a2, v6);
    result = *(_QWORD *)v5;
    *(_BYTE *)(*(_QWORD *)v5 + v6) = 0;
    if ( !a3 )
      goto LABEL_12;
  }
  else
  {
    *(_QWORD *)(v5 + 8) = 0;
    if ( !a3 )
    {
LABEL_12:
      *(_QWORD *)(v5 + 32) = 0;
      return result;
    }
  }
  result = strlen(a3);
  if ( !result )
    goto LABEL_12;
  v9 = result;
  v10 = result + 1;
  v11 = *(void **)(v5 + 24);
  if ( *(_QWORD *)(v5 + 40) < v10 )
  {
    v11 = qvector_reserve(v5 + 24, *(void **)(v5 + 24), v10, 1u);
    *(_QWORD *)(v5 + 24) = v11;
  }
  *(_QWORD *)(v5 + 32) = v10;
  memmove(v11, a3, v9);
  result = *(_QWORD *)(v5 + 24);
  *(_BYTE *)(result + v9) = 0;
  return result;
}
