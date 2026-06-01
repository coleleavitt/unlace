/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140029390
// Address: 0x0000000140029390

//----- (0000000140029390) ----------------------------------------------------
void __fastcall sub_140029390(__int64 a1)
{
  void *v2; // rcx

  if ( !a1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(2656);
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    sub_140024A20(*(_DWORD **)(a1 + 8), (char *)a1);
    goto LABEL_8;
  }
  if ( *(_BYTE *)a1 != 7 )
  {
LABEL_8:
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
    return;
  }
  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 24) = 0;
  }
  *(_BYTE *)a1 = 2;
  *(_QWORD *)(a1 + 8) = 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
