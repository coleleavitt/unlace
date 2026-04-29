char __fastcall sub_1781E0(
        _QWORD *a1,
        __int64 *a2,
        _DWORD *a3,
        __int64 *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9,
        __int64 a10)
{
  __int64 v11; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char result; // al
  char v21; // al
  int v22; // eax
  __int64 (__fastcall *v23)(__int64, int); // rax
  int v24; // eax
  __int64 v25; // rbp
  __int64 (__fastcall *v26)(__int64, int, int); // rax
  int v27; // eax
  int v28; // eax
  __int64 *v29; // [rsp-10h] [rbp-88h]
  __int64 v30; // [rsp-8h] [rbp-80h]
  _QWORD *v31; // [rsp+8h] [rbp-70h]
  char v32; // [rsp+1Fh] [rbp-59h]
  __int64 v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v11 = (__int64)a4;
  v31 = a2;
  v33[3] = __readfsqword(0x28u);
  *a3 = 0;
  if ( (unsigned __int8)sub_64280(a4) && !a4[3] || !a9 )
    return 1;
  if ( a6 == -1 )
  {
    if ( !a7 )
      goto LABEL_23;
    if ( a5 == -1 )
LABEL_34:
      sub_172E00(v11, a2, v16, v17, v18, v19);
LABEL_13:
    v18 = 0;
    goto LABEL_14;
  }
  a2 = v33;
  v33[0] = 0;
  v33[1] = 0;
  v21 = sub_6F670((__int64)a1, v33, a5, a6);
  v11 = v33[0];
  v32 = v21;
  qfree(v33[0]);
  if ( !v32 )
    return 1;
  if ( !a7 )
    goto LABEL_20;
  v18 = a8;
  if ( a6 != a5 )
    goto LABEL_13;
LABEL_14:
  v16 = a1[5];
  v19 = a9;
  if ( a5 >= *(_DWORD *)(v16 + 64) )
    goto LABEL_34;
  v22 = sub_172A80(v31, a4, *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL * a5), a7, v18, a9, a10);
  *a3 = v22;
  a2 = v29;
  if ( v22 )
    return 1;
  v11 = (__int64)a4;
  if ( (unsigned __int8)sub_64280(a4) )
  {
    if ( !a4[3] )
      return 1;
  }
  if ( a6 == a5 )
    return 1;
  if ( a6 == -1 )
    goto LABEL_23;
LABEL_20:
  v23 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104LL);
  if ( v23 == sub_133D50 )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)a6) + 352LL);
  }
  else
  {
    a2 = (__int64 *)a6;
    v11 = (__int64)a1;
    v24 = v23((__int64)a1, a6);
  }
  if ( v24 != 1 )
    goto LABEL_23;
  v26 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120LL);
  if ( v26 == sub_1722D0 )
  {
    v16 = a1[5];
    v17 = *(_QWORD *)(v16 + 528);
    v27 = **(_DWORD **)(*(_QWORD *)(v17 + 8LL * (int)a6) + 344LL);
  }
  else
  {
    a2 = (__int64 *)a6;
    v11 = (__int64)a1;
    v27 = v26((__int64)a1, a6, 0);
    v16 = a1[5];
  }
  if ( a5 != v27 )
    goto LABEL_24;
  v19 = a9;
  if ( a6 >= *(_DWORD *)(v16 + 64) )
    goto LABEL_34;
  v28 = sub_172A80(v31, a4, *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL * a6), 0, a8, a9, a10);
  *a3 = v28;
  v17 = v30;
  if ( v28 )
    return 1;
LABEL_23:
  v16 = a1[5];
LABEL_24:
  v25 = *(_QWORD *)(v16 + 1504);
  sub_64040(a4, (__int64 *)(v25 + 104), v16, v17, v18, v19);
  sub_318020(a4 + 2, v25 + 120);
  result = sub_64280(a4);
  if ( result )
    return a4[3] == 0;
  return result;
}
