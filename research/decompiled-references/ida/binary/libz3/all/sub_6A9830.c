__int64 __fastcall sub_6A9830(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  __int64 result; // rax

  for ( i = 0; i < (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8)); ++i )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), i);
    result = sub_168D740(v3 + 32, a2);
    if ( (_BYTE)result )
      return result;
  }
  return 0;
}

