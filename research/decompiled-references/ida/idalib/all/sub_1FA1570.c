__int64 __fastcall sub_1FA1570(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-20h]

  v4 = sub_1FA1260(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3);
  v5 = *(unsigned int *)(a1 + 176);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 180) )
  {
    v9 = v4;
    sub_2237220(a1 + 168, a1 + 184, v5 + 1, 4);
    v5 = *(unsigned int *)(a1 + 176);
    v4 = v9;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 168) + 4 * v5) = v6;
  v7 = *(_QWORD *)(a1 + 16);
  ++*(_DWORD *)(a1 + 176);
  return sub_9B9C90(v7, v4);
}
