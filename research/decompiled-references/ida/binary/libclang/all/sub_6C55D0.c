unsigned __int64 __fastcall sub_6C55D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  unsigned __int8 *v9; // rdi
  __int64 (*v10)(void); // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rsi
  int v26; // [rsp+8h] [rbp-110h]
  __int64 v28; // [rsp+18h] [rbp-100h]
  int v29; // [rsp+28h] [rbp-F0h]
  int v30; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v31; // [rsp+28h] [rbp-F0h]
  __int64 v32; // [rsp+38h] [rbp-E0h] BYREF
  void *v33; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-D0h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-C0h]
  _BYTE v37[184]; // [rsp+60h] [rbp-B8h] BYREF

  v8 = a4;
  v26 = a2;
  if ( a4 && *(char *)(a4 + 1) >= 0 )
    v8 = 0;
  v34 = *(_DWORD *)(a3 + 8);
  if ( v34 > 0x40 )
    sub_2585B30(&v33);
  else
    v33 = *(void **)a3;
  v9 = *(unsigned __int8 **)(a1 + 17288);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 32LL);
  if ( (char *)v10 == (char *)sub_5F7BC0 )
    v11 = v9[8];
  else
    v11 = v10();
  sub_2587E20(&ptr, &v33, v11);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v12 = ptr;
  ptr = v37;
  v33 = v12;
  v34 = v36;
  v36 = 0x2000000000LL;
  if ( v34 > 0x40 )
    v12 = (_QWORD *)*v12;
  sub_B064F0((unsigned int)&ptr, a1, a2, (_DWORD)v12, v8, a5, a6);
  v32 = 0;
  v28 = a1 + 152;
  v13 = sub_25AC3A0(a1 + 152, &ptr, &v32, &off_47D0B40);
  if ( v13 )
  {
    v14 = (v13 - 24) & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_15;
  }
  v16 = a2 & 7;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
    || (v30 = v16 | v8, v16 | v8)
    || (a2 & 8) != 0 )
  {
    v17 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v16;
    v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v17 & 8) != 0 )
    {
      v31 = *(__int64 *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL)) | v17 & 7;
      v19 = sub_6C55D0(a1, *v18 & 0xFFFFFFFFFFFFFFF0LL, &v33, 0, a5, a6);
      v20 = v31;
      if ( v31 > 7 )
      {
        v24 = v31 | v19 & 7;
        v25 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v19 & 8) != 0 )
        {
          v24 |= *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL));
          v25 = (_QWORD *)*v25;
        }
        v30 = sub_6C3980((_QWORD *)a1, (unsigned __int64)v25, v24);
        goto LABEL_27;
      }
    }
    else
    {
      v29 = v17 & 7;
      LODWORD(v19) = sub_6C55D0(a1, v18, &v33, 0, a5, a6);
      v20 = v29;
    }
    v30 = v19 & 0xFFFFFFF8 | v20 | v19 & 7;
LABEL_27:
    sub_25AC3A0(v28, &ptr, &v32, &off_47D0B40);
  }
  v21 = sub_B05DF0(a1, v26, v30, (unsigned int)&v33, v8, a5, a6);
  v22 = v21 + 24;
  if ( !v21 )
    v22 = 0;
  sub_25AC200(v28, v22, v32, &off_47D0B40);
  v23 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v23 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v23 + 1, 8);
    v23 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v23) = v21;
  v14 = v21 & 0xFFFFFFFFFFFFFFF0LL;
  ++*(_DWORD *)(a1 + 16);
LABEL_15:
  if ( ptr != v37 )
    free(ptr);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  return v14;
}

