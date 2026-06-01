__int64 __fastcall sub_146B650(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  int v6; // eax

  result = *a3;
  v4 = *((_QWORD *)a3 + 1);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2 + 2548;
  *(_DWORD *)(a1 + 32) = 0;
  if ( (result & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = a3;
  }
  else
  {
    v6 = sub_154D3C0(a2, a1 + 8, v4);
    **(_DWORD **)(a1 + 24) += v6;
    *(_DWORD *)(a1 + 32) += v6;
    result = *a3;
    *(_QWORD *)(a1 + 40) = a3;
    if ( (result & 1) == 0 )
    {
      sub_1564E40(*(_QWORD *)(a1 + 8), 40);
      ++*(_DWORD *)(a1 + 16);
      return sub_183CDC0(*(_QWORD *)(a2 + 96), *(_QWORD *)(*(_QWORD *)(a2 + 96) + 608LL), *((_QWORD *)a3 + 1));
    }
  }
  return result;
}
