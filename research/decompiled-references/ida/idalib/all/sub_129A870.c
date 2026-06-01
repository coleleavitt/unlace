__int64 __fastcall sub_129A870(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( !(_DWORD)result )
  {
    v5 = *(unsigned int *)(a3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-lc++";
    v6 = *(unsigned int *)(a3 + 12);
    v7 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v7;
    if ( v7 + 1 > v6 )
    {
      sub_2237220(a3, a3 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-lc++abi";
    v8 = *(unsigned int *)(a3 + 12);
    result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = result;
    if ( result + 1 > v8 )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-lunwind";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
