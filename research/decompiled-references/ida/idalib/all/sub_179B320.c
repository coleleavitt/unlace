__int64 __fastcall sub_179B320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx

  v3 = sub_F6A5F0(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3);
  if ( !v3 )
    return 0;
  v4 = v3;
  while ( !sub_F5E2E0(v4) )
  {
    v4 = sub_F6A5F0(*(_QWORD *)(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFFFFFF0LL), a2, v5);
    if ( !v4 )
      return 0;
  }
  return v4;
}
