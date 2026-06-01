/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF20
// Address: 0x000000000004AF20

//----- (000000000004AF20) ----------------------------------------------------
__int64 __fastcall sub_4AF20(_QWORD *a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r15
  char **v5; // r13
  size_t v6; // rbx
  char *v7; // rdi

  if ( a2 && (v3 = strlen((const char *)a2)) != 0 )
  {
    v4 = v3;
    v5 = (char **)(a1 + 2);
    v6 = v3 + 1;
    if ( a1[4] >= v3 + 1 )
    {
      v7 = *v5;
    }
    else
    {
      v7 = (char *)qvector_reserve((__int64)(a1 + 2), *v5, v3 + 1, 1u);
      *v5 = v7;
    }
    a1[3] = v6;
    memmove(v7, a2, v4);
    *(_BYTE *)(a1[2] + v4) = 0;
  }
  else
  {
    a1[3] = 0;
  }
  return 2;
}
