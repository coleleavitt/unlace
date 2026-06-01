__int64 __fastcall sub_14F3A70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+8h] [rbp-20h]

  *(_BYTE *)(a2 + 720) |= 0x40u;
  result = sub_18A1BE0(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 736LL),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 608LL),
             *(unsigned int *)(*(_QWORD *)a2 + 160LL),
             a2,
             *(_QWORD *)(a2 + 2664),
             **(unsigned int **)(a1 + 8));
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(unsigned int *)(v3 + 8);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
    {
      v6 = result;
      sub_2237220(v3, v3 + 16, v4 + 1, 8);
      v4 = *(unsigned int *)(v3 + 8);
      result = v6;
    }
    *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = result;
    ++*(_DWORD *)(v3 + 8);
  }
  if ( !*(_BYTE *)(a2 + 3032) )
  {
    v5 = result;
    sub_1818070(*(_QWORD *)(a2 + 2672), *(_QWORD *)(a2 + 3024), result);
    *(_BYTE *)(a2 + 3032) = 1;
    return v5;
  }
  return result;
}
