__int64 __fastcall sub_38A880(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  const char *v3; // rdx
  unsigned int v4; // ebx
  const char *v5; // rdx
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = a2[8] == 0;
    v7 = nullptr;
    v3 = s1;
    v8 = 0;
    if ( !v2 )
      v3 = (const char *)a2[7];
    v4 = sub_37DB60((__int64)&v7, 0, (__int64)v3, (__int64)"Please enter comment for variable");
    if ( (_BYTE)v4 )
    {
      v5 = s1;
      if ( (_QWORD)v8 )
        v5 = v7;
      v4 = sub_38A7B0(a1, a2, v5);
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
