__int64 __fastcall sub_1CB4710(__int64 a1, __int64 a2)
{
  __int64 i; // rbx

  for ( i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        (*(_WORD *)(i + 30) & 0x180) != 0;
        i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 48LL))(i) )
  {
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 48LL))(i) )
      break;
  }
  return *(_QWORD *)(i + 56);
}
