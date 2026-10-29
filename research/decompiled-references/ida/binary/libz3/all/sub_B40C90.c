unsigned int *__fastcall sub_B40C90(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int *v5; // rax
  int v6; // edx
  unsigned int *result; // rax
  _DWORD *v8; // r12
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int *v12; // rax
  unsigned int *v13; // rcx
  int v14; // r11d
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 *v17; // r15
  __int64 v18; // r10
  double v19; // xmm2_8
  __int64 v20; // rdx
  unsigned int *v21; // r14
  unsigned int v22; // r8d
  unsigned int v23; // esi
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 i; // rax
  int v29; // edx
  double v30; // xmm0_8
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 j; // rax
  int v34; // edi
  double v35; // xmm1_8
  unsigned int v36; // ebx
  unsigned int v37; // edx
  unsigned int *v38; // rax
  unsigned int *v39; // rbx
  __int64 v40; // rax
  int v41; // ecx
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rsi
  unsigned int *v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+18h] [rbp-70h]
  __int64 v48[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(unsigned int **)(a1 + 72);
  v45 = v5;
  if ( v5 )
    v6 = *(v5 - 1);
  else
    v6 = 0;
  result = &v5[a2];
  if ( (int)a2 >= v6 || !*result )
  {
    v8 = *(_DWORD **)(a1 + 64);
    if ( v8 )
    {
      v9 = *(v8 - 1);
      *result = v9;
      v10 = (unsigned int)*(v8 - 1);
      if ( (_DWORD)v10 == *(v8 - 2) )
      {
        v36 = (unsigned int)(3 * v10 + 1) >> 1;
        v37 = 4 * v36 + 8;
        if ( 4 * (int)v10 + 8 >= v37 || (unsigned int)v10 >= v36 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v48, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = v9;
        v38 = (unsigned int *)sub_186B300(v8 - 2, v37);
        v8 = v38 + 2;
        *v38 = v36;
        v39 = *(unsigned int **)(a1 + 72);
        v14 = (int)v9 >> 1;
        v40 = v38[1];
        *(_QWORD *)(a1 + 64) = v8;
        v13 = &v8[v9];
        v45 = v39;
        v12 = &v8[v40];
      }
      else
      {
        v11 = v9;
        v12 = &v8[v10];
        v13 = &v8[v9];
        v14 = (int)v9 >> 1;
      }
      *v12 = a2;
      ++*(v8 - 1);
      v15 = *v13;
      v16 = *v13;
      if ( v14 )
      {
        v17 = *(__int64 **)(a1 + 56);
        v47 = *v13;
        v18 = *v17;
        v46 = **(_QWORD **)(a1 + 48);
        v19 = *(double *)(v46 + 8 * v15);
        while ( 1 )
        {
          v20 = *((unsigned int *)v17 + 2);
          v21 = &v8[v14];
          v22 = v20 - 1;
          v23 = *v21;
          v24 = 24 * v20;
          v25 = v18 + 24 * v20;
          v26 = 24LL * (v16 & ((_DWORD)v20 - 1));
          v27 = v18 + v26;
          if ( v26 != 24 * v20 )
          {
            for ( i = v18 + v26; v25 != i; i += 24 )
            {
              v29 = *(_DWORD *)(i + 4);
              if ( v29 == 2 )
              {
                if ( *(_DWORD *)i == v16 && *(_DWORD *)(i + 8) == v16 )
                {
LABEL_17:
                  v30 = *(double *)(i + 16);
                  goto LABEL_18;
                }
              }
              else if ( !v29 )
              {
                goto LABEL_35;
              }
            }
          }
          if ( v18 != v27 )
          {
            for ( i = v18; v27 != i; i += 24 )
            {
              v42 = *(_DWORD *)(i + 4);
              if ( v42 == 2 )
              {
                if ( *(_DWORD *)i == v16 && *(_DWORD *)(i + 8) == v16 )
                  goto LABEL_17;
              }
              else if ( !v42 )
              {
                break;
              }
            }
          }
LABEL_35:
          v30 = 0.0;
LABEL_18:
          v31 = v23 & v22;
          v32 = v18 + 24 * v31;
          if ( v24 != 24 * v31 )
          {
            for ( j = v18 + 24 * v31; v25 != j; j += 24 )
            {
              v34 = *(_DWORD *)(j + 4);
              if ( v34 == 2 )
              {
                if ( v23 == *(_DWORD *)j && v23 == *(_DWORD *)(j + 8) )
                {
LABEL_25:
                  v35 = *(double *)(j + 16);
                  goto LABEL_26;
                }
              }
              else if ( !v34 )
              {
                goto LABEL_36;
              }
            }
          }
          if ( v18 != v32 )
          {
            for ( j = v18; v32 != j; j += 24 )
            {
              v41 = *(_DWORD *)(j + 4);
              if ( v41 == 2 )
              {
                if ( v23 == *(_DWORD *)j && v23 == *(_DWORD *)(j + 8) )
                  goto LABEL_25;
              }
              else if ( !v41 )
              {
                break;
              }
            }
          }
LABEL_36:
          v35 = 0.0;
LABEL_26:
          v13 = &v8[v11];
          if ( v30 + v19 <= v35 + *(double *)(v46 + 8LL * v23) )
          {
            v15 = v47;
            goto LABEL_30;
          }
          *v13 = v23;
          v45[v23] = v9;
          v9 = v14;
          v14 >>= 1;
          if ( !v14 )
            break;
          v11 = v9;
        }
        *v21 = v16;
        v45[v47] = 1;
        return v45;
      }
      else
      {
LABEL_30:
        result = v45;
        *v13 = v16;
        v45[v15] = v9;
      }
    }
    else
    {
      *result = 0;
      v43 = sub_186B270(0x10u);
      v44 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)v43 = 2;
      ++*(_DWORD *)(v43 + 4);
      *(_DWORD *)(v43 + 8) = a2;
      *(_QWORD *)(a1 + 64) = v43 + 8;
      *(_DWORD *)(v43 + 8) = a2;
      *(_DWORD *)(v44 + 4LL * a2) = 0;
      return (unsigned int *)v44;
    }
  }
  return result;
}

