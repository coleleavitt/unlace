unsigned __int64 __fastcall sub_4E42C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
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
  if ( (unsigned __int8)sub_4D84D0(a1, (__int64)&vars0) )
    sub_4DF9D0(a1, (__int64)&vars0, 0);
  if ( vars18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)vars18 + 8LL))(vars18);
  v1 = vars0;
  if ( vars0 )
  {
    v2 = vars8;
    if ( (_QWORD)vars8 )
    {
      v3 = 0;
      do
      {
        v4 = *(_QWORD *)(v1 + 32 * v3);
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          v1 = vars0;
        }
        ++v3;
      }
      while ( v2 != v3 );
    }
    *(_QWORD *)&vars8 = 0;
    qfree(v1, (const char *)&vars0);
  }
  return vars38 - __readfsqword(0x28u);
}
