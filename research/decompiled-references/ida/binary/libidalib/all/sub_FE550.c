__int64 __fastcall sub_FE550(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // edx

  v4 = sub_10D9F0(0);
  v5 = 0;
  if ( v4 > 0 )
  {
    *(_DWORD *)(a3[95] + 48LL) = v4;
    (*(void (__fastcall **)(_QWORD *))(*a3 + 384LL))(a3);
    return 1;
  }
  return v5;
}

