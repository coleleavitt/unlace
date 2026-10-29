__int64 __fastcall sub_EEDE70(_QWORD *a1)
{
  __int64 v1; // rax

  if ( (*a1 & 0x2000LL) != 0 && (v1 = a1[((*a1 & 0x4000) != 0) + 2]) != 0 )
    return *(_QWORD *)(v1 + 8);
  else
    return 0;
}
