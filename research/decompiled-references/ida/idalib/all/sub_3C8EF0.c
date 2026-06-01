__int64 __fastcall sub_3C8EF0(__int64 *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  int v7; // r12d
  int v8; // eax
  __int64 v9[39]; // [rsp+0h] [rbp-138h] BYREF

  v3 = a3 & 0xF;
  v4 = -32770;
  v9[33] = __readfsqword(0x28u);
  if ( !_bittest64(&v4, v3) )
  {
    v7 = v3;
    v8 = sub_3C8BB0((__int64)a1, a2, v9, nullptr);
    if ( v8 )
    {
      sub_3C8540(a1, a2, 15, v9, v8);
      if ( !v7 )
        return 1;
    }
    else if ( !v7 )
    {
      return 1;
    }
  }
  v5 = sub_3C8AA0((unsigned __int8 **)a1, (__int64)v9, nullptr, a2, 16);
  if ( v5 )
    sub_3C8540(a1, a2, 16, v9, v5);
  return 1;
}
