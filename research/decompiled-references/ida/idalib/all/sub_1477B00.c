__int64 __fastcall sub_1477B00(_QWORD **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-10h]

  result = sub_17B8B30(
             (*a1)[12],
             *(_QWORD *)((*a1)[12] + 608LL),
             *a1[1],
             *(unsigned int *)(*(_QWORD *)a2 + 160LL),
             a2,
             *(_QWORD *)(a2 + 2664));
  if ( !*(_BYTE *)(a2 + 3032) )
  {
    v3 = result;
    sub_1818070(*(_QWORD *)(a2 + 2672), *(_QWORD *)(a2 + 3024), result);
    *(_BYTE *)(a2 + 3032) = 1;
    return v3;
  }
  return result;
}
