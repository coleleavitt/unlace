__int64 __fastcall sub_120C50(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = sub_1545C0(*a1);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v1 + 560LL))(v1, a1);
  else
    return 0;
}

