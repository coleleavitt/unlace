__int64 __fastcall sub_817820(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2[12] )
      (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
    if ( a2[7] )
      (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
    if ( a2[8] )
      (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(a1 + 136))(*(_QWORD *)(a1 + 144), a2);
  }
  return result;
}
