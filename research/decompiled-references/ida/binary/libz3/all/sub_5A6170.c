__int64 __fastcall sub_5A6170(__int64 a1, __int64 a2, __m128i a3)
{
  char **exception; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // r12
  _QWORD *v9; // rax
  __int64 v10; // rax
  bool (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rax
  __int64 *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD *i; // rbx
  unsigned int v19; // r12d
  _QWORD *v20; // rax
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int *v27; // rdi
  __int64 v28; // rbp
  __int64 (__fastcall *v29)(__int64, __int64, __int64, unsigned int); // r8
  __int64 v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // r12
  void *v34; // [rsp+8h] [rbp-A0h]
  void (***v35)(void); // [rsp+18h] [rbp-90h]
  __int64 v36; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v37; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v38; // [rsp+40h] [rbp-68h] BYREF
  int v39; // [rsp+48h] [rbp-60h]
  __int64 v40[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a2 + 32);
  v36 = 0;
  v8 = *(__int64 **)(v7 + 8);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v36) )
  {
    v39 = 0;
    v38 = nullptr;
    v9 = (_QWORD *)sub_186B270(0x18u);
    v9[1] = 0x7FFFFFFF;
    v38 = v9 + 1;
    *v9 = 0x100000002LL;
    v10 = *v8;
    v39 = 1;
    v11 = *(bool (__fastcall **)(__int64, __int64))(v10 + 24);
    if ( v11 == sub_4FE4B0 || !((unsigned __int8 (__fastcall *)(__int64 *))v11)(v8) )
      v12 = sub_4C51A0(*(_QWORD *)(a1 + 24), (__int64)&v38);
    else
      v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD **))(*v8 + 40))(v8, &v38);
    v13 = (__int64 *)v12;
    v37 = nullptr;
    v14 = (_QWORD *)sub_186B270(0x18u);
    v15 = v14 + 1;
    v14[1] = 0;
    *v14 = 0x100000002LL;
    v16 = *v13;
    v37 = v15;
    (*(void (__fastcall **)(__int64 *, _QWORD **))(v16 + 40))(v13, &v37);
    v35 = (void (***)(void))sub_4C5B40(*(_QWORD *)(a1 + 24), v7, (__int64)v13, 0, nullptr, nullptr);
    v17 = ((__int64 (__fastcall *)(void (***)(void), __int64, __int64 *))(*v35)[2])(v35, v7, v13);
    i = *(_DWORD **)(a2 + 16);
    v34 = (void *)v17;
    if ( i )
    {
      v19 = *(i - 1);
      if ( v19 )
      {
        v20 = (_QWORD *)sub_186B270(0xAu);
        *v20 = 2;
        for ( i = v20 + 1; ; i = v24 + 2 )
        {
          v25 = *(i - 2);
          if ( v25 >= v19 )
            break;
          v21 = (3 * v25 + 1) >> 1;
          v22 = v21 + 8;
          v23 = v21;
          if ( v25 + 8 >= (unsigned int)v22 || v25 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v40, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v40);
            sub_233E40((__int64)v40);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(i - 2, v22);
          *v24 = v23;
        }
        *(i - 1) = v19;
        memset(i, 1, v19);
      }
      else
      {
        i = nullptr;
      }
    }
    v26 = sub_5A4FB0(a1, (__int64 *)(a2 + 16), (char *)i, -1);
    v27 = *(unsigned int **)(a1 + 40);
    v28 = v26;
    v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)v27 + 72LL);
    if ( v29 == sub_4EA4F0 )
      v30 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, __int64 *))(*(_QWORD *)v27 + 64LL))(v27, 0, &v36);
    else
      v30 = v29((__int64)v27, 0, (__int64)&v36, v27[2]);
    v31 = v30;
    v32 = (_QWORD *)sub_186B270(0x18u);
    v32[1] = v31;
    *v32 = 0x100000002LL;
    v40[0] = (__int64)(v32 + 1);
    sub_5A3D20(v28, (__int64)v34, v40, 1, a3);
    sub_186B220(v32);
    if ( i )
      sub_186B220(i - 2);
    if ( v34 )
      sub_4D63E0(v34);
    sub_568110(v35);
    if ( v37 )
      sub_186B220(v37 - 1);
    sub_4D63E0(v13);
    if ( v38 )
      sub_186B220(v38 - 1);
  }
  else
  {
    v28 = 0;
  }
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  return v28;
}

