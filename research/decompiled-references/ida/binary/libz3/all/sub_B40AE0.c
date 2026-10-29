void __fastcall sub_B40AE0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // r10
  int v7; // edx
  unsigned int *v8; // rax
  _DWORD *v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  int v14; // edx
  unsigned int *v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // r11
  double v18; // xmm0_8
  unsigned int *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( a2 >= *(_DWORD *)(a1 + 44) )
  {
    v4 = a2;
    LODWORD(v5) = a2;
    v6 = *(_QWORD *)(a1 + 64);
    v7 = v6 ? *(_DWORD *)(v6 - 4) : 0;
    v8 = (unsigned int *)(v6 + 4LL * a2);
    if ( (int)a2 >= v7 || !*v8 )
    {
      v9 = *(_DWORD **)(a1 + 56);
      if ( v9 )
      {
        v10 = *(v9 - 1);
        *v8 = v10;
        v11 = (unsigned int)*(v9 - 1);
        if ( (_DWORD)v11 == *(v9 - 2) )
        {
          v21 = (unsigned int)(3 * v11 + 1) >> 1;
          v22 = 4 * v21 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v22 || (unsigned int)v11 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v26, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v26);
            sub_233E40((__int64)v26);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v9 - 2, v22);
          v12 = v10;
          v6 = *(_QWORD *)(a1 + 64);
          v9 = v23 + 2;
          *v23 = v21;
          v24 = v23[1];
          v14 = (int)v10 >> 1;
          *(_QWORD *)(a1 + 56) = v9;
          v15 = &v9[v10];
          v13 = &v9[v24];
        }
        else
        {
          v12 = v10;
          v13 = &v9[v11];
          v14 = (int)v10 >> 1;
          v15 = &v9[v10];
        }
        *v13 = v5;
        ++*(v9 - 1);
        v5 = *v15;
        v4 = *v15;
        if ( v14 )
        {
          v16 = *(__int64 **)(a1 + 48);
          v17 = *v16;
          v18 = *(double *)(*v16 + 8 * v5);
          while ( 1 )
          {
            v15 = &v9[v12];
            v19 = &v9[v14];
            v20 = *v19;
            if ( v18 <= *(double *)(v17 + 8 * v20) )
              break;
            *v15 = v20;
            *(_DWORD *)(v6 + 4 * v20) = v10;
            v10 = v14;
            v14 >>= 1;
            if ( !v14 )
            {
              v15 = v19;
              v10 = 1;
              break;
            }
            v12 = v10;
          }
        }
      }
      else
      {
        *v8 = 0;
        v25 = sub_186B270(0x10u);
        v6 = *(_QWORD *)(a1 + 64);
        v15 = (unsigned int *)(v25 + 8);
        *(_QWORD *)v25 = 2;
        *(_DWORD *)(v25 + 8) = v5;
        v5 = (unsigned int)v5;
        v10 = 0;
        ++*(_DWORD *)(v25 + 4);
        *(_QWORD *)(a1 + 56) = v25 + 8;
      }
      *v15 = v4;
      *(_DWORD *)(v6 + 4 * v5) = v10;
    }
  }
}

