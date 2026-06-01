__int64 __fastcall sub_17A3D00(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = sub_F6A5F0(*v3, v3, a3);
  if ( !v4 )
    return 0;
  v5 = v4;
  while ( !sub_F5E2E0(v5) )
  {
    v5 = sub_F6A5F0(*(_QWORD *)(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF0LL), v3, v6);
    if ( !v5 )
      return 0;
  }
  return v5;
}
