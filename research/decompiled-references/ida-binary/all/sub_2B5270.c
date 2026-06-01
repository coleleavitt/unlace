__int64 __fastcall sub_2B5270(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 592LL))(a1, a3);
  *a2 = v3;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *, bool))(*(_QWORD *)v3 + 16LL))(v3, a1, a1[55] == 0);
  if ( !(_BYTE)v4 )
  {
    if ( *a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 8LL))(*a2);
    *a2 = 0;
  }
  return v4;
}
