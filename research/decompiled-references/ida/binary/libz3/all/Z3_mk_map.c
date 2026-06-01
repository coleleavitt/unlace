__int64 __fastcall Z3_mk_map(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  char **exception; // r14
  char v6; // r14
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r14
  int v27[2]; // [rsp+0h] [rbp-80h]
  int v28; // [rsp+8h] [rbp-78h]
  char v29; // [rsp+Fh] [rbp-71h]
  unsigned int v31; // [rsp+18h] [rbp-68h]
  int v33; // [rsp+20h] [rbp-60h]
  char v34; // [rsp+28h] [rbp-58h]
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  int v36; // [rsp+38h] [rbp-48h]
  int v37; // [rsp+40h] [rbp-40h]
  void *v38; // [rsp+48h] [rbp-38h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_297230(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 )
    {
      sub_24EA30(a1, 3u, nullptr);
      sub_2BB620(0);
      v25 = 0;
LABEL_16:
      byte_1C7EBA0 = 1;
      return v25;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 )
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
  }
  *(_QWORD *)v27 = *(_QWORD *)(a1 + 232);
  v7 = sub_15D1F10(*a4);
  v8 = (_QWORD *)sub_186B270(0x18u);
  *v8 = 2;
  v9 = v8 + 1;
  v10 = 0;
  v11 = 1;
  v12 = (__int64)v9;
  while ( 1 )
  {
    *v9 = v7;
    ++v10;
    *(_DWORD *)(v12 - 4) = v11;
    if ( (unsigned int)v10 >= a3 )
      break;
    v13 = sub_15D1F10(a4[v10]);
    v14 = *(_DWORD *)(v12 - 4);
    v7 = v13;
    if ( v14 == *(_DWORD *)(v12 - 8) )
    {
      v16 = (3 * v14 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v17 || v14 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v35);
        sub_233E40((__int64)&v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (3 * v14 + 1) >> 1;
      v18 = (unsigned int *)sub_186B300((void *)(v12 - 8), v17);
      v12 = (__int64)(v18 + 2);
      *v18 = v31;
      v19 = v18[1];
      v20 = v19;
      v9 = (__int64 *)(v12 + 8 * v19);
      v11 = v20 + 1;
    }
    else
    {
      v15 = v14;
      v11 = v14 + 1;
      v9 = (__int64 *)(v12 + 8 * v15);
    }
  }
  LOBYTE(v36) = 1;
  v21 = *(_DWORD *)(a1 + 1440);
  v35 = a2;
  v22 = sub_15D2D10(v27[0], v21, 5, 1, (unsigned int)&v35, a3, v12, 0);
  v25 = sub_15DC610(v27[0], v22, a3, (int)a4, v23, v24, v27[0], v28, a2, v31, v33, v34, v35, v36, v37, v38);
  sub_251FD0(a1, v25);
  sub_24FE40(a1, v25);
  if ( v29 )
  {
    sub_2BB620(v25);
    sub_15D0DF0(&v35);
    sub_186B220((void *)(v12 - 8));
    goto LABEL_16;
  }
  sub_15D0DF0(&v35);
  sub_186B220((void *)(v12 - 8));
  return v25;
}

