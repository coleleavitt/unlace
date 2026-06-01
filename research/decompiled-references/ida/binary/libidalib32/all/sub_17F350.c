__int64 __fastcall sub_17F350(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 (*v5)(); // rax
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 80LL))(TProgram::application + 136LL);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, a2);
  if ( !v3 )
    return 6;
  v4 = v3;
  v5 = *(__int64 (**)())(*(_QWORD *)v3 + 56LL);
  if ( v5 != sub_17DC70 && !((unsigned __int8 (__fastcall *)(__int64))v5)(v4) )
    return 6;
  result = 7;
  if ( *(_QWORD *)(v4 + 1896) )
    return 3;
  return result;
}

