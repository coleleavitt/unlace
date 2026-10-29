__int64 __fastcall sub_4CB2C0(__int64 *a1, unsigned int a2, char a3)
{
  int v3; // edx
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // r12
  unsigned int v7; // ebp
  unsigned int i; // ebp
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v3 = a3 & 0xF;
  v13 = __readfsqword(0x28u);
  if ( v3 == 15 )
  {
    for ( i = 9; i != 12; ++i )
    {
      v9 = *a1;
      v10 = ea2node(a2);
      v11 = i;
      v12 = v10;
      sub_79B4D0(&v12, v9, v11, 83);
    }
  }
  else
  {
    result = 0;
    if ( v3 > 8 )
      return result;
    v5 = sub_4CA080(v3);
    v6 = *a1;
    v7 = v5;
    v12 = ea2node(a2);
    sub_79B4D0(&v12, v6, v7, 83);
  }
  return 1;
}

