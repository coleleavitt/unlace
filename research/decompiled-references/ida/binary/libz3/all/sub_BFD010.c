__int64 __fastcall sub_BFD010(__int64 a1, unsigned int *a2, double a3)
{
  char **exception; // rbp
  unsigned int v4; // r12d
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  unsigned int *v13; // r13
  _QWORD *v14; // r15
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  bool v23; // zf
  unsigned int v24; // r15d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // [rsp+0h] [rbp-68h]
  int v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  int v32; // [rsp+18h] [rbp-50h]
  int v33; // [rsp+20h] [rbp-48h]
  char v34; // [rsp+28h] [rbp-40h]
  int v35; // [rsp+30h] [rbp-38h]
  int v36; // [rsp+38h] [rbp-30h]
  int v37; // [rsp+40h] [rbp-28h]
  void *v38; // [rsp+48h] [rbp-20h]

  if ( !(unsigned __int8)sub_BB1010(a1) )
    return 0;
  v4 = sub_BB0A60(a1 + 136, a2);
  if ( !(_BYTE)v4 )
    return 0;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = sub_15D1F10(a2);
  v8 = *(_QWORD *)(a1 + 1736);
  v9 = sub_15D2D60(v8, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v7);
  v12 = sub_15DC610(v8, v9, 0, 0, v10, v11, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38);
  v13 = (unsigned int *)v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( !(unsigned __int8)sub_BFC070(a1, a2, a3) && !(unsigned __int8)sub_BF7830(a1, a2, v13) )
  {
    if ( v13 )
    {
      v23 = v13[2]-- == 1;
      if ( v23 )
        sub_15D7BC0(v6, v13);
    }
    return 0;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9464LL) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9468LL) )
  {
    v14 = (_QWORD *)sub_186B270(0x18u);
    v15 = *(_QWORD *)(a1 + 24);
    ++a2[2];
    *v14 = &off_1C57F80;
    v14[1] = a2;
    v14[2] = v15;
    v16 = (_QWORD *)sub_180C100(a1 + 3960, 24);
    v17 = *(_QWORD **)(a1 + 3944);
    v18 = v16;
    *v16 = off_1C57E10;
    v16[1] = a1;
    v16[2] = v14;
    if ( v17 )
    {
      v19 = *((_DWORD *)v17 - 1);
      if ( v19 == *((_DWORD *)v17 - 2) )
      {
        v24 = (3 * v19 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v25 || v19 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v31);
          sub_233E40((__int64)&v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v17 - 1, v25);
        v27 = v26[1];
        v17 = v26 + 2;
        *v26 = v24;
        *(_QWORD *)(a1 + 3944) = v26 + 2;
        LODWORD(v26) = v27;
        v22 = &v17[v27];
        v21 = (_DWORD)v26 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v17[v20];
      }
    }
    else
    {
      v28 = (_QWORD *)sub_186B270(0x18u);
      v17 = v28 + 1;
      *v28 = 2;
      v21 = 1;
      *(_QWORD *)(a1 + 3944) = v17;
      v22 = v17;
    }
    *v22 = v18;
    *((_DWORD *)v17 - 1) = v21;
  }
  if ( v13 )
  {
    v23 = v13[2]-- == 1;
    if ( v23 )
      sub_15D7BC0(v6, v13);
  }
  return v4;
}

