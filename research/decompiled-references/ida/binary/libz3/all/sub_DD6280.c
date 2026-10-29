__int64 __fastcall sub_DD6280(_QWORD *a1, char a2)
{
  _QWORD *exception; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // rax
  int v26; // r9d
  int v27; // ecx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 *v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 *v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v37; // rax
  __int64 result; // rax
  __int64 v39; // rdi
  int v40; // [rsp+0h] [rbp-2D8h]
  unsigned int v41; // [rsp+18h] [rbp-2C0h]
  unsigned int v42; // [rsp+1Ch] [rbp-2BCh]
  int v43[2]; // [rsp+20h] [rbp-2B8h]
  int v44; // [rsp+28h] [rbp-2B0h]
  int v45; // [rsp+2Ch] [rbp-2ACh]
  __int64 v46; // [rsp+30h] [rbp-2A8h]
  char v47[8]; // [rsp+48h] [rbp-290h] BYREF
  __int64 v48; // [rsp+50h] [rbp-288h] BYREF
  int v49[2]; // [rsp+58h] [rbp-280h] BYREF
  __int64 v50[2]; // [rsp+60h] [rbp-278h] BYREF
  _QWORD ptr[67]; // [rsp+70h] [rbp-268h] BYREF
  _BYTE v52[80]; // [rsp+288h] [rbp-50h] BYREF

  if ( *((_DWORD *)a1 + 356) == 9
    || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4)
    || (v4 = a1[6], v4 == a1[254])
    || v4 == a1[220] )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid function/constant definition, symbol expected");
    goto LABEL_3;
  }
  *(_QWORD *)v47 = a1[6];
  sub_DC0980(a1);
  v5 = a1[206];
  if ( v5 )
    v45 = *(_DWORD *)(v5 - 4);
  else
    v45 = 0;
  v6 = sub_DC07A0(a1)[1];
  if ( v6 )
    v41 = *(_DWORD *)(v6 - 4);
  else
    v41 = 0;
  v7 = sub_DC2710(a1)[1];
  if ( v7 )
    v44 = *(_DWORD *)(v7 - 4);
  else
    v44 = 0;
  v42 = sub_DCE5D0(a1);
  sub_DC3500(a1, "Invalid function definition");
  sub_DD2CA0(a1);
  v8 = sub_DC2710(a1)[1];
  v9 = 0x7FFFFFFF8LL;
  if ( v8 )
    v9 = 8LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
  v10 = sub_15D1F10(*(_QWORD *)(v8 + v9));
  v11 = sub_DC07A0(a1);
  v12 = 0x7FFFFFFF8LL;
  v13 = v11[1];
  if ( v13 )
    v12 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  if ( v10 != *(_QWORD *)(v13 + v12) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid function/constant definition, sort mismatch");
LABEL_3:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  *(_QWORD *)v43 = 8LL * v41;
  v14 = *(_QWORD *)v43 + sub_DC07A0(a1)[1];
  v15 = sub_DC2710(a1)[1];
  v16 = 0x7FFFFFFF8LL;
  if ( v15 )
    v16 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
  v17 = *(_QWORD *)(v15 + v16);
  v18 = *a1;
  if ( a2 )
  {
    sub_DFBCB0(*a1);
    v46 = *(_QWORD *)(v18 + 296);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    if ( v42 > 1 )
    {
      v19 = *a1;
      sub_DFBCB0(*a1);
      sub_633760((__int64)ptr, *(_QWORD *)(v19 + 296), 0, (__int64)v52);
      v20 = *a1;
      v52[8] = 1;
      ptr[0] = &off_1C4CA80;
      sub_DFBCB0(v20);
      v21 = *(_QWORD *)(v20 + 296);
      v22 = 0;
      v23 = 0;
      v48 = v21;
      do
      {
        v24 = *a1;
        sub_DFBCB0(*a1);
        v25 = sub_15DB5C0(*(_QWORD *)(v24 + 296), (unsigned int)v23, *(_QWORD *)(v14 + 8 * v23));
        v50[0] = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        *(_QWORD *)v49 = v22;
        sub_DBF5A0(v49, v50);
        v22 = *(_QWORD *)v49;
        ++v23;
      }
      while ( v42 != v23 );
      if ( *(_QWORD *)v49 )
        v27 = *(_DWORD *)(*(_QWORD *)v49 - 4LL);
      else
        v27 = 0;
      sub_157BE40((int)v50, (int)ptr, v17, v27, v49[0], v26, v40, (__int64)v50, v42, v41, v43[0], v44, v46, ptr);
      v28 = v50[0];
      v50[0] = v17;
      sub_DBF390(v17, v50[1]);
      v17 = v28;
      sub_2334C0(&v48);
      ptr[0] = &off_1C4CA80;
      sub_267D20(ptr);
    }
    sub_E09200(*a1, v47, v42, v14, v17);
    sub_DBF390(v17, v46);
  }
  else
  {
    sub_E078E0(*a1, v47, v42, v14, v17);
  }
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid function/constant definition, ')' expected");
  v29 = a1[206];
  if ( v29 )
    *(_DWORD *)(v29 - 4) = v45;
  v30 = sub_DC07A0(a1);
  v31 = v30[1];
  if ( v31 )
  {
    v32 = v31 + 8LL * *(unsigned int *)(v31 - 4);
    v33 = (__int64 *)(v31 + *(_QWORD *)v43);
    if ( v31 + *(_QWORD *)v43 >= v32 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v34 = *v33;
        if ( *v33 )
        {
          v35 = *v30;
          if ( (*(_DWORD *)(v34 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v33 >= v32 )
          goto LABEL_41;
      }
      sub_15D7BC0(v35, v34);
      ++v33;
    }
    while ( (unsigned __int64)v33 < v32 );
LABEL_41:
    v31 = v30[1];
    if ( v31 )
LABEL_42:
      *(_DWORD *)(v31 - 4) = v41;
  }
  v37 = sub_DC2710(a1);
  sub_39BEE0(v37, v44);
  result = sub_DCF8B0((__int64)(a1 + 184));
  v39 = *a1;
  *((_DWORD *)a1 + 378) = 0;
  if ( *(_BYTE *)(v39 + 258) )
    result = sub_DBF4C0((_QWORD *)v39);
  if ( *((_DWORD *)a1 + 356) != 9 )
    return sub_DC0980(a1);
  return result;
}

