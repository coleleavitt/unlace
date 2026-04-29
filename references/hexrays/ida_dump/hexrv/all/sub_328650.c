__int64 __fastcall sub_328650(__int64 *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int128 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  __int128 vars18; // [rsp+18h] [rbp+18h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int128 vars30; // [rsp+30h] [rbp+30h]
  __int128 vars40; // [rsp+40h] [rbp+40h] BYREF
  __int64 vars70; // [rsp+70h] [rbp+70h]
  int vars78; // [rsp+78h] [rbp+78h]
  __int64 vars80; // [rsp+80h] [rbp+80h]
  char vars88; // [rsp+88h] [rbp+88h]
  unsigned __int64 vars98; // [rsp+98h] [rbp+98h]

  vars98 = __readfsqword(0x28u);
  vars78 = -1;
  vars10 = 0;
  vars28 = 0;
  vars70 = 1;
  vars80 = 0;
  vars88 = 0;
  vars0 = 0;
  vars18 = 0;
  vars30 = 0;
  vars40 = 0;
  if ( (unsigned int)sub_328550(&vars0, a2, a3, a4) == -1 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *a1;
    *a1 = vars40;
    *(_QWORD *)&vars40 = v4;
    lower_type(0, a1, 0, 0);
    v5 = 1;
  }
  clear_tinfo_t(&vars40);
  if ( vars28 )
  {
    *(_QWORD *)&vars30 = 0;
    qfree(vars28);
  }
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree(vars10);
  }
  return v5;
}
