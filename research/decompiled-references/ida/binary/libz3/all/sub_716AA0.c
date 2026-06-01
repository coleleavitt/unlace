__int64 __fastcall sub_716AA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // [rsp+20h] [rbp-2A0h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+28h] [rbp-298h] BYREF
  int v10; // [rsp+30h] [rbp-290h]
  __int64 v11; // [rsp+38h] [rbp-288h]
  __int64 v12; // [rsp+40h] [rbp-280h]
  int v13; // [rsp+48h] [rbp-278h]
  __int128 v14; // [rsp+50h] [rbp-270h]
  _QWORD v15[2]; // [rsp+60h] [rbp-260h] BYREF
  _QWORD v16[5]; // [rsp+70h] [rbp-250h] BYREF
  _QWORD v17[4]; // [rsp+98h] [rbp-228h] BYREF
  _BYTE v18[216]; // [rsp+B8h] [rbp-208h] BYREF
  __int64 v19; // [rsp+190h] [rbp-130h]
  __int64 v20; // [rsp+198h] [rbp-128h]
  __int64 v21; // [rsp+1A0h] [rbp-120h]
  __int64 v22; // [rsp+1A8h] [rbp-118h]
  __int64 v23; // [rsp+1B0h] [rbp-110h]
  int v24; // [rsp+1B8h] [rbp-108h]
  __int64 v25; // [rsp+1C0h] [rbp-100h]
  int v26; // [rsp+1C8h] [rbp-F8h]
  __int64 v27; // [rsp+1D0h] [rbp-F0h]
  __int64 v28; // [rsp+1D8h] [rbp-E8h]
  __int64 v29; // [rsp+1E0h] [rbp-E0h]
  __int64 v30; // [rsp+1E8h] [rbp-D8h]
  __int64 v31; // [rsp+1F0h] [rbp-D0h]
  __int64 v32; // [rsp+1F8h] [rbp-C8h]
  char v33; // [rsp+200h] [rbp-C0h]
  __int128 v34; // [rsp+208h] [rbp-B8h]
  __int64 v35; // [rsp+218h] [rbp-A8h]
  __int64 v36; // [rsp+220h] [rbp-A0h]
  __int64 v37; // [rsp+228h] [rbp-98h]
  __int64 v38; // [rsp+230h] [rbp-90h]
  __int64 v39; // [rsp+238h] [rbp-88h]
  __int64 v40; // [rsp+240h] [rbp-80h]
  __int64 v41; // [rsp+248h] [rbp-78h]
  __int64 v42; // [rsp+250h] [rbp-70h]
  __int64 v43; // [rsp+258h] [rbp-68h]
  __int64 v44; // [rsp+260h] [rbp-60h]
  __int64 v45; // [rsp+268h] [rbp-58h]
  __int64 v46; // [rsp+270h] [rbp-50h]
  __int64 v47; // [rsp+278h] [rbp-48h]

  v4 = *a1;
  v10 = 0;
  v9 = &off_1C536C0;
  v11 = v4;
  v12 = 0;
  v13 = 0;
  v8 = 0;
  v14 = 0;
  sub_6EF8C0(v15, v4, (__int64)&v8);
  sub_18572D0(&v8);
  v15[1] = v4;
  memset(v16, 0, 24);
  v16[3] = v4;
  sub_1862300(v16, "model", 1);
  sub_1862370(v16, "relevancy", 0);
  sub_1862370(v16, "case_split_strategy", 2);
  v16[4] = v4;
  memset(v17, 0, 24);
  v17[3] = v4;
  sub_1862300(v17, "model", 1);
  sub_1862370(v17, "relevancy", 0);
  sub_1862370(v17, "case_split_strategy", 2);
  sub_713400((__int64)v18, v4);
  v19 = v4;
  v20 = 0;
  v21 = v4;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 3;
  v27 = v4;
  v28 = 0;
  v29 = v4;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v35 = v4;
  v36 = 0;
  v37 = 0;
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 1;
  v47 = 0;
  v8 = 0;
  v34 = 0;
  sub_1862300(&v8, "use_qel", 0);
  sub_6EF700(v15, (__int64)&v8);
  sub_18572D0(&v8);
  LODWORD(v4) = sub_71D9D0(&v9, a1, a2, a4, a3);
  sub_7176E0(&v9);
  return (unsigned int)v4;
}

