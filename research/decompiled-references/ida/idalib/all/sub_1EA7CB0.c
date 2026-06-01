__int64 __fastcall sub_1EA7CB0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v4 )
      break;
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v2 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v2;
      if ( !v2 )
        return 0;
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = v2;
      if ( !v2 )
        return 0;
    }
  }
  return result;
}
