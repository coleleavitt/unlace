__int64 __fastcall set_database_flag(int a1, char a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // edi

  result = qword_2CCB598;
  v3 = *(_DWORD *)(qword_2CCB598 + 72);
  v4 = v3 | a1;
  v5 = v3 & ~a1;
  if ( a2 )
    v5 = v4;
  *(_DWORD *)(qword_2CCB598 + 72) = v5;
  return result;
}
