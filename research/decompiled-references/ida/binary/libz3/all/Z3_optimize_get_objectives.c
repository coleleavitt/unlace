_QWORD *__fastcall Z3_optimize_get_objectives(__int64 a1, __int64 a2)
{
  char **exception; // r12
  char v4; // r15
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rax
  __int64 v7; // rax
  int v8; // r12d
  _QWORD *v9; // rbx
  __int64 v10; // r13
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // r15d
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v21; // r14
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // r9d
  size_t v25; // rsi
  _DWORD *v26; // rax
  __int64 v27; // rdi
  _QWORD *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-88h]
  struct _Unwind_Exception *v31; // [rsp+8h] [rbp-80h]
  int v32; // [rsp+10h] [rbp-78h]
  void *v33; // [rsp+18h] [rbp-70h]
  int v34[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  char v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+40h] [rbp-48h]

  v30 = a1;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  HIBYTE(v31) = v4;
  if ( v4 )
    sub_2A0AD0(a1, a2);
  v5 = *(_QWORD **)(a2 + 24);
  *(_DWORD *)(v30 + 1520) = 0;
  v6 = *(__int64 (**)(void))(*v5 + 184LL);
  if ( v6 == sub_2A5F50 )
  {
    v7 = v5[74];
    if ( v7 )
      v8 = *(_DWORD *)(v7 - 4);
    else
      v8 = 0;
  }
  else
  {
    v8 = v6();
  }
  v9 = (_QWORD *)sub_186B270(0x28u);
  v10 = *(_QWORD *)(v30 + 232);
  sub_2518F0((__int64)v9, v30);
  v9[3] = v10;
  *v9 = &off_1C4CA20;
  v9[4] = 0;
  sub_24FBE0(v30, (__int64)v9);
  v14 = 0;
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        sub_2F48D0((int)v34, *(_QWORD *)(a2 + 24), v14, v11, v12, v13, v30, v31, v32, v33, v34[0], v35, v36, v37, v38);
        v21 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 )
          ++*(_DWORD *)(*(_QWORD *)v34 + 8LL);
        v22 = (_QWORD *)v9[4];
        if ( v22 )
        {
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 == *((_DWORD *)v22 - 2) )
          {
            v24 = (3 * v23 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v36, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v36);
              sub_233E40((__int64)&v36);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v31) = (3 * v23 + 1) >> 1;
            v26 = (_DWORD *)sub_186B300(v22 - 1, v25);
            v27 = (unsigned int)v26[1];
            v13 = (int)v31;
            v22 = v26 + 2;
            v9[4] = v26 + 2;
            v18 = *(_QWORD *)v34;
            *v26 = (_DWORD)v31;
            LODWORD(v26) = v27;
            v17 = &v22[v27];
            v16 = (_DWORD)v26 + 1;
          }
          else
          {
            v15 = v23;
            v16 = v23 + 1;
            v17 = &v22[v15];
            v18 = v21;
          }
        }
        else
        {
          v29 = (_QWORD *)sub_186B270(0x18u);
          v22 = v29 + 1;
          *v29 = 2;
          v18 = *(_QWORD *)v34;
          v16 = 1;
          v9[4] = v22;
          v17 = v22;
        }
        *v17 = v21;
        *((_DWORD *)v22 - 1) = v16;
        if ( v18 )
        {
          v19 = v35;
          if ( (*(_DWORD *)(v18 + 8))-- == 1 )
            break;
        }
        if ( v8 == ++v14 )
          goto LABEL_20;
      }
      sub_15D7BC0(v19, v18);
      ++v14;
    }
    while ( v8 != v14 );
  }
LABEL_20:
  if ( HIBYTE(v31) )
  {
    sub_2BB620(v9);
    byte_1C7EBA0 = 1;
  }
  return v9;
}

