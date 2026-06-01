__int64 __fastcall sub_F608E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned __int8 a6)
{
  __int64 v10; // rax

  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  v10 = *(unsigned int *)(a1 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = a3;
  ++*(_DWORD *)(a1 + 8);
  sub_9B7040(a1, SHIDWORD(a3));
  sub_9B7040(a1, a4);
  sub_9B7040(a1, a5);
  return sub_9B7040(a1, a6);
}
