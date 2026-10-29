unsigned __int64 __fastcall sub_50AA90(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  char *v7; // rdi
  char *v8; // rdx
  _QWORD *v9; // rdi
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v2 = *(__int64 **)(a1 + 16);
  v13 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 8);
  v4 = *v2;
  v5 = *v2 << 6;
  sub_50A980(v5 + v3[2], a2);
  if ( *((_DWORD *)v3 + 16) == 3 )
  {
    v9 = v3 + 1;
    v10 = sub_5096E0(v3[2], *v3);
    if ( *((_DWORD *)v3 + 2) == -1 )
    {
      sub_79BC40(v9, *v3, "$ scriptsnippets", 0);
      v9 = v3 + 1;
    }
    v11 = *v3;
    v12 = v10 + 1;
    sub_79B440(v9, v11, 0, &v12, 4, 65);
    *((_DWORD *)v3 + 16) = 1;
  }
  else if ( (unsigned __int8)sub_78EE60(*v3) )
  {
    sub_5096E0(v5 + v3[2], *v3);
    v7 = (char *)v3[5];
    v8 = &v7[8 * v3[6]];
    if ( v7 != v8 )
    {
      while ( v4 != *(_QWORD *)v7 )
      {
        v7 += 8;
        if ( v8 == v7 )
          return v13 - __readfsqword(0x28u);
      }
      if ( v8 != v7 )
      {
        memmove(v7, v7 + 8, v8 - v7 - 8);
        --v3[6];
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}

