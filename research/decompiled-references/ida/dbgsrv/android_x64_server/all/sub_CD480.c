/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CD480
// Address: 0x00000000000CD480

//----- (00000000000CD480) ----------------------------------------------------
void __fastcall sub_CD480(__int64 a1, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  char *v5; // rax

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 >= 2 )
    {
      v5 = *(char **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + v4 - 2) != 10 )
      {
        if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
        {
          v5 = (char *)qvector_reserve(a1, *(char **)a1, v4 + 1, 1u);
          *(_QWORD *)a1 = v5;
        }
        *(_QWORD *)(a1 + 8) = v4 + 1;
        v5[v4 - 1] = 10;
        *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
      }
    }
    sub_5E4E0(a1, a2, a3);
  }
}
