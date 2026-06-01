const char *__fastcall get_path(__int64 a1)
{
  _QWORD *v1; // rax
  const char *v2; // rdx

  v1 = (_QWORD *)qword_2CCB598;
  if ( (_DWORD)a1 == 1 )
  {
    v1 = (_QWORD *)(qword_2CCB598 + 24);
  }
  else if ( (_DWORD)a1 == 2 )
  {
    v1 = (_QWORD *)(qword_2CCB598 + 48);
  }
  else if ( (_DWORD)a1 )
  {
    sub_590030(a1);
  }
  v2 = haystack;
  if ( v1[1] )
    return (const char *)*v1;
  return v2;
}
