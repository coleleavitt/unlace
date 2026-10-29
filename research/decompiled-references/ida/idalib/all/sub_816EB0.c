__int64 __fastcall sub_816EB0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax

  if ( *(_QWORD *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 488) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  v1 = *(_QWORD *)(a1 + 456);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v1, 8);
    if ( !v2 )
    {
      *(_QWORD *)(a1 + 480) = 0;
      *(_QWORD *)(a1 + 64) = "out of memory";
      return 12;
    }
    *(_QWORD *)(a1 + 480) = v2;
  }
  v3 = *(_QWORD *)(a1 + 464);
  if ( !v3 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v3 << 8, 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 488) = v4;
    return 0;
  }
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 64) = "out of memory";
  return 12;
}
