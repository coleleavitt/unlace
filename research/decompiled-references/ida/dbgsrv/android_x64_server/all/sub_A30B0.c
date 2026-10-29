/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A30B0
// Address: 0x00000000000A30B0

//----- (00000000000A30B0) ----------------------------------------------------
void __fastcall sub_A30B0(_QWORD *a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r15
  char **v5; // r13
  size_t v6; // rbx
  char *v7; // rdi

  if ( a2 && (v3 = strlen((const char *)a2)) != 0 )
  {
    v4 = v3;
    v5 = (char **)(a1 + 31);
    v6 = v3 + 1;
    if ( a1[33] >= v3 + 1 )
    {
      v7 = *v5;
    }
    else
    {
      v7 = (char *)qvector_reserve((__int64)(a1 + 31), *v5, v3 + 1, 1u);
      *v5 = v7;
    }
    a1[32] = v6;
    memmove(v7, a2, v4);
    *(_BYTE *)(a1[31] + v4) = 0;
  }
  else
  {
    a1[32] = 0;
  }
}
