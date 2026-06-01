unsigned __int64 __fastcall sub_A70F70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // r13d
  unsigned __int64 v8; // r12
  unsigned __int8 *v10; // rdi
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  int v18; // r11d
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v28; // [rsp+8h] [rbp-100h]
  __int64 v29; // [rsp+18h] [rbp-F0h]
  __int64 v30; // [rsp+28h] [rbp-E0h] BYREF
  void *v31; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h]
  _BYTE v35[184]; // [rsp+50h] [rbp-B8h] BYREF

  v7 = a2;
  v8 = (unsigned __int64)a4;
  if ( a4 && (*a4 & 0x8000) == 0 )
    v8 = 0;
  v32 = *(_DWORD *)(a3 + 8);
  if ( v32 > 0x40 )
    sub_2205510(&v31);
  else
    v31 = *(void **)a3;
  v10 = *(unsigned __int8 **)(a1 + 17448);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 32LL);
  if ( (char *)v11 == (char *)sub_6EE930 )
    v12 = v10[8];
  else
    v12 = v11();
  sub_2206D90(&ptr, &v31, v12);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  v13 = ptr;
  ptr = v35;
  v31 = v13;
  v32 = v34;
  v34 = 0x2000000000LL;
  if ( v32 > 0x40 )
    v13 = (_QWORD *)*v13;
  sub_F60170((unsigned int)&ptr, a1, a2, (_DWORD)v13, v8, a5, a6);
  v30 = 0;
  v28 = a1 + 152;
  v14 = sub_2223360(a1 + 152, &ptr, &v30, &off_2B41320);
  if ( v14 && (v15 = v14 - 24) != 0 )
  {
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v18 = 0;
    v19 = a2 & 7;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
      || v8 | v19 | (a2 >> 3) & 1 )
    {
      v20 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v19;
      v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
      v22 = v20 & 7;
      if ( (v20 & 8) != 0 )
      {
        v22 |= *(__int64 *)((char *)&qword_18 + (v20 & 0xFFFFFFFFFFFFFFF0LL));
        v21 = (_QWORD *)(*v21 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v29 = v22;
      v23 = sub_A70F70(a1, v21, &v31, 0, a5, a6);
      LODWORD(v29) = sub_A70F20(a1, v23, v29);
      sub_2223360(v28, &ptr, &v30, &off_2B41320);
      v18 = v29;
    }
    v24 = sub_F62360(a1, v7, v18, (unsigned int)&v31, v8, a5, a6);
    v25 = v24 + 24;
    if ( !v24 )
      v25 = 0;
    sub_2223210(v28, v25, v30, &off_2B41320);
    v26 = v24;
    v16 = v24 & 0xFFFFFFFFFFFFFFF0LL;
    sub_A6A720(a1 + 8, v26);
  }
  if ( ptr != v35 )
    free(ptr);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  return v16;
}
