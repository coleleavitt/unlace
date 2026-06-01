unsigned __int64 __fastcall sub_7AE700(unsigned __int8 *a1, __int64 a2)
{
  int v2; // r13d
  int v3; // r13d
  int v4; // r13d
  int v5; // r13d
  int v6; // r13d
  int v7; // r13d
  int v8; // r13d
  int v9; // r13d
  int v10; // r13d
  int v11; // r14d
  int v12; // r14d
  int v13; // r13d
  int v14; // r13d
  int v15; // r13d
  int v16; // r12d
  char v18[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v18[0] = 2;
  v20 = 0;
  v19 = 0;
  idcv_object(a2, 0);
  v2 = *a1;
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v2;
  set_idcv_attr();
  v3 = a1[1];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v3;
  set_idcv_attr();
  v4 = (char)a1[2];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v4;
  set_idcv_attr();
  v5 = (char)a1[3];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v5;
  set_idcv_attr();
  v6 = a1[4];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v6;
  set_idcv_attr();
  v7 = a1[5];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v7;
  set_idcv_attr();
  v8 = *((unsigned __int16 *)a1 + 3);
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v8;
  set_idcv_attr();
  v9 = *((_DWORD *)a1 + 2);
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v9;
  set_idcv_attr();
  v10 = *((_DWORD *)a1 + 3);
  free_idcv(v18);
  LODWORD(v19) = v10;
  v18[0] = 2;
  set_idcv_attr();
  v11 = *((_DWORD *)a1 + 4);
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v11;
  set_idcv_attr();
  v12 = *((_DWORD *)a1 + 3);
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v12;
  set_idcv_attr();
  v13 = (char)a1[20];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v13;
  set_idcv_attr();
  v14 = (char)a1[21];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v14;
  set_idcv_attr();
  v15 = (char)a1[22];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v15;
  set_idcv_attr();
  v16 = (char)a1[23];
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19) = v16;
  set_idcv_attr();
  free_idcv(v18);
  return v21 - __readfsqword(0x28u);
}

