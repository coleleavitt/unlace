unsigned __int64 __fastcall sub_522AA0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  char *v7; // rdi
  char *v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v2 = *(__int64 **)(a1 + 16);
  v13 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 8);
  v4 = *v2;
  v5 = 72 * *v2;
  sub_522990(v5 + v3[2], a2);
  if ( *((_DWORD *)v3 + 16) == 3 )
  {
    v9 = v3 + 1;
    v10 = sub_5216C0(v3[2], *v3);
    if ( v3[1] == -1 )
    {
      sub_7BF040(v9, *v3, "$ scriptsnippets", 0);
      v9 = v3 + 1;
    }
    v11 = *v3;
    v12 = v10 + 1;
    sub_7BE7C0(v9, v11, 0, &v12, 8, 65);
    *((_DWORD *)v3 + 16) = 1;
  }
  else if ( (unsigned __int8)sub_7AF760(*v3) )
  {
    sub_5216C0(v5 + v3[2], *v3);
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
