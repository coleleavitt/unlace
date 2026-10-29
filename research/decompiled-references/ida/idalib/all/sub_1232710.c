__int64 __fastcall sub_1232710(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // r13
  __int128 v4; // rax
  __int128 v5; // rax
  __int64 v6; // rdx
  __int128 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-278h]
  __int64 v10; // [rsp+10h] [rbp-268h]
  __int64 v11; // [rsp+20h] [rbp-258h]
  __int128 v12; // [rsp+30h] [rbp-248h] BYREF
  __int128 v13; // [rsp+40h] [rbp-238h]
  __int64 v14; // [rsp+50h] [rbp-228h]
  __int128 v15; // [rsp+60h] [rbp-218h]
  __int16 v16; // [rsp+80h] [rbp-1F8h]
  _OWORD v17[2]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-1C8h]
  char *v19; // [rsp+C0h] [rbp-1B8h]
  __int64 v20; // [rsp+C8h] [rbp-1B0h]
  __int64 v21; // [rsp+E0h] [rbp-198h]
  _QWORD v22[4]; // [rsp+F0h] [rbp-188h] BYREF
  __int64 v23; // [rsp+110h] [rbp-168h]
  __int128 v24; // [rsp+120h] [rbp-158h]
  __int64 v25; // [rsp+140h] [rbp-138h]
  _QWORD v26[2]; // [rsp+150h] [rbp-128h] BYREF
  __int128 v27; // [rsp+160h] [rbp-118h]
  __int64 v28; // [rsp+170h] [rbp-108h]
  char *v29; // [rsp+180h] [rbp-F8h]
  __int64 v30; // [rsp+188h] [rbp-F0h]
  __int64 v31; // [rsp+1A0h] [rbp-D8h]
  _QWORD v32[4]; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+1D0h] [rbp-A8h]
  __int128 v34; // [rsp+1E0h] [rbp-98h]
  __int64 v35; // [rsp+200h] [rbp-78h]
  _QWORD v36[2]; // [rsp+210h] [rbp-68h] BYREF
  __int128 v37; // [rsp+220h] [rbp-58h]
  __int64 v38; // [rsp+230h] [rbp-48h]

  if ( a3 )
  {
    *(_QWORD *)&v4 = sub_22B76B0(a2);
    LOWORD(v35) = 261;
    LOWORD(v31) = 259;
    v34 = v4;
    v29 = "-";
    *(_QWORD *)&v5 = sub_22B75A0(a2, a2);
    LOWORD(v25) = 261;
    LOWORD(v21) = 259;
    v24 = v5;
    v19 = "-";
    v16 = 261;
    *(_QWORD *)&v15 = sub_22B74E0(a2);
    *((_QWORD *)&v15 + 1) = v6;
    *(_QWORD *)&v7 = sub_22B7480(a2);
    *(_QWORD *)&v13 = "-";
    v12 = v7;
    LOWORD(v14) = 773;
    v17[1] = v15;
    *(_QWORD *)&v17[0] = &v12;
    LOWORD(v18) = 1282;
    v22[0] = v17;
    v22[1] = v9;
    v22[2] = "-";
    v22[3] = v20;
    LOWORD(v23) = 770;
    v26[0] = v22;
    v27 = v24;
    v26[1] = v10;
    LOWORD(v28) = 1282;
    v32[0] = v26;
    v32[2] = "-";
    v32[1] = v11;
    v32[3] = v30;
    LOWORD(v33) = 770;
    v36[0] = v32;
    v36[1] = v3;
    v37 = v34;
    LOWORD(v38) = 1282;
    sub_2253560(a1, v36);
  }
  else
  {
    sub_22BC1E0(a1, *a2, a2[1], 4);
  }
  return a1;
}
