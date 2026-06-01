__int64 __fastcall sub_7BF3F0(_QWORD *a1, int a2, _DWORD *a3, int **a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  char **exception; // rbp
  __int64 v7; // rdx
  unsigned int v12; // esi
  __int64 result; // rax
  __int64 (__fastcall *v14)(_QWORD *); // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 (__fastcall *v17)(_QWORD *); // rax
  unsigned int v18; // edx
  unsigned int v19; // ebx
  int *v20; // rdx
  int v21; // ebp
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // r8
  unsigned int v30; // r14d
  __int64 (__fastcall *v31)(_QWORD); // rax
  __int64 v32; // rax
  unsigned int v33; // edx
  int *v34; // rdx
  int v35; // r14d
  __int64 v36; // rax
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // eax
  _QWORD *v42; // rax
  int v43; // eax
  unsigned int v44; // [rsp+8h] [rbp-60h]
  __int64 v45[11]; // [rsp+10h] [rbp-58h] BYREF

  v12 = a3[4];
  result = v12 ^ 1;
  if ( a2 == (_DWORD)result )
  {
    result = (unsigned int)a3[15];
    v28 = result - 1;
    if ( (unsigned int)(result - 1) >= a3[8] )
      return result;
    while ( 1 )
    {
      v29 = v28;
      v30 = a3[v28 + 16];
      v31 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
      if ( v31 != sub_7C55E0 )
        break;
      v32 = a1[20];
      if ( !v32 )
      {
        v41 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v30);
LABEL_42:
        if ( v41 != -1 )
          goto LABEL_34;
        v30 = a3[v29 + 16];
        goto LABEL_36;
      }
      v33 = *(_DWORD *)(*(_QWORD *)(v32 + 880) + 4LL * (v30 >> 1));
      if ( v33 < *(_DWORD *)(v32 + 888) || (((unsigned __int8)v30 ^ (unsigned __int8)v33) & 1) == 0 )
      {
LABEL_34:
        sub_1872CE0("");
        sub_1873130(114, 1646);
      }
LABEL_36:
      v34 = *a4;
      v35 = v30 ^ 1;
      if ( *a4 )
      {
        v36 = (unsigned int)*(v34 - 1);
        if ( (_DWORD)v36 == *(v34 - 2) )
        {
          v37 = (unsigned int)(3 * v36 + 1) >> 1;
          v38 = 4 * v37 + 8;
          if ( 4 * (int)v36 + 8 >= (unsigned int)v38 || (unsigned int)v36 >= v37 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v45, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v45);
            sub_233E40((__int64)v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v44 = (unsigned int)(3 * v36 + 1) >> 1;
          v39 = (unsigned int *)sub_186B300(v34 - 2, v38);
          v34 = (int *)(v39 + 2);
          *v39 = v44;
          v40 = v39[1];
          *a4 = v34;
          result = (__int64)&v34[v40];
        }
        else
        {
          result = (__int64)&v34[v36];
        }
      }
      else
      {
        v42 = (_QWORD *)sub_186B270(0x10u);
        v34 = (int *)(v42 + 1);
        *v42 = 2;
        *a4 = (int *)(v42 + 1);
        result = (__int64)(v42 + 1);
      }
      *(_DWORD *)result = v35;
      ++v28;
      ++*(v34 - 1);
      if ( v28 >= a3[8] )
        return result;
    }
    v41 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v31)(a1, v30);
    v29 = v28;
    goto LABEL_42;
  }
  if ( v12 != -2 )
  {
    v14 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 536LL);
    if ( (char *)v14 == (char *)sub_7C55E0 )
    {
      v15 = a1[20];
      if ( !v15 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v12) == -1 )
          goto LABEL_7;
LABEL_51:
        v43 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v12);
        goto LABEL_52;
      }
      v16 = *(_DWORD *)(*(_QWORD *)(v15 + 880) + 4LL * (v12 >> 1));
      if ( v16 >= *(_DWORD *)(v15 + 888) && (((unsigned __int8)v12 ^ (unsigned __int8)v16) & 1) != 0 )
      {
LABEL_7:
        sub_1872CE0("");
        sub_1873130(114, 1659);
      }
    }
    else
    {
      result = v14(a1);
      if ( (_DWORD)result == -1 )
        goto LABEL_7;
      v12 = a3[4];
      if ( v12 == -2 )
        goto LABEL_15;
      v17 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 536LL);
      if ( (char *)v17 != (char *)sub_7C55E0 )
      {
        v43 = v17(a1);
        v12 = a3[4];
LABEL_52:
        if ( v43 == 1 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v15 = a1[20];
    }
    if ( v15 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(v15 + 880) + 4LL * (v12 >> 1));
      if ( v18 >= *(_DWORD *)(v15 + 888) && (((unsigned __int8)v12 ^ (unsigned __int8)v18) & 1) == 0 )
        goto LABEL_14;
LABEL_13:
      v12 ^= 1u;
LABEL_14:
      LODWORD(v45[0]) = v12;
      result = sub_7B5E20(a4, (unsigned int *)v45);
      goto LABEL_15;
    }
    goto LABEL_51;
  }
LABEL_15:
  v19 = a3[15];
  if ( v19 < a3[8] )
  {
    v20 = *a4;
    v21 = a3[v19 + 16] ^ 1;
    if ( *a4 )
      goto LABEL_22;
    ++v19;
    v22 = (_QWORD *)sub_186B270(0x10u);
    v20 = (int *)(v22 + 1);
    *v22 = 2;
    result = (__int64)v20;
    *a4 = v20;
    *v20 = v21;
    ++*(v20 - 1);
    for ( ; v19 < a3[8]; ++*(v20 - 1) )
    {
      v21 = a3[v19 + 16] ^ 1;
LABEL_22:
      v23 = (unsigned int)*(v20 - 1);
      if ( (_DWORD)v23 == *(v20 - 2) )
      {
        v24 = (unsigned int)(3 * v23 + 1) >> 1;
        v25 = 4 * v24 + 8;
        if ( 4 * (int)v23 + 8 >= (unsigned int)v25 || (unsigned int)v23 >= v24 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v45, "Overflow encountered when expanding vector", v5);
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v45);
          sub_233E40((__int64)v45);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v20 - 2, v25);
        v20 = (int *)(v26 + 2);
        *v26 = v24;
        v27 = v26[1];
        *a4 = v20;
        result = (__int64)&v20[v27];
      }
      else
      {
        result = (__int64)&v20[v23];
      }
      *(_DWORD *)result = v21;
      ++v19;
    }
  }
  return result;
}

