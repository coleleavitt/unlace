/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56350
// Address: 0x0000000000056350

//----- (0000000000056350) ----------------------------------------------------
__int64 __fastcall sub_56350(__int64 a1, const void *a2, size_t a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  char *v7; // rdi
  char v9; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !__CFADD__(a3, v5) )
      v6 = a3 + v5;
    if ( v5 >= v6 )
    {
      if ( v5 != v6 )
      {
        v9 = 0;
        sub_5E330(a1, v6, &v9);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 16) >= v6 )
      {
        v7 = *(char **)a1;
      }
      else
      {
        v7 = (char *)qvector_reserve(a1, *(char **)a1, v6, 1u);
        *(_QWORD *)a1 = v7;
      }
      memset(&v7[*(_QWORD *)(a1 + 8)], 0, v6 - *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = v6;
    }
    memcpy((void *)(*(_QWORD *)a1 + v5), a2, a3);
  }
  return a1;
}
