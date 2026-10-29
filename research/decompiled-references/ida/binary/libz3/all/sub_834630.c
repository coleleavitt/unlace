__int64 __fastcall sub_834630(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rax
  int v3; // ebp
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 i; // rdx
  unsigned int v14; // eax
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  int v19; // r13d
  __int64 *v20; // r12
  __int64 *v21; // r15
  unsigned int v22; // ebp
  unsigned int v23; // eax
  __int64 v24; // r12
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  unsigned int v30; // ebp
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 352);
  v3 = *(_DWORD *)(a1 + 360);
  if ( v2 )
    v4 = *(_DWORD *)(v2 - 4);
  else
    v4 = 0;
  if ( v3 != v4 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    v6 = sub_180C100(v5 + 2144, 24);
    v7 = *(_QWORD **)(v5 + 2128);
    v8 = v6;
    *(_QWORD *)v6 = &off_1C4C070;
    *(_QWORD *)(v6 + 8) = a1 + 360;
    *(_DWORD *)(v6 + 16) = v3;
    if ( v7 )
    {
      v9 = *((_DWORD *)v7 - 1);
      if ( v9 == *((_DWORD *)v7 - 2) )
      {
        v30 = (3 * v9 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v31 || v9 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v7 - 1, v31);
        v33 = v32[1];
        v7 = v32 + 2;
        *(_QWORD *)(v5 + 2128) = v32 + 2;
        *v32 = v30;
        LODWORD(v32) = v33;
        v12 = &v7[v33];
        v11 = (_DWORD)v32 + 1;
      }
      else
      {
        v10 = v9;
        v11 = v9 + 1;
        v12 = &v7[v10];
      }
    }
    else
    {
      v34 = (_QWORD *)sub_186B270(0x18u);
      v7 = v34 + 1;
      *v34 = 2;
      v11 = 1;
      *(_QWORD *)(v5 + 2128) = v7;
      v12 = v7;
    }
    *v12 = v8;
    *((_DWORD *)v7 - 1) = v11;
    for ( i = *(_QWORD *)(a1 + 352); i; i = *(_QWORD *)(a1 + 352) )
    {
      v14 = *(_DWORD *)(a1 + 360);
      if ( v14 >= *(_DWORD *)(i - 4) )
        break;
      v15 = (unsigned int *)(i + 8LL * v14);
      v16 = *v15;
      v17 = v15[1];
      v18 = *(_QWORD *)(a1 + 88);
      v19 = v16;
      v20 = *(__int64 **)(v18 + 8 * v16);
      v21 = *(__int64 **)(v18 + 8LL * v17);
      *(_DWORD *)(a1 + 360) = v14 + 1;
      v22 = sub_834370(a1, v16, v17);
      if ( (_BYTE)v22 && v21[8] != v20[8] )
      {
        v23 = sub_7E58D0(a1, *v20, *v21);
        v24 = v23;
        sub_7F15F0(*(_QWORD *)(a1 + 80) + 160LL, v23);
        v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v24);
        if ( v28 == -1 )
        {
          sub_88E1D0(a1, v19, v17, v25, v26, v27);
          return v22;
        }
        if ( !v28 )
          return v22;
      }
    }
  }
  return 0;
}

