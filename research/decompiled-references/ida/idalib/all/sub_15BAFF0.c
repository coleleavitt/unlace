__int64 __fastcall sub_15BAFF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v4; // rbp
  __int64 *v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v4 = sub_15BAE70(a1, a2);
  v5 = sub_15BAE70(a1, a3);
  v6 = sub_C09F10(
         *(_QWORD **)(**(_QWORD **)a1 + 248LL),
         (unsigned __int64)v4,
         (unsigned __int64)v5,
         21,
         v4[1],
         0,
         0,
         0,
         0);
  v7 = *(unsigned int *)(a1 + 112);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 116) )
  {
    v9 = v6;
    sub_2237220(a1 + 104, a1 + 120, v7 + 1, 8);
    v7 = *(unsigned int *)(a1 + 112);
    v6 = v9;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v7) = v6;
  ++*(_DWORD *)(a1 + 112);
  return a1;
}
