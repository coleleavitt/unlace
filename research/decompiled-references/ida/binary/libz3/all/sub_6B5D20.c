__int64 __fastcall sub_6B5D20(_QWORD *a1, char a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  char **v24; // rbx
  const char *v25; // rax
  char **exception; // r12
  const char *v27; // rax
  __int64 v28; // [rsp+8h] [rbp-158h]
  __int64 v29; // [rsp+20h] [rbp-140h] BYREF
  __int64 v30; // [rsp+28h] [rbp-138h]
  __int64 v31; // [rsp+30h] [rbp-130h] BYREF
  __int64 v32; // [rsp+38h] [rbp-128h]
  int v33[2]; // [rsp+50h] [rbp-110h] BYREF
  __int64 v34; // [rsp+58h] [rbp-108h]
  int v35; // [rsp+6Ch] [rbp-F4h]
  __int128 v36; // [rsp+78h] [rbp-E8h]
  __int128 v37; // [rsp+88h] [rbp-D8h]
  char *v38; // [rsp+98h] [rbp-C8h]
  __int64 v39; // [rsp+A0h] [rbp-C0h]
  char v40; // [rsp+A8h] [rbp-B8h] BYREF

  v9 = a1[1];
  if ( a2 )
  {
    v30 = v9;
    *(_QWORD *)v33 = v9;
    v38 = &v40;
    WORD2(v34) = 0;
    v29 = 0;
    v31 = 0;
    LODWORD(v34) = 256;
    v35 = 0;
    v39 = 0x1000000000LL;
    v36 = 0;
    v37 = 0;
    sub_14DC230(v33, &v31);
    sub_18572D0(&v31);
    if ( (unsigned int)sub_14DEE90((unsigned int)v33, *a5, (unsigned int)&v29, v10, v11, v12) == 5 )
    {
      v21 = sub_15E1A70(v33[0]);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v28 = v21;
      sub_6A99C0(v29, v30);
      v29 = v28;
    }
    if ( !(unsigned __int8)sub_18290A0(a1[1]) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      v27 = (const char *)sub_1829130(a1[1]);
      sub_6A99E0(&v31, v27);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, &v31);
      sub_233E40((__int64)&v31);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v31 = a1[1];
    v13 = *a1;
    v32 = 0;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64 *, __int64 *, _QWORD, _QWORD))(v13 + 16))(
      a1,
      a3,
      a4,
      &v29,
      &v31,
      0,
      0);
    if ( v32 )
      v14 = *(unsigned int *)(v32 - 4);
    else
      v14 = 0;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *))(*a1 + 56LL))(a1, v14, v32, &v29);
    sub_2B4F40(&v31);
    if ( (unsigned int)sub_14DEE90((unsigned int)v33, v29, (_DWORD)a5, v15, v16, v17) == 5 )
    {
      v22 = sub_15E1A70(v33[0]);
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      sub_6A99C0(*a5, a5[1]);
      *a5 = v23;
    }
    sub_39A7A0((__int64)v33);
    return sub_6A99C0(v29, v30);
  }
  else
  {
    if ( !(unsigned __int8)sub_18290A0(v9) )
    {
      v24 = (char **)__cxa_allocate_exception(0x28u);
      v25 = (const char *)sub_1829130(a1[1]);
      sub_6A99E0((__int64 *)v33, v25);
      *v24 = (char *)off_1C63670;
      sub_2333C0(v24 + 1, v33);
      sub_233E40((__int64)v33);
      __cxa_throw(v24, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v19 = a1[1];
    v34 = 0;
    *(_QWORD *)v33 = v19;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64 *, int *, _QWORD, _QWORD))(*a1 + 16LL))(
      a1,
      a3,
      a4,
      a5,
      v33,
      0,
      0);
    if ( v34 )
      v20 = *(unsigned int *)(v34 - 4);
    else
      v20 = 0;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *))(*a1 + 56LL))(a1, v20, v34, a5);
    return sub_2B4F40((__int64 *)v33);
  }
}

