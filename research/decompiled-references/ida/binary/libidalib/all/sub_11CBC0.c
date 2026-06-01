__int64 __fastcall sub_11CBC0(_QWORD *a1)
{
  const char *v1; // rsi
  unsigned int v2; // ebx
  const char *v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  sub_118D00((__int64)&v4, 0, 0, "Import script from file");
  if ( v5 <= 1 )
  {
    v2 = 0;
  }
  else
  {
    sub_11C830(a1, 1);
    v1 = s1;
    if ( v5 )
      v1 = v4;
    (*(void (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 80LL))(*a1, v1);
    sub_11C620(a1);
    v2 = 1;
  }
  if ( v4 )
  {
    v5 = 0;
    qfree();
  }
  return v2;
}

