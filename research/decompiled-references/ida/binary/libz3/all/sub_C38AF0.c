__int64 __fastcall sub_C38AF0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // dl
  unsigned int v11; // edx
  int v12; // edx
  __int64 *v13; // rax
  _QWORD *v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // r14
  _Unwind_Exception *v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  char **exception; // rbp
  __int64 v28; // rdx
  _Unwind_Exception *v29; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 v30; // [rsp+8h] [rbp-2B0h]
  __int64 v31[4]; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v32[20]; // [rsp+30h] [rbp-288h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-1E8h]
  int *v34; // [rsp+D8h] [rbp-1E0h] BYREF
  int *v35; // [rsp+178h] [rbp-140h] BYREF
  __int64 v36; // [rsp+210h] [rbp-A8h]
  __int64 v37; // [rsp+218h] [rbp-A0h]
  _QWORD v38[2]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v39; // [rsp+230h] [rbp-88h]
  __int64 v40; // [rsp+238h] [rbp-80h]
  __int64 v41; // [rsp+240h] [rbp-78h]
  _BYTE v42[112]; // [rsp+248h] [rbp-70h] BYREF

  v3 = *a1;
  sub_C59270(v32, *a1, 0, v42);
  v32[0] = &off_1C58618;
  sub_C4FB00(v42, v3, a1 + 7);
  v4 = *a1;
  v29 = nullptr;
  v30 = v4;
  v5 = a2[9];
  if ( !v5 )
  {
    v14 = (_QWORD *)a1[20];
    if ( v14 )
      goto LABEL_22;
    goto LABEL_28;
  }
  v6 = *a2;
  v7 = 0;
  while ( 2 )
  {
    v9 = v5;
    v10 = *(_BYTE *)(v5 + 3) >> 6;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_9;
    }
    else
    {
      do
      {
        v9 = *(_QWORD *)(v9 + 16);
        v10 = *(_BYTE *)(v9 + 3) >> 6;
      }
      while ( !v10 );
      if ( v10 != 1 )
      {
LABEL_9:
        if ( v10 == 2 )
          v11 = *(_DWORD *)(v9 + 4) - 1;
        else
          v11 = *(_DWORD *)(v9 + 4);
        if ( v7 >= v11 )
          break;
        goto LABEL_12;
      }
    }
    if ( v7 >= *(_DWORD *)(v9 + 4) + 1 )
      break;
LABEL_12:
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v8 = *(_QWORD *)(v6 + 864);
      goto LABEL_4;
    }
    v12 = 17;
    while ( 1 )
    {
      if ( *(char *)(v5 + 3) < 0 )
      {
        if ( *(_BYTE *)(v5 + 3) >> 6 != 2 )
        {
          v13 = (__int64 *)(*(_QWORD *)(v5 + 16) + 8LL * v7);
          goto LABEL_17;
        }
        goto LABEL_43;
      }
      if ( *(_DWORD *)(v5 + 4) == v7 )
        break;
LABEL_43:
      v5 = *(_QWORD *)(v5 + 16);
      if ( !--v12 )
      {
        sub_233F80((__int64 *)(v6 + 616), (_DWORD *)a2 + 18);
        v13 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8LL * v7);
        goto LABEL_17;
      }
    }
    v13 = (__int64 *)(v5 + 8);
LABEL_17:
    v8 = *v13;
LABEL_4:
    sub_C5D2E0(v32, v8, &v29, v38);
    if ( (unsigned __int8)sub_C55290(a1 + 7, v29) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_15FB08(v31, "nla2bv could not eliminate reals", v28);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, v31);
      sub_233E40((__int64)v31);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    sub_EDBFA0((int)a2);
    v5 = a2[9];
    ++v7;
    if ( v5 )
    {
      v6 = *a2;
      continue;
    }
    break;
  }
  v14 = (_QWORD *)a1[20];
  if ( v14 )
  {
LABEL_22:
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[v15];
      do
      {
        sub_EDBA20((int)a2, *v14++, 0, v29, v30, v31[0], v31[1], v31[2]);
        *((_BYTE *)a1 + 8) = 0;
      }
      while ( v14 != v16 );
    }
  }
  v17 = v29;
  if ( v29 )
  {
    v18 = v30;
    v19 = LODWORD(v29->exception_cleanup)-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
LABEL_28:
  v32[0] = &off_1C585F8;
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v20 = v39;
  if ( v39 )
  {
    v21 = v40;
    v19 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v21, v20);
  }
  v22 = v38[0];
  if ( v38[0] )
  {
    v23 = v38[1];
    v19 = (*(_DWORD *)(v38[0] + 8LL))-- == 1;
    if ( v19 )
      sub_15D7BC0(v23, v22);
  }
  v24 = v36;
  if ( v36 )
  {
    v25 = v37;
    v19 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v25, v24);
  }
  v35 = &qword_1C637E8;
  sub_15841B0(&v35);
  v34 = &qword_1C637E8;
  sub_15841B0(&v34);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  return sub_15841B0(v32);
}

