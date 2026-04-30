__int64 __fastcall sub_2A85A0(_QWORD *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 (__fastcall *v4)(_QWORD *, _QWORD); // rbp
  unsigned int v5; // eax
  __int64 v6; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 504LL))(a1);
  if ( v1 < 0 )
    return 0;
  v2 = a1[55];
  if ( v2 )
    v2 = *(_QWORD *)(v2 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 104) + v1) & 1) != 0 )
  {
    sub_2BE930(a1);
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 736LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 504LL))(a1);
  v6 = v4(a1, v5);
  sub_33D630(v6);
  return 2;
}
