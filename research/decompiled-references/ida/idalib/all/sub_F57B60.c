__int16 __fastcall sub_F57B60(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  int v5; // ebp
  __int64 v6; // rax

  v5 = a3;
  v6 = *(unsigned int *)(a1 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = v5;
  ++*(_DWORD *)(a1 + 8);
  return sub_F1A490(a4, a1, a2, 1, 0);
}
