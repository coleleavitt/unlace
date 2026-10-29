__int64 __fastcall sub_DC56B0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // rbp
  int v6; // eax
  _QWORD *v7; // rbp
  int v8; // r15d
  int v9; // ecx
  __int64 *v10; // rbp
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  void *v22; // rbx
  __int64 v24; // rsi
  void *v25; // rdi
  _QWORD *v26; // rbp
  _QWORD *exception; // rbx
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  int v31; // [rsp+20h] [rbp-58h] BYREF
  char v32; // [rsp+24h] [rbp-54h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  int v34; // [rsp+30h] [rbp-48h] BYREF
  char v35; // [rsp+34h] [rbp-44h]
  __int64 v36; // [rsp+38h] [rbp-40h]

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  sub_DC4C60(a1);
  v2 = sub_DC0880(a1)[1];
  v3 = 0x7FFFFFFF8LL;
  if ( v2 )
    v3 = 8LL * (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
  v4 = *(_QWORD *)(v2 + v3);
  if ( *((_DWORD *)a1 + 356) != 6 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid root-obj, (unsigned) integer expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v32 &= 0xFCu;
  v35 &= 0xFCu;
  v31 = 0;
  v5 = qword_1C7F2C0;
  v33 = 0;
  v34 = 1;
  v36 = 0;
  if ( (*((_BYTE *)a1 + 60) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v31, a1 + 7);
  else
    v31 = *((_DWORD *)a1 + 14);
  if ( (*((_BYTE *)a1 + 76) & 1) != 0 )
  {
    sub_182C690(v5, &v34, a1 + 9);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 18);
    v35 &= ~1u;
    v34 = v6;
  }
  if ( (v35 & 1) != 0
    || v34 != 1
    || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, &v31)
    || (unsigned __int64)sub_182D020(qword_1C7F2C0, &v31) >> 32 )
  {
    v7 = __cxa_allocate_exception(0x30u);
    sub_305660(v7, "invalid root-obj, index must fit in an unsigned machine integer");
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v8 = sub_182D020(qword_1C7F2C0, &v31);
  if ( !v8 )
  {
    v26 = __cxa_allocate_exception(0x30u);
    sub_305660(v26, "invalid root-obj, index must be >= 1");
    __cxa_throw(v26, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  sub_DBF8C0((__int64)a1, "invalid root-obj, ')' expected");
  v10 = sub_DC2710(a1);
  v13 = a1[210];
  if ( !v13 )
  {
    v29 = sub_186B270(0x10u);
    v28 = *a1;
    sub_DFBCB0(*a1);
    v24 = *(_QWORD *)(v28 + 296);
    LODWORD(v28) = v29;
    sub_16669D0(v29, v24);
    v25 = (void *)a1[210];
    v13 = v29;
    if ( (void *)v29 != v25 )
    {
      if ( v25 )
      {
        sub_186B220(v25);
        v13 = v29;
      }
      a1[210] = v13;
    }
  }
  v14 = *(_QWORD *)(v13 + 8);
  if ( !v14 )
  {
    v28 = v13;
    sub_16669E0(v13);
    v14 = *(_QWORD *)(v28 + 8);
  }
  v15 = sub_166BBD0(v14, v4, v8, v9, v11, v12, v28, v29);
  v30 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_DBF5A0(v10 + 1, &v30);
  v16 = sub_DC0880(a1);
  v17 = v16[1];
  v18 = *v16;
  v19 = (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
  v20 = *(_QWORD *)(v17 + 8 * v19);
  *(_DWORD *)(v17 - 4) = v19;
  if ( (*(_DWORD *)(v20 + 4))-- == 1 )
    sub_17F9000(v18);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  return sub_182CBA0(v22, &v34);
}

