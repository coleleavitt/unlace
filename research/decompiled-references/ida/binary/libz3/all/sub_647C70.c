__int64 __fastcall sub_647C70(__int64 *a1, __int64 a2)
{
  char **exception; // rbp
  int v5; // r9d
  _QWORD *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // r15
  int v10; // ecx
  __int64 *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned int v18; // r13d
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned int v31; // r15d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  _QWORD *v36; // rax
  int v37; // [rsp+0h] [rbp-2A8h]
  __int64 v38; // [rsp+8h] [rbp-2A0h]
  int v39; // [rsp+10h] [rbp-298h]
  int v40; // [rsp+18h] [rbp-290h]
  int v41[2]; // [rsp+20h] [rbp-288h] BYREF
  __int64 v42; // [rsp+28h] [rbp-280h]
  __int64 v43; // [rsp+30h] [rbp-278h]
  void *v44; // [rsp+38h] [rbp-270h]
  int v45[2]; // [rsp+40h] [rbp-268h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-1C8h]
  int *v47; // [rsp+E8h] [rbp-1C0h] BYREF
  int *v48; // [rsp+188h] [rbp-120h] BYREF
  __int64 v49; // [rsp+220h] [rbp-88h]
  __int64 v50; // [rsp+228h] [rbp-80h]
  __int64 v51; // [rsp+230h] [rbp-78h]
  __int64 v52; // [rsp+238h] [rbp-70h]
  __int64 v53; // [rsp+240h] [rbp-68h]
  __int64 v54; // [rsp+248h] [rbp-60h]
  __int64 v55; // [rsp+250h] [rbp-58h]
  _BYTE v56[80]; // [rsp+258h] [rbp-50h] BYREF

  v38 = *a1;
  sub_633760((__int64)v45, *a1, 0, (__int64)v56);
  v6 = (_QWORD *)a1[1];
  v56[8] = 0;
  *(_QWORD *)v45 = &off_1C4CA80;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v8 = 0;
    while ( v8 < *((_DWORD *)v6 - 1) )
    {
      v9 = v8;
      if ( v6[v9] )
      {
        if ( v7 )
          v10 = *(_DWORD *)(v7 - 4);
        else
          v10 = 0;
        sub_157BE40((int)v41, (int)v45, v6[v8], v10, v7, v5, v37, v38, v39, v40, v41[0], v42, v43, v44);
        v11 = (__int64 *)(a1[1] + v9 * 8);
        v12 = *v11;
        if ( *v11 )
        {
          v13 = *a1;
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v13, v12);
        }
        v15 = *(_QWORD *)v41;
        *(_QWORD *)v41 = 0;
        *v11 = v15;
        v16 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 )
        {
          v17 = v42;
          v14 = (*(_DWORD *)(*(_QWORD *)v41 + 8LL))-- == 1;
          if ( v14 )
            sub_15D7BC0(v17, v16);
        }
        v6 = (_QWORD *)a1[1];
        v7 = *(_QWORD *)(a2 + 8);
        ++v8;
        if ( !v6 )
          goto LABEL_14;
      }
      else
      {
        v35 = *(_QWORD *)(v7 + 8LL * v8);
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        v6[v8++] = v35;
      }
    }
    v18 = *((_DWORD *)v6 - 1);
  }
  else
  {
LABEL_14:
    v18 = 0;
  }
  for ( ; v7; *((_DWORD *)v6 - 1) = v22 )
  {
    if ( v18 >= *(_DWORD *)(v7 - 4) )
      break;
    v19 = *(_QWORD *)(v7 + 8LL * v18);
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    if ( v6 )
    {
      v20 = *((_DWORD *)v6 - 1);
      if ( v20 == *((_DWORD *)v6 - 2) )
      {
        v31 = (3 * v20 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v32 || v20 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v41, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v6 - 1, v32);
        v34 = v33[1];
        v6 = v33 + 2;
        *v33 = v31;
        a1[1] = (__int64)(v33 + 2);
        v7 = *(_QWORD *)(a2 + 8);
        LODWORD(v33) = v34;
        v23 = &v6[v34];
        v22 = (_DWORD)v33 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v6[v21];
      }
    }
    else
    {
      v36 = (_QWORD *)sub_186B270(0x18u);
      v6 = v36 + 1;
      *v36 = 2;
      v22 = 1;
      a1[1] = (__int64)v6;
      v23 = v6;
      v7 = *(_QWORD *)(a2 + 8);
    }
    *v23 = v19;
    ++v18;
  }
  *(_QWORD *)v45 = &off_1C4CA60;
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v24 = v53;
  if ( v53 )
  {
    v25 = v54;
    v14 = (*(_DWORD *)(v53 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v25, v24);
  }
  v26 = v51;
  if ( v51 )
  {
    v27 = v52;
    v14 = (*(_DWORD *)(v51 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v27, v26);
  }
  v28 = v49;
  if ( v49 )
  {
    v29 = v50;
    v14 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v29, v28);
  }
  v48 = &qword_1C637E8;
  sub_15841B0(&v48);
  v47 = &qword_1C637E8;
  sub_15841B0(&v47);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  return sub_15841B0(v45);
}

