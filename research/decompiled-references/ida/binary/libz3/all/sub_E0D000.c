__int64 __fastcall sub_E0D000(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  void *exception; // rbx
  unsigned int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // r10
  unsigned int v13; // r11d
  __int64 v14; // rax
  __int64 *v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  int v19; // r12d
  __int64 v20; // rbx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdi
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 *v30; // [rsp+0h] [rbp-60h]
  int v31; // [rsp+8h] [rbp-58h]
  int v33; // [rsp+10h] [rbp-50h] BYREF
  int v34[2]; // [rsp+18h] [rbp-48h]
  unsigned __int64 v35; // [rsp+20h] [rbp-40h] BYREF
  char v36; // [rsp+28h] [rbp-38h]
  int v37; // [rsp+30h] [rbp-30h]
  int v38; // [rsp+38h] [rbp-28h]
  int v39; // [rsp+40h] [rbp-20h]
  void *v40; // [rsp+48h] [rbp-18h]

  v10 = *(_DWORD *)(a1 + 632);
  v11 = *(_QWORD *)(a1 + 624);
  v35 = *a2;
  if ( !sub_DF6190(v11, v10, &v35) )
    return 0;
  v14 = sub_DF6190(v12, v13, &v35);
  v15 = (__int64 *)(v14 + 16);
  if ( a3 || a7 )
  {
    v30 = (__int64 *)(v14 + 16);
    sub_DFBCB0(a1);
    v22 = sub_E0CE30(v30, *(_QWORD *)(a1 + 296), a3, a4, a7);
    v19 = v22;
    if ( v22 )
    {
      if ( *(_BYTE *)(a1 + 188) )
      {
        sub_DFBCB0(a1);
        sub_15D74B0(*(_QWORD *)(a1 + 296), v19, a3, (_DWORD)a4, v28, v29, (_DWORD)v30);
      }
      sub_DFBCB0(a1);
      v25 = *(_QWORD *)(a1 + 296);
      v26 = a3;
      v27 = (int)a4;
      goto LABEL_16;
    }
    return 0;
  }
  v16 = *(_QWORD *)(v14 + 16);
  if ( v16 && (v16 & 7) != 0 && *(_DWORD *)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 12) > 1u )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_E0F430(
      exception,
      "ambiguous constant reference, more than one constant with the same sort, use a qualified expression (as <symbol> <"
      "sort>) to disambiguate ",
      a2);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v17 = sub_DF6EF0(v15);
  v18 = v17;
  v19 = v17;
  if ( !v17 )
    return 0;
  if ( *(_DWORD *)(v17 + 32) )
  {
    sub_DFBCB0(a1);
    sub_1684300(&v33, *(_QWORD *)(a1 + 296));
    v35 = v18;
    v36 = 1;
    v20 = sub_15DCAD0(v34[0], 0, 0);
    sub_15D0DF0(&v35);
    if ( !v20 )
      goto LABEL_18;
    goto LABEL_17;
  }
  sub_DFBCB0(a1);
  v25 = *(_QWORD *)(a1 + 296);
  v27 = 0;
  v26 = 0;
LABEL_16:
  v20 = sub_15DC610(v25, v19, v26, v27, v23, v24, (int)v30, v31, v33, v34[0], v35, v36, v37, v38, v39, v40);
  if ( v20 )
LABEL_17:
    ++*(_DWORD *)(v20 + 8);
LABEL_18:
  sub_DF6300(*a8, a8[1]);
  *a8 = v20;
  return 1;
}

