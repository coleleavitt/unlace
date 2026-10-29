unsigned __int64 __fastcall sub_A5E330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rax

  v6 = *(_QWORD *)(a2 + 104);
  if ( v6 )
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a3 )
    return sub_A5E200(a1, a2, 0, a4, a5, a6);
  v8 = *(_QWORD *)(a3 + 104);
  *(_QWORD *)(a2 + 104) = v8;
  return v8 & 0xFFFFFFFFFFFFFFF0LL;
}

