__int64 __fastcall sub_B1EA30(__int64 **a1, __m128i a2, __m128 a3)
{
  char **exception; // rbp
  char **v4; // r12
  __int64 *v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r13d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *a1;
  v6 = *a1[1];
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = (_QWORD *)v5[1];
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v32 = (3 * v8 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v33 || v8 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v7 - 1, v33);
      v35 = v34[1];
      v7 = v34 + 2;
      v5[1] = (__int64)(v34 + 2);
      *v34 = v32;
      LODWORD(v34) = v35;
      v11 = &v7[v35];
      v10 = (_DWORD)v34 + 1;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v7[v9];
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x18u);
    v7 = v36 + 1;
    *v36 = 2;
    v10 = 1;
    v5[1] = (__int64)v7;
    v11 = v7;
  }
  *v11 = v6;
  *((_DWORD *)v7 - 1) = v10;
  if ( *(_DWORD *)a1[2] > 1u && (unsigned __int8)sub_18290A0(a1[3][1]) )
  {
    sub_8F7BA0(*a1[3], a2, a3);
    sub_8F8A20(*a1[3]);
    sub_8F5330(*a1[3], a2, a3);
    sub_B1E750(a1[3], *a1, (__int64)a1[4], *(_DWORD *)a1[2] - 1, 2 * (*(_DWORD *)a1[5] / 3u), a2, a3);
    sub_8F96B0(*a1[3], 1u);
  }
  else
  {
    v12 = a1[4];
    v13 = (*a1)[1];
    if ( v13 )
      v14 = *(unsigned int *)(v13 - 4);
    else
      v14 = 0;
    v15 = sub_15EC1C0(**a1, v14);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v17 = (_QWORD *)v12[1];
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 - 1);
      if ( v18 == *((_DWORD *)v17 - 2) )
      {
        v28 = (3 * v18 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v29 || v18 >= v28 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v38, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v17 - 1, v29);
        v31 = v30[1];
        v17 = v30 + 2;
        v12[1] = (__int64)(v30 + 2);
        *v30 = v28;
        LODWORD(v30) = v31;
        v21 = &v17[v31];
        v20 = (_DWORD)v30 + 1;
      }
      else
      {
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v17[v19];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      v17 = v37 + 1;
      *v37 = 2;
      v20 = 1;
      v12[1] = (__int64)v17;
      v21 = v17;
    }
    *v21 = v16;
    *((_DWORD *)v17 - 1) = v20;
  }
  v22 = *a1;
  v23 = (*a1)[1];
  result = (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
  v25 = *(_QWORD *)(v23 + 8 * result);
  *(_DWORD *)(v23 - 4) = result;
  if ( v25 )
  {
    v26 = *v22;
    if ( (*(_DWORD *)(v25 + 8))-- == 1 )
      return sub_15D7BC0(v26, v25);
  }
  return result;
}

