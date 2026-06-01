__int64 __fastcall sub_7D7E60(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = a1 + 400;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 8) + 168LL) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 2296) + 24LL))(
             *(_QWORD *)(v2 + 2296),
             a2,
             0);
  else
    return nullsub_1156();
}

