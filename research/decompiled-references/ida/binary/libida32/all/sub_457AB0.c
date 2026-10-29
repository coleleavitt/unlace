unsigned __int64 __fastcall sub_457AB0(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // r12
  unsigned int i; // r15d
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int j; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+10h] [rbp-48h] BYREF
  char v14; // [rsp+14h] [rbp-44h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v13 = -1;
  v14 = 0;
  v3 = *(_QWORD **)(qword_2CA1698 + 1480);
  sub_3DD450(v3, (__int64)&v13, a2);
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
        v11 = qvector_reserve(a1 + 1, v6, v5 + 1, 4);
        a1[1] = v11;
        v6 = v11;
        v5 = a1[2];
      }
      *(_DWORD *)(v6 + 4 * v5) = i;
      ++a1[2];
    }
    sub_3DD610(v3, (__int64)&v13, a2);
  }
  sub_3FC530(v3, (__int64)&v13, a2);
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
        v12 = qvector_reserve(a1 + 1, v9, v8 + 1, 4);
        a1[1] = v12;
        v9 = v12;
        v8 = a1[2];
      }
      *(_DWORD *)(v9 + 4 * v8) = j;
      ++a1[2];
    }
    sub_3FD4E0(v3, &v13, a2);
  }
  return v15 - __readfsqword(0x28u);
}

