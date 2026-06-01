__int64 __fastcall sub_1F75880(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  volatile signed __int32 *v7; // [rsp+18h] [rbp-20h]

  sub_1F6B880(&v5);
  if ( a2 )
  {
    sub_A1FE00(v5, 4, 1);
    sub_A1FE00(v5, 8, 4);
  }
  else
  {
    sub_A1FE00(v5, 3, 1);
  }
  sub_A1FE00(v5, 0, 10);
  v2 = *((volatile signed __int32 **)&v5 + 1);
  v6 = v5;
  v5 = 0;
  v7 = v2;
  v3 = sub_A22F90(a1, &v6);
  if ( v7 )
    sub_4343A0(v7);
  if ( *((_QWORD *)&v5 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v5 + 1));
  return v3;
}
