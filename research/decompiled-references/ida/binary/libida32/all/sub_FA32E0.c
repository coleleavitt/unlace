__int64 __fastcall sub_FA32E0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v3)(_QWORD *); // r8

  if ( !a1[8] )
    return 0;
  v1 = a1[32];
  if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v3 = *(__int64 (__fastcall **)(_QWORD *))(a1[32] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v1 & 2) != 0 )
    return v3(a1 + 29);
  else
    return v3((_QWORD *)a1[29]);
}

