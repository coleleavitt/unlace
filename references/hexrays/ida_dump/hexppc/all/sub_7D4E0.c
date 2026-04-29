__int64 __fastcall sub_7D4E0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int128 v5; // rt0
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v8; // rax
  __int128 v9; // rt0

  sub_7BF00(a2, *a1);
  v2 = -a1[1];
  if ( a1[1] > 0 )
    v2 = a1[1];
  *(_QWORD *)&v3 = a1[1];
  *((_QWORD *)&v3 + 1) = v2;
  sub_7BF00(a2, v3 >> 63);
  v4 = -a1[2];
  if ( a1[2] > 0 )
    v4 = a1[2];
  *(_QWORD *)&v5 = a1[2];
  *((_QWORD *)&v5 + 1) = v4;
  sub_7BF00(a2, v5 >> 63);
  v6 = -a1[3];
  if ( a1[3] > 0 )
    v6 = a1[3];
  *(_QWORD *)&v7 = a1[3];
  *((_QWORD *)&v7 + 1) = v6;
  sub_7BF00(a2, v7 >> 63);
  v8 = -a1[4];
  if ( a1[4] > 0 )
    v8 = a1[4];
  *(_QWORD *)&v9 = a1[4];
  *((_QWORD *)&v9 + 1) = v8;
  return sub_7BF00(a2, v9 >> 63);
}
