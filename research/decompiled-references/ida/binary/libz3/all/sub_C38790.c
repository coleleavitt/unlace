__int64 __fastcall sub_C38790(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r14
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
  _Unwind_Exception *v27; // [rsp+0h] [rbp-298h] BYREF
  __int64 v28; // [rsp+8h] [rbp-290h]
  _QWORD v29[20]; // [rsp+10h] [rbp-288h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-1E8h]
  int *v31; // [rsp+B8h] [rbp-1E0h] BYREF
  int *v32; // [rsp+158h] [rbp-140h] BYREF
  __int64 v33; // [rsp+1F0h] [rbp-A8h]
  __int64 v34; // [rsp+1F8h] [rbp-A0h]
  _QWORD v35[2]; // [rsp+200h] [rbp-98h] BYREF
  __int64 v36; // [rsp+210h] [rbp-88h]
  __int64 v37; // [rsp+218h] [rbp-80h]
  __int64 v38; // [rsp+220h] [rbp-78h]
  _BYTE v39[112]; // [rsp+228h] [rbp-70h] BYREF

  v3 = *a1;
  sub_CB8D40(v29, *a1, 0, v39);
  v29[0] = &off_1C52B78;
  sub_CB1D80(v39, v3, a1 + 41);
  v4 = *a1;
  v27 = nullptr;
  v28 = v4;
  v5 = a2[9];
  if ( !v5 )
  {
    v14 = (_QWORD *)a1[43];
    if ( v14 )
      goto LABEL_21;
    goto LABEL_27;
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
        goto LABEL_8;
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
LABEL_8:
        if ( v10 == 2 )
          v11 = *(_DWORD *)(v9 + 4) - 1;
        else
          v11 = *(_DWORD *)(v9 + 4);
        if ( v7 >= v11 )
          break;
        goto LABEL_11;
      }
    }
    if ( v7 >= *(_DWORD *)(v9 + 4) + 1 )
      break;
LABEL_11:
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
          goto LABEL_16;
        }
        goto LABEL_42;
      }
      if ( *(_DWORD *)(v5 + 4) == v7 )
        break;
LABEL_42:
      v5 = *(_QWORD *)(v5 + 16);
      if ( !--v12 )
      {
        sub_233F80((__int64 *)(v6 + 616), (_DWORD *)a2 + 18);
        v13 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8LL * v7);
        goto LABEL_16;
      }
    }
    v13 = (__int64 *)(v5 + 8);
LABEL_16:
    v8 = *v13;
LABEL_4:
    sub_CBDB00(v29, v8, &v27, v35);
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
  v14 = (_QWORD *)a1[43];
  if ( v14 )
  {
LABEL_21:
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[v15];
      do
      {
        sub_EDBA20((int)a2, *v14++, 0, v27, v28, v29[0], v29[1], v29[2]);
        *((_BYTE *)a1 + 8) = 0;
      }
      while ( v14 != v16 );
    }
  }
  v17 = v27;
  if ( v27 )
  {
    v18 = v28;
    v19 = LODWORD(v27->exception_cleanup)-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
LABEL_27:
  v29[0] = &off_1C52B58;
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v20 = v36;
  if ( v36 )
  {
    v21 = v37;
    v19 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v21, v20);
  }
  v22 = v35[0];
  if ( v35[0] )
  {
    v23 = v35[1];
    v19 = (*(_DWORD *)(v35[0] + 8LL))-- == 1;
    if ( v19 )
      sub_15D7BC0(v23, v22);
  }
  v24 = v33;
  if ( v33 )
  {
    v25 = v34;
    v19 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v25, v24);
  }
  v32 = &qword_1C637E8;
  sub_15841B0(&v32);
  v31 = &qword_1C637E8;
  sub_15841B0(&v31);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  return sub_15841B0(v29);
}

