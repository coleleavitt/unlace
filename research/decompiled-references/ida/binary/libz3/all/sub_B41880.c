__int64 __fastcall sub_B41880(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  int v5; // ebp
  _QWORD *v6; // r12
  unsigned int v7; // r13d
  _DWORD *v8; // r11
  unsigned int v9; // ebx
  unsigned int *v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 result; // rax
  unsigned int *v15; // rsi
  int v16; // r10d
  __int64 v17; // rdx
  __int64 *v18; // r15
  __int64 v19; // r9
  double v20; // xmm2_8
  __int64 v21; // rdx
  unsigned int *v22; // r14
  unsigned int v23; // edi
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 i; // rax
  int v30; // edx
  double v31; // xmm0_8
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 j; // rax
  int v35; // esi
  double v36; // xmm1_8
  int v37; // edx
  int v38; // esi
  unsigned int v39; // ebx
  unsigned int v40; // edx
  unsigned int *v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ebx
  unsigned int v44; // edx
  unsigned int *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // [rsp+8h] [rbp-80h]
  __int64 v51; // [rsp+10h] [rbp-78h]
  __int64 v52; // [rsp+18h] [rbp-70h]
  __int64 v53[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a2 + 1;
  v6 = *(_QWORD **)(a1 + 72);
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v5 <= (int)v7 )
      goto LABEL_3;
    if ( v7 >= v5 )
    {
      *((_DWORD *)v6 - 1) = v5;
      goto LABEL_3;
    }
  }
  else
  {
    if ( v5 <= 0 )
      goto LABEL_3;
    v7 = 0;
    v49 = (_QWORD *)sub_186B270(0x10u);
    *v49 = 2;
    v6 = v49 + 1;
    *(_QWORD *)(a1 + 72) = v49 + 1;
  }
  while ( 1 )
  {
    v46 = *((_DWORD *)v6 - 2);
    if ( v46 >= v5 )
      break;
    v43 = (3 * v46 + 1) >> 1;
    v44 = 4 * v43 + 8;
    if ( 4 * v46 + 8 >= v44 || v46 >= v43 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v53, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v53);
      sub_233E40((__int64)v53);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v45 = (unsigned int *)sub_186B300(v6 - 1, v44);
    v6 = v45 + 2;
    *v45 = v43;
    *(_QWORD *)(a1 + 72) = v45 + 2;
  }
  *((_DWORD *)v6 - 1) = v5;
  v47 = 4LL * v7;
  v48 = 4LL * (unsigned int)v5;
  if ( v47 != v48 )
    memset((char *)v6 + v47, 0, v48 - v47);
LABEL_3:
  v8 = *(_DWORD **)(a1 + 64);
  v9 = a2;
  v10 = (unsigned int *)v6 + a2;
  if ( v8 )
  {
    v11 = *(v8 - 1);
    *v10 = v11;
    v12 = (unsigned int)*(v8 - 1);
    if ( (_DWORD)v12 == *(v8 - 2) )
    {
      v39 = (unsigned int)(3 * v12 + 1) >> 1;
      v40 = 4 * v39 + 8;
      if ( 4 * (int)v12 + 8 >= v40 || (unsigned int)v12 >= v39 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v53, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = v11;
      v41 = (unsigned int *)sub_186B300(v8 - 2, v40);
      v6 = *(_QWORD **)(a1 + 72);
      v8 = v41 + 2;
      *v41 = v39;
      v42 = v41[1];
      v16 = (int)v11 >> 1;
      *(_QWORD *)(a1 + 64) = v8;
      v15 = &v8[v11];
      result = (__int64)&v8[v42];
    }
    else
    {
      v13 = v11;
      result = (__int64)&v8[v12];
      v15 = &v8[v11];
      v16 = (int)v11 >> 1;
    }
    *(_DWORD *)result = a2;
    ++*(v8 - 1);
    v17 = *v15;
    v9 = *v15;
    if ( v16 )
    {
      v18 = *(__int64 **)(a1 + 56);
      v50 = v6;
      v52 = *v15;
      v19 = *v18;
      v51 = **(_QWORD **)(a1 + 48);
      v20 = *(double *)(v51 + 8 * v17);
      while ( 1 )
      {
        v21 = *((unsigned int *)v18 + 2);
        v22 = &v8[v16];
        v23 = v21 - 1;
        v24 = *v22;
        v25 = 24 * v21;
        v26 = v19 + 24 * v21;
        v27 = 24LL * (v9 & ((_DWORD)v21 - 1));
        v28 = v19 + v27;
        if ( v27 != 24 * v21 )
        {
          for ( i = v19 + v27; v26 != i; i += 24 )
          {
            v30 = *(_DWORD *)(i + 4);
            if ( v30 == 2 )
            {
              if ( *(_DWORD *)i == v9 && *(_DWORD *)(i + 8) == v9 )
              {
LABEL_15:
                v31 = *(double *)(i + 16);
                goto LABEL_16;
              }
            }
            else if ( !v30 )
            {
              goto LABEL_27;
            }
          }
        }
        if ( v19 != v28 )
        {
          for ( i = v19; v28 != i; i += 24 )
          {
            v37 = *(_DWORD *)(i + 4);
            if ( v37 == 2 )
            {
              if ( *(_DWORD *)i == v9 && *(_DWORD *)(i + 8) == v9 )
                goto LABEL_15;
            }
            else if ( !v37 )
            {
              break;
            }
          }
        }
LABEL_27:
        v31 = 0.0;
LABEL_16:
        v32 = v24 & v23;
        v33 = v19 + 24 * v32;
        if ( v25 != 24 * v32 )
        {
          for ( j = v19 + 24 * v32; v26 != j; j += 24 )
          {
            v35 = *(_DWORD *)(j + 4);
            if ( v35 == 2 )
            {
              if ( v24 == *(_DWORD *)j && v24 == *(_DWORD *)(j + 8) )
              {
LABEL_23:
                v36 = *(double *)(j + 16);
                goto LABEL_24;
              }
            }
            else if ( !v35 )
            {
              goto LABEL_28;
            }
          }
        }
        if ( v19 != v33 )
        {
          for ( j = v19; v33 != j; j += 24 )
          {
            v38 = *(_DWORD *)(j + 4);
            if ( v38 == 2 )
            {
              if ( v24 == *(_DWORD *)j && v24 == *(_DWORD *)(j + 8) )
                goto LABEL_23;
            }
            else if ( !v38 )
            {
              break;
            }
          }
        }
LABEL_28:
        v36 = 0.0;
LABEL_24:
        result = v24;
        v15 = &v8[v13];
        if ( v31 + v20 <= v36 + *(double *)(v51 + 8LL * v24) )
        {
          v6 = v50;
          v17 = v52;
          goto LABEL_46;
        }
        *v15 = v24;
        *((_DWORD *)v50 + v24) = v11;
        v11 = v16;
        v16 >>= 1;
        if ( !v16 )
          break;
        v13 = v11;
      }
      v17 = v52;
      v6 = v50;
      v15 = v22;
      v11 = 1;
    }
  }
  else
  {
    *v10 = 0;
    result = sub_186B270(0x10u);
    v17 = a2;
    v6 = *(_QWORD **)(a1 + 72);
    v11 = 0;
    v15 = (unsigned int *)(result + 8);
    *(_QWORD *)result = 2;
    *(_QWORD *)(a1 + 64) = result + 8;
    ++*(_DWORD *)(result + 4);
    *(_DWORD *)(result + 8) = a2;
  }
LABEL_46:
  *v15 = v9;
  *((_DWORD *)v6 + v17) = v11;
  return result;
}

