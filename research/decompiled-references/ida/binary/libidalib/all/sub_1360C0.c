unsigned __int64 __fastcall sub_1360C0(__int64 a1, __int64 a2)
{
  _BOOL4 v2; // ebp
  char *v4; // r12
  char *v5; // rax
  char *s; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  s = nullptr;
  v2 = 0;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, char **))a2)(a2, 100, &s) )
  {
    if ( (_QWORD)v7 )
    {
      v4 = s;
      v5 = strchr(s, 34);
      if ( v5 )
        v2 = v5 - v4 != -1;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a2 + 16LL))(a2, 101, v2);
  if ( s )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

