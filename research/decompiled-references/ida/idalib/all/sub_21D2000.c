__int64 __fastcall sub_21D2000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v10 = *(unsigned int *)(a1 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = 61;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = 0;
  ++*(_DWORD *)(a1 + 8);
  if ( a2 )
    sub_2222BB0(a1, a3, a2);
  else
    sub_2222BB0(a1, 0, 0);
  sub_9B7040(a1, a4);
  sub_9B7040(a1, SHIDWORD(a4));
  sub_9B7040(a1, a5);
  sub_9B7040(a1, SHIDWORD(a5));
  sub_9B7040(a1, a6);
  result = *(unsigned int *)(a1 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 0;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
