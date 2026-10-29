__int64 __fastcall sub_12B8E90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int128 v3; // rax
  __int128 v5; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-98h]
  __int64 v7; // [rsp+20h] [rbp-88h]
  __int128 v8; // [rsp+30h] [rbp-78h]
  __int16 v9; // [rsp+50h] [rbp-58h]
  _OWORD v10[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v11; // [rsp+80h] [rbp-28h]

  v9 = 261;
  *(_QWORD *)&v8 = sub_22B77D0(a2);
  *((_QWORD *)&v8 + 1) = v2;
  *(_QWORD *)&v3 = sub_22B7480(a2);
  v5 = v3;
  *(_QWORD *)&v6 = "-";
  LOWORD(v7) = 773;
  v10[1] = v8;
  *(_QWORD *)&v10[0] = &v5;
  LOWORD(v11) = 1282;
  sub_2253560(a1, v10);
  return a1;
}
