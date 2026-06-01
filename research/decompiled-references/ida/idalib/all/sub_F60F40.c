__int64 __fastcall sub_F60F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax

  v6 = (__int64 *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v6 + 16) == 47 )
    return *((_DWORD *)sub_F60E90(*(_QWORD **)(*v6 + 24), a2, *v6, a4, a5, a6) + 19) >> 7;
  else
    return 0;
}
