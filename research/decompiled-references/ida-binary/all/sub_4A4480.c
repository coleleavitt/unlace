unsigned __int64 __fastcall sub_4A4480(__int64 a1)
{
  const char *v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  __int128 vars20; // [rsp+20h] [rbp+20h]
  char vars30; // [rsp+30h] [rbp+30h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  vars0 = 0;
  vars18 = 0;
  vars30 = 0;
  vars8 = 0;
  vars20 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 624LL))(a1, &vars0, 7);
  v1 = (const char *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 704LL))(a1, &vars0, 263);
  sub_4E0B20(a1 + 104, v1, 0);
  sub_4DE2C0();
  v2 = vars0;
  if ( vars0 )
  {
    v3 = vars8;
    if ( (_QWORD)vars8 )
    {
      v4 = 0;
      do
      {
        ++v4;
        sub_4DE2C0();
        v2 = vars0;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&vars8 = 0;
    qfree(v2, v1);
  }
  return vars38 - __readfsqword(0x28u);
}
