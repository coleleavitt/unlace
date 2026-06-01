__int64 *__fastcall sub_869AA0(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  __int64 *result; // rax
  __int64 v16; // r13
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r12d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  _QWORD *v34; // rax
  __int64 v35[9]; // [rsp+18h] [rbp-48h] BYREF

  sub_868E90((__int64)a1, a2, (__m128)0LL);
  v6 = a1[110];
  v7 = a1 + 23;
  if ( v6 )
    v8 = *(unsigned int *)(v6 - 4);
  else
    v8 = 0;
  v9 = sub_15B8F00(v7, a1[5], v8);
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  if ( v9 > *(float *)(v10 + 44) )
    *(float *)(v10 + 44) = v9;
  v11 = (_QWORD *)a1[112];
  if ( v11 && *((_DWORD *)v11 - 1) )
    goto LABEL_7;
  v16 = a1[1];
  v17 = (_QWORD *)sub_180C100(v16 + 2144, 16);
  v18 = *(_QWORD **)(v16 + 2128);
  v19 = v17;
  *v17 = off_1C555E8;
  v17[1] = a1 + 112;
  if ( v18 )
  {
    v20 = *((_DWORD *)v18 - 1);
    if ( v20 == *((_DWORD *)v18 - 2) )
    {
      v25 = (3 * v20 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v26 || v20 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v18 - 1, v26);
      v28 = v27[1];
      v18 = v27 + 2;
      *(_QWORD *)(v16 + 2128) = v27 + 2;
      *v27 = v25;
      LODWORD(v27) = v28;
      v23 = &v18[v28];
      v22 = (_DWORD)v27 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v18[v21];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v18 = v34 + 1;
    *v34 = 2;
    v22 = 1;
    *(_QWORD *)(v16 + 2128) = v18;
    v23 = v18;
  }
  *v23 = v19;
  *((_DWORD *)v18 - 1) = v22;
  v11 = (_QWORD *)a1[112];
  if ( v11 )
  {
LABEL_7:
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v29 = (3 * v12 + 1) >> 1;
      v30 = 16 * v29 + 8;
      if ( 16 * v12 + 8 >= (unsigned int)v30 || v12 >= v29 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v11 - 1, v30);
      v11 = v31 + 2;
      *v31 = v29;
      v32 = v31[1];
      a1[112] = v11;
      v33 = v32;
      result = &v11[2 * v32];
      v14 = v33 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      result = &v11[2 * v13];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x28u);
    v14 = 1;
    v11 = v24 + 1;
    *v24 = 2;
    a1[112] = v24 + 1;
    result = v24 + 1;
  }
  *result = a2;
  *((_BYTE *)result + 12) = 0;
  *((float *)result + 2) = v9;
  *((_DWORD *)v11 - 1) = v14;
  return result;
}

