__int64 __fastcall sub_11C3AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+8h] [rbp-30h]

  if ( a6 )
  {
    sub_10DC5D0(a3, (__int64)"--whole-archive");
    v11 = sub_112D2D0(a1, a2, a4, a5, 1u, 0);
    v12 = *(unsigned int *)(a3 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v14 = v11;
      sub_2237220(a3, a3 + 16, v12 + 1, 8);
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8)) = v14;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v11;
    }
    ++*(_DWORD *)(a3 + 8);
    return sub_10DC5D0(a3, (__int64)"--no-whole-archive");
  }
  else
  {
    result = sub_112D2D0(a1, a2, a4, a5, 1u, 0);
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v13 = result;
      sub_2237220(a3, a3 + 16, v10 + 1, 8);
      result = v13;
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8)) = v13;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = result;
    }
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
