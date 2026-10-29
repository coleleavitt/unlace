/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457C50
// Address: 0x0000000000457C50

//----- (0000000000457C50) ----------------------------------------------------
void __fastcall sub_457C50(__int64 a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  unsigned __int64 v6; // r13
  void *v7; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v5 = *(void **)(a1 + 280);
    v6 = v3 + 1;
    if ( *(_QWORD *)(a1 + 296) < v3 + 1 )
    {
      v7 = sub_481540(a1 + 280, *(void **)(a1 + 280), v6, 1u);
      *(_QWORD *)(a1 + 280) = v7;
      v5 = v7;
    }
    *(_QWORD *)(a1 + 288) = v6;
    memmove(v5, a2, v4);
    *(_BYTE *)(*(_QWORD *)(a1 + 280) + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 288) = 0;
  }
}
