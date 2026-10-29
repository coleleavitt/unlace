__int64 __fastcall sub_F613D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  unsigned __int8 v8; // dl

  v6 = (__int64 *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v6 + 16) != 48 )
    return 0;
  v7 = sub_F60E90(*(_QWORD **)(*v6 + 24), a2, *v6, a4, a5, a6);
  v8 = *((_BYTE *)v7 + 73) >> 5;
  LOBYTE(v7) = v8 == 3;
  return (v8 <= 1u) | (unsigned int)v7;
}
