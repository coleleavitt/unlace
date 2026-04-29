__int64 __fastcall sub_2F960(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  if ( (unsigned int)sub_2F880(0, (__int64)"Do you really want to rebuild the C++ metadata caches?") == 1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    (***(void (__fastcall ****)(_QWORD))(v2 + 8))(*(_QWORD *)(v2 + 8));
    *(_BYTE *)(v2 + 16) = 1;
  }
  return 0;
}
