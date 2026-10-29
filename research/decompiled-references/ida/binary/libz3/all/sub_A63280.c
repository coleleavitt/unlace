__int64 __fastcall sub_A63280(__int64 a1, unsigned int *a2, int *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rbp
  _DWORD *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // rsi
  unsigned int v25; // r15d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  _QWORD *v32; // rax
  char **v33; // rbp
  char **exception; // rbp
  _QWORD v35[4]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v5 )
  {
    v6 = *a2;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 - 4) )
    {
      v7 = *(_QWORD *)(v5 + 8 * v6);
      if ( v7 )
        return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v7);
    }
  }
  v9 = sub_99A610(a1, a2);
  v10 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v9);
  v35[0] = 0;
  v35[1] = 0;
  v11 = v10;
  v35[2] = 1;
  v35[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v35, a3);
  v12 = sub_186B270(0x38u);
  *(_DWORD *)(v12 + 8) = v11;
  v13 = qword_1C7F2C0;
  *(_QWORD *)(v12 + 16) = 0;
  v14 = v12;
  *(_QWORD *)v12 = &off_1C56290;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 1;
  *(_QWORD *)(v12 + 40) = 0;
  sub_27B950((__int64)v13, v12 + 16, (int *)v35);
  *(_BYTE *)(v14 + 48) &= 0xFCu;
  v15 = sub_186B270(0x38u);
  *(_QWORD *)v15 = &off_1C56290;
  v16 = qword_1C7F2C0;
  v17 = v15;
  *(_DWORD *)(v15 + 8) = v11;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 1;
  *(_QWORD *)(v15 + 40) = 0;
  sub_27B950((__int64)v16, v15 + 16, (int *)v35);
  *(_BYTE *)(v17 + 48) = *(_BYTE *)(v17 + 48) & 0xFC | 1;
  sub_A63210(a1, v14, 0);
  sub_A63210(a1, v17, 1u);
  v18 = *(_DWORD **)(a1 + 960);
  if ( v18 )
  {
    v19 = *(v18 - 1);
    v20 = *(v18 - 2);
    if ( v19 == v20 )
    {
      v25 = (3 * v19 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v26 || v19 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v18 - 2, v26);
      v28 = v27[1];
      v18 = v27 + 2;
      *v27 = v25;
      *(_QWORD *)(a1 + 960) = v27 + 2;
      LODWORD(v27) = v28;
      v23 = (__int64 *)&v18[2 * v28];
      v20 = v25;
      v22 = (_DWORD)v27 + 1;
    }
    else
    {
      v21 = v19;
      v22 = v19 + 1;
      v23 = (__int64 *)&v18[2 * v21];
    }
    *v23 = v14;
    *(v18 - 1) = v22;
    if ( v22 == v20 )
    {
      v29 = (3 * v22 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v30 || v22 >= v29 )
      {
        v33 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v36, "Overflow encountered when expanding vector");
        *v33 = (char *)off_1C63128;
        sub_2333C0(v33 + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(v33, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v18 - 2, v30);
      v18 = v31 + 2;
      *v31 = v29;
      v22 = v31[1];
      *(_QWORD *)(a1 + 960) = v18;
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v18 = v32 + 1;
    v32[1] = v14;
    *v32 = 0x100000002LL;
    v22 = 1;
    *(_QWORD *)(a1 + 960) = v18;
  }
  *(_QWORD *)&v18[2 * v22] = v17;
  v24 = *(_QWORD *)(a1 + 600) + 32LL * v11;
  *(v18 - 1) = v22 + 1;
  sub_27B950((__int64)qword_1C7F2C0, v24, (int *)v35);
  sub_25A130((char *)v35);
  return v11;
}

