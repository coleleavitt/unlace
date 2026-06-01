__int64 __fastcall sub_88BFE0(__int64 a1)
{
  time_t v1; // rbp
  time_t v2; // rax

  v1 = time(nullptr);
  v2 = *(_QWORD *)(a1 + 544);
  if ( v2 < v1 && v2 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    *(_DWORD *)(a1 + 552) = 0;
    *(_QWORD *)(a1 + 544) = 0;
    return 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 560) <= v1 )
      sub_88BE00();
    return 1;
  }
}

