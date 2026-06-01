__int64 __fastcall sub_43CA10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = 0;
  sub_4AE1A0(qword_65A4E0);
  if ( !dword_65A4D8 )
    sub_43C9D0();
  v2 = qword_65A4C0(qword_65A480, a1);
  if ( v2 )
    v1 = *(_QWORD *)(v2 + 24);
  sub_4AE230(qword_65A4E0);
  return v1;
}

