unsigned __int64 __fastcall sub_46BF30(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // r12
  __int64 i; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 j; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  char v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = -1;
  v3 = *(_QWORD **)(qword_2CCB598 + 1672);
  sub_3E3030(v3, (__int64)&v13, a2);
  for ( i = v13; v13 != -1; i = v13 )
  {
    if ( (v14 & 0x20) == 0 && (v14 & 0x1F) != 0x15 )
    {
      if ( (get_flags_ex(i, 4) & 0x600) == 0x200 )
        i = prev_not_tail(i);
      v5 = a1[2];
      v6 = a1[1];
      if ( a1[3] < (unsigned __int64)(v5 + 1) )
      {
        v11 = qvector_reserve(a1 + 1, v6, v5 + 1, 8);
        a1[1] = v11;
        v6 = v11;
        v5 = a1[2];
      }
      *(_QWORD *)(v6 + 8 * v5) = i;
      ++a1[2];
    }
    sub_3E3220(v3, (__int64)&v13, a2);
  }
  sub_40F780(v3, (__int64)&v13, a2);
  for ( j = v13; v13 != -1; j = v13 )
  {
    if ( (v14 & 0x20) == 0 && (v14 & 0x1F) != 0x15 )
    {
      if ( (get_flags_ex(j, 4) & 0x600) == 0x200 )
        j = prev_not_tail(j);
      v8 = a1[2];
      v9 = a1[1];
      if ( a1[3] < (unsigned __int64)(v8 + 1) )
      {
        v12 = qvector_reserve(a1 + 1, v9, v8 + 1, 8);
        a1[1] = v12;
        v9 = v12;
        v8 = a1[2];
      }
      *(_QWORD *)(v9 + 8 * v8) = j;
      ++a1[2];
    }
    sub_410770(v3, (__int64)&v13, a2);
  }
  return v15 - __readfsqword(0x28u);
}
