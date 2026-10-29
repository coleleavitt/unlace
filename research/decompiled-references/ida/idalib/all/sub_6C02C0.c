unsigned __int64 __fastcall sub_6C02C0(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 i; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  int v13[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v6 = 32 * a1[6];
  v14 = __readfsqword(0x28u);
  v7 = a1[5];
  for ( i = v7 + v6; i != v7; v7 += 32 )
  {
    v9 = *(_QWORD *)(v7 + 24);
    if ( v9 != -1 )
    {
      sub_6BF360(*(__int64 **)(*a2 + 1672), v9, a3);
      if ( a3 )
        *(_QWORD *)(v7 + 24) = -1;
    }
  }
  v10 = a1[3];
  sub_6C01A0(a2, v10);
  if ( (get_merge_state(a2, v10) & 2) != 0 )
    sub_3E39C0((__int64)a2, a1[3], 1);
  sub_6BF220(a2, a1[3], 1);
  if ( a3 )
  {
    *(_QWORD *)v13 = sub_3BDD60(a2, a1[3]);
    sub_7BF0F0((int)v13);
  }
  return v14 - __readfsqword(0x28u);
}
