unsigned __int64 __fastcall rotate_left(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdi
  char v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax

  v4 = 64;
  v6 = a3;
  if ( a4 <= 0x40 )
    v4 = a4;
  v7 = v4;
  v8 = v4 + a3;
  v9 = 64 - v4;
  if ( v8 > 0x40 )
    v6 = v9;
  if ( v6 <= 1 )
    return a1;
  v10 = (unsigned int)(a2 + v6);
  if ( a2 >= 0 )
    v10 = (unsigned int)a2;
  v11 = v10 % v6;
  if ( !(unsigned int)(v10 % v6) )
    return a1;
  v12 = -1;
  if ( v6 != 64 )
    v12 = (1LL << v6) - 1;
  return a1 & ~(v12 << v7)
       | (((((((v12 << v7) & a1) >> v7) & (((1LL << ((unsigned __int8)v6 - (unsigned __int8)v11)) - 1) ^ v12)) >> ((unsigned __int8)v6 - (unsigned __int8)v11))
         | ((((1LL << ((unsigned __int8)v6 - (unsigned __int8)v11)) - 1) & (((v12 << v7) & a1) >> v7)) << v11)) << v7);
}
