unsigned __int64 __fastcall sub_86BD80(_QWORD *a1, unsigned int a2)
{
  char **exception; // r13
  int *v4; // rax
  int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned int *v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // [rsp+8h] [rbp-88h]
  _QWORD *v27; // [rsp+8h] [rbp-88h]
  __int64 v28; // [rsp+10h] [rbp-80h]
  __int64 v29; // [rsp+20h] [rbp-70h]
  unsigned int v30; // [rsp+28h] [rbp-68h]
  int v31; // [rsp+2Ch] [rbp-64h]
  __int64 v32; // [rsp+38h] [rbp-58h] BYREF
  __int64 v33; // [rsp+40h] [rbp-50h] BYREF
  char v34; // [rsp+48h] [rbp-48h]

  v28 = **(_QWORD **)(a1[11] + 8LL * a2);
  v4 = *(int **)(*(_QWORD *)(sub_15D1F10(v28) + 24) + 8LL);
  if ( *((_BYTE *)v4 + 8) )
    sub_DBF6E(0);
  v5 = *v4;
  v6 = 8LL * a2;
  v7 = *(_QWORD *)(a1[75] + v6);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  result = (unsigned __int64)&v32;
  v31 = 0;
  if ( v5 )
  {
    do
    {
      while ( 1 )
      {
        v17 = a1[9];
        v34 = 0;
        v18 = a1[17];
        v29 = v17;
        v32 = v28;
        LODWORD(v33) = v31;
        v19 = sub_15DCAD0(v18, (int)&v32, 0);
        sub_15D0DF0(&v33);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v20 = *(_QWORD **)(v6 + a1[75]);
        if ( v20 )
        {
          v21 = *((unsigned int *)v20 - 1);
          if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
          {
            v22 = (unsigned int)(3 * v21 + 1) >> 1;
            v23 = 4 * v22 + 8;
            if ( 4 * (int)v21 + 8 >= (unsigned int)v23 || (unsigned int)v21 >= v22 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v33, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v33);
              sub_233E40((__int64)&v33);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (unsigned int)(3 * v21 + 1) >> 1;
            v26 = (_QWORD *)(v6 + a1[75]);
            v24 = (unsigned int *)sub_186B300(v20 - 1, v23);
            v20 = v24 + 2;
            *v26 = v24 + 2;
            *v24 = v30;
            v9 = &v24[v24[1] + 2];
          }
          else
          {
            v9 = (unsigned int *)v20 + v21;
          }
        }
        else
        {
          v27 = (_QWORD *)(v6 + a1[75]);
          v25 = (_QWORD *)sub_186B270(0x10u);
          v20 = v25 + 1;
          *v25 = 2;
          *v27 = v25 + 1;
          v9 = (unsigned int *)(v25 + 1);
        }
        v10 = (__int64 *)a1[10];
        *v9 = -2;
        v11 = *v10;
        ++*((_DWORD *)v20 - 1);
        v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v11 + 472))(v10, v19, 0, 0);
        v13 = 0x3FFFFFFFCLL;
        v14 = *(_QWORD *)(a1[75] + v6);
        if ( v14 )
          v13 = 4LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
        v15 = (_DWORD *)(v13 + v14);
        if ( *v15 == -2 )
          *v15 = v12;
        if ( v19 )
        {
          if ( (*(_DWORD *)(v19 + 8))-- == 1 )
            break;
        }
        result = (unsigned int)++v31;
        if ( v31 == v5 )
          return result;
      }
      sub_15D7BC0(v29, v19);
      result = (unsigned int)++v31;
    }
    while ( v31 != v5 );
  }
  return result;
}

