__int64 __fastcall sub_3C3C20(__int64 *a1, unsigned int a2, char a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  int v7; // r12d
  int v8; // eax
  unsigned int v9[34]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-30h]

  v3 = a3 & 0xF;
  v4 = -32770;
  v10 = __readfsqword(0x28u);
  if ( !_bittest64(&v4, v3) )
  {
    v7 = v3;
    v8 = sub_3C38F0(a1, a2, v9, nullptr);
    if ( v8 )
    {
      sub_3C32D0(a1, a2, 0xFu, v9, v8);
      if ( !v7 )
        return 1;
    }
    else if ( !v7 )
    {
      return 1;
    }
  }
  v5 = sub_3C37D0(a1, (__int64)v9, nullptr, a2, 0x10u);
  if ( v5 )
    sub_3C32D0(a1, a2, 0x10u, v9, v5);
  return 1;
}

