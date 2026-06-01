__int64 __fastcall sub_1A1530(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  if ( (unsigned int)sub_1EB590(a1) == 2 && (v4 = *(_QWORD *)(a1 + 896)) != 0
    || (unsigned int)sub_1EB590(a1) == 3 && (v4 = *(_QWORD *)(a1 + 904)) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 688LL))(v4, a2);
  }
  return sub_206150(a1, a2);
}
