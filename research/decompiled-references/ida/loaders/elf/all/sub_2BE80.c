unsigned __int64 __fastcall sub_2BE80(__int64 a1, __int64 (__fastcall *a2)(_QWORD))
{
  const char *v2; // rax
  const char *v3; // rsi
  char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = 0;
  v5 = (char *)qvector_reserve(&v5, 0, 5, 1);
  *(_QWORD *)&v6 = 5;
  strcpy(v5, "Type");
  if ( a2 )
  {
    v2 = (const char *)a2(*(_QWORD *)(a1 + 8));
    if ( v2 )
      sub_2BDC0((__int64 *)&v5, (__int64)": %s", v2);
  }
  v3 = &s1;
  if ( (_QWORD)v6 )
    v3 = v5;
  set_cmt(*(_QWORD *)(a1 + 16), v3, 0);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v7 - __readfsqword(0x28u);
}

