/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063FD0
// Address: 0x0000000100063FD0

//----- (0000000100063FD0) ----------------------------------------------------
size_t __fastcall sub_100063FD0(__int64 a1, const void *a2)
{
  size_t result; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax

  if ( a2 && (result = strlen((const char *)a2)) != 0 )
  {
    v3 = result;
    v4 = result + 1;
    v5 = *(void **)(a1 + 248);
    if ( *(_QWORD *)(a1 + 264) < v4 )
    {
      v5 = qvector_reserve(a1 + 248, *(void **)(a1 + 248), v4, 1u);
      *(_QWORD *)(a1 + 248) = v5;
    }
    *(_QWORD *)(a1 + 256) = v4;
    memmove(v5, a2, v3);
    result = *(_QWORD *)(a1 + 248);
    *(_BYTE *)(result + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 256) = 0;
  }
  return result;
}
