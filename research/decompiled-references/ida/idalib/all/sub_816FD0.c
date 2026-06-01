__int64 __fastcall sub_816FD0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = v2;
      v2 = (_QWORD *)v2[3];
      if ( *v3 )
        (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(a1 + 136))(*(_QWORD *)(a1 + 144), v3);
    }
    while ( v2 );
  }
  return result;
}
