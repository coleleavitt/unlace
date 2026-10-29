void __fastcall sub_5B0C30(__int64 a1, _QWORD *a2, unsigned int a3, int *a4, int *a5)
{
  _DWORD *v9; // rax
  int *v10; // rbp
  _DWORD *v11; // rdx
  int v12; // esi
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // r10d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rax
  int *v21; // rbx
  _QWORD *v22; // rdx
  int v23; // ecx
  int v24; // edi
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r15d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rax
  __m128i *v31; // rsi
  __int64 v32; // rax
  int v33; // r15d
  int v34; // r15d
  _DWORD *v35; // rcx
  unsigned int *v36; // rbp
  unsigned int i; // ebx
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  void (***v43)(void); // rdi
  __int64 v44; // rbx
  char **v45; // rbp
  char **exception; // rbp
  __int64 v48; // [rsp+8h] [rbp-70h]
  unsigned int *v49[11]; // [rsp+20h] [rbp-58h] BYREF

  *(_QWORD *)a1 = &off_1C52358;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a3 )
  {
    v9 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v48 = a3;
    v10 = &a4[v48];
    *((_QWORD *)v9 - 1) = 2;
    v11 = v9;
    *(_QWORD *)(a1 + 24) = v9;
    while ( 1 )
    {
      v12 = *a4++;
      *v9 = v12;
      v13 = *(v11 - 1);
      v14 = (unsigned int)(v13 + 1);
      *(v11 - 1) = v14;
      if ( a4 == v10 )
        break;
      v15 = *(v11 - 2);
      if ( v15 == (_DWORD)v14 )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 4 * v16 + 8;
        if ( 4 * v13 + 12 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v49, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v11 - 2, v17);
        v11 = v18 + 2;
        *v18 = (3 * v15 + 1) >> 1;
        v19 = v18[1];
        *(_QWORD *)(a1 + 24) = v11;
        v9 = &v11[v19];
      }
      else
      {
        v9 = &v11[v14];
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    v20 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v21 = a5;
    *((_QWORD *)v20 - 1) = 2;
    v22 = v20;
    *(_QWORD *)(a1 + 32) = v20;
    while ( 1 )
    {
      v23 = *v21++;
      *v20 = v23;
      v24 = *((_DWORD *)v22 - 1);
      v25 = (unsigned int)(v24 + 1);
      *((_DWORD *)v22 - 1) = v25;
      if ( v21 == &a5[v48] )
        break;
      v26 = *((_DWORD *)v22 - 2);
      if ( v26 == (_DWORD)v25 )
      {
        v27 = (3 * v26 + 1) >> 1;
        v28 = 4 * v27 + 8;
        if ( 4 * v24 + 12 >= (unsigned int)v28 || v26 >= v27 )
        {
          v45 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v49, "Overflow encountered when expanding vector");
          *v45 = (char *)off_1C63128;
          sub_2333C0(v45 + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(v45, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v22 - 1, v28);
        v22 = v29 + 2;
        *v29 = v27;
        v30 = v29[1];
        *(_QWORD *)(a1 + 32) = v22;
        v20 = (_DWORD *)v22 + v30;
      }
      else
      {
        v20 = (_DWORD *)v22 + v25;
      }
    }
    v31 = *(__m128i **)(a1 + 24);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
    v22 = nullptr;
    v31 = nullptr;
  }
  *(_OWORD *)(a1 + 40) = 0;
  v32 = a2[4];
  if ( v32 )
  {
    v33 = *(_DWORD *)(v32 - 4);
    sub_5B07C0(a3, v31, v22);
    v34 = v33 - 1;
    if ( !v34 )
      return;
  }
  else
  {
    sub_5B07C0(a3, v31, v22);
    v34 = -1;
  }
  v35 = *(_DWORD **)(a1 + 24);
  v36 = nullptr;
  for ( i = 0; i != v34; ++i )
  {
    v38 = v35;
    if ( !v35 || (v39 = &v35[*(v35 - 1)], v35 == v39) )
    {
LABEL_30:
      if ( !v36 )
        goto LABEL_36;
      while ( 1 )
      {
        v41 = *(v36 - 1);
        if ( (_DWORD)v41 == *(v36 - 2) )
        {
LABEL_36:
          v49[0] = v36;
          sub_2FD3F0(v49);
          v36 = v49[0];
          v41 = *(v49[0] - 1);
        }
        v36[v41] = i++;
        ++*(v36 - 1);
        if ( v34 == i )
          goto LABEL_27;
        v35 = *(_DWORD **)(a1 + 24);
        v38 = v35;
        if ( v35 )
        {
          v39 = &v35[*(v35 - 1)];
          if ( v39 != v35 )
            break;
        }
      }
    }
    while ( i != *v38 )
    {
      if ( v39 == ++v38 )
        goto LABEL_30;
    }
  }
  if ( !v36 )
    return;
LABEL_27:
  v40 = *(v36 - 1);
  if ( v40 )
  {
    v42 = sub_4C5900(*(_QWORD *)(a2[1] + 24LL), a2[13], v40, v36);
    v43 = *(void (****)(void))(a1 + 8);
    v44 = v42;
    if ( (void (***)(void))v42 != v43 )
    {
      sub_4CFE00(v43);
      *(_QWORD *)(a1 + 8) = v44;
    }
  }
  sub_186B220(v36 - 2);
}

