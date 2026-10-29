__int64 __fastcall sub_20C3270(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v6; // rax
  bool v7; // cc
  _QWORD *v8; // rax

  v6 = sub_20602F0(a2, (__int64)a2, a3, a4, a5, a6);
  v7 = *((_DWORD *)v6 + 2) <= 0x40u;
  v8 = *(_QWORD **)v6;
  if ( !v7 )
    v8 = (_QWORD *)*v8;
  return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v8);
}
