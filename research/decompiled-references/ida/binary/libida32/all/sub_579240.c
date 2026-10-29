__int64 __fastcall sub_579240(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)(a1 + 56) > 1u )
  {
    set_file_ext(a2, a3, *(_QWORD *)(a1 + 48), a4);
    return 1;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}

