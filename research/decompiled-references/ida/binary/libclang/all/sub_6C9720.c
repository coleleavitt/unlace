unsigned __int64 __fastcall sub_6C9720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax

  v3 = *(_QWORD *)(a2 + 104);
  if ( v3 )
    return v3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a3 )
    return sub_6B1730(a1, a2);
  v5 = *(_QWORD *)(a3 + 104);
  *(_QWORD *)(a2 + 104) = v5;
  return v5 & 0xFFFFFFFFFFFFFFF0LL;
}

