__int64 __fastcall sub_E09680(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *exception; // rbx
  const char *v4; // rax
  char **v5; // rbp
  __int64 v8; // r14
  _DWORD *v9; // r13
  __int64 v11; // r15
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r12
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rdi
  unsigned int v27; // r15d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  int v32; // [rsp+0h] [rbp-78h]
  int v33[2]; // [rsp+8h] [rbp-70h]
  int v34; // [rsp+10h] [rbp-68h]
  int v35[2]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v36; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+28h] [rbp-50h]
  int v38; // [rsp+30h] [rbp-48h]
  int v39; // [rsp+38h] [rbp-40h]
  int v40; // [rsp+40h] [rbp-38h]
  void *v41; // [rsp+48h] [rbp-30h]

  *(_QWORD *)v35 = a3;
  if ( !(unsigned __int8)sub_E2D9A0(a1 + 328, a3) )
  {
    exception = __cxa_allocate_exception(0x30u);
    v4 = (const char *)sub_E2D980(a1 + 328);
    sub_305660(exception, v4);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( !*(_BYTE *)(a1 + 192) || !*a2 )
    return sub_E094A0(a1, a3);
  sub_DFBCB0(a1);
  v8 = *(_QWORD *)(a1 + 296);
  sub_1829790(v8, 0);
  v9 = *(_DWORD **)(a1 + 872);
  if ( v9 )
  {
    if ( v9[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v9)(v9);
      sub_186B220(v9);
    }
  }
  *(_QWORD *)(a1 + 872) = 0;
  sub_DFBCB0(a1);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_DFA620((_QWORD *)(a1 + 760), v35);
  sub_DFBCB0(a1);
  *(_QWORD *)v33 = *(_QWORD *)(a1 + 296);
  sub_DFBCB0(a1);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 840LL);
  sub_15D66C0(&v36, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0, 0);
  BYTE2(v38) |= 1u;
  v12 = sub_15E3510(*(_QWORD *)v33, a2, 0, 0, v11, &v36);
  v15 = v37;
  v34 = v12;
  if ( v37 )
  {
    v16 = *(unsigned int *)(v37 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = v37 + 16 * v16;
      do
      {
        v18 = v15;
        v15 += 16;
        sub_15D0DF0(v18);
      }
      while ( v17 != v15 );
      v15 = v37;
    }
    sub_186B220((void *)(v15 - 8));
  }
  v19 = sub_15DC610(v33[0], v34, 0, 0, v13, v14, v32, v33[0], v34, v35[0], v36, v37, v38, v39, v40, v41);
  sub_DFBCB0(a1);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v20 = *(_QWORD **)(a1 + 792);
  if ( v20 )
  {
    v21 = *((_DWORD *)v20 - 1);
    if ( v21 == *((_DWORD *)v20 - 2) )
    {
      v27 = (3 * v21 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v28 || v21 >= v27 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0(&v36, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v36);
        sub_233E40((__int64)&v36);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v20 - 1, v28);
      v30 = v29[1];
      v20 = v29 + 2;
      *v29 = v27;
      *(_QWORD *)(a1 + 792) = v29 + 2;
      LODWORD(v29) = v30;
      v24 = &v20[v30];
      v23 = (_DWORD)v29 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v20[v22];
    }
  }
  else
  {
    v31 = (_QWORD *)sub_186B270(0x18u);
    v20 = v31 + 1;
    *v31 = 2;
    v23 = 1;
    *(_QWORD *)(a1 + 792) = v20;
    v24 = v20;
  }
  v25 = *(_QWORD *)(a1 + 864);
  *v24 = v19;
  *((_DWORD *)v20 - 1) = v23;
  if ( v25 )
    sub_E5EC60(v25, a3, v19);
  return sub_1829100(v8);
}

