__int64 __fastcall sub_D6640(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h]
  __int64 v8; // [rsp+10h] [rbp-58h]
  char v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h]
  unsigned int v13; // [rsp+34h] [rbp-34h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 == a3 )
  {
    return 0;
  }
  else
  {
    v12 = a3;
    v10 = a1;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v6 = off_4B0768;
    v11 = a4;
    v13 = 0;
    v4 = sub_D6480((__int64)&v6, a2);
    if ( v4 || !(unsigned int)sub_6AB10((__int64 *)&v6, *(__int64 **)(a1 + 784), a2, 0) )
      v4 = v13;
    v6 = off_4AF4F8;
    qfree(v7);
  }
  return v4;
}
