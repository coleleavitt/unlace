__int64 __fastcall sub_145B0E0(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbp
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx

  v2 = (__int64 *)(*(_QWORD *)(a1 + 136) + 8LL * a2);
  result = *v2;
  if ( !*v2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 16LL))(*(_QWORD *)(a1 + 216));
    *v2 = result;
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
      *v2 = result;
    }
  }
  return result;
}
