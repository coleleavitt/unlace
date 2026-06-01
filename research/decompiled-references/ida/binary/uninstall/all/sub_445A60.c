__int64 __fastcall sub_445A60(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax

  if ( !a2 || !*a2 )
  {
    sub_4AE1A0(&qword_65A598);
    v2 = qword_65A5A0;
    ++*(_DWORD *)(qword_65A5A0 + 56);
    sub_4AE230(&qword_65A598);
LABEL_4:
    sub_4AE1A0(&qword_65A598);
    sub_444000(qword_65A5A8, (int)a2, v3, v4, v5, v6);
    qword_65A5A8 = v2;
    sub_4AE230(&qword_65A598);
    return 0;
  }
  v2 = sub_445140(a1, a2);
  result = 1;
  if ( v2 )
    goto LABEL_4;
  return result;
}

