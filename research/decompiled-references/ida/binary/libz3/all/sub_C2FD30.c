__int64 __fastcall sub_C2FD30(_QWORD **a1, int a2, int a3, __int64 *a4, __int64 *a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // r15
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  void *v17; // r15
  _QWORD *v18; // r15
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  void *v23; // r13
  __int64 v24; // rax
  int v26; // [rsp+0h] [rbp-A8h]
  int v27; // [rsp+10h] [rbp-98h]
  __int64 v28; // [rsp+10h] [rbp-98h]
  int v29; // [rsp+18h] [rbp-90h]
  void *v30; // [rsp+18h] [rbp-90h]
  void *v31; // [rsp+18h] [rbp-90h]
  int v32[2]; // [rsp+20h] [rbp-88h]
  char v33; // [rsp+28h] [rbp-80h]
  _QWORD *v34; // [rsp+28h] [rbp-80h]
  _QWORD *v35; // [rsp+28h] [rbp-80h]
  int v36; // [rsp+30h] [rbp-78h]
  int v37; // [rsp+38h] [rbp-70h]
  int v38[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v39; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+50h] [rbp-58h] BYREF
  __int64 v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h] BYREF
  __int64 v43; // [rsp+68h] [rbp-40h]

  result = 5;
  if ( *((_BYTE *)*a1 + 18) )
  {
    v9 = sub_15DC610(
           *(_QWORD *)**a1,
           a2,
           1,
           (int)v38,
           (int)a5,
           a3,
           v26,
           a3,
           v27,
           v29,
           *(_QWORD *)**a1,
           v33,
           v36,
           v37,
           a3,
           v39);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    if ( !(unsigned __int8)sub_C292F0((__int64 *)a1, v9, a4, a5) )
    {
      v11 = sub_C2C130(a1, 0);
      v28 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      sub_C282B0(*a4, a4[1]);
      *a4 = v28;
      sub_C294F0((_QWORD ***)a1, v28, v10, a5);
      sub_C2AB80((__int64)a1, v10, *a4, *a5);
      v12 = (_QWORD *)**a1;
      v34 = v12;
      if ( !v12[1] )
      {
        sub_16669E0(v12);
        v34 = (_QWORD *)**a1;
      }
      v40 = 1;
      v41 = 0;
      v42 = 2;
      v43 = 0;
      v30 = qword_1C7F2C0;
      *(_QWORD *)v38 = 0;
      v39 = nullptr;
      sub_1832C70(qword_1C7F2C0, &v40, &v42, v38);
      if ( (v38[1] & 1) != 0 || v38[0] != 1 )
      {
        sub_1833EB0(v30, &v40, v38, &v40);
        sub_1833EB0(v30, &v42, v38, &v42);
      }
      sub_182CBA0(v30, v38);
      v16 = v34[1];
      if ( !v16 )
      {
        sub_16669E0(v34);
        v16 = v34[1];
      }
      sub_166A700(v16, (unsigned int)&v40, 0, v13, v14, v15);
      sub_15E1B70(*v12);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v40);
      sub_182CBA0(v17, &v42);
      v18 = (_QWORD *)**a1;
      v35 = v18;
      if ( !v18[1] )
      {
        sub_16669E0(v18);
        v35 = (_QWORD *)**a1;
      }
      v40 = 0xFFFFFFFFLL;
      v41 = 0;
      v42 = 2;
      v43 = 0;
      v31 = qword_1C7F2C0;
      *(_QWORD *)v38 = 0;
      v39 = nullptr;
      sub_1832C70(qword_1C7F2C0, &v40, &v42, v38);
      if ( (v38[1] & 1) != 0 || v38[0] != 1 )
      {
        sub_1833EB0(v31, &v40, v38, &v40);
        sub_1833EB0(v31, &v42, v38, &v42);
      }
      sub_182CBA0(v31, v38);
      v22 = v35[1];
      if ( !v22 )
      {
        sub_16669E0(v35);
        v22 = v35[1];
      }
      sub_166A700(v22, (unsigned int)&v40, 0, v19, v20, v21);
      sub_15E1B70(*v18);
      v23 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v40);
      sub_182CBA0(v23, &v42);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1A70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      v24 = sub_15E1B70(*(_QWORD *)**a1);
      v40 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      sub_C28530(a1 + 13, &v40);
      sub_C2BA80(a1, *a5);
    }
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        sub_15D7BC0(*(_QWORD *)v32, v10);
    }
    return 4;
  }
  return result;
}

