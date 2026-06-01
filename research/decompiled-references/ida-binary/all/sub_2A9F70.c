__int64 __fastcall sub_2A9F70(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)sub_2B70C0();
  if ( !v2 || a2 < 0 )
    return -1;
  if ( (*(_BYTE *)(v2[13] + a2) & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 656LL))(
             a1,
             0,
             (unsigned int)a2,
             1);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v2 + 296LL))(v2, (unsigned int)a2);
}
