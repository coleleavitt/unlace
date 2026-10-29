__int64 __fastcall sub_4E2A50(__int64 *a1, __int64 a2, char a3)
{
  int v3; // edx
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rbp
  int v7; // r12d
  __int64 i; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3 & 0xF;
  v12[1] = __readfsqword(0x28u);
  if ( v3 == 15 )
  {
    for ( i = 9; i != 12; ++i )
    {
      v9 = *a1;
      v10 = ea2node(a2);
      v11 = i;
      v12[0] = v10;
      sub_7BE850(v12, v9, v11, 83);
    }
  }
  else
  {
    result = 0;
    if ( v3 > 8 )
      return result;
    v5 = sub_4E15E0(v3);
    v6 = *a1;
    v7 = v5;
    v12[0] = ea2node(a2);
    sub_7BE850(v12, v6, v7, 83);
  }
  return 1;
}
