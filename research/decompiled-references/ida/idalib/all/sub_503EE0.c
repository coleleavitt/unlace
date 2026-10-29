__int64 __fastcall sub_503EE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = sub_506F10(v3, a2);
  v5 = *(_QWORD **)(a1 + 32);
  if ( v4 == *v5 + 16LL * v5[1] || a2 < **(_QWORD **)v4 || a2 >= *(_QWORD *)(*(_QWORD *)v4 + 8LL) )
    return 0xFFFFFFFFLL;
  else
    return (v4 - *v5) >> 4;
}
