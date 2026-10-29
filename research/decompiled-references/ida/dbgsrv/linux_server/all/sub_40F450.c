/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F450
// Address: 0x000000000040F450

//----- (000000000040F450) ----------------------------------------------------
__int64 __fastcall sub_40F450(__int64 a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v6; // rdi
  unsigned __int64 v7; // r13
  void *v8; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v6 = *(void **)(a1 + 16);
    v7 = v3 + 1;
    if ( *(_QWORD *)(a1 + 32) < v3 + 1 )
    {
      v8 = sub_481540(a1 + 16, *(void **)(a1 + 16), v7, 1u);
      *(_QWORD *)(a1 + 16) = v8;
      v6 = v8;
    }
    *(_QWORD *)(a1 + 24) = v7;
    memmove(v6, a2, v4);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + v4) = 0;
    return 2;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0;
    return 2;
  }
}
