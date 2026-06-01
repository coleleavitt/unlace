__int64 __fastcall sub_19D310(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  bool v3; // cc
  char *v4; // rdi
  unsigned int v5; // ebx
  char *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v2 = sub_19D0F0(a2);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 184) <= 1u;
    v7 = nullptr;
    v8 = 0;
    if ( v3 )
      itext();
    sub_94360((__int64 *)&v7);
    v4 = v7;
    if ( !(_QWORD)v8 )
      v4 = (char *)s1;
    v5 = sub_19CAE0(v4, 0);
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v5;
}

