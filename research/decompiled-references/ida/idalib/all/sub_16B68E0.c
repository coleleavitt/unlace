__int64 __fastcall sub_16B68E0(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD); // r9
  _QWORD *v2; // rax

  v1 = *(__int64 (__fastcall **)(_QWORD))a1;
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 8));
  if ( (*(_QWORD *)a1 & 1) != 0 )
    v1 = *(__int64 (__fastcall **)(_QWORD))((char *)v1 + *v2 - 1);
  return v1(v2);
}
