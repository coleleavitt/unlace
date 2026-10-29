__int64 __fastcall sub_145B180(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx

  if ( a2 < 0 )
  {
    v3 = (__int64 *)(*(_QWORD *)(a1 + 136) + 8LL * ~a2);
    result = *v3;
    if ( !*v3 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 16LL))(*(_QWORD *)(a1 + 216));
      *v3 = result;
      if ( !result )
      {
        v6 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 96) += 12LL;
        result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a1 + 24) >= (unsigned __int64)(result + 12) && v6 )
          *(_QWORD *)(a1 + 16) = result + 12;
        else
          result = sub_986170(a1 + 16, 12, 12, 3, v4, v5);
        *(_QWORD *)result = 0;
        *(_DWORD *)(result + 8) = 0;
        *v3 = result;
      }
    }
  }
  else if ( a2 )
  {
    return *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * (a2 - 1));
  }
  else
  {
    return 0;
  }
  return result;
}
