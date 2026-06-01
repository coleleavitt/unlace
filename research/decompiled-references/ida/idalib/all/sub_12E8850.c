__int64 __fastcall sub_12E8850(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax

  if ( a1[8] )
    return 0;
  v6 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a4);
  if ( v6 )
    return sub_1FD1440(v6, a2, a3);
  else
    return 0;
}
