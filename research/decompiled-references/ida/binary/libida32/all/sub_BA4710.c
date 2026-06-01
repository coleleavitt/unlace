__int64 __fastcall sub_BA4710(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *((_BYTE *)a1 + 10) && *a2 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 96))(a1, *a2);
  else
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 192))(a1, a2[1]);
}

