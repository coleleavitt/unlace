__int64 __fastcall sub_8F2ED0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = a1 + 384;
    *(_QWORD *)(v3 + 416) = *a2;
    sub_8E94C0(v3);
  }
  return 1;
}

