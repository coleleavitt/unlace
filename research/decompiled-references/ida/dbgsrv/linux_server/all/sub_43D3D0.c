/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D3D0
// Address: 0x000000000043D3D0

//----- (000000000043D3D0) ----------------------------------------------------
__int64 __fastcall sub_43D3D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  const void *v6; // r13
  void *v7; // rdi
  void *v8; // rax

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return sub_479EB0(0x5FCu);
  if ( a1 )
  {
    v4 = sub_439CD0(*(int *)(*(_QWORD *)(a2 + 8) + 52LL));
    if ( a1 != v4 + 56 )
    {
      v5 = *(_QWORD *)(v4 + 64);
      if ( v5 > 1 )
      {
        v6 = *(const void **)(v4 + 56);
        v7 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) < v5 )
        {
          v8 = sub_481540(a1, *(void **)a1, *(_QWORD *)(v4 + 64), 1u);
          *(_QWORD *)a1 = v8;
          v7 = v8;
        }
        *(_QWORD *)(a1 + 8) = v5;
        memmove(v7, v6, v5 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v5 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
  }
  return 0;
}
