/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DB40
// Address: 0x000000000046DB40

//----- (000000000046DB40) ----------------------------------------------------
void __fastcall sub_46DB40(void *src, __int64 a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  unsigned __int64 v6; // r13
  void *v7; // rax

  if ( src && (v3 = strlen((const char *)src), (v4 = v3) != 0) )
  {
    v5 = *(void **)(a2 + 56);
    v6 = v3 + 1;
    if ( *(_QWORD *)(a2 + 72) < v3 + 1 )
    {
      v7 = sub_481540(a2 + 56, *(void **)(a2 + 56), v6, 1u);
      *(_QWORD *)(a2 + 56) = v7;
      v5 = v7;
    }
    *(_QWORD *)(a2 + 64) = v6;
    memmove(v5, src, v4);
    *(_BYTE *)(*(_QWORD *)(a2 + 56) + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 64) = 0;
  }
}
