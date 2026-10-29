unsigned __int64 __fastcall sub_7D1B70(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r13
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // r8
  __int64 v46; // r9
  char v48[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+8h] [rbp-50h]
  __int64 v50; // [rsp+18h] [rbp-40h]
  unsigned __int64 v51; // [rsp+28h] [rbp-30h]

  v51 = __readfsqword(0x28u);
  v48[0] = 2;
  v50 = 0;
  v49 = 0;
  idcv_object(a2, 0);
  v2 = *a1;
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v2;
  set_idcv_attr(a2, "n", v48, 0, v3, v4);
  v5 = a1[1];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v5;
  set_idcv_attr(a2, "type", v48, 0, v6, v7);
  v8 = (char)a1[2];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v8;
  set_idcv_attr(a2, "offb", v48, 0, v9, v10);
  v11 = (char)a1[3];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v11;
  set_idcv_attr(a2, "offo", v48, 0, v12, v13);
  v14 = a1[4];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v14;
  set_idcv_attr(a2, "flags", v48, 0, v15, v16);
  v17 = a1[5];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v17;
  set_idcv_attr(a2, "dtype", v48, 0, v18, v19);
  v20 = *((unsigned __int16 *)a1 + 3);
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v20;
  set_idcv_attr(a2, "reg", v48, 0, v21, v22);
  v23 = *((_QWORD *)a1 + 1);
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v23;
  set_idcv_attr(a2, "value", v48, 0, v24, v25);
  v26 = *((_QWORD *)a1 + 2);
  free_idcv(v48);
  *(_QWORD *)&v49 = v26;
  v48[0] = 2;
  set_idcv_attr(a2, "addr", v48, 0, v27, v28);
  v29 = *((_QWORD *)a1 + 3);
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v29;
  set_idcv_attr(a2, "specval", v48, 0, v30, v31);
  v32 = *((_QWORD *)a1 + 2);
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v32;
  set_idcv_attr(a2, "addr", v48, 0, v33, v34);
  v35 = (char)a1[32];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v35;
  set_idcv_attr(a2, "specflag1", v48, 0, v36, v37);
  v38 = (char)a1[33];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v38;
  set_idcv_attr(a2, "specflag2", v48, 0, v39, v40);
  v41 = (char)a1[34];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v41;
  set_idcv_attr(a2, "specflag3", v48, 0, v42, v43);
  v44 = (char)a1[35];
  free_idcv(v48);
  v48[0] = 2;
  *(_QWORD *)&v49 = v44;
  set_idcv_attr(a2, "specflag4", v48, 0, v45, v46);
  free_idcv(v48);
  return v51 - __readfsqword(0x28u);
}
