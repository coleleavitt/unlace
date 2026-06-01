__int64 *__fastcall sub_2EBD70(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp

  v3 = a2[1];
  *a1 = 0;
  a1[1] = v3;
  v4 = sub_15D1F10(a3);
  if ( (unsigned __int8)sub_1673B10(a2 + 23, v4) )
    v5 = sub_15E1B70(a2[24]);
  else
    v5 = sub_15E1B70(a2[21]);
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  sub_2EB430(*a1, a1[1]);
  *a1 = v6;
  return a1;
}

