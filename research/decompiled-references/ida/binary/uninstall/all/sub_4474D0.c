__int64 __fastcall sub_4474D0(__int64 a1)
{
  int v1; // eax
  char *v2; // rdi
  char **i; // rdx
  bool v4; // zf
  _BYTE v6[12]; // [rsp+Ch] [rbp-Ch] BYREF

  sub_4AE1A0(qword_65A7C0);
  v1 = sub_4ADC90(a1, v6);
  if ( v1 != -1 )
  {
    v2 = environ[v1];
    for ( i = &environ[v1 + 1]; ; ++i )
    {
      v4 = *i == nullptr;
      *(i - 1) = *i;
      if ( v4 )
        break;
    }
    sub_4473E0((__int64)v2, 0);
  }
  return sub_4AE230(qword_65A7C0);
}

