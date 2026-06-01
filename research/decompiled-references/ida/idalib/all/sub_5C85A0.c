__int64 __fastcall sub_5C85A0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(int *)(a2 + 32);
  v5 = *(_QWORD *)a2;
  v13[1] = __readfsqword(0x28u);
  if ( v4 )
  {
    v10 = sub_3BDD60(a1, v5);
    v11 = *(_QWORD *)(a2 + 40);
    v12 = *a1;
    v13[0] = v10;
    sub_7BEF30(v13, v12, v11, 8 * v4, 28672, 83);
    if ( !a3 )
      return 1;
  }
  else
  {
    v7 = sub_3BDD60(a1, v5);
    v8 = *a1;
    v13[0] = v7;
    sub_7BEF80(v13, v8, 28672, 83);
    if ( !a3 )
      return 1;
  }
  return sub_5C77B0((__int64)a1, (unsigned __int64 *)a2, 0);
}
