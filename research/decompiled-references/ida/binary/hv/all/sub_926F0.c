__int64 __fastcall sub_926F0(_QWORD *a1, __int64 a2, void *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v9; // rdx

  if ( a2 < 0 || (v6 = a1[1], a2 >= v6) )
  {
    sub_8F860(3u);
    return -(__int64)(a1[1] != a2);
  }
  v7 = a1[4];
  if ( v7 == -1 )
    goto LABEL_7;
  if ( a1[5] < v7 )
  {
    sub_8F860(4u);
    return -1;
  }
  if ( a2 + v7 != sub_92670(a1[3], a2 + v7, 0) )
    return -1;
  v6 = a1[1];
LABEL_7:
  v9 = v6 - a2;
  if ( v9 > a4 )
    v9 = a4;
  return sub_923E0(a1[3], a3, v9, a4, a5);
}

