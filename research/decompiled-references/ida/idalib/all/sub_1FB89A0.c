__int64 __fastcall sub_1FB89A0(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // rbp
  void *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  char *i; // rax
  __int64 v29; // rax
  char *v30; // [rsp+0h] [rbp-338h]
  __int64 v31; // [rsp+10h] [rbp-328h] BYREF
  __int64 v32; // [rsp+18h] [rbp-320h]
  void **v33; // [rsp+20h] [rbp-318h]
  void *v34; // [rsp+28h] [rbp-310h]
  __int64 v35; // [rsp+30h] [rbp-308h]
  _BYTE v36[128]; // [rsp+38h] [rbp-300h] BYREF
  void *ptr; // [rsp+B8h] [rbp-280h]
  __int64 v38; // [rsp+C0h] [rbp-278h]
  _BYTE v39[40]; // [rsp+C8h] [rbp-270h] BYREF
  void *v40; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-240h]
  _BYTE v42[568]; // [rsp+100h] [rbp-238h] BYREF

  v8 = *((_QWORD *)a2 + 1);
  v9 = *(_QWORD *)(v8 + 72);
  v10 = *(_QWORD *)(v9 + 64);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) != 0 || (v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL), (v10 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_12:
    v40 = (void *)v11;
    v25 = sub_B7BB70(&v40);
    v15 = a1[3];
    v14 = v25;
    if ( v8 != v25 )
      goto LABEL_5;
    return sub_1FB1190(v15);
  }
  v13 = v10 & 2;
  v14 = (__int64)v12;
  if ( (_DWORD)v13 )
  {
    v11 = sub_6E2500(v12, *(_QWORD *)(v8 + 72), v13, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v9 + 64) = v11 | 1;
    goto LABEL_12;
  }
  v15 = a1[3];
  if ( (_QWORD *)v8 == v12 )
    return sub_1FB1190(v15);
LABEL_5:
  sub_1F92A90(a1[2], v8, v15);
  v16 = sub_1FB6730(*a1, a2 - 64);
  v17 = a1[3];
  v18 = v16;
  if ( a2 - 64 == (char *)v16 )
  {
    v26 = *(unsigned int *)(v17 + 8);
    sub_1FB1190(v17);
    if ( *(_QWORD *)(*a1 + 48) )
      sub_1FB7130((__int64)a1, (__int64)(a2 - 64), 0);
    *(_QWORD *)(*(_QWORD *)a1[3] + 8 * v26) = *(unsigned int *)(a1[3] + 8) - v26;
    v40 = v42;
    v41 = 0x4000000000LL;
    v27 = a1[1];
    v33 = &v40;
    v31 = v27;
    v32 = a1[2];
    v34 = v36;
    v35 = 0x1000000000LL;
    ptr = v39;
    v38 = 0x800000000LL;
    for ( i = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
          (char *)v18 != i;
          i = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)i + 48LL))(i) )
    {
      if ( i[29] >= 0 )
      {
        v30 = i;
        sub_1F92A90(v32, (__int64)i, (__int64)v33);
        i = v30;
      }
    }
    if ( (_DWORD)v41 )
    {
      v29 = sub_1FB16E0((__int64)&v31, 50, 0);
      sub_1FB2180((__int64)(a1 + 1), v29);
    }
    else
    {
      sub_1FB1190(a1[3]);
    }
    if ( ptr != v39 )
      free(ptr);
    if ( v34 != v36 )
      free(v34);
    if ( v40 != v42 )
      free(v40);
  }
  else
  {
    sub_1FB1190(v17);
    sub_1F92A90(a1[2], v18, a1[3]);
  }
  v19 = *(_QWORD *)a2;
  v20 = 0;
  v21 = *a1;
  if ( (((unsigned __int8)*(_QWORD *)a2 | (unsigned __int8)(*(__int64 *)a2 >> 1)) & 1) == 0 )
  {
    v22 = (void *)(v19 & 0xFFFFFFFFFFFFFFFELL);
    v23 = v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v23 )
    {
      v20 = v23;
    }
    else
    {
      v40 = v22;
      v20 = sub_B7BB70(&v40);
    }
  }
  sub_1F92240(v21, v20);
  return sub_1F92240(*a1, v14);
}
