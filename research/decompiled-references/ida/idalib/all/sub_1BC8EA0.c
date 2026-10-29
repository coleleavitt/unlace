char __fastcall sub_1BC8EA0(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int i; // ebx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax

  v4 = (__int64)a3;
  for ( i = 0; (unsigned int)sub_B76070(a2, a2, (__int64)a3, a4) > i; ++i )
  {
    a4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 8LL * i) + 48LL);
    a3 = (_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * i) + 48LL)
                                     & 0xFFFFFFFFFFFFFFF0LL]
                  & 0xFFFFFFFFFFFFFFF0LL);
    if ( *a3 != *(_QWORD *)(*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
      return 0;
  }
  v6 = sub_B77A30(a2);
  if ( v6 )
  {
    v7 = sub_B77A30(v4);
    if ( v7 )
      return sub_A955C0(a1, *(_QWORD *)(v6 + 56), *(_QWORD *)(v7 + 56));
    return 0;
  }
  return 1;
}
