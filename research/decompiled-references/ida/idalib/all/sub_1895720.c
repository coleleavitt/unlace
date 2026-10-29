__int64 __fastcall sub_1895720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rbx

  v4 = sub_168B6C0(a1);
  result = sub_BAC730(a2, a2, v5, v6, v7, v8);
  if ( result )
  {
    v10 = result;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v4, *(_QWORD *)(v10 + 48)) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(result + 16) == 48 )
          break;
        v10 = *(_QWORD *)(v10 + 80);
        if ( !v10 )
          return result;
      }
      result = *(unsigned int *)(a3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = v10;
      ++*(_DWORD *)(a3 + 8);
      v10 = *(_QWORD *)(v10 + 80);
    }
    while ( v10 );
  }
  return result;
}
