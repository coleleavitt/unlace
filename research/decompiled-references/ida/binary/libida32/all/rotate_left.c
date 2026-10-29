__int64 __fastcall rotate_left(unsigned int a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdi
  char v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // eax

  v4 = 32;
  v6 = a3;
  if ( a4 <= 0x20 )
    v4 = a4;
  v7 = v4;
  v8 = v4 + a3;
  v9 = 32 - v4;
  if ( v8 > 0x20 )
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
  if ( v6 != 32 )
    v12 = (1 << v6) - 1;
  return a1 & ~(v12 << v7)
       | (((((((v12 << v7) & a1) >> v7) & (((1 << (v6 - v11)) - 1) ^ v12)) >> (v6 - v11))
         | ((((1 << (v6 - v11)) - 1) & (((v12 << v7) & a1) >> v7)) << v11)) << v7);
}

