__int64 __fastcall sub_67E280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // r13
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned int v19; // eax
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v27; // rax
  __int64 v28; // r13
  unsigned int *v29; // rax
  unsigned int *v30; // r14
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rdi
  _QWORD *v36; // rax
  char **exception; // r12
  __int64 v38; // rdx
  int v39; // [rsp+0h] [rbp-B0h]
  __int64 v40; // [rsp+8h] [rbp-A8h]
  int v41; // [rsp+10h] [rbp-A0h]
  unsigned int v42; // [rsp+14h] [rbp-9Ch]
  __int64 v43; // [rsp+18h] [rbp-98h]
  __int64 v44; // [rsp+18h] [rbp-98h]
  __int64 v45; // [rsp+18h] [rbp-98h]
  __int64 *v46; // [rsp+20h] [rbp-90h]
  __int64 v47; // [rsp+20h] [rbp-90h]
  __int64 v48; // [rsp+28h] [rbp-88h]
  __int64 v49; // [rsp+28h] [rbp-88h]
  int v50; // [rsp+30h] [rbp-80h]
  __int64 v51; // [rsp+30h] [rbp-80h]
  unsigned int v52; // [rsp+38h] [rbp-78h]
  int v53; // [rsp+38h] [rbp-78h]
  __int64 v54; // [rsp+38h] [rbp-78h]
  __int64 v55; // [rsp+40h] [rbp-70h] BYREF
  unsigned int *v56; // [rsp+48h] [rbp-68h] BYREF
  __int64 v57; // [rsp+50h] [rbp-60h] BYREF
  int v58[2]; // [rsp+58h] [rbp-58h] BYREF
  __int64 v59; // [rsp+60h] [rbp-50h] BYREF
  __int64 v60; // [rsp+68h] [rbp-48h]

  v50 = -1;
  v48 = sub_15D1F10(a2);
  v6 = *(_QWORD *)(v48 + 24);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
      v50 = *(_DWORD *)(v7 - 4) - 1;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v55 = a2;
  ++*(_DWORD *)(a2 + 8);
  v57 = v8;
  *(_QWORD *)v58 = 0;
  sub_6761A0((unsigned int **)v58, &v55);
  v9 = *(__int64 **)v58;
  v40 = v57;
  if ( v50 )
  {
    v52 = 0;
    v43 = a1 + 144;
    v46 = &v59;
    do
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = sub_16845A0(v43, v48, v52);
      v59 = a2;
      v60 = a3;
      v17 = sub_15DC610(v13, v14, 2, (int)v46, v15, v16, v39, v40, v41, v43, (int)v46, v48, v50, v52, v55, v56);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      if ( v9 )
      {
        v19 = *((_DWORD *)v9 - 1);
        if ( v19 == *((_DWORD *)v9 - 2) )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = 8 * v20 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_107EF6(v46, "Overflow encountered when expanding vector", v38);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (3 * v19 + 1) >> 1;
          v22 = (unsigned int *)sub_186B300(v9 - 1, v21);
          v9 = (__int64 *)(v22 + 2);
          *v22 = v42;
          LODWORD(v22) = v22[1];
          v12 = &v9[(unsigned int)v22];
          v11 = (_DWORD)v22 + 1;
        }
        else
        {
          v10 = v19;
          v11 = v19 + 1;
          v12 = &v9[v10];
        }
      }
      else
      {
        v36 = (_QWORD *)sub_186B270(0x18u);
        v9 = v36 + 1;
        *v36 = 2;
        v11 = 1;
        v12 = v9;
      }
      v52 = v53 + 1;
      *v12 = v18;
      *((_DWORD *)v9 - 1) = v11;
    }
    while ( v52 != v50 );
    v23 = *(_QWORD *)(a1 + 152);
    v49 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 152);
    v49 = *(_QWORD *)(a1 + 8);
  }
  v24 = sub_15DCAD0(v23, (int)v9, 0);
  v54 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v25 = *v9;
  if ( *v9 )
  {
    if ( (*(_DWORD *)(v25 + 8))-- == 1 )
      sub_15D7BC0(v40, v25);
  }
  v27 = *(_QWORD *)(a1 + 8);
  *v9 = a3;
  v47 = v27;
  v28 = sub_15DCAD0(*(_QWORD *)(a1 + 152), (int)v9, 0);
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v51 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v51);
  sub_15E1B70(*(_QWORD *)(a1 + 8));
  v29 = (unsigned int *)sub_15E1B70(v51);
  v30 = v29;
  if ( v29 )
    ++v29[2];
  v31 = *(_QWORD *)(a1 + 8);
  v44 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v32 = sub_67B850(*(__int64 **)(a1 + 16), v29);
  sub_1374250(&v59, v44, v32);
  v33 = *(_QWORD *)(v31 + 856);
  v45 = v59;
  sub_675460(v59, v60);
  if ( v33 != v45 )
  {
    v56 = v30;
    v34 = *(_QWORD *)(a1 + 24);
    if ( v30 )
      ++v30[2];
    sub_6761A0((unsigned int **)(v34 + 24), &v56);
  }
  sub_675460((__int64)v30, v51);
  sub_675460(v28, v47);
  sub_675460(v54, v49);
  *(_QWORD *)v58 = v9;
  return sub_2334C0(&v57);
}

