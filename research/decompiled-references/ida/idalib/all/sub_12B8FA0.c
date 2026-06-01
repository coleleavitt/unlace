__int64 __fastcall sub_12B8FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int128 v6; // rax
  __int128 v8; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+10h] [rbp-98h]
  __int64 v10; // [rsp+20h] [rbp-88h]
  __int128 v11; // [rsp+30h] [rbp-78h]
  __int16 v12; // [rsp+50h] [rbp-58h]
  _OWORD v13[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+80h] [rbp-28h]

  v12 = 261;
  *(_QWORD *)&v11 = sub_22B77D0(a4);
  *((_QWORD *)&v11 + 1) = v5;
  *(_QWORD *)&v6 = sub_22B7480(a4);
  v8 = v6;
  *(_QWORD *)&v9 = "-";
  LOWORD(v10) = 773;
  v13[1] = v11;
  *(_QWORD *)&v13[0] = &v8;
  LOWORD(v14) = 1282;
  sub_2253560(a1, v13);
  return a1;
}
