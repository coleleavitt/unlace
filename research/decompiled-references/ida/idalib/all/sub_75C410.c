char __fastcall sub_75C410(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rax
  char *v5; // rdx
  char v6; // al
  char *v7; // rax

  v4 = qword_2CD44C0;
  v5 = ++qword_2CD44C0;
  v6 = *v4;
  if ( v6 == 104 )
    goto LABEL_4;
  if ( v6 != 118 )
    sub_76E6C0(a1, a2, v5, a4);
  sub_75C110(0, a2, (__int64)v5, a4);
  v7 = qword_2CD44C0;
  v5 = ++qword_2CD44C0;
  if ( *v7 == 95 )
  {
LABEL_4:
    LOBYTE(v7) = sub_75C110(0, a2, (__int64)v5, a4);
    ++qword_2CD44C0;
  }
  return (char)v7;
}
