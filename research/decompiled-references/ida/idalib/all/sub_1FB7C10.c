__int64 __fastcall sub_1FB7C10(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rsi
  __int64 v18; // rbp
  __int64 v20; // r15
  __int64 v21; // rax
  char *i; // rax
  __int64 v23; // rax
  char *v24; // [rsp+0h] [rbp-338h]
  __int64 v25; // [rsp+10h] [rbp-328h] BYREF
  __int64 v26; // [rsp+18h] [rbp-320h]
  void **v27; // [rsp+20h] [rbp-318h]
  void *v28; // [rsp+28h] [rbp-310h]
  __int64 v29; // [rsp+30h] [rbp-308h]
  _BYTE v30[128]; // [rsp+38h] [rbp-300h] BYREF
  void *ptr; // [rsp+B8h] [rbp-280h]
  __int64 v32; // [rsp+C0h] [rbp-278h]
  _BYTE v33[40]; // [rsp+C8h] [rbp-270h] BYREF
  void *v34; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-240h]
  _BYTE v36[568]; // [rsp+100h] [rbp-238h] BYREF

  v8 = a2[1];
  v9 = sub_A79820((__int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96), a3, a4, a5, a6);
  if ( v9 == (_QWORD *)v8 )
    return sub_1FB1190(a1[3]);
  v10 = (__int64)v9;
  sub_1F92A90(a1[2], v8, a1[3]);
  v11 = sub_1FB6730(*a1, (char *)a2 - 88);
  v12 = a1[3];
  v13 = v11;
  if ( a2 - 11 == (__int64 *)v11 )
  {
    v20 = *(unsigned int *)(v12 + 8);
    sub_1FB1190(v12);
    if ( *(_QWORD *)(*a1 + 48) )
      sub_1FB7130((__int64)a1, (__int64)(a2 - 11), 0);
    *(_QWORD *)(*(_QWORD *)a1[3] + 8 * v20) = *(unsigned int *)(a1[3] + 8) - v20;
    v34 = v36;
    v35 = 0x4000000000LL;
    v21 = a1[1];
    v27 = &v34;
    v25 = v21;
    v26 = a1[2];
    v28 = v30;
    v29 = 0x1000000000LL;
    ptr = v33;
    v32 = 0x800000000LL;
    for ( i = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
          (char *)v13 != i;
          i = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)i + 48LL))(i) )
    {
      if ( i[29] >= 0 )
      {
        v24 = i;
        sub_1F92A90(v26, (__int64)i, (__int64)v27);
        i = v24;
      }
    }
    if ( (_DWORD)v35 )
    {
      v23 = sub_1FB16E0((__int64)&v25, 50, 0);
      sub_1FB2180((__int64)(a1 + 1), v23);
    }
    else
    {
      sub_1FB1190(a1[3]);
    }
    if ( ptr != v33 )
      free(ptr);
    if ( v28 != v30 )
      free(v28);
    if ( v34 != v36 )
      free(v34);
  }
  else
  {
    sub_1FB1190(v12);
    sub_1F92A90(a1[2], v13, a1[3]);
  }
  v17 = nullptr;
  v18 = *a1;
  if ( (((unsigned __int8)*a2 | (unsigned __int8)(*a2 >> 1)) & 1) == 0 )
    v17 = sub_A79820(a2, (__int64)(a2 - 11), ((unsigned __int8)*a2 | (unsigned __int8)(*a2 >> 1)) & 1, v14, v15, v16);
  sub_1F92240(v18, (__int64)v17);
  return sub_1F92240(*a1, v10);
}
