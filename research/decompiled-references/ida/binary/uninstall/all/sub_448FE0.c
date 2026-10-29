_QWORD *__fastcall sub_448FE0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = (_QWORD *)sub_40FB00(24);
  v3 = sub_40FB00(16040);
  *v2 = v3;
  v4 = (_QWORD *)v3;
  v5 = sub_496740(16040, a2);
  v2[1] = v5;
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  v6 = v2[1];
  ++*(_DWORD *)v6;
  *(_QWORD *)(v6 + 24) = &off_6560E0;
  v7 = sub_496740(16040, a2);
  v2[2] = v7;
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 32) = 1;
  *(_QWORD *)(v7 + 8) = 0;
  v8 = v2[2];
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  ++*(_DWORD *)v8;
  *(_QWORD *)(v8 + 24) = &off_6560E0;
  v4[3] = v4 + 2004;
  v4[4] = v4 + 4;
  sub_4AE1A0(&qword_65A840);
  if ( !dword_65A838 )
  {
    sub_43C9D0();
    dword_65A838 = 1;
  }
  sub_4AE230(&qword_65A840);
  return v2;
}

