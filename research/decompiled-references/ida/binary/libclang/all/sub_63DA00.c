__int64 __fastcall sub_63DA00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  void *ptr; // [rsp+8h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-150h]
  char v12; // [rsp+20h] [rbp-140h] BYREF
  __int16 v13; // [rsp+28h] [rbp-138h] BYREF
  __int64 v14; // [rsp+30h] [rbp-130h]
  __int64 v15; // [rsp+38h] [rbp-128h]
  int v16; // [rsp+40h] [rbp-120h]
  __int64 (__fastcall **v17)(); // [rsp+58h] [rbp-108h]
  _BYTE v18[40]; // [rsp+60h] [rbp-100h] BYREF
  __int64 *v19; // [rsp+88h] [rbp-D8h] BYREF
  int v20; // [rsp+90h] [rbp-D0h]
  __int128 v21; // [rsp+98h] [rbp-C8h]
  __int64 v22; // [rsp+A8h] [rbp-B8h]
  char v23; // [rsp+B0h] [rbp-B0h]
  int v24; // [rsp+B4h] [rbp-ACh]
  void **p_ptr; // [rsp+B8h] [rbp-A8h]
  char *v26; // [rsp+C8h] [rbp-98h] BYREF
  _QWORD v27[3]; // [rsp+D0h] [rbp-90h] BYREF
  char v28; // [rsp+E8h] [rbp-78h]
  __int64 (__fastcall **v29)(); // [rsp+F0h] [rbp-70h] BYREF
  _BYTE v30[40]; // [rsp+F8h] [rbp-68h] BYREF
  __int64 (__fastcall ***v31)(); // [rsp+120h] [rbp-40h] BYREF

  *(_OWORD *)n = 0;
  v21 = 0;
  v19 = (__int64 *)&off_49DA340;
  p_ptr = &ptr;
  ptr = &v12;
  v20 = 2;
  v23 = 0;
  v24 = 1;
  v22 = 0;
  sub_2623850(&v19, 0, 0, 0, a5, a6);
  v13 = 7;
  v6 = *a1;
  *a1 = 0;
  v14 = v6;
  v7 = a1[1];
  a1[1] = 0;
  v15 = v7;
  LODWORD(v7) = *((_DWORD *)a1 + 4);
  *((_DWORD *)a1 + 4) = 0;
  v16 = v7;
  v26 = (char *)off_49F4D98;
  sub_25B5BC0(v27, &v13);
  v17 = off_49F4D98;
  sub_25B5BC0(v18, v27);
  v26 = (char *)off_49F4D98;
  sub_25B66C0(v27);
  v26 = "{0}";
  v27[1] = &v31;
  v27[0] = 3;
  v27[2] = 1;
  v28 = 1;
  v29 = off_49F4D98;
  sub_25B5BC0(v30, v18);
  v17 = off_49F4D98;
  v31 = &v29;
  sub_25B66C0(v18);
  sub_2624AA0(&v19, &v26);
  v29 = off_49F4D98;
  sub_25B66C0(v30);
  v29 = &off_4A6E358;
  sub_25B66C0(&v13);
  v8 = sub_6905C0(ptr, n[0]);
  v19 = &qword_4A6EA70[2];
  sub_2623770(&v19);
  if ( ptr != &v12 )
    free(ptr);
  return v8;
}

