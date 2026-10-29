__int64 __fastcall sub_C2F6F0(__int64 **a1, int a2, void *a3, __int64 *a4, __int64 *a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  void *v17; // r15
  __int64 v18; // r15
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  void *v23; // r15
  __int64 v24; // r15
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  void *v29; // r14
  __int64 v30; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+0h] [rbp-B8h]
  int v35; // [rsp+8h] [rbp-B0h]
  int v36; // [rsp+18h] [rbp-A0h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  int v38[2]; // [rsp+20h] [rbp-98h]
  char v39; // [rsp+28h] [rbp-90h]
  int v40; // [rsp+30h] [rbp-88h]
  int v41; // [rsp+38h] [rbp-80h]
  int v42; // [rsp+40h] [rbp-78h]
  void *ptr; // [rsp+48h] [rbp-70h] BYREF
  __int64 v44; // [rsp+50h] [rbp-68h] BYREF
  __int64 v45; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+60h] [rbp-58h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+70h] [rbp-48h] BYREF
  __int64 v49; // [rsp+78h] [rbp-40h]

  result = 5;
  if ( *((_BYTE *)*a1 + 18) )
  {
    v9 = sub_15DC610(
           *(_QWORD *)**a1,
           a2,
           1,
           (int)&ptr,
           (int)a5,
           (int)a3,
           v34,
           v35,
           (int)a3,
           v36,
           *(_QWORD *)**a1,
           v39,
           v40,
           v41,
           v42,
           a3);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    if ( !(unsigned __int8)sub_C292F0((__int64 *)a1, v9, a4, a5) )
    {
      v11 = sub_C2C130(a1, 0);
      v37 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      sub_C282B0(*a4, a4[1]);
      *a4 = v37;
      sub_C294F0((_QWORD ***)a1, v37, v10, a5);
      sub_C2AB80((__int64)a1, v10, *a4, *a5);
      v12 = **a1;
      v46 = 1;
      v47 = 0;
      v48 = 1;
      v49 = 0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      v16 = *(_QWORD *)(v12 + 8);
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = 1;
      if ( !v16 )
      {
        sub_16669E0(v12);
        v16 = *(_QWORD *)(v12 + 8);
      }
      sub_166A700(v16, (unsigned int)&v46, 0, v13, v14, v15);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v46);
      sub_182CBA0(v17, &v48);
      v18 = **a1;
      v47 = 0;
      v46 = 0xFFFFFFFFLL;
      v48 = 1;
      v49 = 0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      v22 = *(_QWORD *)(v18 + 8);
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = 1;
      if ( !v22 )
      {
        sub_16669E0(v18);
        v22 = *(_QWORD *)(v18 + 8);
      }
      sub_166A700(v22, (unsigned int)&v46, 0, v19, v20, v21);
      v23 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v46);
      sub_182CBA0(v23, &v48);
      v24 = **a1;
      if ( !*(_QWORD *)(v24 + 8) )
      {
        sub_16669E0(**a1);
        v24 = **a1;
      }
      v46 = 0;
      v47 = 0;
      v48 = 1;
      v49 = 0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      v28 = *(_QWORD *)(v24 + 8);
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = 1;
      if ( !v28 )
      {
        sub_16669E0(v24);
        v28 = *(_QWORD *)(v24 + 8);
      }
      sub_166A700(v28, (unsigned int)&v46, 0, v25, v26, v27);
      v29 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v46);
      sub_182CBA0(v29, &v48);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1A70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1A70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      sub_15E1A70(*(_QWORD *)**a1);
      sub_15E1B70(*(_QWORD *)**a1);
      v30 = sub_15E1B70(*(_QWORD *)**a1);
      v44 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_C28530(a1 + 13, &v44);
      sub_C2BA80(a1, *a5);
      if ( *((_BYTE *)*a1 + 19) )
      {
        sub_15E1A70(*(_QWORD *)**a1);
        sub_15E1B70(*(_QWORD *)**a1);
        sub_15E1B70(*(_QWORD *)**a1);
        v32 = sub_15E1B70(*(_QWORD *)**a1);
        v45 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        sub_C28530(a1 + 13, &v45);
        sub_C2BA80(a1, *a5);
        sub_15E1A70(*(_QWORD *)**a1);
        sub_15E1B70(*(_QWORD *)**a1);
        sub_15E1B70(*(_QWORD *)**a1);
        v33 = sub_15E1B70(*(_QWORD *)**a1);
        v46 = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        sub_C28530(a1 + 13, &v46);
        sub_C2BA80(a1, *a5);
      }
    }
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        sub_15D7BC0(*(_QWORD *)v38, v10);
    }
    return 4;
  }
  return result;
}

